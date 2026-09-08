#include "Navigation/PokemonJumpTrajectoryValidator.h"

#include "Characters/Pokemon_Parent.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PhysicsVolume.h"
#include "HAL/IConsoleManager.h"
#include "Navigation/PokemonTraversalTypes.h"
#include "Navigation/PokemonCompositeMove.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokemonJumpValidation, Log, All);

namespace PokemonJumpValidation
{
	static TAutoConsoleVariable<int32> CVarArcSegments(TEXT("pokemon.Jump.ArcSegments"), 12,
		TEXT("Provisional fixed number of full-capsule jump sweeps (4..64)."), ECVF_Default);
	static TAutoConsoleVariable<int32> CVarDebug(TEXT("pokemon.Jump.ValidationDebug"), 0,
		TEXT("Jump validation: 0=off, 1=one result log, 2=also draw arc/samples/body/failure."), ECVF_Default);
	static TAutoConsoleVariable<float> CVarDebugDuration(TEXT("pokemon.Jump.DebugDuration"), 5.f,
		TEXT("Lifetime in seconds of jump validation diagnostic drawing."), ECVF_Default);

	constexpr double LockedEndpointTolerance = 1.0;
	constexpr int32 DiscontinuitySegments = 8;

	struct FBodyQueries
	{
		UWorld* World = nullptr;
		UCapsuleComponent* Capsule = nullptr;
		UCharacterMovementComponent* Movement = nullptr;
		float Radius = 0.f;
		float HalfHeight = 0.f;
		FCollisionShape Shape;
		FQuat Rotation = FQuat::Identity;
		FCollisionQueryParams Query;
		FCollisionResponseParams Response;

		bool Init(APokemon_Parent& Pokemon, FName& Failure)
		{
			World = Pokemon.GetWorld();
			Capsule = Pokemon.GetCapsuleComponent();
			Movement = Pokemon.GetCharacterMovement();
			if (!World || !Capsule || !Movement || Movement->UpdatedComponent != Capsule
				|| !Capsule->IsQueryCollisionEnabled())
			{
				Failure = TEXT("JumpCollisionUnavailable");
				return false;
			}
			if (!Movement->GetGravityDirection().Equals(FVector::DownVector, 0.001)
				|| !Capsule->GetUpVector().Equals(FVector::UpVector, 0.001))
			{
				Failure = TEXT("UnsupportedJumpGravityOrCapsuleOrientation");
				return false;
			}
			Capsule->GetScaledCapsuleSize(Radius, HalfHeight);
			if (!FMath::IsFinite(Radius) || !FMath::IsFinite(HalfHeight) || Radius <= 0.f || HalfHeight < Radius)
			{
				Failure = TEXT("InvalidJumpCapsule");
				return false;
			}
			Shape = FCollisionShape::MakeCapsule(Radius, HalfHeight);
			Rotation = Capsule->GetComponentQuat();
			Query = FCollisionQueryParams(SCENE_QUERY_STAT(PokemonJumpBody), false, &Pokemon);
			// Profile defaults alone lose per-instance collision/ignore overrides. Use the
			// same current response container and move-ignore lists as movement sweeps.
			Capsule->InitSweepCollisionParams(Query, Response);
			return true;
		}

		FVector Center(const FVector& Feet) const { return Feet + FVector::UpVector * HalfHeight; }

		bool Sweep(const FVector& Start, const FVector& End, FHitResult& Hit) const
		{
			return World->SweepSingleByChannel(Hit, Start, End, Rotation,
				Capsule->GetCollisionObjectType(), Shape, Query, Response);
		}

		bool IsOccupied(const FVector& CenterLocation) const
		{
			return World->OverlapBlockingTestByChannel(CenterLocation, Rotation,
				Capsule->GetCollisionObjectType(), Shape, Query, Response);
		}

		bool FloorLine(const FVector& Start, const FVector& End, FHitResult& Hit) const
		{
			return World->LineTraceSingleByChannel(Hit, Start, End,
				Capsule->GetCollisionObjectType(), Query, Response);
		}
	};

	static float FloorGap()
	{
		return (UCharacterMovementComponent::MIN_FLOOR_DIST + UCharacterMovementComponent::MAX_FLOOR_DIST) * 0.5f;
	}

	static bool CheckLanding(const FBodyQueries& Body, const FVector& Feet, FName& Failure)
	{
		const FVector Center = Body.Center(Feet);
		if (Body.IsOccupied(Center))
		{
			Failure = TEXT("LandingCapsuleBlocked");
			return false;
		}

		FFindFloorResult Floor;
		const float FloorDistance = UCharacterMovementComponent::MAX_FLOOR_DIST + 1.f;
		// ComputeFloorDist shares CMC's slope overrides and edge rejection, without
		// FindFloor's mutation of the character's bForceNextFloorCheck cache flag.
		Body.Movement->ComputeFloorDist(Center, FloorDistance, FloorDistance, Floor, Body.Radius);
		if (!Floor.IsWalkableFloor() || Floor.HitResult.bStartPenetrating
			|| !Body.Movement->IsWithinEdgeTolerance(Center, Floor.HitResult.ImpactPoint, Body.Radius))
		{
			Failure = TEXT("LandingFloorNotWalkable");
			return false;
		}

		// Conservative, fixed support footprint. A lone center ray or a capsule merely
		// grazing a ledge is insufficient. Probe the interior of the actual current
		// radius and accept floor-height variation using the CMC-validated floor plane.
		const FVector Normal = Floor.HitResult.ImpactNormal;
		const FVector Impact = Floor.HitResult.ImpactPoint;
		const float ProbeRadius = Body.Radius * 0.5f;
		const FVector Offsets[] = { FVector::ZeroVector, FVector(ProbeRadius, 0, 0),
			FVector(-ProbeRadius, 0, 0), FVector(0, ProbeRadius, 0), FVector(0, -ProbeRadius, 0) };
		const float SupportTolerance = FMath::Max(2.f, UCharacterMovementComponent::MAX_FLOOR_DIST);
		for (const FVector& Offset : Offsets)
		{
			FVector PlanePoint = Feet + Offset;
			PlanePoint.Z = Impact.Z - (Normal.X * (PlanePoint.X - Impact.X)
				+ Normal.Y * (PlanePoint.Y - Impact.Y)) / Normal.Z;
			FHitResult Support;
			if (!Body.FloorLine(PlanePoint + FVector::UpVector * SupportTolerance,
				PlanePoint - FVector::UpVector * SupportTolerance, Support)
				|| !Body.Movement->IsWalkable(Support))
			{
				Failure = TEXT("LandingSupportFootprintMissing");
				return false;
			}
		}
		return true;
	}

	static bool Resolve(const FBodyQueries& Body, const FVector& ProposedFeet, FVector& OutFeet, FName& Failure)
	{
		if (ProposedFeet.ContainsNaN())
		{
			Failure = TEXT("InvalidLandingCoordinates");
			return false;
		}
		const float SearchHeight = FMath::Max(Body.Movement->MaxStepHeight,
			UCharacterMovementComponent::MAX_FLOOR_DIST) + UCharacterMovementComponent::MAX_FLOOR_DIST;
		FHitResult Floor;
		const FVector Center = Body.Center(ProposedFeet);
		if (!Body.Sweep(Center + FVector::UpVector * SearchHeight,
			Center - FVector::UpVector * SearchHeight, Floor))
		{
			Failure = TEXT("LandingSupportMissing");
			return false;
		}
		if (Floor.bStartPenetrating || !Body.Movement->IsWalkable(Floor)
			|| !Body.Movement->IsWithinEdgeTolerance(Floor.Location, Floor.ImpactPoint, Body.Radius)
			|| Floor.ImpactPoint.Z >= Floor.Location.Z - Body.HalfHeight + Body.Radius)
		{
			Failure = Floor.bStartPenetrating ? TEXT("LandingSearchBlocked") : TEXT("LandingSurfaceNotWalkable");
			return false;
		}
		const FVector ResolvedFeet = Floor.Location - FVector::UpVector * (Body.HalfHeight - FloorGap());
		if (!CheckLanding(Body, ResolvedFeet, Failure))
		{
			return false;
		}
		OutFeet = ResolvedFeet;
		Failure = NAME_None;
		return true;
	}

	static FVector ArcFeet(const FPokemonTraversalCandidate& Candidate, double Time)
	{
		return Candidate.StartFeetLocation + Candidate.FinalLaunchVelocity * Time
			- FVector::UpVector * (0.5 * Candidate.GravityMagnitude * Time * Time);
	}

	static void DrawResult(const FBodyQueries& Body, const FPokemonTraversalCandidate& Candidate,
		const FHitResult* Obstruction)
	{
		if (CVarDebug.GetValueOnGameThread() < 2 || !Body.World)
		{
			return;
		}
		const float Duration = FMath::Max(0.f, CVarDebugDuration.GetValueOnGameThread());
		const FColor Color = Candidate.bCapsuleClearanceValidated && Candidate.bLandingValidated ? FColor::Green : FColor::Red;
		const int32 Segments = FMath::Clamp(CVarArcSegments.GetValueOnGameThread(), 4, 64);
		if (Candidate.FlightTime > 0.f && FMath::IsFinite(Candidate.FlightTime)
			&& FMath::IsFinite(Candidate.GravityMagnitude) && !Candidate.FinalLaunchVelocity.ContainsNaN())
		{
			FVector Previous = Body.Center(Candidate.StartFeetLocation);
			for (int32 Index = 1; Index <= Segments; ++Index)
			{
				const FVector Position = Body.Center(ArcFeet(Candidate, Candidate.FlightTime * Index / Segments));
				DrawDebugLine(Body.World, Previous, Position, Color, false, Duration, 0, 1.f);
				DrawDebugPoint(Body.World, Position, 6.f, FColor::Cyan, false, Duration);
				Previous = Position;
			}
		}
		DrawDebugCapsule(Body.World, Body.Center(Candidate.DestinationFeetLocation), Body.HalfHeight,
			Body.Radius, Body.Rotation, Color, false, Duration);
		DrawDebugPoint(Body.World, Candidate.DestinationFeetLocation, 12.f, Color, false, Duration);
		if (Obstruction)
		{
			DrawDebugPoint(Body.World, Obstruction->ImpactPoint, 18.f, FColor::Red, false, Duration);
		}
		DrawDebugString(Body.World, Candidate.DestinationFeetLocation + FVector::UpVector * 15.f,
			Candidate.FailureReason.IsNone() ? TEXT("Jump validated") : Candidate.FailureReason.ToString(),
			nullptr, Color, Duration, true);
	}
}

bool FPokemonJumpTrajectoryValidator::ResolveLanding(APokemon_Parent& Pokemon, const FVector& ProposedFeet,
	FVector& OutFeet, FName& OutFailure)
{
	PokemonJumpValidation::FBodyQueries Body;
	return Body.Init(Pokemon, OutFailure) && PokemonJumpValidation::Resolve(Body, ProposedFeet, OutFeet, OutFailure);
}

bool FPokemonJumpTrajectoryValidator::DiscoverLandingFan(APokemon_Parent& Pokemon,
	const FVector& SupportedOrigin, const FVector& Heading,
	const FPokemonJumpCapabilitySnapshot& Capability, const FPokemonTraversalExitSearchSettings& Settings,
	TArray<FVector>& OutExits, FName& OutFailure)
{
	using namespace PokemonJumpValidation;
	OutExits.Reset();
	FBodyQueries Body;
	FVector Origin;
	if (!Body.Init(Pokemon, OutFailure) || !Resolve(Body, SupportedOrigin, Origin, OutFailure))
	{
		return false;
	}
	const FVector Direction = Heading.GetSafeNormal2D();
	const double Gravity = Capability.GravityMagnitude;
	const double Vertical = Capability.AvailableVerticalSpeed;
	if (Direction.IsNearlyZero() || Heading.ContainsNaN() || !Capability.bCanNaturallyJump
		|| !FMath::IsFinite(Gravity) || Gravity <= 0. || !FMath::IsFinite(Vertical) || Vertical <= 0.
		|| !FMath::IsFinite(Capability.AvailableHorizontalSpeed) || Capability.AvailableHorizontalSpeed <= 0.f)
	{
		OutFailure = TEXT("ExitSearchCapabilityUnavailable");
		return false;
	}
	const double Drop = FMath::Clamp(Settings.MaxDrop, 0.f, 500.f);
	// Upper envelope only; the unchanged solver proves each actual displacement.
	const double FlightBound = (Vertical + FMath::Sqrt(Vertical * Vertical + 2. * Gravity * Drop)) / Gravity;
	const double Reach = FMath::Min(static_cast<double>(FMath::Clamp(Settings.MaxDistance, 0.f, 2000.f)),
		Capability.AvailableHorizontalSpeed * FlightBound);
	const int32 Count = FMath::Clamp(Settings.MaxSamples, 2, 24);
	const double Spacing = FMath::Max(25.f, Settings.SampleSpacing);
	const double Rise = Vertical * Vertical / (2. * Gravity);
	const double Step = Body.Movement->MaxStepHeight + UCharacterMovementComponent::MAX_FLOOR_DIST;
	bool bGap = false;
	bool bFarSupport = false;
	FVector Previous = Origin;
	FVector Band;
	bool bFoundBand = false;
	for (int32 Index = 1; Index <= Count && Index * Spacing <= Reach; ++Index)
	{
		const FVector Point = Origin + Direction * (Index * Spacing);
		FHitResult Floor;
		if (!Body.FloorLine(Point + FVector::UpVector * (Rise + Step),
			Point - FVector::UpVector * (Drop + UCharacterMovementComponent::MAX_FLOOR_DIST), Floor))
		{
			bGap = true;
			bFarSupport = false;
			continue;
		}
		if (Floor.bStartPenetrating || !Body.Movement->IsWalkable(Floor))
		{
			OutFailure = TEXT("ExitScanUnwalkableObstruction");
			return false;
		}
		const FVector Support = Floor.ImpactPoint + FVector::UpVector * FloorGap();
		const bool bHeightBreak = FMath::Abs(Support.Z - Previous.Z) > Step;
		if (bGap && bFarSupport && !bHeightBreak)
		{
			Band = Support;
			bFoundBand = true;
			break; // First meaningful band, never skip to arbitrary distant geometry.
		}
		bGap |= bHeightBreak;
		bFarSupport = bGap;
		Previous = Support;
	}
	if (!bFoundBand)
	{
		OutFailure = TEXT("NoFarSideSupportBandWithinBudget");
		return false;
	}
	const FVector Side(-Direction.Y, Direction.X, 0.);
	const float Spread = FMath::Clamp(Settings.FanSpread, 0.f, 150.f);
	const FVector Offsets[] = { FVector::ZeroVector, Side * Spread, -Side * Spread, Direction * Spread };
	OutFailure = TEXT("NoValidFarSideLanding");
	for (int32 Index = 0; Index < FMath::Clamp(Settings.FanCount, 1, 4); ++Index)
	{
		FVector Feet;
		FName Failure;
		if (FVector::Dist2D(Origin, Band + Offsets[Index]) <= Reach
			&& Resolve(Body, Band + Offsets[Index], Feet, Failure))
		{
			OutExits.AddUnique(Feet);
		}
		else if (!Failure.IsNone())
		{
			OutFailure = Failure;
		}
	}
	if (!OutExits.IsEmpty())
	{
		OutFailure = NAME_None;
		return true;
	}
	return false;
}

bool FPokemonJumpTrajectoryValidator::Validate(APokemon_Parent& Pokemon, FPokemonTraversalCandidate& Candidate)
{
	using namespace PokemonJumpValidation;
	Candidate.bCapsuleClearanceValidated = false;
	Candidate.bLandingValidated = false;
	FBodyQueries Body;
	FHitResult Obstruction;
	const auto Finish = [&](const FName Failure)
	{
		Candidate.FailureReason = Failure;
		if (CVarDebug.GetValueOnGameThread() > 0)
		{
			UE_LOG(LogPokemonJumpValidation, Log,
				TEXT("[JumpValidation] Request=%s Pokemon=%s StartFeet=%s DestinationFeet=%s Capsule=(%.1f,%.1f) Profile=%s Physics=%d Clearance=%d Landing=%d Failure=%s Obstruction=%s"),
				*Candidate.ParentRequestId.ToString(), *Pokemon.GetName(), *Candidate.StartFeetLocation.ToCompactString(),
				*Candidate.DestinationFeetLocation.ToCompactString(), Body.Radius, Body.HalfHeight,
				Body.Capsule ? *Body.Capsule->GetCollisionProfileName().ToString() : TEXT("None"),
				Candidate.bPhysicsValidated, Candidate.bCapsuleClearanceValidated, Candidate.bLandingValidated,
				*Failure.ToString(), *GetNameSafe(Obstruction.GetActor()));
		}
		DrawResult(Body, Candidate, Obstruction.bBlockingHit ? &Obstruction : nullptr);
		return Failure.IsNone();
	};
	FName Failure;
	if (!Body.Init(Pokemon, Failure))
	{
		Candidate.bPhysicsValidated = false;
		Candidate.bRequiresPhysicsValidation = true;
		return Finish(Failure);
	}
	if (!Candidate.IsValidForPlanning() || !Candidate.bPhysicsValidated
		|| !FMath::IsFinite(Candidate.FlightTime) || Candidate.FlightTime <= 0.f
		|| Candidate.StartFeetLocation.ContainsNaN() || Candidate.DestinationFeetLocation.ContainsNaN()
		|| Candidate.FinalLaunchVelocity.ContainsNaN() || !FMath::IsFinite(Candidate.GravityMagnitude)
		|| Candidate.GravityMagnitude <= 0.f)
	{
		Candidate.bPhysicsValidated = false;
		Candidate.bRequiresPhysicsValidation = true;
		return Finish(TEXT("JumpPhysicsNotSolved"));
	}
	if (!FMath::IsNearlyEqual(-Body.Movement->GetGravityZ(), Candidate.GravityMagnitude, 0.1f))
	{
		Candidate.bPhysicsValidated = false;
		Candidate.bRequiresPhysicsValidation = true;
		return Finish(TEXT("JumpGravityChanged"));
	}
	const APhysicsVolume* Volume = Body.Movement->GetPhysicsVolume();
	const double DownwardLandingSpeed = Candidate.GravityMagnitude * Candidate.FlightTime - Candidate.FinalLaunchVelocity.Z;
	if (!Volume || Volume->bWaterVolume || !FMath::IsFinite(Volume->TerminalVelocity)
		|| DownwardLandingSpeed > FMath::Abs(Volume->TerminalVelocity))
	{
		Candidate.bPhysicsValidated = false;
		Candidate.bRequiresPhysicsValidation = true;
		return Finish(TEXT("UnsupportedJumpPhysicsVolumeOrTerminalSpeed"));
	}
	if (!ArcFeet(Candidate, Candidate.FlightTime).Equals(Candidate.DestinationFeetLocation, LockedEndpointTolerance)
		|| DownwardLandingSpeed < -UE_KINDA_SMALL_NUMBER)
	{
		Candidate.bPhysicsValidated = false;
		Candidate.bRequiresPhysicsValidation = true;
		return Finish(TEXT("JumpEndpointDoesNotMatchBallisticSolution"));
	}
	if (!CheckLanding(Body, Candidate.DestinationFeetLocation, Failure))
	{
		return Finish(Failure);
	}
	Candidate.bLandingValidated = true;
	if (Body.IsOccupied(Body.Center(Candidate.StartFeetLocation)))
	{
		return Finish(TEXT("JumpStartCapsuleBlocked"));
	}
	FFindFloorResult StartFloor;
	const float StartFloorDistance = UCharacterMovementComponent::MAX_FLOOR_DIST + 1.f;
	Body.Movement->ComputeFloorDist(Body.Center(Candidate.StartFeetLocation), StartFloorDistance,
		StartFloorDistance, StartFloor, Body.Radius);
	if (!StartFloor.IsWalkableFloor() || StartFloor.HitResult.bStartPenetrating)
	{
		return Finish(TEXT("JumpStartSupportMissing"));
	}

	const int32 Segments = FMath::Clamp(CVarArcSegments.GetValueOnGameThread(), 4, 64);
	FVector Previous = Body.Center(Candidate.StartFeetLocation);
	for (int32 Index = 1; Index <= Segments; ++Index)
	{
		const double Time = Candidate.FlightTime * Index / Segments;
		const FVector Position = Body.Center(ArcFeet(Candidate, Time));
		if (Body.Sweep(Previous, Position, Obstruction))
		{
			// Only numerical contact at the actual descending endpoint is landing.
			// A walkable obstacle earlier along the last sweep is still a blocked arc.
			const bool bEndpointFloorContact = Index == Segments && !Obstruction.bStartPenetrating
				&& DownwardLandingSpeed >= 0.0
				&& Obstruction.Location.Equals(Position, LockedEndpointTolerance)
				&& Body.Movement->IsWalkable(Obstruction)
				&& Body.Movement->IsWithinEdgeTolerance(Obstruction.Location, Obstruction.ImpactPoint, Body.Radius)
				&& Obstruction.ImpactPoint.Z < Obstruction.Location.Z - Body.HalfHeight + Body.Radius;
			if (!bEndpointFloorContact)
			{
				return Finish(TEXT("JumpArcCapsuleBlocked"));
			}
		}
		Previous = Position;
	}
	Candidate.bCapsuleClearanceValidated = true;
	return Finish(NAME_None);
}

bool FPokemonJumpTrajectoryValidator::MeasureDiscontinuity(APokemon_Parent& Pokemon, const FVector& StartFeet,
	const FVector& DestinationFeet, FPokemonTraversalRequirement& OutRequirement)
{
	using namespace PokemonJumpValidation;
	FBodyQueries Body;
	FName Failure;
	FVector ResolvedStart;
	FVector ResolvedDestination;
	if (!Body.Init(Pokemon, Failure)
		|| !Resolve(Body, StartFeet, ResolvedStart, Failure)
		|| !Resolve(Body, DestinationFeet, ResolvedDestination, Failure))
	{
		return false;
	}
	const double Distance = FVector::Dist2D(ResolvedStart, ResolvedDestination);
	if (Distance <= UE_KINDA_SMALL_NUMBER)
	{
		return false;
	}
	const float StepHeight = FMath::Max(0.f, Body.Movement->MaxStepHeight)
		+ UCharacterMovementComponent::MAX_FLOOR_DIST;
	const double UpperZ = FMath::Max(ResolvedStart.Z, ResolvedDestination.Z) + StepHeight;
	const double LowerZ = FMath::Min(ResolvedStart.Z, ResolvedDestination.Z) - StepHeight;
	bool bMissingSupport = false;
	bool bVerticalDiscontinuity = false;
	FVector PreviousSupport = ResolvedStart;
	bool bPreviousSupported = true;
	for (int32 Index = 1; Index <= DiscontinuitySegments; ++Index)
	{
		const FVector Point = FMath::Lerp(ResolvedStart, ResolvedDestination,
			static_cast<double>(Index) / DiscontinuitySegments);
		FHitResult Floor;
		if (!Body.FloorLine(FVector(Point.X, Point.Y, UpperZ), FVector(Point.X, Point.Y, LowerZ), Floor))
		{
			bMissingSupport = true;
			bPreviousSupported = false;
			continue;
		}
		if (!Body.Movement->IsWalkable(Floor))
		{
			// A wall/penetrating query/unknown surface does not manufacture gap evidence.
			return false;
		}
		if (bPreviousSupported)
		{
			const FVector Delta = Floor.ImpactPoint - PreviousSupport;
			const double Vertical = FMath::Abs(Delta.Z);
			const double Horizontal = Delta.Size2D();
			const double GradientNormalZ = Horizontal / FMath::Max(1.e-8, Delta.Size());
			bVerticalDiscontinuity |= Vertical > StepHeight
				&& GradientNormalZ < Body.Movement->GetWalkableFloorZ();
		}
		PreviousSupport = Floor.ImpactPoint;
		bPreviousSupported = true;
	}
	if (!bMissingSupport && !bVerticalDiscontinuity)
	{
		return false;
	}
	OutRequirement.StartFeetLocation = StartFeet;
	OutRequirement.DestinationFeetLocation = ResolvedDestination;
	OutRequirement.bStartSupportKnown = true;
	OutRequirement.bDestinationSupportKnown = true;
	OutRequirement.Evidence = EPokemonTraversalEvidence::MeasuredDiscontinuity;
	OutRequirement.Circumstance = bVerticalDiscontinuity
		? EPokemonTraversalCircumstance::VerticalAccess : EPokemonTraversalCircumstance::GapTraversal;
	return true;
}

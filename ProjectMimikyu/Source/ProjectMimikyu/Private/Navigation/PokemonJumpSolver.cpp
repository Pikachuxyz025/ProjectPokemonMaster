#include "Navigation/PokemonJumpSolver.h"

#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "AIControllers/PokemonAITypes.h"
#include "Characters/Pokemon_Parent.h"
#include "DataAssets/PokemonDataAsset.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HAL/IConsoleManager.h"

namespace PokemonJumpSolver
{
	// Provisional development tuning, not final species/game balance.
	TAutoConsoleVariable<float> HorizontalScale(TEXT("pokemon.Jump.HorizontalScale"), 1.f,
		TEXT("Provisional natural horizontal takeoff / effective movement speed."), ECVF_Cheat);
	TAutoConsoleVariable<float> AttackReference(TEXT("pokemon.Jump.AttackReference"), 100.f,
		TEXT("Physical Attack at half of its capped takeoff contribution."), ECVF_Cheat);
	TAutoConsoleVariable<float> AttackHorizontalCap(TEXT("pokemon.Jump.AttackHorizontalCap"), 100.f,
		TEXT("Provisional maximum Attack horizontal delta-V in cm/s."), ECVF_Cheat);
	TAutoConsoleVariable<float> AttackVerticalCap(TEXT("pokemon.Jump.AttackVerticalCap"), 75.f,
		TEXT("Provisional maximum Attack vertical delta-V in cm/s."), ECVF_Cheat);
	TAutoConsoleVariable<float> AttackSecondaryFraction(TEXT("pokemon.Jump.AttackSecondaryFraction"), 0.2f,
		TEXT("Attack delta-V capped at this fraction of each natural launch component (0..0.5)."), ECVF_Cheat);
	TAutoConsoleVariable<int32> Debug(TEXT("pokemon.Jump.Debug"), 0,
		TEXT("Enable jump capability/planning/lifecycle event logs (provisional tuning)."), ECVF_Cheat);

	constexpr double MinimumFlightTime = 0.05;
	constexpr double MinimumUpwardLaunchSpeed = 1.0;
	constexpr double VelocityTolerance = 0.1;

	float NonnegativeFinite(float Value)
	{
		return FMath::IsFinite(Value) ? FMath::Max(0.f, Value) : 0.f;
	}

	bool HasFiniteCapability(const FPokemonJumpCapabilitySnapshot& Capability)
	{
		return FMath::IsFinite(Capability.AvailableHorizontalSpeed) && Capability.AvailableHorizontalSpeed >= 0.f
			&& FMath::IsFinite(Capability.AvailableVerticalSpeed) && Capability.AvailableVerticalSpeed >= MinimumUpwardLaunchSpeed
			&& FMath::IsFinite(Capability.GravityMagnitude) && Capability.GravityMagnitude > UE_SMALL_NUMBER;
	}
}

bool FPokemonJumpSolver::IsDebugEnabled()
{
	return PokemonJumpSolver::Debug.GetValueOnGameThread() != 0;
}

FPokemonJumpCapabilitySnapshot FPokemonJumpSolver::CaptureCapabilities(APokemon_Parent& Pokemon,
	const FAgentNavigationRequest& Request, const FVector& Direction)
{
	using namespace PokemonJumpSolver;
	FPokemonJumpCapabilitySnapshot Result;
	Result.bCanNaturallyJump = Pokemon.GetTraversalCapabilities().bCanNaturallyJump;
	if (Pokemon.GetAttributeSet())
	{
		const UPokemonBaseAttributeSet* Attributes = Pokemon.GetPokemonAS();
		Result.EffectiveSpeedAttribute = NonnegativeFinite(Attributes->GetSpeed());
		Result.EffectiveAttack = NonnegativeFinite(Attributes->GetAttack());
	}
	Result.BaseVerticalLaunchVelocity = Pokemon.PokemonDataAsset
		? NonnegativeFinite(Pokemon.PokemonDataAsset->BaseVerticalLaunchVelocity) : 0.f;
	const UCharacterMovementComponent* Movement = Pokemon.GetCharacterMovement();
	if (!Movement || !Pokemon.GetAttributeSet())
	{
		return Result;
	}

	// Reuse the project's effective Speed conversion and current gait. The helper
	// excludes move multipliers; instantaneous velocity is a separate contribution.
	Result.EffectiveMovementSpeed = NonnegativeFinite(Pokemon.GetNaturalTraversalMovementSpeed());
	Result.GravityMagnitude = NonnegativeFinite(-Movement->GetGravityZ());
	const float NaturalHorizontal = Result.EffectiveMovementSpeed * FMath::Clamp(NonnegativeFinite(HorizontalScale.GetValueOnGameThread()), 0.f, 10.f);
	const float Reference = FMath::Max(1.f, NonnegativeFinite(AttackReference.GetValueOnGameThread()));
	const double Attack = Result.EffectiveAttack;
	const float NormalizedAttack = static_cast<float>(Attack / (Attack + Reference));
	const float SecondaryFraction = FMath::Clamp(NonnegativeFinite(AttackSecondaryFraction.GetValueOnGameThread()), 0.f, 0.5f);
	Result.AttackHorizontalDeltaV = NormalizedAttack * FMath::Min(NonnegativeFinite(AttackHorizontalCap.GetValueOnGameThread()), NaturalHorizontal * SecondaryFraction);
	Result.AttackVerticalDeltaV = NormalizedAttack * FMath::Min(NonnegativeFinite(AttackVerticalCap.GetValueOnGameThread()), Result.BaseVerticalLaunchVelocity * SecondaryFraction);

	const FVector PlanarDirection = Direction.ContainsNaN() ? FVector::ZeroVector : Direction.GetSafeNormal2D();
	const FVector CurrentVelocity = Pokemon.GetVelocity();
	const float AlignedSpeed = CurrentVelocity.ContainsNaN() ? 0.f
		: NonnegativeFinite(static_cast<float>(FVector::DotProduct(CurrentVelocity, PlanarDirection)));
	Result.InheritedAlignedSpeed = FMath::Min(AlignedSpeed, Result.EffectiveMovementSpeed);

	// Excess movement is permitted only by explicit provenance from the active
	// trainer command and an observed aligned velocity. A request cannot manufacture
	// momentum by merely setting a large vector, nor by carrying an old command ID.
	const UPokemonCommandComponent* Command = Pokemon.FindComponentByClass<UPokemonCommandComponent>();
	if (Request.bIsAttackTraversal && Request.bTrainerAuthorizedMoveMomentum
		&& Request.ParentAttackCommandId.IsValid() && Command
		&& Command->GetActiveTrainerCommandId() == Request.ParentAttackCommandId
		&& !Request.AuthorizedMoveMomentum.ContainsNaN())
	{
		const FVector CommandMomentum = Command->GetAuthorizedTraversalMomentum(Request.ParentAttackCommandId);
		const float RequestAligned = NonnegativeFinite(static_cast<float>(FVector::DotProduct(Request.AuthorizedMoveMomentum, PlanarDirection)));
		const float CommandAligned = CommandMomentum.ContainsNaN() ? 0.f
			: NonnegativeFinite(static_cast<float>(FVector::DotProduct(CommandMomentum, PlanarDirection)));
		Result.AuthorizedMoveAlignedSpeed = FMath::Min(FMath::Min(RequestAligned, CommandAligned),
			FMath::Max(0.f, AlignedSpeed - Result.InheritedAlignedSpeed));
	}

	Result.AvailableHorizontalSpeed = NaturalHorizontal + Result.AttackHorizontalDeltaV
		+ Result.InheritedAlignedSpeed + Result.AuthorizedMoveAlignedSpeed;
	Result.AvailableVerticalSpeed = Result.BaseVerticalLaunchVelocity + Result.AttackVerticalDeltaV;
	return Result;
}

TArray<FPokemonTraversalCandidate> FPokemonJumpSolver::Solve(const FPokemonTraversalRequirement& Requirement,
	const FPokemonJumpCapabilitySnapshot& Capabilities, EPokemonJumpTrajectoryPreference Preference)
{
	using namespace PokemonJumpSolver;
	FPokemonTraversalCandidate Base;
	Base.ParentRequestId = Requirement.ParentRequestId;
	Base.StartFeetLocation = Requirement.StartFeetLocation;
	Base.DestinationFeetLocation = Requirement.DestinationFeetLocation;
	Base.CapabilitySnapshot = Capabilities;
	Base.CapabilityProfileId = TEXT("PhysicalJump0.2");
	Base.GravityMagnitude = Capabilities.GravityMagnitude;
	Base.TrajectoryPreference = Preference;
	const auto Reject = [&Base](const TCHAR* Reason)
	{
		Base.FailureReason = FName(Reason);
		return TArray<FPokemonTraversalCandidate>{ Base };
	};

	if (!Requirement.ParentRequestId.IsValid() || Requirement.StartFeetLocation.ContainsNaN() || Requirement.DestinationFeetLocation.ContainsNaN())
	{
		return Reject(TEXT("InvalidParentRequestOrAnchors"));
	}
	if (Requirement.Circumstance == EPokemonTraversalCircumstance::Unclassified)
	{
		return Reject(TEXT("UnclassifiedCircumstance"));
	}
	if (Requirement.Evidence != EPokemonTraversalEvidence::SuppliedMeasurement
		&& Requirement.Evidence != EPokemonTraversalEvidence::MeasuredDiscontinuity
		&& Requirement.Evidence != EPokemonTraversalEvidence::AuthoredJumpLink)
	{
		return Reject(TEXT("ClassificationEvidenceMissing"));
	}
	if (!Requirement.bStartSupportKnown || !Requirement.bDestinationSupportKnown)
	{
		return Reject(!Requirement.bStartSupportKnown ? TEXT("StartSupportUnknown") : TEXT("DestinationSupportUnknown"));
	}
	// 0.2 may let a parent execute while airborne, but always plans a real landing.
	if (!Requirement.bLandingRequired)
	{
		return Reject(TEXT("LandingRequiredForJump02"));
	}
	if (!Capabilities.bCanNaturallyJump || Capabilities.BaseVerticalLaunchVelocity <= 0.f)
	{
		return Reject(TEXT("NaturalJumpUnavailable"));
	}
	if (!HasFiniteCapability(Capabilities))
	{
		return Reject(TEXT("InvalidPhysicalCapability"));
	}

	const double Horizontal = Requirement.HorizontalSeparation();
	const double Vertical = Requirement.VerticalSeparation();
	if (!FMath::IsFinite(Horizontal) || !FMath::IsFinite(Vertical))
	{
		return Reject(TEXT("InvalidSeparation"));
	}
	if (Horizontal <= UE_SMALL_NUMBER && FMath::Abs(Vertical) <= UE_SMALL_NUMBER)
	{
		return Reject(TEXT("TraversalDisplacementMissing"));
	}
	if (Requirement.Circumstance == EPokemonTraversalCircumstance::GapTraversal && Horizontal <= UE_SMALL_NUMBER)
	{
		return Reject(TEXT("HorizontalSeparationMissing"));
	}
	if (Requirement.Circumstance == EPokemonTraversalCircumstance::VerticalAccess && FMath::Abs(Vertical) <= UE_SMALL_NUMBER)
	{
		return Reject(TEXT("VerticalSeparationMissing"));
	}
	if (Horizontal > UE_SMALL_NUMBER && Capabilities.AvailableHorizontalSpeed <= UE_SMALL_NUMBER)
	{
		return Reject(TEXT("HorizontalCapabilityInsufficient"));
	}

	const double Gravity = Capabilities.GravityMagnitude;
	const double VerticalLimit = Capabilities.AvailableVerticalSpeed;
	// Vz(t) <= VzMax gives a quadratic interval. Its discriminant also proves
	// vertical reachability, without guessing a flight time from horizontal speed.
	const double Discriminant = VerticalLimit * VerticalLimit - 2.0 * Gravity * Vertical;
	if (Discriminant < -UE_DOUBLE_SMALL_NUMBER)
	{
		return Reject(TEXT("VerticalCapabilityInsufficient"));
	}
	const double Root = FMath::Sqrt(FMath::Max(0.0, Discriminant));
	const double MaximumTime = (VerticalLimit + Root) / Gravity;
	// Stable form of the smaller root avoids cancellation for small positive dz.
	const double VerticalMinimumTime = Vertical > 0.0 ? (2.0 * Vertical) / (VerticalLimit + Root) : 0.0;
	const double HorizontalMinimumTime = Horizontal > UE_SMALL_NUMBER ? Horizontal / Capabilities.AvailableHorizontalSpeed : 0.0;
	double MinimumTime = FMath::Max(MinimumFlightTime, FMath::Max(VerticalMinimumTime, HorizontalMinimumTime));
	// A platform must be reached descending (or at the apex), never from below.
	// On this branch Vz(t) is monotone increasing, so time ordering expresses both
	// direct/low and projectile/high preference without a damage-category heuristic.
	if (Vertical > 0.0)
	{
		MinimumTime = FMath::Max(MinimumTime, FMath::Sqrt(2.0 * Vertical / Gravity));
	}
	// Even a drop must actually take off upward. This is the positive quadratic
	// root for Vz(t) >= 1 cm/s on the descending-landing branch.
	const double MinimumLaunchDiscriminant = MinimumUpwardLaunchSpeed * MinimumUpwardLaunchSpeed - 2.0 * Gravity * Vertical;
	if (MinimumLaunchDiscriminant >= 0.0)
	{
		MinimumTime = FMath::Max(MinimumTime, (MinimumUpwardLaunchSpeed + FMath::Sqrt(MinimumLaunchDiscriminant)) / Gravity);
	}
	if (!FMath::IsFinite(MinimumTime) || !FMath::IsFinite(MaximumTime) || MinimumTime > MaximumTime + UE_DOUBLE_SMALL_NUMBER)
	{
		return Reject(TEXT("HorizontalCapabilityInsufficient"));
	}
	MinimumTime = FMath::Min(MinimumTime, MaximumTime);
	const FVector PlanarDirection = (Requirement.DestinationFeetLocation - Requirement.StartFeetLocation).GetSafeNormal2D();
	TArray<FPokemonTraversalCandidate> Results;
	// These are deterministic obstacle alternatives within a proven interval, not
	// samples used to guess whether the ballistic capability exists.
	constexpr int32 AlternativeCount = 5;
	for (int32 Index = 0; Index < AlternativeCount; ++Index)
	{
		const int32 OrderedIndex = Preference == EPokemonJumpTrajectoryPreference::Projectile ? AlternativeCount - 1 - Index : Index;
		const double Alpha = static_cast<double>(OrderedIndex) / (AlternativeCount - 1);
		const double Time = FMath::Lerp(MinimumTime, MaximumTime, Alpha);
		if (!Results.IsEmpty() && FMath::IsNearlyEqual(static_cast<double>(Results.Last().FlightTime), Time, 0.00001))
		{
			continue;
		}
		FPokemonTraversalCandidate Candidate = Base;
		Candidate.FlightTime = static_cast<float>(Time);
		// Use retained float time for all geometry; validators reproduce the same arc.
		const double RetainedTime = Candidate.FlightTime;
		Candidate.RequiredHorizontalLaunchSpeed = static_cast<float>(Horizontal / RetainedTime);
		Candidate.RequiredVerticalLaunchSpeed = static_cast<float>(Vertical / RetainedTime + 0.5 * Gravity * RetainedTime);
		Candidate.FinalLaunchVelocity = PlanarDirection * Candidate.RequiredHorizontalLaunchSpeed
			+ FVector::UpVector * Candidate.RequiredVerticalLaunchSpeed;
		Candidate.Solution = EPokemonTraversalSolutionType::Jump;
		Candidate.FailureReason = NAME_None;
		Candidate.bPhysicsValidated = true;
		Candidate.bRequiresPhysicsValidation = false;
		Candidate.bAuthorizedMoveMomentumContributed = Candidate.RequiredHorizontalLaunchSpeed
			> Capabilities.AvailableHorizontalSpeed - Capabilities.AuthorizedMoveAlignedSpeed + VelocityTolerance;
		Candidate.TrajectoryReason = Preference == EPokemonJumpTrajectoryPreference::Projectile
			? FName(TEXT("ProjectileLongerAirborneWindow")) : FName(TEXT("DirectLowerFasterContact"));
		Results.Add(MoveTemp(Candidate));
	}
	return Results;
}

bool FPokemonJumpSolver::CanExecuteWithCapabilities(const FPokemonTraversalCandidate& Candidate,
	const FPokemonJumpCapabilitySnapshot& Capabilities, FName& OutFailureReason)
{
	using namespace PokemonJumpSolver;
	OutFailureReason = NAME_None;
	if (!Candidate.IsValidForPlanning() || !Candidate.bPhysicsValidated || Candidate.bRequiresPhysicsValidation
		|| !FMath::IsFinite(Candidate.FlightTime) || Candidate.FlightTime <= 0.f || Candidate.FinalLaunchVelocity.ContainsNaN())
	{
		OutFailureReason = TEXT("InvalidPhysicalJumpPlan");
	}
	else if (!Capabilities.bCanNaturallyJump || Capabilities.BaseVerticalLaunchVelocity <= 0.f || !HasFiniteCapability(Capabilities))
	{
		OutFailureReason = TEXT("TakeoffCapabilityUnavailable");
	}
	else if (!FMath::IsFinite(Candidate.GravityMagnitude) || !FMath::IsNearlyEqual(Candidate.GravityMagnitude, Capabilities.GravityMagnitude, 0.01f))
	{
		OutFailureReason = TEXT("GravityChangedBeforeTakeoff");
	}
	else if (!FMath::IsFinite(Candidate.RequiredHorizontalLaunchSpeed) || !FMath::IsFinite(Candidate.RequiredVerticalLaunchSpeed)
		|| Candidate.RequiredHorizontalLaunchSpeed < 0.f || Candidate.RequiredVerticalLaunchSpeed < MinimumUpwardLaunchSpeed - VelocityTolerance
		|| Candidate.RequiredHorizontalLaunchSpeed > Capabilities.AvailableHorizontalSpeed + VelocityTolerance
		|| Candidate.RequiredVerticalLaunchSpeed > Capabilities.AvailableVerticalSpeed + VelocityTolerance)
	{
		OutFailureReason = TEXT("TakeoffCapabilityReduced");
	}
	return OutFailureReason.IsNone();
}

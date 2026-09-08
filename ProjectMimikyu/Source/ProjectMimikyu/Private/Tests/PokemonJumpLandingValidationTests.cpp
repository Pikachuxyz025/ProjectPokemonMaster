#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"

#include "Characters/Pokemon_Parent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Navigation/PokemonJumpSolver.h"
#include "Navigation/PokemonJumpTrajectoryValidator.h"
#include "Navigation/PokemonTraversalTypes.h"

namespace PokemonJumpLandingValidationTests
{
	static FPokemonTraversalRequirement MakeRequirement(const FVector& StartFeet, const FVector& DestinationFeet)
	{
		FPokemonTraversalRequirement Result;
		Result.ParentRequestId = FGuid::NewGuid();
		Result.Circumstance = EPokemonTraversalCircumstance::GapTraversal;
		Result.Evidence = EPokemonTraversalEvidence::SuppliedMeasurement;
		Result.StartFeetLocation = StartFeet;
		Result.DestinationFeetLocation = DestinationFeet;
		Result.bStartSupportKnown = true;
		// This is deliberately true only to let the pure solver produce a candidate.
		// The destination is physically unsupported in the transient test world and
		// the validator must reject it before execution authorization.
		Result.bDestinationSupportKnown = true;
		return Result;
	}

	static FPokemonJumpCapabilitySnapshot MakeCapability(float GravityMagnitude)
	{
		FPokemonJumpCapabilitySnapshot Result;
		Result.bCanNaturallyJump = true;
		Result.EffectiveMovementSpeed = 700.f;
		Result.BaseVerticalLaunchVelocity = 500.f;
		Result.GravityMagnitude = GravityMagnitude;
		Result.AvailableHorizontalSpeed = 700.f;
		Result.AvailableVerticalSpeed = 500.f;
		return Result;
	}

	static FVector ArcFeet(const FPokemonTraversalCandidate& Candidate, double Time)
	{
		return Candidate.StartFeetLocation + Candidate.FinalLaunchVelocity * Time
			- FVector::UpVector * (0.5 * Candidate.GravityMagnitude * Time * Time);
	}

	static bool IsCapsuleArcClear(UWorld& World, APokemon_Parent& Pokemon,
		const FPokemonTraversalCandidate& Candidate, int32 Segments)
	{
		UCapsuleComponent* Capsule = Pokemon.GetCapsuleComponent();
		if (!Capsule || Segments <= 0)
		{
			return false;
		}

		float Radius = 0.f;
		float HalfHeight = 0.f;
		Capsule->GetScaledCapsuleSize(Radius, HalfHeight);
		const FCollisionShape Shape = FCollisionShape::MakeCapsule(Radius, HalfHeight);
		FCollisionQueryParams Query(SCENE_QUERY_STAT(PokemonJumpLandingAutomation), false, &Pokemon);
		FCollisionResponseParams Response;
		Capsule->InitSweepCollisionParams(Query, Response);

		const FQuat Rotation = Capsule->GetComponentQuat();
		const ECollisionChannel Channel = Capsule->GetCollisionObjectType();
		const auto Center = [&HalfHeight](const FVector& Feet)
		{
			return Feet + FVector::UpVector * HalfHeight;
		};

		FVector Previous = Center(ArcFeet(Candidate, 0.0));
		for (int32 Index = 1; Index <= Segments; ++Index)
		{
			const double Time = Candidate.FlightTime * Index / Segments;
			const FVector Current = Center(ArcFeet(Candidate, Time));
			FHitResult Hit;
			if (World.SweepSingleByChannel(Hit, Previous, Current, Rotation, Channel, Shape, Query, Response))
			{
				return false;
			}
			Previous = Current;
		}
		return true;
	}

	static UBoxComponent* SpawnStartFloor(UWorld& World)
	{
		AActor* FloorActor = World.SpawnActor<AActor>(AActor::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
		if (!FloorActor)
		{
			return nullptr;
		}

		UBoxComponent* Floor = NewObject<UBoxComponent>(FloorActor, TEXT("InvalidLandingStartFloor"));
		if (!Floor)
		{
			FloorActor->Destroy();
			return nullptr;
		}

		FloorActor->SetRootComponent(Floor);
		Floor->SetBoxExtent(FVector(250.f, 250.f, 20.f));
		Floor->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Floor->SetCollisionObjectType(ECC_WorldStatic);
		Floor->SetCollisionResponseToAllChannels(ECR_Block);
		Floor->SetWorldLocation(FVector::ZeroVector - FVector::UpVector * 20.f);
		Floor->RegisterComponent();
		return Floor;
	}
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonInvalidLandingValidationTest,
	"ProjectMimikyu.Traversal.Jump.InvalidLandingRejection",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonInvalidLandingValidationTest::RunTest(const FString& Parameters)
{
	FTestWorldWrapper TestWorld;
	if (!TestWorld.CreateTestWorld(EWorldType::Game))
	{
		AddError(TEXT("Could not create transient automation world."));
		return false;
	}

	UWorld* World = TestWorld.GetTestWorld();
	if (!TestNotNull(TEXT("Transient automation world"), World))
	{
		return false;
	}
	if (!TestNotNull(TEXT("Transient world physics scene"), World->GetPhysicsScene()))
	{
		return false;
	}

	UBoxComponent* StartFloor = PokemonJumpLandingValidationTests::SpawnStartFloor(*World);
	if (!TestNotNull(TEXT("Start floor collision"), StartFloor))
	{
		return false;
	}

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	APokemon_Parent* Pokemon = World->SpawnActor<APokemon_Parent>(
		APokemon_Parent::StaticClass(), FVector(0.f, 0.f, 100.f), FRotator::ZeroRotator, SpawnParameters);
	if (!TestNotNull(TEXT("Transient Pokemon"), Pokemon))
	{
		return false;
	}

	UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent();
	UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement();
	if (!TestNotNull(TEXT("Pokemon capsule"), Capsule) || !TestNotNull(TEXT("Character movement"), Movement))
	{
		return false;
	}
	if (!TestNotNull(TEXT("Default physics volume"), Movement->GetPhysicsVolume()))
	{
		return false;
	}

	Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Capsule->SetCollisionObjectType(ECC_Pawn);
	Capsule->SetCollisionResponseToAllChannels(ECR_Block);
	const float HalfHeight = Capsule->GetScaledCapsuleHalfHeight();
	const float FloorClearance = (UCharacterMovementComponent::MIN_FLOOR_DIST
		+ UCharacterMovementComponent::MAX_FLOOR_DIST) * 0.5f;
	Pokemon->SetActorLocation(
		FVector(0.f, 0.f, HalfHeight + FloorClearance), false, nullptr, ETeleportType::TeleportPhysics);

	const FVector StartFeet = Pokemon->GetActorLocation() - FVector::UpVector * HalfHeight;
	const FVector UnsupportedDestination = StartFeet + FVector(500.f, 0.f, 0.f);
	const FPokemonTraversalRequirement Requirement = PokemonJumpLandingValidationTests::MakeRequirement(
		StartFeet, UnsupportedDestination);
	const float GravityMagnitude = FMath::Max(1.f, -Movement->GetGravityZ());
	const FPokemonJumpCapabilitySnapshot Capability = PokemonJumpLandingValidationTests::MakeCapability(GravityMagnitude);
	const TArray<FPokemonTraversalCandidate> Candidates = FPokemonJumpSolver::Solve(
		Requirement, Capability, EPokemonJumpTrajectoryPreference::Direct);

	if (!TestTrue(TEXT("Unsupported destination still produces ballistic candidates for the direct validator test"), Candidates.Num() > 0))
	{
		return false;
	}

	bool bAnyValidated = false;
	for (int32 Index = 0; Index < Candidates.Num(); ++Index)
	{
		FPokemonTraversalCandidate Candidate = Candidates[Index];
		TestTrue(TEXT("Solver candidate is physically planned"), Candidate.IsValidForPlanning());
		TestTrue(TEXT("Airborne capsule arc is clear before landing validation"),
			PokemonJumpLandingValidationTests::IsCapsuleArcClear(*World, *Pokemon, Candidate, 12));
		const bool bValidated = FPokemonJumpTrajectoryValidator::Validate(*Pokemon, Candidate);
		bAnyValidated |= bValidated;
		TestFalse(TEXT("Unsupported landing is rejected"), bValidated);
		TestEqual(TEXT("Landing rejection is specific"), Candidate.FailureReason,
			FName(TEXT("LandingFloorNotWalkable")));
		TestTrue(TEXT("Physics proof remains valid before landing rejection"), Candidate.bPhysicsValidated);
		TestFalse(TEXT("Landing proof is not granted"), Candidate.bLandingValidated);
		TestFalse(TEXT("Clearance proof is not granted when landing fails first"), Candidate.bCapsuleClearanceValidated);
		TestFalse(TEXT("Landing rejection cannot authorize execution"), Candidate.IsExecutable());
	}
	TestFalse(TEXT("No ballistic alternative survives invalid landing"), bAnyValidated);

	return true;
}

#endif

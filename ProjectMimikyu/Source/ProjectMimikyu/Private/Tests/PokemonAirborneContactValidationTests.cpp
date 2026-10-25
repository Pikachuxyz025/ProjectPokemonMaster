#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"

#include "Characters/Pokemon_Parent.h"
#include "Combat/PokemonExecutionTypes.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HAL/IConsoleManager.h"
#include "Navigation/PokemonJumpSolver.h"
#include "Navigation/PokemonJumpTrajectoryValidator.h"

namespace PokemonAirborneContactValidationTests
{
	static UBoxComponent* SpawnBox(UWorld& World, const FVector& Center, const FVector& Extent)
	{
		AActor* Actor = World.SpawnActor<AActor>();
		if (!Actor)
		{
			return nullptr;
		}
		UBoxComponent* Box = NewObject<UBoxComponent>(Actor);
		Actor->SetRootComponent(Box);
		Box->SetBoxExtent(Extent);
		Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Box->SetCollisionObjectType(ECC_WorldStatic);
		Box->SetCollisionResponseToAllChannels(ECR_Block);
		Box->SetWorldLocation(Center);
		Box->RegisterComponent();
		return Box;
	}

	static bool IsCapsuleOccupied(UWorld& World, APokemon_Parent& Pokemon, const FVector& Center)
	{
		UCapsuleComponent* Capsule = Pokemon.GetCapsuleComponent();
		FCollisionQueryParams Query(SCENE_QUERY_STAT(PokemonAirborneCoordinateTest), false, &Pokemon);
		FCollisionResponseParams Response;
		Capsule->InitSweepCollisionParams(Query, Response);
		return World.OverlapBlockingTestByChannel(Center, Capsule->GetComponentQuat(),
			Capsule->GetCollisionObjectType(),
			FCollisionShape::MakeCapsule(Capsule->GetScaledCapsuleRadius(), Capsule->GetScaledCapsuleHalfHeight()),
			Query, Response);
	}
}

IMPLEMENT_COMPLEX_AUTOMATION_TEST(FPokemonAirborneContactCoordinatesTest,
	"ProjectMimikyu.Traversal.Jump.AirborneContactCoordinates",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

void FPokemonAirborneContactCoordinatesTest::GetTests(TArray<FString>& OutBeautifiedNames,
	TArray<FString>& OutTestCommands) const
{
	const TCHAR* Cases[] = {
		TEXT("Clear"), TEXT("LowObstacle"), TEXT("OverheadBlocked"),
		TEXT("OverheadClear"), TEXT("StartObstruction"), TEXT("ContactEndpoint")
	};
	for (const TCHAR* Case : Cases)
	{
		OutBeautifiedNames.Add(Case);
		OutTestCommands.Add(Case);
	}
}

bool FPokemonAirborneContactCoordinatesTest::RunTest(const FString& Parameters)
{
	using namespace PokemonAirborneContactValidationTests;
	FTestWorldWrapper TestWorld;
	if (!TestWorld.CreateTestWorld(EWorldType::Game))
	{
		AddError(TEXT("Could not create transient automation world."));
		return false;
	}
	UWorld* World = TestWorld.GetTestWorld();
	if (!TestNotNull(TEXT("Transient world"), World)
		|| !TestNotNull(TEXT("Physics scene"), World->GetPhysicsScene())
		|| !TestNotNull(TEXT("Supported takeoff floor"),
			SpawnBox(*World, FVector(0.f, 0.f, -20.f), FVector(150.f, 150.f, 20.f))))
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
	if (!TestNotNull(TEXT("Capsule"), Capsule) || !TestNotNull(TEXT("Movement"), Movement)
		|| !TestNotNull(TEXT("Physics volume"), Movement->GetPhysicsVolume()))
	{
		return false;
	}
	Capsule->SetCapsuleSize(20.f, 50.f);
	Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Capsule->SetCollisionObjectType(ECC_Pawn);
	Capsule->SetCollisionResponseToAllChannels(ECR_Block);
	const float Radius = Capsule->GetScaledCapsuleRadius();
	const float HalfHeight = Capsule->GetScaledCapsuleHalfHeight();
	const float FloorGap = (UCharacterMovementComponent::MIN_FLOOR_DIST
		+ UCharacterMovementComponent::MAX_FLOOR_DIST) * 0.5f;
	Pokemon->SetActorLocation(FVector(0.f, 0.f, HalfHeight + FloorGap),
		false, nullptr, ETeleportType::TeleportPhysics);
	const FVector StartFeet = Movement->GetActorFeetLocation();
	const FVector RequiredContactFeet = StartFeet + FVector(300.f, 0.f, 100.f);

	FPokemonJumpCapabilitySnapshot Capability;
	Capability.bCanNaturallyJump = true;
	Capability.EffectiveMovementSpeed = 1000.f;
	Capability.BaseVerticalLaunchVelocity = 600.f;
	Capability.AvailableHorizontalSpeed = 1000.f;
	Capability.AvailableVerticalSpeed = 600.f;
	Capability.GravityMagnitude = -Movement->GetGravityZ();
	FPokemonAirborneExecutionProfile Profile;
	Profile.Timing = EPokemonAirborneExecutionTiming::Ascending;
	Profile.ExecutionLeadTime = 0.1f;
	Profile.MinAscendingExecutionVelocity = 50.f;
	const FGuid RequestId = FGuid::NewGuid();
	const TArray<FPokemonAirborneExecutionTrajectoryCandidate> Candidates = FPokemonJumpSolver::SolveToAirborneContact(
		RequestId, StartFeet, RequiredContactFeet, Capability, Profile, EPokemonJumpTrajectoryPreference::Direct);
	if (!TestTrue(TEXT("Solver supplies an ascending candidate"),
		!Candidates.IsEmpty() && Candidates[0].IsValidForPlanning()))
	{
		return false;
	}
	const FPokemonAirborneExecutionTrajectoryCandidate Original = Candidates[0];
	FPokemonAirborneExecutionTrajectoryCandidate Candidate = Original;
	const FVector InitialFeet = FPokemonJumpTrajectoryValidator::EvaluateFeetAtTime(Candidate, 0.f);
	const FVector ContactFeet = FPokemonJumpTrajectoryValidator::EvaluateFeetAtTime(Candidate, Candidate.ContactTime);
	const FVector ContactCenter = ContactFeet + FVector::UpVector * HalfHeight;
	TestTrue(TEXT("Initial ballistic feet agree with the supported actor feet"), InitialFeet.Equals(StartFeet, 0.001));
	TestTrue(TEXT("Initial sweep center agrees with the actual capsule center"),
		(InitialFeet + FVector::UpVector * HalfHeight).Equals(Capsule->GetComponentLocation(), 0.001));
	TestTrue(TEXT("Final ballistic sample reaches authored contact feet"), ContactFeet.Equals(RequiredContactFeet, 0.001));
	TestTrue(TEXT("Contact remains before apex"), Candidate.ContactTime < Candidate.ApexTime);

	const FVector MiddleFeet = FPokemonJumpTrajectoryValidator::EvaluateFeetAtTime(Candidate, Candidate.ContactTime * 0.5f);
	bool bExpectedValid = Parameters == TEXT("Clear") || Parameters == TEXT("OverheadClear");
	FName ExpectedFailure = bExpectedValid ? NAME_None : FName(TEXT("AirborneContactArcCapsuleBlocked"));
	UBoxComponent* Obstacle = nullptr;
	if (Parameters == TEXT("LowObstacle"))
	{
		// Intersects the actual lower hemisphere, below the erroneously elevated sweep.
		Obstacle = SpawnBox(*World, MiddleFeet + FVector(0.f, 0.f, 5.f), FVector(4.f, 30.f, 4.f));
		TestTrue(TEXT("Low obstacle physically intersects the predicted capsule"),
			IsCapsuleOccupied(*World, *Pokemon, MiddleFeet + FVector::UpVector * HalfHeight));
	}
	else if (Parameters == TEXT("OverheadBlocked"))
	{
		Obstacle = SpawnBox(*World, MiddleFeet + FVector(0.f, 0.f, 2.f * HalfHeight - 5.f), FVector(4.f, 30.f, 4.f));
		TestTrue(TEXT("Low ceiling physically intersects the predicted capsule"),
			IsCapsuleOccupied(*World, *Pokemon, MiddleFeet + FVector::UpVector * HalfHeight));
	}
	else if (Parameters == TEXT("OverheadClear"))
	{
		// The ascending capsule never rises above ContactFeet.Z + 2*HalfHeight.
		// This ceiling is above that bound but intersects the old double-offset path.
		Obstacle = SpawnBox(*World, ContactFeet + FVector(0.f, 0.f, 2.5f * HalfHeight), FVector(30.f, 30.f, 4.f));
		TestTrue(TEXT("Ceiling bottom clears the maximum actual capsule top"),
			Obstacle && Obstacle->GetComponentLocation().Z - 4.f > ContactFeet.Z + 2.f * HalfHeight);
		TestFalse(TEXT("Actual contact capsule clears the overhead geometry"), IsCapsuleOccupied(*World, *Pokemon, ContactCenter));
	}
	else if (Parameters == TEXT("StartObstruction"))
	{
		Obstacle = SpawnBox(*World, Capsule->GetComponentLocation(), FVector(4.f, 4.f, 4.f));
		ExpectedFailure = TEXT("AirborneContactStartCapsuleBlocked");
	}
	else if (Parameters == TEXT("ContactEndpoint"))
	{
		// Only the last centimeter of horizontal capsule travel reaches this box.
		// Its height intersects the correct contact center, not an elevated capsule's side.
		Obstacle = SpawnBox(*World, ContactCenter + FVector(Radius + 1.f, 0.f, 0.f), FVector(2.f, 30.f, 2.f));
		const IConsoleVariable* ArcSegments = IConsoleManager::Get().FindConsoleVariable(TEXT("pokemon.Jump.ArcSegments"));
		const int32 Segments = FMath::Clamp(ArcSegments ? ArcSegments->GetInt() : 12, 4, 64);
		const FVector PreviousFeet = FPokemonJumpTrajectoryValidator::EvaluateFeetAtTime(Candidate,
			Candidate.ContactTime * static_cast<double>(Segments - 1) / Segments);
		TestFalse(TEXT("Penultimate sampled capsule has not reached the endpoint blocker"),
			IsCapsuleOccupied(*World, *Pokemon, PreviousFeet + FVector::UpVector * HalfHeight));
		TestTrue(TEXT("Final predicted contact capsule intersects the endpoint blocker"),
			IsCapsuleOccupied(*World, *Pokemon, ContactCenter));
	}
	else if (Parameters != TEXT("Clear"))
	{
		AddError(FString::Printf(TEXT("Unknown coordinate case: %s"), *Parameters));
		return false;
	}
	if (Parameters != TEXT("Clear") && !TestNotNull(TEXT("Scenario obstruction"), Obstacle))
	{
		return false;
	}

	const FVector ActorLocationBefore = Pokemon->GetActorLocation();
	const FVector VelocityBefore = Movement->Velocity;
	const EMovementMode MovementModeBefore = Movement->MovementMode;
	TestEqual(TEXT("Pre-contact collision result"),
		FPokemonJumpTrajectoryValidator::ValidateToAirborneContact(*Pokemon, Candidate), bExpectedValid);
	TestEqual(TEXT("Failure identifies the intended collision stage"), Candidate.FailureReason, ExpectedFailure);
	TestEqual(TEXT("Clearance proof matches collision result"), Candidate.bPreContactClearanceValidated, bExpectedValid);
	TestEqual(TEXT("Only clear trajectories become executable to contact"), Candidate.IsExecutableToContact(), bExpectedValid);
	TestTrue(TEXT("Collision checks preserve solved physics"), Candidate.bPhysicsSolved);
	TestEqual(TEXT("Request identity is unchanged"), Candidate.ParentRequestId, Original.ParentRequestId);
	TestTrue(TEXT("Start feet are unchanged"), Candidate.StartFeetLocation.Equals(Original.StartFeetLocation, 0.f));
	TestTrue(TEXT("Contact feet are unchanged"), Candidate.RequiredContactFeet.Equals(Original.RequiredContactFeet, 0.f));
	TestTrue(TEXT("Launch velocity is unchanged"), Candidate.FinalLaunchVelocity.Equals(Original.FinalLaunchVelocity, 0.f));
	TestTrue(TEXT("Contact velocity is unchanged"), Candidate.VelocityAtContact.Equals(Original.VelocityAtContact, 0.f));
	TestEqual(TEXT("Contact timing is unchanged"), Candidate.ContactTime, Original.ContactTime);
	TestEqual(TEXT("Attack trigger timing is unchanged"), Candidate.TriggerTime, Original.TriggerTime);
	TestEqual(TEXT("Apex timing is unchanged"), Candidate.ApexTime, Original.ApexTime);
	TestTrue(TEXT("Validation does not move the actor"), Pokemon->GetActorLocation().Equals(ActorLocationBefore, 0.f));
	TestTrue(TEXT("Validation does not launch the actor"), Movement->Velocity.Equals(VelocityBefore, 0.f));
	TestEqual(TEXT("Validation does not change movement mode"), static_cast<uint8>(Movement->MovementMode), static_cast<uint8>(MovementModeBefore));
	return true;
}

#endif

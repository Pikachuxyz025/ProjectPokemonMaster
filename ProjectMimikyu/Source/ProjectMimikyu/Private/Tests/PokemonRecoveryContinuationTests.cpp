#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"

#include "Characters/Pokemon_Parent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Navigation/PokemonRecoveryContinuation.h"

#include <limits>

namespace PokemonRecoveryContinuationTests
{
	static UBoxComponent* SpawnBox(
		UWorld& World,
		const FVector& Center,
		const FVector& Extent)
	{
		AActor* Actor = World.SpawnActor<AActor>();
		if (!Actor)
		{
			return nullptr;
		}

		UBoxComponent* Box = NewObject<UBoxComponent>(Actor);
		Actor->SetRootComponent(Box);

		Box->SetMobility(EComponentMobility::Static);
		Box->SetBoxExtent(Extent);
		Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Box->SetCollisionObjectType(ECC_WorldStatic);
		Box->SetCollisionResponseToAllChannels(ECR_Block);
		Box->SetWorldLocation(Center);
		Box->RegisterComponent();

		return Box;
	}

	static FPokemonRecoveryBallisticInput MakeSeed()
	{
		FPokemonRecoveryBallisticInput Seed;

		Seed.StartFeet = FVector(0.0, 0.0, 200.0);
		Seed.StartVelocity = FVector(200.0, 0.0, 200.0);
		Seed.Gravity = FVector(0.0, 0.0, -980.0);

		Seed.Movement.bAssumeConstantGravity = true;
		Seed.Movement.bAssumeNoFutureForces = true;
		Seed.Movement.TerminalDownSpeed = 4000.0;

		Seed.MaxFeetZThroughStart = 300.0;
		return Seed;
	}
}

IMPLEMENT_COMPLEX_AUTOMATION_TEST(
	FPokemonRecoveryContinuationTest,
	"ProjectMimikyu.Traversal.RecoveryContinuation",
	EAutomationTestFlags::EditorContext
	| EAutomationTestFlags::EngineFilter)

	void FPokemonRecoveryContinuationTest::GetTests(
		TArray<FString>& OutBeautifiedNames,
		TArray<FString>& OutTestCommands) const
{
	const TCHAR* Cases[] = {
		TEXT("FlatFloor"),
		TEXT("FlatBaseFloor"),
		TEXT("LowerFloor"),
		TEXT("Descending"),
		TEXT("Wall"),
		TEXT("Ceiling"),
		TEXT("HighCeiling"),
		TEXT("Unwalkable"),
		TEXT("NarrowSupport"),
		TEXT("StartOverlap"),
		TEXT("NoFloor"),
		TEXT("TimeLimit"),
		TEXT("DistanceLimit"),
		TEXT("QueryLimit"),
		TEXT("RefinementLimit"),
		TEXT("CurveCeiling"),
		TEXT("ChordFalsePositive"),
		TEXT("InvalidSettings"),
		TEXT("UnsupportedMotion"),
		TEXT("WorldAssumption")
	};

	for (const TCHAR* Case : Cases)
	{
		OutBeautifiedNames.Add(Case);
		OutTestCommands.Add(Case);
	}
}

bool FPokemonRecoveryContinuationTest::RunTest(const FString& Parameters)
{
	using namespace PokemonRecoveryContinuationTests;
	using EStatus = EPokemonRecoveryContinuationStatus;

	FTestWorldWrapper TestWorld;
	if (!TestWorld.CreateTestWorld(EWorldType::Game))
	{
		AddError(TEXT("Could not create transient test world."));
		return false;
	}

	UWorld* World = TestWorld.GetTestWorld();
	if (!TestNotNull(TEXT("World"), World)
		|| !TestNotNull(TEXT("Physics scene"), World->GetPhysicsScene()))
	{
		return false;
	}

	FActorSpawnParameters Spawn;
	Spawn.SpawnCollisionHandlingOverride =
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	APokemon_Parent* Pokemon = World->SpawnActor<APokemon_Parent>(
		APokemon_Parent::StaticClass(),
		FVector(0.0, 0.0, 240.0),
		FRotator::ZeroRotator,
		Spawn);

	if (!TestNotNull(TEXT("Pokemon"), Pokemon))
	{
		return false;
	}

	UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent();
	UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement();

	if (!TestNotNull(TEXT("Capsule"), Capsule)
		|| !TestNotNull(TEXT("Movement"), Movement))
	{
		return false;
	}

	Capsule->SetCapsuleSize(20.f, 40.f);
	Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Capsule->SetCollisionObjectType(ECC_Pawn);
	Capsule->SetCollisionResponseToAllChannels(ECR_Block);

	FPokemonRecoveryBallisticInput Seed = MakeSeed();
	FPokemonRecoveryContinuationSettings Settings;
	Settings.bAssumeFrozenWorld = true;

	if (Parameters == TEXT("Descending"))
	{
		Seed.StartVelocity.Z = -200.0;
	}

	Movement->Velocity = Seed.StartVelocity;
	Movement->SetMovementMode(MOVE_Falling);
	Movement->bForceNextFloorCheck = true;
	Movement->bUseFlatBaseForFloorChecks =
		Parameters == TEXT("FlatBaseFloor");

	const double FloorZ =
		Parameters == TEXT("LowerFloor") ? -100.0 : 0.0;

	if (Parameters != TEXT("NoFloor"))
	{
		const double HalfWidth =
			Parameters == TEXT("NarrowSupport") ? 3.0 : 200.0;

		UBoxComponent* Floor = SpawnBox(
			*World,
			FVector(300.0, 0.0, FloorZ - 20.0),
			FVector(1000.0, HalfWidth, 20.0));

		if (!TestNotNull(TEXT("Floor"), Floor))
		{
			return false;
		}

		if (Parameters == TEXT("Unwalkable"))
		{
			Floor->SetWalkableSlopeOverride(
				FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
		}
	}

	UBoxComponent* Obstacle = nullptr;
	bool bRequiresObstacle = true;

	if (Parameters == TEXT("Wall"))
	{
		Obstacle = SpawnBox(*World, FVector(120, 0, 250), FVector(5, 100, 250));
	}
	else if (Parameters == TEXT("Ceiling"))
	{
		Obstacle = SpawnBox(*World, FVector(40, 0, 295), FVector(100, 100, 5));
	}
	else if (Parameters == TEXT("HighCeiling"))
	{
		Obstacle = SpawnBox(*World, FVector(40, 0, 315), FVector(100, 100, 5));
	}
	else if (Parameters == TEXT("StartOverlap"))
	{
		Obstacle = SpawnBox(*World, FVector(0, 0, 240), FVector(5, 5, 5));
	}
	else if (Parameters == TEXT("CurveCeiling"))
	{
		// Actual apex capsule top is about 300.41.
		// The [0, 0.4] chord top never exceeds 281.6.
		Obstacle = SpawnBox(*World, FVector(40, 0, 300), FVector(35, 100, 5));
	}
	else if (Parameters == TEXT("ChordFalsePositive"))
	{
		// The coarse chord intersects this box; the actual arc clears it.
		Obstacle = SpawnBox(*World, FVector(40, 0, 205), FVector(2, 10, 2));
	}
	else
	{
		bRequiresObstacle = false;
	}

	if (bRequiresObstacle && !TestNotNull(TEXT("Obstacle"), Obstacle))
	{
		return false;
	}

	if (Parameters == TEXT("CurveCeiling")|| Parameters == TEXT("ChordFalsePositive"))
	{
		Settings.MaxStepTime = 0.4;
		Settings.MaxSegmentTravel = 1000.0;
		Settings.MaxChordDeviation = 25.0;
	}
	else if (Parameters == TEXT("TimeLimit"))
	{
		Settings.Horizon = 0.2;
	}
	else if (Parameters == TEXT("DistanceLimit"))
	{
		Settings.MaxTravel = 25.0;
	}
	else if (Parameters == TEXT("QueryLimit"))
	{
		Settings.MaxQueryWork = 1;
	}
	else if (Parameters == TEXT("RefinementLimit"))
	{
		Settings.MaxRefinementDepth = 0;
	}
	else if (Parameters == TEXT("InvalidSettings"))
	{
		Settings.Horizon = std::numeric_limits<double>::quiet_NaN();
	}
	else if (Parameters == TEXT("UnsupportedMotion"))
	{
		Seed.Movement.bHasPendingLaunch = true;
	}
	else if (Parameters == TEXT("WorldAssumption"))
	{
		Settings.bAssumeFrozenWorld = false;
	}

	const FVector OriginalLocation = Pokemon->GetActorLocation();
	const FVector OriginalVelocity = Movement->Velocity;
	const FVector OriginalPendingLaunch = Movement->PendingLaunchVelocity;
	const EMovementMode OriginalMode = Movement->MovementMode;
	const uint8 OriginalCustomMode = Movement->CustomMovementMode;
	const bool bOriginalFloorCheck = Movement->bForceNextFloorCheck;
	const FVector OriginalSeedFeet = Seed.StartFeet;
	const FVector OriginalSeedVelocity = Seed.StartVelocity;

	const FPokemonRecoveryContinuationResult Result =
		FPokemonRecoveryContinuation::Evaluate(*Pokemon, Seed, Settings);

	const FPokemonRecoveryContinuationResult Repeat =
		FPokemonRecoveryContinuation::Evaluate(*Pokemon, Seed, Settings);

	AddInfo(FString::Printf(
		TEXT("Status=%d Reason=%s QueryWork=%d ClearThrough=%.6f"),
		static_cast<int32>(Result.Status),
		*Result.Reason.ToString(),
		Result.QueryWorkUsed,
		Result.ClearThroughTime));

	TestEqual(TEXT("Repeat status"),
		static_cast<uint8>(Repeat.Status),
		static_cast<uint8>(Result.Status));

	TestEqual(TEXT("Repeat reason"), Repeat.Reason, Result.Reason);
	TestEqual(TEXT("Repeat query work"),
		Repeat.QueryWorkUsed, Result.QueryWorkUsed);

	TestTrue(TEXT("Query budget respected"),
		Result.QueryWorkUsed <= Settings.MaxQueryWork);

	TestTrue(TEXT("Actor location unchanged"),
		Pokemon->GetActorLocation().Equals(OriginalLocation, 0.0));

	TestTrue(TEXT("Velocity unchanged"),
		Movement->Velocity.Equals(OriginalVelocity, 0.0));

	TestTrue(TEXT("Pending launch unchanged"),
		Movement->PendingLaunchVelocity.Equals(OriginalPendingLaunch, 0.0));

	TestTrue(TEXT("Movement mode unchanged"),
		Movement->MovementMode == OriginalMode
		&& Movement->CustomMovementMode == OriginalCustomMode);

	TestTrue(TEXT("Floor cache flag unchanged"),
		Movement->bForceNextFloorCheck == bOriginalFloorCheck);

	TestTrue(TEXT("Seed unchanged"),
		Seed.StartFeet.Equals(OriginalSeedFeet, 0.0)
		&& Seed.StartVelocity.Equals(OriginalSeedVelocity, 0.0)
		&& Seed.PredictionTime == 0.0);

	const bool bExpectLanding =
		Parameters == TEXT("FlatFloor")
		|| Parameters == TEXT("FlatBaseFloor")
		|| Parameters == TEXT("LowerFloor")
		|| Parameters == TEXT("Descending")
		|| Parameters == TEXT("HighCeiling")
		|| Parameters == TEXT("ChordFalsePositive");

	TestEqual(TEXT("Expected landing geometry"),
		Result.HasLandingGeometry(), bExpectLanding);

	if (bExpectLanding && Result.HasLandingGeometry())
	{
		const double Gravity = -Seed.Gravity.Z;
		const double InitialVz = Seed.StartVelocity.Z;

		const double ExpectedTime =
			(InitialVz + FMath::Sqrt(
				InitialVz * InitialVz
				+ 2.0 * Gravity * (Seed.StartFeet.Z - FloorZ)))
			/ Gravity;

		const double FloorGap =
			(UCharacterMovementComponent::MIN_FLOOR_DIST
				+ UCharacterMovementComponent::MAX_FLOOR_DIST) * 0.5;

		TestTrue(TEXT("Contact time agrees with analytic flat-floor crossing"),
			FMath::Abs(
				Result.ContactPrediction.Sample.Time - ExpectedTime) < 0.002);

		TestTrue(TEXT("Contact feet reach the floor without a second center offset"),
			FMath::Abs(Result.ContactFeet.Z - FloorZ) < 0.1);

		TestTrue(TEXT("Supported feet include normal floor clearance"),
			FMath::Abs(
				Result.SupportedFeet.Z - Result.ContactFeet.Z - FloorGap)
			< 0.0001);

		TestTrue(TEXT("No lateral landing relocation"),
			FVector::Dist2D(Result.SupportedFeet, Result.ContactFeet) < 0.0001);

		TestTrue(TEXT("Incoming velocity remains descending"),
			Result.ContactPrediction.Sample.Velocity.Z < 0.0);

		TestTrue(TEXT("Contact interval is time bounded"),
			Result.ContactIntervalEnd - Result.ContactIntervalStart
			<= Settings.ContactTimeTolerance);

		TestTrue(TEXT("Position discrepancy is bounded"),
			Result.ContactPositionDiscrepancy
			<= Settings.ContactTravelTolerance);

		TestTrue(TEXT("Prior complete height history preserved"),
			Result.ContactPrediction.MaxFeetZSinceTakeoff.IsSet()
			&& FMath::IsNearlyEqual(
				Result.ContactPrediction.MaxFeetZSinceTakeoff.GetValue(),
				300.0, 0.0001));

		TestTrue(TEXT("Repeat contact prediction"),
			Repeat.ContactPrediction.Sample.Feet.Equals(
				Result.ContactPrediction.Sample.Feet, 0.0001));
	}
	else if (Parameters == TEXT("StartOverlap"))
	{
		TestTrue(TEXT("Initial overlap rejected"),
			Result.Status == EStatus::StartBlocked);
	}
	else if (Parameters == TEXT("NoFloor")
		|| Parameters == TEXT("TimeLimit")
		|| Parameters == TEXT("DistanceLimit"))
	{
		TestTrue(TEXT("Search ends without inventing a landing"),
			Result.Status == EStatus::NoLandingWithinBounds);

		TestTrue(TEXT("Travel bound respected"),
			Result.QueriedTravelUpperBound <= Settings.MaxTravel + 0.0001);

		TestTrue(TEXT("Time bound respected"),
			Result.ClearThroughTime <= Settings.Horizon);

		if (Parameters == TEXT("DistanceLimit"))
		{
			TestEqual(TEXT("Distance exhaustion identified"),
				Result.Reason, FName(TEXT("DistanceLimit")));
		}
	}
	else if (Parameters == TEXT("QueryLimit"))
	{
		TestTrue(TEXT("Query exhaustion is not success"),
			Result.Status == EStatus::BudgetExhausted);
	}
	else if (Parameters == TEXT("RefinementLimit"))
	{
		TestTrue(TEXT("Unresolved first contact stops the search"),
			Result.Status == EStatus::CollisionUnresolved);
	}
	else if (Parameters == TEXT("InvalidSettings"))
	{
		TestTrue(TEXT("Nonfinite setting rejected before queries"),
			Result.Status == EStatus::InvalidInput
			&& Result.QueryWorkUsed == 0);
	}
	else if (Parameters == TEXT("UnsupportedMotion")
		|| Parameters == TEXT("WorldAssumption"))
	{
		TestTrue(TEXT("Unsupported model rejected before queries"),
			Result.Status == EStatus::UnsupportedModel
			&& Result.QueryWorkUsed == 0);
	}
	else if (Parameters == TEXT("NarrowSupport"))
	{
		TestTrue(TEXT("Incomplete support footprint rejected"),
			Result.Status == EStatus::LandingRejected);

		TestEqual(TEXT("Footprint check identifies missing support"),
			Result.Reason, FName(TEXT("LandingSupportFootprintMissing")));
	}
	else
	{
		TestTrue(TEXT("First obstruction cannot be skipped to reach the floor"),
			Result.Status == EStatus::LandingRejected
			|| Result.Status == EStatus::CollisionUnresolved);
	}

	return true;
}

#endif
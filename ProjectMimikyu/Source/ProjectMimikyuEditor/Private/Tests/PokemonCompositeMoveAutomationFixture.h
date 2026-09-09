#pragma once

#if WITH_DEV_AUTOMATION_TESTS

#include "Tests/PokemonJumpAutomationFixture.h"
#include "Tests/AutomationCommon.h"
#include "Misc/AutomationTest.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "ActorComponents/PokemonJumpExecutionComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/WorldSettings.h"
#include "Navigation/PokemonJumpSolver.h"
#include "Navigation/PokemonJumpTrajectoryValidator.h"
#include "AIController.h"
#include "AI/NavigationSystemBase.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "NavMesh/RecastNavMesh.h"
#include "UObject/UnrealType.h"

// Narrow native test seam: exercise production planner/callbacks without Blueprint
// content or a rendered PIE session. No test can grant a candidate physics proof.
struct FPokemonCompositeMoveTestAccess
{
	static void Plan(UPokemonNavigationComponent& Nav)
	{
		Nav.EvaluateGroundTraversalFailure(Nav.CurrentNavigationRequest.TargetLocation, TEXT("AutomationGap"));
	}
	static const FPokemonTraversalCandidate& Candidate(const UPokemonNavigationComponent& Nav) { return Nav.LastTraversalCandidate; }
	static bool HasLocalState(const UPokemonNavigationComponent& Nav)
	{
		return Nav.bTraversalPlanReady || Nav.bReachingTakeoff || Nav.PendingTraversalRequirement.ParentRequestId.IsValid();
	}
	static bool Held(const UPokemonNavigationComponent& Nav) { return Nav.bCompositeFailureHeld; }
	static bool GroundEnabled(const UPokemonNavigationComponent& Nav) { return !Nav.bPlayerMovePlanningOnly; }
	static uint32 Generation(const UPokemonNavigationComponent& Nav) { return Nav.CompositePlanningGeneration; }
	static uint32 Serial(const UPokemonNavigationComponent& Nav) { return Nav.TraversalSegmentSerial; }
	static uint32 SearchCount(const UPokemonNavigationComponent& Nav) { return Nav.CompositeSearchCount; }
	static void Start(UPokemonNavigationComponent& Nav) { Nav.StartPreparedTraversal(); }
	static bool Complete(UPokemonNavigationComponent& Nav) { return Nav.TryCompletePlayerMove(); }
	static FPokemonCompositeMoveCost Cost(UPokemonNavigationComponent& Nav, const FVector& Exit)
	{
		return Nav.EstimateCompositeCost(Exit, 0., 0.5);
	}
};

namespace PokemonCompositeMoveTests
{
	struct FFixture
	{
		FTestWorldWrapper TestWorld;
		APokemonJumpAutomationPawn* Pokemon = nullptr;
		UPokemonNavigationComponent* Nav = nullptr;
		FAgentNavigationRequest Parent;

		bool Init(FAutomationTestBase& Test, bool bFarFloor = true)
		{
			if (!Test.TestTrue(TEXT("Create native transient world"), TestWorld.CreateTestWorld(EWorldType::Game))) return false;
			UWorld* World = TestWorld.GetTestWorld();
			World->GetWorldSettings()->DefaultGameMode = AGameModeBase::StaticClass();
			const auto Floor = [World](float CenterX, float ExtentX)
			{
				AActor* Actor = World->SpawnActor<AActor>();
				UBoxComponent* Box = NewObject<UBoxComponent>(Actor);
				Actor->SetRootComponent(Box);
				Box->SetBoxExtent(FVector(ExtentX, 250.f, 20.f));
				Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				Box->SetCollisionObjectType(ECC_WorldStatic);
				Box->SetCollisionResponseToAllChannels(ECR_Block);
				Box->SetWorldLocation(FVector(CenterX, 0.f, -20.f));
				Box->RegisterComponent();
			};
			Floor(-100.f, 200.f); // support ends at x=100; gap ends at x=300
			if (bFarFloor) Floor(900.f, 600.f);
			const FTransform Transform(FVector(0.f, 0.f, 100.f));
			Pokemon = World->SpawnActorDeferred<APokemonJumpAutomationPawn>(APokemonJumpAutomationPawn::StaticClass(),
				Transform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
			if (!Test.TestNotNull(TEXT("Native Pokemon"), Pokemon)) return false;
			Pokemon->ConfigureForAutomation();
			Pokemon->FinishSpawning(Transform);
			if (!Test.TestTrue(TEXT("Normal BeginPlay"), TestWorld.BeginPlayInTestWorld())) return false;
			UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent();
			Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			Capsule->SetCollisionObjectType(ECC_Pawn);
			Capsule->SetCollisionResponseToAllChannels(ECR_Block);
			SetFeet(FVector(0.f, 0.f, 2.15f));
			TestWorld.TickTestWorld();
			Nav = Pokemon->GetNavigationComponent();
			Parent.RequestId = FGuid::NewGuid();
			Parent.IntentTag = FGameplayTag::RequestGameplayTag(TEXT("AI.NavIntent.PlayerCommand.Move"));
			Parent.TargetLocation = FVector(1200.f, 0.f, 2.15f);
			Parent.AcceptableRadius = 50.f;
			Nav->SetNavigationIntent(Parent);
			return Test.TestTrue(TEXT("Grounded native fixture"), Pokemon->GetCharacterMovement()->CurrentFloor.IsWalkableFloor());
		}
		// Shared real navmesh/controller setup for CompositeMove and Intent.Sequence.
		bool EnableNavigation(FAutomationTestBase& Test, bool bRequirePartialRoute = true)
		{
			Nav->ClearNavigationIntent();
			SetFeet(FVector(-200.f, 0.f, 2.15f));
			UWorld* World = TestWorld.GetTestWorld();
			ANavMeshBoundsVolume* Bounds = World->SpawnActor<ANavMeshBoundsVolume>();
			UBoxComponent* BoundsBox = NewObject<UBoxComponent>(Bounds);
			BoundsBox->SetBoxExtent(FVector(1200.f, 500.f, 300.f));
			BoundsBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			BoundsBox->SetCanEverAffectNavigation(false);
			BoundsBox->SetWorldLocation(FVector(600.f, 0.f, 0.f));
			BoundsBox->RegisterComponent();
			Bounds->AddInstanceComponent(BoundsBox);
			ARecastNavMesh* NavData = World->SpawnActor<ARecastNavMesh>();
			// Only the test world's navmesh uses runtime generation; no project setting changes.
			FEnumProperty* RuntimeGeneration = FindFProperty<FEnumProperty>(NavData->GetClass(), TEXT("RuntimeGeneration"));
			if (!Test.TestNotNull(TEXT("Native navmesh generation property"), RuntimeGeneration)) return false;
			RuntimeGeneration->GetUnderlyingProperty()->SetIntPropertyValue(
				RuntimeGeneration->ContainerPtrToValuePtr<void>(NavData), static_cast<uint64>(ERuntimeGenerationType::Dynamic));
			FNavigationSystem::AddNavigationSystemToWorld(*World, FNavigationSystemRunMode::GameMode);
			UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(World);
			if (!Test.TestNotNull(TEXT("Native navigation system"), NavSystem)) return false;
			NavSystem->OnNavigationBoundsUpdated(Bounds);
			NavSystem->Build();
			NavData->EnsureBuildCompletion();
			const FVector Start = Pokemon->GetCharacterMovement()->GetActorFeetLocation();
			UNavigationPath* GroundPath = UNavigationSystemV1::FindPathToLocationSynchronously(World, Start, Parent.TargetLocation, Pokemon);
			if (bRequirePartialRoute && !Test.TestTrue(TEXT("Fixture exposes partial ground route at gap"), GroundPath && GroundPath->IsValid() && GroundPath->IsPartial())) return false;
			AAIController* Controller = World->SpawnActor<AAIController>();
			Controller->Possess(Pokemon);
			TestWorld.TickTestWorld();
			return true;
		}
		void SetFeet(const FVector& Feet)
		{
			Pokemon->SetActorLocation(Feet + FVector::UpVector * Pokemon->GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),
				false, nullptr, ETeleportType::TeleportPhysics);
			Pokemon->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
			Pokemon->GetCharacterMovement()->StopMovementImmediately();
		}
		void AssertParent(FAutomationTestBase& Test)
		{
			Test.TestTrue(TEXT("Parent remains active"), Nav->HasActiveNavigationRequest());
			Test.TestEqual(TEXT("Parent ID preserved"), Nav->GetCurrentNavigationIntent().RequestId, Parent.RequestId);
			Test.TestEqual(TEXT("Original destination preserved"), Nav->GetCurrentNavigationIntent().TargetLocation, Parent.TargetLocation);
		}
	};
}

#endif

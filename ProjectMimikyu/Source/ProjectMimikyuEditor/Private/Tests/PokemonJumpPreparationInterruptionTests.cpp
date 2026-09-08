#if WITH_DEV_AUTOMATION_TESTS

#include "Tests/PokemonJumpAutomationFixture.h"
#include "Tests/AutomationCommon.h"
#include "Misc/AutomationTest.h"
#include "Misc/ScopeExit.h"

#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "ActorComponents/MovesetComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonJumpExecutionComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/WorldSettings.h"
#include "Navigation/PokemonJumpSolver.h"
#include "Navigation/PokemonJumpTrajectoryValidator.h"
#include "UObject/UnrealType.h"

namespace PokemonJumpPreparationInterruptionTests
{
	static bool SpawnFloor(UWorld& World, float CenterX)
	{
		AActor* Actor = World.SpawnActor<AActor>();
		if (!Actor)
		{
			return false;
		}
		UBoxComponent* Floor = NewObject<UBoxComponent>(Actor);
		Actor->SetRootComponent(Floor);
		Floor->SetBoxExtent(FVector(100.f, 150.f, 20.f));
		Floor->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Floor->SetCollisionObjectType(ECC_WorldStatic);
		Floor->SetCollisionResponseToAllChannels(ECR_Block);
		Floor->SetWorldLocation(FVector(CenterX, 0.f, -20.f));
		Floor->RegisterComponent();
		return true;
	}
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonJumpPreparationInterruptionTest,
	"ProjectMimikyu.Traversal.Jump.PreparationInterruption",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonJumpPreparationInterruptionTest::RunTest(const FString& Parameters)
{
	FTestWorldWrapper TestWorld;
	if (!TestTrue(TEXT("Create transient world"), TestWorld.CreateTestWorld(EWorldType::Game)))
	{
		TestWorld.ForwardErrorMessages(this);
		return false;
	}
	UWorld* World = TestWorld.GetTestWorld();
	// Avoid the project's game mode/content startup. The pawn still runs its full
	// APokemon_Parent::BeginPlay and both production default-attribute passes.
	World->GetWorldSettings()->DefaultGameMode = AGameModeBase::StaticClass();
	if (!TestTrue(TEXT("Start platform"), PokemonJumpPreparationInterruptionTests::SpawnFloor(*World, 0.f))
		|| !TestTrue(TEXT("Landing platform"), PokemonJumpPreparationInterruptionTests::SpawnFloor(*World, 400.f)))
	{
		return false;
	}
	const FTransform SpawnTransform(FVector(0.f, 0.f, 100.f));
	APokemonJumpAutomationPawn* Pokemon = World->SpawnActorDeferred<APokemonJumpAutomationPawn>(
		APokemonJumpAutomationPawn::StaticClass(), SpawnTransform, nullptr, nullptr,
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	if (!TestNotNull(TEXT("Native automation Pokemon"), Pokemon))
	{
		return false;
	}
	Pokemon->ConfigureForAutomation();
	Pokemon->FinishSpawning(SpawnTransform);
	if (!TestTrue(TEXT("Normal Pokemon BeginPlay completes"), TestWorld.BeginPlayInTestWorld()))
	{
		TestWorld.ForwardErrorMessages(this);
		return false;
	}
	TestTrue(TEXT("Pokemon has begun play"), Pokemon->HasActorBegunPlay());
	TestEqual(TEXT("Native default GameplayEffect initialized health"), Pokemon->GetPokemonAS()->GetHealth(), 100.f);
	TestEqual(TEXT("Native default GameplayEffect initialized speed"), Pokemon->GetPokemonAS()->GetSpeed(), 200.f);

	UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent();
	UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement();
	UPokemonJumpExecutionComponent* Executor = Pokemon->JumpExecutionComponent;
	UPokemonNavigationComponent* Navigation = Pokemon->GetNavigationComponent();
	UPokemonCommandComponent* Command = Pokemon->FindComponentByClass<UPokemonCommandComponent>();
	if (!TestNotNull(TEXT("Capsule"), Capsule) || !TestNotNull(TEXT("Movement"), Movement)
		|| !TestNotNull(TEXT("Executor"), Executor) || !TestNotNull(TEXT("Navigation"), Navigation)
		|| !TestNotNull(TEXT("Command"), Command))
	{
		return false;
	}
	// Read the existing reflected state without a production accessor or private-state mutation.
	const FEnumProperty* StateProperty = FindFProperty<FEnumProperty>(Executor->GetClass(), TEXT("State"));
	const FFloatProperty* DurationProperty = FindFProperty<FFloatProperty>(Executor->GetClass(), TEXT("PreparationDuration"));
	if (!TestNotNull(TEXT("Reflected executor state"), StateProperty)
		|| !TestNotNull(TEXT("Reflected preparation duration"), DurationProperty))
	{
		return false;
	}
	const auto State = [&]()
	{
		return static_cast<EPokemonJumpExecutionState>(StateProperty->GetUnderlyingProperty()->GetUnsignedIntPropertyValue(
			StateProperty->ContainerPtrToValuePtr<void>(Executor)));
	};
	Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Capsule->SetCollisionObjectType(ECC_Pawn);
	Capsule->SetCollisionResponseToAllChannels(ECR_Block);
	const float FloorGap = (UCharacterMovementComponent::MIN_FLOOR_DIST + UCharacterMovementComponent::MAX_FLOOR_DIST) * 0.5f;
	Pokemon->SetActorLocation(FVector(0.f, 0.f, Capsule->GetScaledCapsuleHalfHeight() + FloorGap));
	Movement->SetMovementMode(MOVE_Walking);
	TestWorld.TickTestWorld();
	if (!TestTrue(TEXT("Fixture has a walkable start floor"), Movement->CurrentFloor.IsWalkableFloor())
		|| !TestTrue(TEXT("Fixture can act"), Pokemon->CanAct()))
	{
		return false;
	}

	// Use a real native command ID: an unrelated GUID always reports unconsumed
	// and would make the negative consumption assertion vacuous.
	UPokemonMoveDataAsset* Move = NewObject<UPokemonMoveDataAsset>(Pokemon, NAME_None, RF_Transient);
	Move->InputTag = FGameplayTag::RequestGameplayTag(TEXT("InputTag.1"));
	Pokemon->GetMovesetComponent()->SetupMoveset({ Move });
	if (!TestTrue(TEXT("Native attack command accepted"), Command->TryCallCommand(0)))
	{
		return false;
	}
	FAgentNavigationRequest ParentRequest;
	ParentRequest.RequestId = FGuid::NewGuid();
	ParentRequest.IntentTag = FGameplayTag::RequestGameplayTag(TEXT("AI.NavIntent.Combat.Approach"));
	ParentRequest.bIsAttackTraversal = true;
	ParentRequest.ParentAttackCommandId = Command->GetActiveTrainerCommandId();
	ParentRequest.TargetLocation = Movement->GetActorFeetLocation() + FVector(400.f, 0.f, 0.f);
	Navigation->SetNavigationIntent(ParentRequest);
	TestTrue(TEXT("Attack command ID is valid"), ParentRequest.ParentAttackCommandId.IsValid());

	FPokemonTraversalRequirement Requirement;
	Requirement.ParentRequestId = ParentRequest.RequestId;
	if (!TestTrue(TEXT("Gap and both supports measured"), FPokemonJumpTrajectoryValidator::MeasureDiscontinuity(
		*Pokemon, Movement->GetActorFeetLocation(), ParentRequest.TargetLocation, Requirement)))
	{
		return false;
	}
	const FPokemonJumpCapabilitySnapshot Capability = FPokemonJumpSolver::CaptureCapabilities(
		*Pokemon, ParentRequest, FVector::ForwardVector);
	FPokemonTraversalCandidate Candidate;
	for (FPokemonTraversalCandidate Option : FPokemonJumpSolver::Solve(Requirement, Capability, ParentRequest.JumpTrajectoryPreference))
	{
		if (FPokemonJumpTrajectoryValidator::Validate(*Pokemon, Option))
		{
			Candidate = Option;
			break;
		}
	}
	if (!TestTrue(TEXT("Solver and validator grant an executable candidate"), Candidate.IsExecutable()))
	{
		return false;
	}

	int32 TakeoffEvents = 0;
	int32 FinishedEvents = 0;
	bool bFinishedSuccessfully = true;
	FGuid FinishedRequestId;
	FName FinishedReason;
	const FDelegateHandle TakeoffHandle = Executor->OnJumpTakeoff.AddLambda([&](FGuid) { ++TakeoffEvents; });
	const FDelegateHandle FinishedHandle = Executor->OnJumpFinished.AddLambda([&](FGuid Id, bool bSuccess, FName Reason)
	{
		++FinishedEvents;
		bFinishedSuccessfully = bSuccess;
		FinishedRequestId = Id;
		FinishedReason = Reason;
	});
	ON_SCOPE_EXIT
	{
		Executor->OnJumpTakeoff.Remove(TakeoffHandle);
		Executor->OnJumpFinished.Remove(FinishedHandle);
	};
	TestEqual(TEXT("Initial state is Idle"), State(), EPokemonJumpExecutionState::Idle);
	if (!TestTrue(TEXT("Executable candidate accepted"), Executor->PrepareJump(Candidate, Requirement, ParentRequest)))
	{
		return false;
	}
	TestEqual(TEXT("Executor enters Preparing"), State(), EPokemonJumpExecutionState::Preparing);
	TestFalse(TEXT("Preparation does not consume the attack"), Command->HasConsumedAttackJump(ParentRequest.ParentAttackCommandId));
	TestTrue(TEXT("Preparation queues no launch"), Movement->PendingLaunchVelocity.IsZero());
	Executor->InterruptJump(TEXT("AutomationPreparationInterrupt"));
	TestEqual(TEXT("Interruption returns to Idle"), State(), EPokemonJumpExecutionState::Idle);
	TestEqual(TEXT("Exactly one completion"), FinishedEvents, 1);
	TestFalse(TEXT("Completion is unsuccessful"), bFinishedSuccessfully);
	TestEqual(TEXT("Same request ID in completion"), FinishedRequestId, ParentRequest.RequestId);
	TestEqual(TEXT("Interruption reason preserved"), FinishedReason, FName(TEXT("AutomationPreparationInterrupt")));
	TestEqual(TEXT("Parent request retained"), Navigation->GetCurrentNavigationIntent().RequestId, ParentRequest.RequestId);

	// Neither a late animation notify nor the original timer may revive the cancelled execution.
	Executor->TriggerTakeoff();
	TestWorld.TickTestWorld(DurationProperty->GetPropertyValue_InContainer(Executor) + 0.3f);
	TestEqual(TEXT("Still Idle after late notify and elapsed timer"), State(), EPokemonJumpExecutionState::Idle);
	TestEqual(TEXT("No LaunchCharacter call / LaunchPending transition"), Pokemon->LaunchCalls, 0);
	TestEqual(TEXT("No falling transition"), Pokemon->FallingTransitions, 0);
	TestEqual(TEXT("No Takeoff event"), TakeoffEvents, 0);
	TestEqual(TEXT("No additional completion"), FinishedEvents, 1);
	TestFalse(TEXT("No Airborne state"), Executor->HasTakenOff());
	TestTrue(TEXT("No pending launch"), Movement->PendingLaunchVelocity.IsZero());
	TestTrue(TEXT("Movement remains grounded"), Movement->IsMovingOnGround());
	TestFalse(TEXT("AttackAttemptConsumed == false"), Command->HasConsumedAttackJump(ParentRequest.ParentAttackCommandId));
	AddInfo(FString::Printf(TEXT("Interrupted RequestId=%s: Idle, Success=0, LaunchCalls=%d, Takeoffs=%d, AttackAttemptConsumed=%d"),
		*ParentRequest.RequestId.ToString(), Pokemon->LaunchCalls, TakeoffEvents,
		Command->HasConsumedAttackJump(ParentRequest.ParentAttackCommandId)));

	// Positive control under a new request: prove the real navigation listener and
	// active command consume only after CMC applies a launch, not at LaunchQueued.
	ParentRequest.RequestId = FGuid::NewGuid();
	Requirement.ParentRequestId = ParentRequest.RequestId;
	Candidate.ParentRequestId = ParentRequest.RequestId;
	Navigation->SetNavigationIntent(ParentRequest);
	if (!TestTrue(TEXT("Control preparation accepted"), Executor->PrepareJump(Candidate, Requirement, ParentRequest)))
	{
		return false;
	}
	Executor->TriggerTakeoff();
	TestEqual(TEXT("Control enters LaunchPending"), State(), EPokemonJumpExecutionState::LaunchPending);
	TestEqual(TEXT("Control detects launch"), Pokemon->LaunchCalls, 1);
	TestFalse(TEXT("LaunchQueued does not consume the attack"), Command->HasConsumedAttackJump(ParentRequest.ParentAttackCommandId));
	TestTrue(TEXT("CMC applies control launch"), Movement->HandlePendingLaunch());
	TestEqual(TEXT("Control enters Airborne"), State(), EPokemonJumpExecutionState::Airborne);
	TestEqual(TEXT("Control detects Takeoff"), TakeoffEvents, 1);
	TestTrue(TEXT("Actual takeoff consumes the active attack"), Command->HasConsumedAttackJump(ParentRequest.ParentAttackCommandId));
	TestWorld.ForwardErrorMessages(this);
	return true;
}

#endif

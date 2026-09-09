#if WITH_DEV_AUTOMATION_TESTS

#include "Tests/PokemonAttackAutomationFixture.h"
#include "Tests/PokemonCompositeMoveAutomationFixture.h"
#include "Abilities/Tasks/AbilityTask_WaitDelay.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "ActorComponents/MovesetComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonImpactResolverComponent.h"
#include "ActorComponents/PokemonIntentSequenceComponent.h"
#include "AIControllers/PokemonAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Enum.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BlackboardKeyType_GameplayTag.h"
#include "DataAssets/PokemonMoveDataAsset.h"

namespace PokemonAttackTests
{
	struct FFixture : PokemonCompositeMoveTests::FFixture
	{
		UPokemonCommandComponent* Command = nullptr;
		UPokemonIntentSequenceComponent* Intent = nullptr;
		UPokemonAttackAutomationProbe* Probe = nullptr;
		UPokemonMoveDataAsset* Move = nullptr;
		UPokemonAbilitySystemComponent* ASC = nullptr;
		UBlackboardComponent* Blackboard = nullptr;
		FPokemonCommandTarget Target;
		int32 CommandResults = 0;
		int32 IntentResults = 0;
		bool bRetiredAtResult = false;
		bool bTasksEndedAtResult = false;
		FPokemonIntentSequence LastResult;
		EPokemonAttackExecutionOutcome LastCommandOutcome = EPokemonAttackExecutionOutcome::None;
		FDelegateHandle CommandHandle, IntentHandle;

		~FFixture()
		{
			if (Command) Command->OnTrainerCommandResolved.Remove(CommandHandle);
			if (Intent) Intent->OnIntentResolved.Remove(IntentHandle);
		}

		bool Init(FAutomationTestBase& Test, bool bGrant = true, bool bNavigation = false)
		{
			if (!PokemonCompositeMoveTests::FFixture::Init(Test)) return false;
			TestWorld.GetTestWorld()->CreateAISystem();
			GetMutableDefault<UPokemonAttackAutomationAbility>()->MoveActionTag = FGameplayTag::RequestGameplayTag(TEXT("PokemonMoves.MoveAction.Melee"));
			GetMutableDefault<UPokemonRangedAutomationAbility>()->MoveActionTag = FGameplayTag::RequestGameplayTag(TEXT("PokemonMoves.MoveAction.Projectile"));
			Nav->ClearNavigationIntent();
			if (bNavigation && !EnableNavigation(Test)) return false;
			APokemonAIController* Controller = TestWorld.GetTestWorld()->SpawnActor<APokemonAIController>();
			UBlackboardData* Data = NewObject<UBlackboardData>(Controller);
			const auto Key = [Data](FName Name, UBlackboardKeyType* Type)
			{
				FBlackboardEntry& Entry = Data->Keys.AddDefaulted_GetRef();
				Entry.EntryName = Name;
				Entry.KeyType = Type;
			};
			Key(TEXT("CurrentMove"), NewObject<UBlackboardKeyType_Object>(Data));
			Key(TEXT("PokemonActionState"), NewObject<UBlackboardKeyType_GameplayTag>(Data));
			Key(TEXT("PokemonState"), NewObject<UBlackboardKeyType_Enum>(Data));
			Key(TEXT("SpawnLocationAnchor"), NewObject<UBlackboardKeyType_Vector>(Data));
			Key(TEXT("PokemonASC"), NewObject<UBlackboardKeyType_Object>(Data));
			if (!Test.TestTrue(TEXT("Real Pokemon Blackboard"), Controller->UseBlackboard(Data, Blackboard))) return false;
			Controller->Possess(Pokemon);
			Probe = NewObject<UPokemonAttackAutomationProbe>(Pokemon);
			Pokemon->AddInstanceComponent(Probe);
			Probe->RegisterComponent();
			Pokemon->OnAttackEnd.AddDynamic(Probe, &UPokemonAttackAutomationProbe::LegacyEnded);
			Command = Pokemon->FindComponentByClass<UPokemonCommandComponent>();
			Intent = Pokemon->GetIntentSequenceComponent();
			ASC = Pokemon->GetPokemonASC();
			Move = NewObject<UPokemonMoveDataAsset>(Pokemon);
			Move->Ability = UPokemonAttackAutomationAbility::StaticClass();
			Move->InputTag = FGameplayTag::RequestGameplayTag(TEXT("InputTag.1"));
			Move->BaseStaminaCost = 10.f;
			Pokemon->GetMovesetComponent()->SetupMoveset({ Move });
			if (bGrant) ASC->AddCharacterAbilities({ Move });
			Target.TargetType = EPokemonCommandTargetType::Location;
			Target.TargetLocation = FVector(75.f, 20.f, 2.f);
			CommandHandle = Command->OnTrainerCommandResolved.AddLambda([this](FGuid Id, EPokemonAttackExecutionOutcome Outcome, FName)
			{
				++CommandResults;
				LastCommandOutcome = Outcome;
				bRetiredAtResult = Command->GetActiveTrainerCommandId() != Id;
				bTasksEndedAtResult = !Probe->Task.IsValid() || Probe->Task->IsFinished();
			});
			IntentHandle = Intent->OnIntentResolved.AddLambda([this](const FPokemonIntentSequence& Result)
			{
				++IntentResults;
				LastResult = Result;
			});
			return Test.TestTrue(TEXT("Fixture can act"), Pokemon->CanAct());
		}
		FGuid Submit() { return Intent->SubmitAttackIntent(0, Target); }
		void AssertResolved(FAutomationTestBase& Test, EPokemonIntentSequenceState State, FName Outcome)
		{
			Test.TestEqual(TEXT("Exactly one intent result"), IntentResults, 1);
			Test.TestEqual(TEXT("Exactly one command result"), CommandResults, 1);
			Test.TestEqual(TEXT("Parent lifecycle"), LastResult.State, State);
			Test.TestEqual(TEXT("Parent outcome"), LastResult.Outcome, Outcome);
			if (Test.TestEqual(TEXT("One action snapshot"), LastResult.Actions.Num(), 1))
			{
				Test.TestEqual(TEXT("Action outcome"), LastResult.Actions[0].Outcome, Outcome);
				const auto ActionState = State == EPokemonIntentSequenceState::Succeeded ? EPokemonIntentActionState::Succeeded
					: State == EPokemonIntentSequenceState::Failed ? EPokemonIntentActionState::Failed : EPokemonIntentActionState::Interrupted;
				Test.TestEqual(TEXT("Action lifecycle"), LastResult.Actions[0].State, ActionState);
			}
			Test.TestTrue(TEXT("Command retired before result"), bRetiredAtResult);
			Test.TestTrue(TEXT("Old GAS tasks ended before result"), bTasksEndedAtResult);
			Test.TestEqual(TEXT("Legacy end preserved once"), Probe->LegacyEnds, 1);
			Test.TestNull(TEXT("Move cleaned"), Command->GetActiveMove());
			Test.TestFalse(TEXT("Target cleaned"), Command->GetCommandTarget().IsValidTarget());
			Test.TestNull(TEXT("Blackboard clear"), Blackboard->GetValueAsObject(TEXT("CurrentMove")));
		}
		APokemonJumpAutomationPawn* SpawnDefender()
		{
			const FTransform Transform(FVector(75.f, 20.f, 100.f));
			auto* Defender = TestWorld.GetTestWorld()->SpawnActorDeferred<APokemonJumpAutomationPawn>(
				APokemonJumpAutomationPawn::StaticClass(), Transform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
			Defender->ConfigureForAutomation();
			Defender->FinishSpawning(Transform);
			return Defender;
		}
		bool TrainerCall(FAutomationTestBase& Test, FVector AimLocation)
		{
			// Invoke the actual server RPC through reflection; TrainerCharacter has no
			// module export, so the editor fixture does not duplicate its routing logic.
			UClass* Class = FindObject<UClass>(nullptr, TEXT("/Script/ProjectMimikyu.TrainerCharacter"));
			if (!Test.TestNotNull(TEXT("Native trainer class"), Class)) return false;
			AActor* Trainer = TestWorld.GetTestWorld()->SpawnActor<AActor>(Class);
			FObjectProperty* Selected = FindFProperty<FObjectProperty>(Class, TEXT("CurrentPokemon"));
			UFunction* Call = Class->FindFunctionByName(TEXT("ServerCallCommand"));
			if (!Test.TestNotNull(TEXT("Trainer selection property"), Selected) || !Test.TestNotNull(TEXT("Server command RPC"), Call)) return false;
			Selected->SetObjectPropertyValue_InContainer(Trainer, Pokemon);
			struct { int32 MoveIndex = 0; FAimData AimData; } Params;
			Params.AimData.AimWorldLocation = AimLocation;
			Trainer->ProcessEvent(Call, &Params);
			return true;
		}
	};
}

using namespace PokemonAttackTests;
#define ATTACK_TEST(Name) IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonAttack##Name, "ProjectMimikyu.Intent.Attack." #Name, EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter) \
	bool FPokemonAttack##Name::RunTest(const FString& Parameters)

ATTACK_TEST(CreationAndOwnership)
{
	FFixture F; if (!F.Init(*this)) return false;
	const FGuid I = F.Submit();
	const auto& S = F.Intent->GetCurrentSequence();
	if (!TestEqual(TEXT("One action"), S.Actions.Num(), 1)) return false;
	const auto& A = S.Actions[0];
	TestTrue(TEXT("Distinct valid I/A/C"), I.IsValid() && A.ActionId.IsValid() && A.ExecutorRequestId.IsValid()
		&& I != A.ActionId && I != A.ExecutorRequestId && A.ActionId != A.ExecutorRequestId);
	TestEqual(TEXT("Attack parent"), S.Type, EPokemonIntentType::Attack);
	TestEqual(TEXT("Attack action"), A.Spec.Type, EPokemonIntentActionType::AttackExecution);
	TestEqual(TEXT("Parent linked on command"), F.Command->GetParentIntentId(), I);
	TestEqual(TEXT("Traversal uses C"), F.Command->GetTrainerCommandIdForTraversal(), A.ExecutorRequestId);
	TestTrue(TEXT("Running ownership precedes GAS"), F.Probe->bOwnedBeforeActivation);
	TestEqual(TEXT("Direct GAS activation once"), F.Probe->Activations, 1);
	TestFalse(TEXT("Duplicate execute rejected"), F.Command->ExecuteSequencedCommand(A.ExecutorRequestId));
	TestNull(TEXT("No Blackboard dispatch"), F.Blackboard->GetValueAsObject(TEXT("CurrentMove")));
	F.Probe->Ability->Finish();
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Missed"));
	return true;
}

ATTACK_TEST(ReservationSnapshots)
{
	FFixture F; if (!F.Init(*this)) return false;
	const FGuid I = FGuid::NewGuid();
	const auto Reservation = F.Command->ReserveSequencedCommand(F.Move, F.Target, I);
	TestTrue(TEXT("Reservation accepted"), Reservation.IsAccepted());
	TestEqual(TEXT("Reservation does not activate"), F.Probe->Activations, 0);
	TestNull(TEXT("Reservation does not dispatch BT"), F.Blackboard->GetValueAsObject(TEXT("CurrentMove")));
	const FVector Original = F.Target.TargetLocation;
	F.Target.TargetLocation = FVector(200.f);
	F.Pokemon->GetMovesetComponent()->CurrentPokemonMoves[0] = NewObject<UPokemonMoveDataAsset>(F.Pokemon);
	TestEqual(TEXT("Resolved asset retained"), F.Command->GetActiveMove(), F.Move);
	TestEqual(TEXT("Target copied"), F.Command->GetCommandTarget().TargetLocation, Original);
	TestFalse(TEXT("Jump budget starts unused"), F.Command->HasConsumedAttackJump(Reservation.CommandId));
	TestTrue(TEXT("Momentum starts zero"), F.Command->GetAuthorizedTraversalMomentum(Reservation.CommandId).IsZero());
	TestTrue(TEXT("Execute original reservation"), F.Command->ExecuteSequencedCommand(Reservation.CommandId));
	TestEqual(TEXT("Original ability activated once"), F.Probe->Activations, 1);
	F.Command->CancelSequencedCommand(Reservation.CommandId, TEXT("TestDone"));
	return true;
}

ATTACK_TEST(SynchronousMiss)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.Probe->Mode = EPokemonAttackTestMode::SynchronousMiss;
	TestTrue(TEXT("Accepted ID survives synchronous end"), F.Submit().IsValid());
	TestTrue(TEXT("Owned during synchronous activation"), F.Probe->bOwnedBeforeActivation);
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Missed"));
	return true;
}

ATTACK_TEST(GASActivationRejected)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.ASC->SetNumericAttributeBase(UPokemonBaseAttributeSet::GetStaminaAttribute(), 0.f);
	TestTrue(TEXT("Reservation precedes GAS cost rejection"), F.Submit().IsValid());
	TestEqual(TEXT("No native activation"), F.Probe->Activations, 0);
	F.AssertResolved(*this, EPokemonIntentSequenceState::Failed, TEXT("ActivationFailed"));
	TestEqual(TEXT("Specific failure"), F.LastResult.Reason, FName(TEXT("AbilityActivationRejected")));
	return true;
}

ATTACK_TEST(MissingReservedAbility)
{
	FFixture F; if (!F.Init(*this, false)) return false;
	TestTrue(TEXT("Submission accepted before execute validation"), F.Submit().IsValid());
	F.AssertResolved(*this, EPokemonIntentSequenceState::Failed, TEXT("ActivationFailed"));
	TestEqual(TEXT("Missing grant reason"), F.LastResult.Reason, FName(TEXT("ReservedAbilityUnavailable")));
	return true;
}

ATTACK_TEST(CommitFailureIsNotMiss)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.Probe->Mode = EPokemonAttackTestMode::RejectCommit;
	F.Submit();
	TestFalse(TEXT("GAS commit rejected"), F.Probe->bCommitSucceeded);
	F.AssertResolved(*this, EPokemonIntentSequenceState::Failed, TEXT("ActivationFailed"));
	TestEqual(TEXT("Commit reason retained"), F.LastResult.Reason, FName(TEXT("CommitCostRejected")));
	return true;
}

ATTACK_TEST(ResourcesRemainOwnedByGAS)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.Probe->Mode = EPokemonAttackTestMode::CommitAndHold;
	F.Submit();
	TestTrue(TEXT("Existing commit succeeds"), F.Probe->bCommitSucceeded);
	TestEqual(TEXT("One PP spent"), F.Pokemon->GetMovesetComponent()->FindRuntimeState(F.Move)->CurrentPowerPoints, 2);
	TestEqual(TEXT("Stamina spent once"), F.ASC->GetNumericAttribute(UPokemonBaseAttributeSet::GetStaminaAttribute()), 90.f);
	F.Command->ExecuteSequencedCommand(F.Command->GetActiveTrainerCommandId());
	TestEqual(TEXT("Duplicate execute spends no PP"), F.Pokemon->GetMovesetComponent()->FindRuntimeState(F.Move)->CurrentPowerPoints, 2);
	F.Probe->Ability->Finish();
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Missed"));
	return true;
}

ATTACK_TEST(ContactWaitsForRecovery)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.Submit();
	const auto Impact = F.Probe->Ability->Contact(F.SpawnDefender());
	TestTrue(TEXT("Production direct impact resolved"), Impact.ImpactResult != EPokemonImpactResult::None);
	TestEqual(TEXT("Contact is not terminal"), F.CommandResults, 0);
	TestEqual(TEXT("Parent still running through recovery"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Running);
	F.Command->AttackEnded();
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Connected"));
	return true;
}

ATTACK_TEST(NoSellIsConnected)
{
	FFixture F; if (!F.Init(*this)) return false;
	auto* Defender = F.SpawnDefender();
	Defender->GetPokemonASC()->SetNumericAttributeBase(UPokemonBaseAttributeSet::GetDefenseAttribute(), 1000.f);
	F.Submit();
	const auto Impact = F.Probe->Ability->Contact(Defender);
	TestEqual(TEXT("Production NoSell contact"), Impact.ImpactResult, EPokemonImpactResult::NoSell);
	F.Probe->Ability->Finish();
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Connected"));
	return true;
}

ATTACK_TEST(ImpactCallbackCanEndSynchronously)
{
	FFixture F; if (!F.Init(*this)) return false;
	auto* Defender = F.SpawnDefender();
	Defender->FindComponentByClass<UPokemonImpactResolverComponent>()->OnImpactResolved.AddDynamic(F.Probe, &UPokemonAttackAutomationProbe::ImpactResolved);
	F.Probe->bEndOnImpact = true;
	F.Submit();
	F.Probe->Ability->Contact(Defender);
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Connected"));
	return true;
}

ATTACK_TEST(ExplicitCancellation)
{
	FFixture F; if (!F.Init(*this)) return false;
	const auto I = F.Submit();
	const auto C = F.Command->GetActiveTrainerCommandId();
	TestFalse(TEXT("Wrong command cannot cancel"), F.Command->CancelSequencedCommand(FGuid::NewGuid(), TEXT("Wrong")));
	TestTrue(TEXT("Cancel own parent"), F.Intent->CancelIntent(I, TEXT("TestCancel")));
	TestFalse(TEXT("Matching GAS ability ended"), F.Probe->Ability->IsActive());
	TestFalse(TEXT("Duplicate cancellation ignored"), F.Command->CancelSequencedCommand(C, TEXT("Duplicate")));
	F.AssertResolved(*this, EPokemonIntentSequenceState::Interrupted, TEXT("Interrupted"));
	return true;
}

ATTACK_TEST(AbilityCancellation)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.Submit();
	F.Probe->Ability->Finish(true);
	F.AssertResolved(*this, EPokemonIntentSequenceState::Interrupted, TEXT("Interrupted"));
	return true;
}

ATTACK_TEST(ReplacementRejectsStaleCallbacks)
{
	FFixture F; if (!F.Init(*this)) return false;
	const auto OldI = F.Submit();
	const auto OldC = F.Command->GetActiveTrainerCommandId();
	const auto OldAbility = F.Probe->Ability;
	const auto NewI = F.Submit();
	const auto NewC = F.Command->GetActiveTrainerCommandId();
	TestTrue(TEXT("Replacement uses new identities"), NewI.IsValid() && NewI != OldI && NewC != OldC);
	TestFalse(TEXT("Old ability cancelled"), OldAbility->IsActive());
	F.Command->NotifySequencedContact(OldAbility.Get(), OldC);
	F.Command->NotifySequencedAbilityEnded(OldAbility.Get(), OldC, false, NAME_None);
	F.Command->OnTrainerCommandResolved.Broadcast(OldC, EPokemonAttackExecutionOutcome::Connected, NAME_None);
	OldAbility->Finish();
	TestEqual(TEXT("Stale result cannot resolve new intent"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Running);
	TestEqual(TEXT("New command retained"), F.Command->GetActiveTrainerCommandId(), NewC);
	F.Probe->Ability->Finish();
	TestEqual(TEXT("Stale contact did not latch new attack"), F.LastResult.Outcome, FName(TEXT("Missed")));
	TestEqual(TEXT("Two real intent results"), F.IntentResults, 2);
	return true;
}

ATTACK_TEST(MoveToReplacesAttack)
{
	FFixture F; if (!F.Init(*this, true, true)) return false;
	F.Submit();
	const auto OldC = F.Command->GetActiveTrainerCommandId();
	const auto OldAbility = F.Probe->Ability;
	const auto MoveI = F.Intent->SubmitMoveToIntent(F.Parent.TargetLocation);
	TestTrue(TEXT("MoveTo replacement accepted"), MoveI.IsValid());
	TestFalse(TEXT("Attack ability stopped"), OldAbility->IsActive());
	TestEqual(TEXT("Attack interrupted"), F.LastResult.Outcome, FName(TEXT("Interrupted")));
	const auto Before = F.Intent->GetCurrentSequence();
	TestEqual(TEXT("Navigation action dispatched"), Before.Actions[0].Spec.Type, EPokemonIntentActionType::NavigateToLocation);
	TestTrue(TEXT("Navigation running"), F.Nav->HasActiveNavigationRequest());
	F.Command->OnTrainerCommandResolved.Broadcast(OldC, EPokemonAttackExecutionOutcome::Connected, NAME_None);
	OldAbility->Finish();
	TestEqual(TEXT("Old attack cannot change MoveTo"), F.Intent->GetCurrentSequence().IntentId, MoveI);
	TestEqual(TEXT("MoveTo state preserved"), F.Intent->GetCurrentSequence().State, Before.State);
	F.Intent->CancelIntent(MoveI, TEXT("TestDone"));
	return true;
}

ATTACK_TEST(DuplicateCompletion)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.Submit();
	F.Probe->Ability->Finish();
	F.Probe->Ability->Finish();
	F.Command->AttackEnded();
	F.Command->AttackEnded();
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Missed"));
	return true;
}

ATTACK_TEST(LegacyBlackboardDispatch)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.Command->SetCommandTarget(F.Target);
	TestTrue(TEXT("Legacy reservation accepted"), F.Command->TryCallCommand(0));
	TestEqual(TEXT("Legacy publishes move"), F.Blackboard->GetValueAsObject(TEXT("CurrentMove")), static_cast<UObject*>(F.Move));
	TestEqual(TEXT("Legacy does not activate directly"), F.Probe->Activations, 0);
	TestFalse(TEXT("Legacy has no parent"), F.Command->GetParentIntentId().IsValid());
	TestTrue(TEXT("Existing BT-style tag activation"), F.ASC->ActivateAbilityByTag(F.Move->InputTag));
	F.Probe->Ability->Finish();
	TestEqual(TEXT("Legacy event preserved"), F.Probe->LegacyEnds, 1);
	TestEqual(TEXT("No native sequenced result"), F.CommandResults, 0);
	TestEqual(TEXT("No intent created"), F.IntentResults, 0);
	TestNull(TEXT("Legacy cleanup clears BB"), F.Blackboard->GetValueAsObject(TEXT("CurrentMove")));
	return true;
}

ATTACK_TEST(TrainerMeleeRouting)
{
	FFixture F; if (!F.Init(*this)) return false;
	if (!F.TrainerCall(*this, F.Target.TargetLocation)) return false;
	TestEqual(TEXT("Trainer created Attack Intent"), F.Intent->GetCurrentSequence().Type, EPokemonIntentType::Attack);
	TestEqual(TEXT("Trainer activated once"), F.Probe->Activations, 1);
	TestNull(TEXT("Trainer melee did not dispatch BT"), F.Blackboard->GetValueAsObject(TEXT("CurrentMove")));
	F.Probe->Ability->Finish();
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Missed"));
	return true;
}

ATTACK_TEST(TrainerRangedStaysLegacy)
{
	FFixture F; if (!F.Init(*this, false)) return false;
	F.Move->Ability = UPokemonRangedAutomationAbility::StaticClass();
	F.ASC->AddCharacterAbilities({ F.Move });
	TestFalse(TEXT("Projectile is unsupported by Attack 0.2"), UPokemonCommandComponent::IsSupportedSequencedMove(F.Move));
	if (!F.TrainerCall(*this, F.Target.TargetLocation)) return false;
	TestEqual(TEXT("Ranged publishes to legacy BB"), F.Blackboard->GetValueAsObject(TEXT("CurrentMove")), static_cast<UObject*>(F.Move));
	TestEqual(TEXT("Ranged awaits legacy BT activation"), F.Probe->Activations, 0);
	TestFalse(TEXT("Ranged creates no parent"), F.Intent->GetCurrentSequence().IntentId.IsValid());
	F.Command->AttackEnded();
	TestEqual(TEXT("Ranged has no command result"), F.CommandResults, 0);
	return true;
}

ATTACK_TEST(RejectedMeleeNeverFallsBack)
{
	FFixture F; if (!F.Init(*this)) return false;
	// Invalid target is rejected only by the new melee API. Legacy TryCallCommand
	// would accept it, so this catches an accidental fallthrough after rejection.
	if (!F.TrainerCall(*this, FVector::ZeroVector)) return false;
	TestFalse(TEXT("Rejected melee creates no intent"), F.Intent->GetCurrentSequence().IntentId.IsValid());
	TestFalse(TEXT("No legacy reservation after rejection"), F.Command->IsCommandActive());
	TestNull(TEXT("Rejected melee never reaches BB"), F.Blackboard->GetValueAsObject(TEXT("CurrentMove")));
	TestEqual(TEXT("Rejected melee never activates"), F.Probe->Activations, 0);
	return true;
}

ATTACK_TEST(ReentrantCompletionStartsNewAttack)
{
	FFixture F; if (!F.Init(*this)) return false;
	const auto OldI = F.Submit();
	FGuid NewI;
	const auto Listener = F.Intent->OnIntentResolved.AddLambda([&](const FPokemonIntentSequence& Result)
	{
		if (Result.IntentId == OldI) NewI = F.Submit();
	});
	F.Probe->Ability->Finish();
	F.Intent->OnIntentResolved.Remove(Listener);
	TestTrue(TEXT("Listener accepted new attack"), NewI.IsValid() && NewI != OldI);
	TestEqual(TEXT("New activation occurs once"), F.Probe->Activations, 2);
	TestEqual(TEXT("New intent survives old stack unwind"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Running);
	TestTrue(TEXT("New ability survives old cleanup"), F.Probe->Ability->IsActive());
	TestEqual(TEXT("New target survives"), F.Command->GetCommandTarget().TargetLocation, F.Target.TargetLocation);
	F.Probe->Ability->Finish();
	TestEqual(TEXT("Each intent completed once"), F.IntentResults, 2);
	return true;
}

ATTACK_TEST(DeferredAbilityEnd)
{
	FFixture F; if (!F.Init(*this)) return false;
	F.Submit();
	F.Probe->Ability->WithAbilityScopeLock([&]
	{
		F.Probe->Ability->Finish();
		TestEqual(TEXT("Result waits for GAS scope unlock"), F.CommandResults, 0);
	});
	F.AssertResolved(*this, EPokemonIntentSequenceState::Succeeded, TEXT("Missed"));
	return true;
}

ATTACK_TEST(CancellationWaitsForDeferredCleanup)
{
	FFixture F; if (!F.Init(*this)) return false;
	const auto I = F.Submit();
	F.Probe->Ability->WithAbilityScopeLock([&]
	{
		TestFalse(TEXT("Replacement waits for GAS scope unlock"), F.Intent->SubmitMoveToIntent(F.Target.TargetLocation).IsValid());
		TestEqual(TEXT("Rejected replacement preserves parent"), F.Intent->GetCurrentSequence().IntentId, I);
		TestTrue(TEXT("Explicit cancellation accepted"), F.Intent->CancelIntent(I, TEXT("DeferredCancel")));
		TestEqual(TEXT("Command result waits for old tasks"), F.CommandResults, 0);
		TestFalse(TEXT("New attack barred during deferred cancellation"), F.Submit().IsValid());
	});
	F.AssertResolved(*this, EPokemonIntentSequenceState::Interrupted, TEXT("Interrupted"));
	TestTrue(TEXT("New attack accepted after cleanup"), F.Submit().IsValid());
	F.Probe->Ability->Finish();
	return true;
}

#undef ATTACK_TEST
#endif

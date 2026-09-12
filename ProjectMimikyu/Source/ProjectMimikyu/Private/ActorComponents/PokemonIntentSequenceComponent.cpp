#include "ActorComponents/PokemonIntentSequenceComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "HAL/IConsoleManager.h"
#include "Intent/PokemonNavigateToLocationAction.h"
#include "Intent/PokemonAttackExecutionAction.h"
#include "Intent/PokemonCombatApproachAction.h"

namespace
{
	TAutoConsoleVariable<int32> CVarPokemonIntentDebug(TEXT("pokemon.Intent.Debug"), 0,
		TEXT("Log Pokemon intent/action lifecycle events."), ECVF_Cheat);
}

UPokemonIntentSequenceComponent::UPokemonIntentSequenceComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UPokemonIntentSequenceComponent::IsRunningAttackExecutionForCommand(FGuid CommandId) const
{
	if (!CommandId.IsValid() || CurrentSequence.State != EPokemonIntentSequenceState::Running 
		|| CurrentSequence.Type != EPokemonIntentType::Attack || CurrentSequence.AttackCommandId != CommandId
		|| !CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex))
	{
		return false;
	}

	const FPokemonIntentActionRecord& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];
	
	return Action.Spec.Type == EPokemonIntentActionType::AttackExecution
		&& Action.State == EPokemonIntentActionState::Running
		&& Action.ExecutorRequestId == CommandId;
}

void UPokemonIntentSequenceComponent::BeginPlay()
{
	Super::BeginPlay();
	Navigation = GetOwner()->FindComponentByClass<UPokemonNavigationComponent>();
	Command = GetOwner()->FindComponentByClass<UPokemonCommandComponent>();
}

void UPokemonIntentSequenceComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	bEndingPlay = true;
	CancelIntent(CurrentSequence.IntentId, TEXT("OwnerEndPlay"));
	UnbindExecutor();
	Super::EndPlay(EndPlayReason);
}

FGuid UPokemonIntentSequenceComponent::SubmitMoveToIntent(const FVector& Destination, bool bAllowSpecialTraversal)
{
	FPokemonIntentActionSpec Spec;
	Spec.Destination = Destination;
	Spec.bAllowSpecialTraversal = bAllowSpecialTraversal;
	return SubmitSequence({ Spec });
}

FGuid UPokemonIntentSequenceComponent::SubmitAttackIntent(int32 MoveIndex, const FPokemonCommandTarget& CommandTarget)
{
	if (!Command.IsValid())
	{
		return FGuid();
	}

	FName Reason;

	UPokemonMoveDataAsset* Move = Command->ResolveMoveAtIndex(MoveIndex, Reason);

	if (!Move)
	{
		return FGuid();
	}

	FPokemonIntentActionSpec ApproachSpec;

	ApproachSpec.Type = EPokemonIntentActionType::CombatApproach;

	ApproachSpec.AttackMove = Move;
	ApproachSpec.CommandTarget = CommandTarget;


	FPokemonIntentActionSpec ExecutionSpec;

	ExecutionSpec.Type = EPokemonIntentActionType::AttackExecution;

	ExecutionSpec.AttackMove = Move;
	ExecutionSpec.CommandTarget = CommandTarget;


	return SubmitSequence({ ApproachSpec,ExecutionSpec }, EPokemonIntentType::Attack);
}

FGuid UPokemonIntentSequenceComponent::SubmitSequence(const TArray<FPokemonIntentActionSpec>& Specs, EPokemonIntentType Type)
{
	const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());

	if (bEndingPlay || !Pokemon || !Pokemon->HasAuthority() || !Pokemon->CanAct() || Specs.IsEmpty()
		|| (Command.IsValid() && Command->IsSequencedExecutionEnding()))
	{
		return FGuid();
	}

	for (const FPokemonIntentActionSpec& Spec : Specs)
	{
		if (Spec.Type == EPokemonIntentActionType::NavigateToLocation)
		{
			if (Spec.Destination.ContainsNaN())
			{
				return FGuid();
			}
		}

		FGuid ReplaceableCommandId;

		if (CurrentSequence.State == EPokemonIntentSequenceState::Running && CurrentSequence.Type == EPokemonIntentType::Attack)
		{
			ReplaceableCommandId = CurrentSequence.AttackCommandId;
		}

		if (Spec.Type == EPokemonIntentActionType::AttackExecution || Spec.Type == EPokemonIntentActionType::CombatApproach)
		{
			const FName Rejection = Command.IsValid() ? Command->ValidateSequencedCommand(Spec.AttackMove, Spec.CommandTarget, ReplaceableCommandId) : FName(TEXT("CommandComponentUnavailable"));
			
			if (!Rejection.IsNone())
			{
				UE_LOG(LogTemp, Display, TEXT("[PokemonIntent] Attack rejected Reason=%s"), *Rejection.ToString());
				return FGuid();
			}
		}
	}

	if (CurrentSequence.State == EPokemonIntentSequenceState::Running)
	{
		const uint64 ExpectedMutation = IntentMutationSerial + 1;
		CancelIntent(CurrentSequence.IntentId, TEXT("ParentReplaced"));
		if (IntentMutationSerial != ExpectedMutation || bEndingPlay
			|| (Command.IsValid() && Command->IsSequencedExecutionEnding()))
		{
			return FGuid(); // A synchronous terminal listener submitted a newer intent.
		}
	}

	++IntentMutationSerial;
	CurrentSequence = FPokemonIntentSequence();
	CurrentSequence.IntentId = FGuid::NewGuid();
	CurrentSequence.Type = Type;
	CurrentSequence.State = EPokemonIntentSequenceState::Running;
	CurrentSequence.ActiveActionIndex = 0;

	for (const FPokemonIntentActionSpec& Spec : Specs)
	{
		FPokemonIntentActionRecord& Action = CurrentSequence.Actions.AddDefaulted_GetRef();
		Action.ActionId = FGuid::NewGuid();
		Action.Spec = Spec;
	}

	const FGuid SubmittedIntentId = CurrentSequence.IntentId;

	if (Type == EPokemonIntentType::Attack)
	{
		const FPokemonIntentActionSpec* ExecutionSpec = Specs.FindByPredicate(
			[](const FPokemonIntentActionSpec& Spec)
			{
				return Spec.Type == EPokemonIntentActionType::AttackExecution;
			}
		);

		if (!ExecutionSpec)
		{
			ApplyActionResult(EPokemonIntentActionState::Failed, TEXT("AttackExecutionActionMissing"), TEXT("ActivationFailed"));

			return SubmittedIntentId;
		}


		const FPokemonTrainerCommandSubmission Submission = FPokemonAttackExecutionAction::Reserve(Command.Get(), *ExecutionSpec, CurrentSequence.IntentId);

		if (!Submission.IsAccepted())
		{
			ApplyActionResult(EPokemonIntentActionState::Failed, Submission.Reason, TEXT("ActivationFailed"));
			return SubmittedIntentId;
		}

		CurrentSequence.AttackCommandId = Submission.CommandId;
	}

	LogEvent(TEXT("Parent"));
	StartActiveAction();

	return SubmittedIntentId;
}

bool UPokemonIntentSequenceComponent::CancelIntent(FGuid OwnedIntentId, FName Reason)
{
	if (!GetOwner()->HasAuthority() || !OwnedIntentId.IsValid() || OwnedIntentId != CurrentSequence.IntentId
		|| CurrentSequence.State != EPokemonIntentSequenceState::Running)
	{
		return false;
	}

	++IntentMutationSerial;

	// Retire sequence ownership and detach before cancellation can synchronously report.
	UnbindExecutor();
	Reason = Reason.IsNone() ? FName(TEXT("IntentCancelled")) : Reason;
	FPokemonIntentActionRecord& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];

	Action.State = EPokemonIntentActionState::Interrupted;
	Action.Outcome = Action.Spec.Type == EPokemonIntentActionType::AttackExecution ? FName(TEXT("Interrupted")) : NAME_None;
	Action.Reason = Reason;

	CurrentSequence.State = EPokemonIntentSequenceState::Interrupted;
	CurrentSequence.Reason = Reason;
	CurrentSequence.Outcome = Action.Outcome;

	const FPokemonIntentSequence ResolvedSequence = CurrentSequence;
	const FGuid OwnedRequestId = Action.ExecutorRequestId;
	const EPokemonIntentActionType Type = Action.Spec.Type;

	LogEvent(TEXT("ActionResult"));
	LogEvent(TEXT("Interrupted"));
	CancelExecutor(Type, OwnedRequestId, Reason);

	if(CurrentSequence.Type==EPokemonIntentType::Attack&&Type!=EPokemonIntentActionType::AttackExecution&&CurrentSequence.AttackCommandId.IsValid())
	{
		Command->CancelSequencedCommand(CurrentSequence.AttackCommandId, Reason);
	}

	OnIntentResolved.Broadcast(ResolvedSequence);
	return true;
}

void UPokemonIntentSequenceComponent::StartActiveAction()
{
	switch (CurrentSequence.Actions[CurrentSequence.ActiveActionIndex].Spec.Type)
	{
	case EPokemonIntentActionType::NavigateToLocation:
		StartNavigateAction();
		break;
	case EPokemonIntentActionType::CombatApproach:
		StartCombatApproachAction();
		break;
	case EPokemonIntentActionType::AttackExecution:
		StartAttackAction();
		break;
	}
}

void UPokemonIntentSequenceComponent::StartCombatApproachAction()
{
	check(CurrentSequence.State == EPokemonIntentSequenceState::Running);
	check(CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex));

	const FGuid IntentId = CurrentSequence.IntentId;

	const FGuid ActionId = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex].ActionId;

	const FPokemonIntentActionSpec Spec = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex].Spec;

	UnbindExecutor();

	if (UPokemonNavigationComponent* Nav = Navigation.Get())
	{
		NavigationResultHandle = Nav->OnNavigationResolved.AddWeakLambda(this,
			[this, IntentId, ActionId](FGuid RequestId, EPokemonNavigationResolution Result, FName Reason)
			{
				HandleNavigationResolved(IntentId, ActionId,EPokemonIntentActionType::CombatApproach, RequestId, Result, Reason);
			});
	}

	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());

	const FPokemonNavigationSubmission Submission = FPokemonCombatApproachAction::Start(Pokemon, Navigation.Get(), Spec, CurrentSequence.AttackCommandId);

	//
	// Starting navigation can synchronously retire
	// another executor whose listener replaces us.
	//
	if (CurrentSequence.IntentId != IntentId || CurrentSequence.State != EPokemonIntentSequenceState::Running
		|| !CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex)
		|| CurrentSequence.Actions[CurrentSequence.ActiveActionIndex].ActionId != ActionId)
	{
		FPokemonCombatApproachAction::Cancel( Navigation.Get(), Submission.RequestId, TEXT("ParentReplaced"));
		return;
	}

	FPokemonIntentActionRecord& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];

	if (!Submission.IsAccepted())
	{
		Command->CancelSequencedCommand(CurrentSequence.AttackCommandId, Submission.Reason);

		ApplyActionResult(EPokemonIntentActionState::Failed, Submission.Reason);

		return;
	}
	Action.ExecutorRequestId = Submission.RequestId;

	Action.State = EPokemonIntentActionState::Running;

	LogEvent(TEXT("ActionStart"));
}

void UPokemonIntentSequenceComponent::CancelExecutor(EPokemonIntentActionType Type, FGuid RequestId, FName Reason)
{
	switch (Type)
	{
	case EPokemonIntentActionType::NavigateToLocation:
		FPokemonNavigateToLocationAction::Cancel(Navigation.Get(), RequestId, Reason); 
		break;
	case EPokemonIntentActionType::AttackExecution:
		FPokemonAttackExecutionAction::Cancel(Command.Get(), RequestId, Reason);
		break;
	case EPokemonIntentActionType::CombatApproach:
		FPokemonCombatApproachAction::Cancel(Navigation.Get(), RequestId, Reason);
		break;
	}
}

void UPokemonIntentSequenceComponent::StartAttackAction()
{
	const FGuid IntentId = CurrentSequence.IntentId;

	FPokemonIntentActionRecord& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];

	const FGuid ActionId = Action.ActionId;

	const FGuid CommandId = CurrentSequence.AttackCommandId;

	UnbindExecutor();

	if (!Command.IsValid() || !CommandId.IsValid() || !Command->IsSequencedCommand(CommandId))
	{
		ApplyActionResult(EPokemonIntentActionState::Failed, TEXT("AttackCommandReservationLost"), TEXT("ActivationFailed"));
		return;
	}

	CommandResultHandle = Command->OnTrainerCommandResolved.AddWeakLambda(this,
		[this, IntentId, ActionId](FGuid ResolvedCommandId, EPokemonAttackExecutionOutcome Outcome, FName Reason)
		{
			HandleCommandResolved(IntentId, ActionId, ResolvedCommandId, Outcome, Reason);
		});

	Action.ExecutorRequestId = CommandId;

	Action.State = EPokemonIntentActionState::Running;

	LogEvent(TEXT("ActionStart"));

	// Adopt BEFORE activation: native/Blueprint GAS can synchronously finish here.
	FPokemonAttackExecutionAction::Execute(Command.Get(), CommandId);
}

void UPokemonIntentSequenceComponent::StartNavigateAction()
{
	check(CurrentSequence.State == EPokemonIntentSequenceState::Running);
	check(CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex));

	const FGuid IntentId = CurrentSequence.IntentId;
	const FGuid ActionId = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex].ActionId;
	const FPokemonIntentActionSpec Spec = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex].Spec;

	UnbindExecutor();

	if (UPokemonNavigationComponent* Nav = Navigation.Get())
	{
		NavigationResultHandle = Nav->OnNavigationResolved.AddWeakLambda(this,
			[this, IntentId, ActionId](FGuid RequestId, EPokemonNavigationResolution Result, FName Reason)
			{
				HandleNavigationResolved(IntentId, ActionId, EPokemonIntentActionType::NavigateToLocation, RequestId, Result, Reason);
			});
	}

	const FPokemonNavigationSubmission Submission = FPokemonNavigateToLocationAction::Start(Navigation.Get(), Spec);

	if (CurrentSequence.IntentId != IntentId || CurrentSequence.State != EPokemonIntentSequenceState::Running
		|| !CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex)
		|| CurrentSequence.Actions[CurrentSequence.ActiveActionIndex].ActionId != ActionId)
	{
		// Submission may retire an external request whose listener replaces this intent.
		FPokemonNavigateToLocationAction::Cancel(Navigation.Get(), Submission.RequestId, TEXT("ParentReplaced"));
		return;
	}

	FPokemonIntentActionRecord& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];

	if (!Submission.IsAccepted())
	{
		// A rejected submission is terminal without an executor; a retained partial path is accepted.
		ApplyActionResult(EPokemonIntentActionState::Failed, Submission.Reason);
		return;
	}

	Action.ExecutorRequestId = Submission.RequestId;
	Action.State = EPokemonIntentActionState::Running;
	LogEvent(TEXT("ActionStart"));
}

void UPokemonIntentSequenceComponent::HandleNavigationResolved(FGuid ExpectedIntentId, FGuid ExpectedActionId, EPokemonIntentActionType ExpectedType,
	FGuid RequestId, EPokemonNavigationResolution Result, FName Reason)
{
	if (!OwnsRunningAction(ExpectedIntentId, ExpectedActionId, RequestId, ExpectedType))
	{
		return;
	}

	switch (Result)
	{
	case EPokemonNavigationResolution::Succeeded:
		ApplyActionResult(EPokemonIntentActionState::Succeeded, Reason);
		break;
	case EPokemonNavigationResolution::Failed:
		
		if (ExpectedType == EPokemonIntentActionType::CombatApproach)
		{
			Command->CancelSequencedCommand(CurrentSequence.AttackCommandId, Reason);
		}

		ApplyActionResult(EPokemonIntentActionState::Failed, Reason);
		break;
	case EPokemonNavigationResolution::Interrupted:

		if (ExpectedType == EPokemonIntentActionType::CombatApproach)
		{
			Command->CancelSequencedCommand(CurrentSequence.AttackCommandId, Reason);
		}

		ApplyActionResult(EPokemonIntentActionState::Interrupted, Reason);
		break;
	}
}

bool UPokemonIntentSequenceComponent::OwnsRunningAction(FGuid IntentId, FGuid ActionId, FGuid ExecutorId, EPokemonIntentActionType Type) const
{
	if (CurrentSequence.State != EPokemonIntentSequenceState::Running || CurrentSequence.IntentId != IntentId
		|| !CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex)) return false;
	const auto& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];
	return Action.ActionId == ActionId && Action.Spec.Type == Type && Action.State == EPokemonIntentActionState::Running
		&& ExecutorId.IsValid() && Action.ExecutorRequestId == ExecutorId;
}

void UPokemonIntentSequenceComponent::HandleCommandResolved(FGuid ExpectedIntentId, FGuid ExpectedActionId,
	FGuid CommandId, EPokemonAttackExecutionOutcome Outcome, FName Reason)
{
	if (!OwnsRunningAction(ExpectedIntentId, ExpectedActionId, CommandId, EPokemonIntentActionType::AttackExecution)) return;

	switch (Outcome)
	{
	case EPokemonAttackExecutionOutcome::Connected:
	case EPokemonAttackExecutionOutcome::Missed:
		ApplyActionResult(EPokemonIntentActionState::Succeeded, Reason, PokemonAttackOutcomeName(Outcome));
		break;
	case EPokemonAttackExecutionOutcome::Interrupted:
		ApplyActionResult(EPokemonIntentActionState::Interrupted, Reason, PokemonAttackOutcomeName(Outcome));
		break;
	case EPokemonAttackExecutionOutcome::ActivationFailed:
		ApplyActionResult(EPokemonIntentActionState::Failed, Reason, PokemonAttackOutcomeName(Outcome));
		break;
	case EPokemonAttackExecutionOutcome::None:
		break;
	}
}

void UPokemonIntentSequenceComponent::ApplyActionResult(EPokemonIntentActionState Result, FName Reason, FName Outcome)
{
	UnbindExecutor();
	FPokemonIntentActionRecord& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];
	Action.State = Result;
	Action.Reason = Reason;
	Action.Outcome = Outcome;
	CurrentSequence.Outcome = Outcome;
	LogEvent(TEXT("ActionResult"));
	if (Result == EPokemonIntentActionState::Succeeded)
	{
		++CurrentSequence.ActiveActionIndex;
		if (CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex))
		{
			LogEvent(TEXT("Advance"));
			StartActiveAction();
		}
		else
		{
			FinishSequence(EPokemonIntentSequenceState::Succeeded, Reason);
		}
	}
	else
	{
		FinishSequence(Result == EPokemonIntentActionState::Failed
			? EPokemonIntentSequenceState::Failed : EPokemonIntentSequenceState::Interrupted, Reason);
	}
}

void UPokemonIntentSequenceComponent::FinishSequence(EPokemonIntentSequenceState Result, FName Reason)
{
	++IntentMutationSerial;
	CurrentSequence.State = Result;
	CurrentSequence.Reason = Reason;
	LogEvent(Result == EPokemonIntentSequenceState::Succeeded ? TEXT("Complete")
		: Result == EPokemonIntentSequenceState::Failed ? TEXT("Failed") : TEXT("Interrupted"));
	const FPokemonIntentSequence ResolvedSequence = CurrentSequence;
	OnIntentResolved.Broadcast(ResolvedSequence);
}

void UPokemonIntentSequenceComponent::UnbindExecutor()
{
	if (UPokemonNavigationComponent* Nav = Navigation.Get())
	{
		Nav->OnNavigationResolved.Remove(NavigationResultHandle);
	}
	NavigationResultHandle.Reset();
	if (Command.IsValid()) Command->OnTrainerCommandResolved.Remove(CommandResultHandle);
	CommandResultHandle.Reset();
}

void UPokemonIntentSequenceComponent::LogEvent(const TCHAR* Event) const
{
	if (CVarPokemonIntentDebug.GetValueOnGameThread() == 0 || CurrentSequence.Actions.IsEmpty()) return;
	const int32 Index = FMath::Min(CurrentSequence.ActiveActionIndex, CurrentSequence.Actions.Num() - 1);
	const FPokemonIntentActionRecord& Action = CurrentSequence.Actions[Index];
	UE_LOG(LogTemp, Log, TEXT("[PokemonIntent] %s IntentId=%s ActionId=%s ActionIndex=%d ActionType=%s ActionState=%s ExecutorRequestId=%s AttackCommandId=%s SequenceState=%s Reason=%s Type=%s Outcome=%s"),
		Event, *CurrentSequence.IntentId.ToString(), *Action.ActionId.ToString(), Index,
		*StaticEnum<EPokemonIntentActionType>()->GetNameStringByValue(static_cast<int64>(Action.Spec.Type)),
		*StaticEnum<EPokemonIntentActionState>()->GetNameStringByValue(static_cast<int64>(Action.State)),
		*Action.ExecutorRequestId.ToString(),
		*CurrentSequence.AttackCommandId.ToString(),
		*StaticEnum<EPokemonIntentSequenceState>()->GetNameStringByValue(static_cast<int64>(CurrentSequence.State)),
		*Action.Reason.ToString(), *StaticEnum<EPokemonIntentType>()->GetNameStringByValue(static_cast<int64>(CurrentSequence.Type)),
		*Action.Outcome.ToString());
}

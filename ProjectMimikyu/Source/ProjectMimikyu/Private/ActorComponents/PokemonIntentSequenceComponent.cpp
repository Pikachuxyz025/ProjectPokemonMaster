#include "ActorComponents/PokemonIntentSequenceComponent.h"

#include "ActorComponents/PokemonNavigationComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "HAL/IConsoleManager.h"
#include "Intent/PokemonNavigateToLocationAction.h"

namespace
{
	TAutoConsoleVariable<int32> CVarPokemonIntentDebug(TEXT("pokemon.Intent.Debug"), 0,
		TEXT("Log Pokemon intent/action lifecycle events."), ECVF_Cheat);
}

UPokemonIntentSequenceComponent::UPokemonIntentSequenceComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPokemonIntentSequenceComponent::BeginPlay()
{
	Super::BeginPlay();
	Navigation = GetOwner()->FindComponentByClass<UPokemonNavigationComponent>();
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

FGuid UPokemonIntentSequenceComponent::SubmitSequence(const TArray<FPokemonIntentActionSpec>& Specs)
{
	const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());
	if (bEndingPlay || !Pokemon || !Pokemon->HasAuthority() || !Pokemon->CanAct() || Specs.IsEmpty())
	{
		return FGuid();
	}
	for (const FPokemonIntentActionSpec& Spec : Specs)
	{
		if (Spec.Type != EPokemonIntentActionType::NavigateToLocation || Spec.Destination.ContainsNaN())
		{
			return FGuid();
		}
	}

	if (CurrentSequence.State == EPokemonIntentSequenceState::Running)
	{
		const uint64 ExpectedMutation = IntentMutationSerial + 1;
		CancelIntent(CurrentSequence.IntentId, TEXT("ParentReplaced"));
		if (IntentMutationSerial != ExpectedMutation || bEndingPlay)
		{
			return FGuid(); // A synchronous terminal listener submitted a newer intent.
		}
	}

	++IntentMutationSerial;
	CurrentSequence = FPokemonIntentSequence();
	CurrentSequence.IntentId = FGuid::NewGuid();
	CurrentSequence.State = EPokemonIntentSequenceState::Running;
	CurrentSequence.ActiveActionIndex = 0;
	for (const FPokemonIntentActionSpec& Spec : Specs)
	{
		FPokemonIntentActionRecord& Action = CurrentSequence.Actions.AddDefaulted_GetRef();
		Action.ActionId = FGuid::NewGuid();
		Action.Spec = Spec;
	}
	const FGuid SubmittedIntentId = CurrentSequence.IntentId;
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
	Action.Reason = Reason;
	CurrentSequence.State = EPokemonIntentSequenceState::Interrupted;
	CurrentSequence.Reason = Reason;
	const FPokemonIntentSequence ResolvedSequence = CurrentSequence;
	const FGuid OwnedRequestId = Action.ExecutorRequestId;
	LogEvent(TEXT("ActionResult"));
	LogEvent(TEXT("Interrupted"));
	FPokemonNavigateToLocationAction::Cancel(Navigation.Get(), OwnedRequestId, Reason);
	OnIntentResolved.Broadcast(ResolvedSequence);
	return true;
}

void UPokemonIntentSequenceComponent::StartActiveAction()
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
				HandleNavigationResolved(IntentId, ActionId, RequestId, Result, Reason);
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

void UPokemonIntentSequenceComponent::HandleNavigationResolved(FGuid ExpectedIntentId, FGuid ExpectedActionId,
	FGuid RequestId, EPokemonNavigationResolution Result, FName Reason)
{
	if (CurrentSequence.State != EPokemonIntentSequenceState::Running || CurrentSequence.IntentId != ExpectedIntentId
		|| !CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex))
	{
		return;
	}
	const FPokemonIntentActionRecord& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];
	if (Action.ActionId != ExpectedActionId || Action.State != EPokemonIntentActionState::Running
		|| !RequestId.IsValid() || Action.ExecutorRequestId != RequestId)
	{
		return;
	}
	switch (Result)
	{
	case EPokemonNavigationResolution::Succeeded: ApplyActionResult(EPokemonIntentActionState::Succeeded, Reason); break;
	case EPokemonNavigationResolution::Failed: ApplyActionResult(EPokemonIntentActionState::Failed, Reason); break;
	case EPokemonNavigationResolution::Interrupted: ApplyActionResult(EPokemonIntentActionState::Interrupted, Reason); break;
	}
}

void UPokemonIntentSequenceComponent::ApplyActionResult(EPokemonIntentActionState Result, FName Reason)
{
	UnbindExecutor();
	FPokemonIntentActionRecord& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];
	Action.State = Result;
	Action.Reason = Reason;
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
}

void UPokemonIntentSequenceComponent::LogEvent(const TCHAR* Event) const
{
	if (CVarPokemonIntentDebug.GetValueOnGameThread() == 0 || CurrentSequence.Actions.IsEmpty()) return;
	const int32 Index = FMath::Min(CurrentSequence.ActiveActionIndex, CurrentSequence.Actions.Num() - 1);
	const FPokemonIntentActionRecord& Action = CurrentSequence.Actions[Index];
	UE_LOG(LogTemp, Log, TEXT("[PokemonIntent] %s IntentId=%s ActionId=%s ActionIndex=%d ActionType=%s ActionState=%s ExecutorRequestId=%s SequenceState=%s Reason=%s"),
		Event, *CurrentSequence.IntentId.ToString(), *Action.ActionId.ToString(), Index,
		*StaticEnum<EPokemonIntentActionType>()->GetNameStringByValue(static_cast<int64>(Action.Spec.Type)),
		*StaticEnum<EPokemonIntentActionState>()->GetNameStringByValue(static_cast<int64>(Action.State)),
		*Action.ExecutorRequestId.ToString(),
		*StaticEnum<EPokemonIntentSequenceState>()->GetNameStringByValue(static_cast<int64>(CurrentSequence.State)),
		*Action.Reason.ToString());
}

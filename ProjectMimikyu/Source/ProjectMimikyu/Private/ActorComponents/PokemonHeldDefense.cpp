#include "ActorComponents/PokemonIntentSequenceComponent.h"

#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonFieldPresenceComponent.h"
#include "ActorComponents/PokemonJumpExecutionComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Characters/TrainerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HAL/IConsoleManager.h"
#include "TimerManager.h"

namespace
{
#if !UE_BUILD_SHIPPING && !UE_BUILD_TEST
	TAutoConsoleVariable<int32> CVarHeldDefenseAuthorization(
		TEXT("pokemon.Defense.AuthorizationPrototype"), 0,
		TEXT("Development: bind held dodge to a retained trainer MoveTo. Authorization only."), ECVF_Cheat);
#endif

	bool HasCurrentTrainer(const APokemon_Parent* Pokemon, const AActor* Trainer)
	{
		const ATrainerCharacter* TrainerCharacter = Cast<ATrainerCharacter>(Trainer);
		return IsValid(Pokemon) && IsValid(TrainerCharacter)
			&& !Pokemon->IsActorBeingDestroyed() && !TrainerCharacter->IsActorBeingDestroyed()
			&& TrainerCharacter->GetCurrentPokemon() == Pokemon && Pokemon->IsOwnedByTrainer(Trainer);
	}

	bool IsBeingRemoved(const APokemon_Parent& Pokemon)
	{
		const auto* Presence = Pokemon.FindComponentByClass<UPokemonFieldPresenceComponent>();
		return Presence && Presence->IsPreparedForFieldRemoval();
	}

	FName GetSuspensionReason(const APokemon_Parent& Pokemon, const UPokemonNavigationComponent& Navigation)
	{
		const auto* Jump = Pokemon.GetJumpExecutionComponent();
		if (Jump && Jump->IsBusy())
		{
			return TEXT("JumpOwnsMovement");
		}
		const auto* Movement = Pokemon.GetCharacterMovement();
		if (!Movement || !Movement->IsActive() || !Movement->IsMovingOnGround()
			|| Movement->HasAnimRootMotion() || Movement->HasRootMotionSources()
			|| !Movement->PendingLaunchVelocity.IsZero() || Pokemon.GetIsDodging())
		{
			return TEXT("UnsupportedMovementOwner");
		}
		if (Navigation.IsNavigationSuspended() || Navigation.IsCompositeFailureHeld() || !Pokemon.CanAct())
		{
			return TEXT("MovementSuspended");
		}
		return NAME_None;
	}
}

bool UPokemonIntentSequenceComponent::IsHeldDefensePrototypeEnabled()
{
#if !UE_BUILD_SHIPPING && !UE_BUILD_TEST
	return CVarHeldDefenseAuthorization.GetValueOnGameThread() != 0;
#else
	return false;
#endif
}

bool UPokemonIntentSequenceComponent::HasRunningMoveToAction() const
{
	if (CurrentSequence.Type != EPokemonIntentType::MoveTo || !CurrentSequence.IntentId.IsValid()
		|| !CurrentSequence.Actions.IsValidIndex(CurrentSequence.ActiveActionIndex)
		|| !Navigation.IsValid() || !Navigation->IsCompositePlayerMove())
	{
		return false;
	}
	const auto& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];
	const auto& Request = Navigation->GetCurrentNavigationIntent();
	return Action.ActionId.IsValid()
		&& OwnsRunningAction(CurrentSequence.IntentId, Action.ActionId, Request.RequestId, EPokemonIntentActionType::NavigateToLocation);
}

bool UPokemonIntentSequenceComponent::BeginHeldDefense(AActor* Trainer, int32 Activation, int32 Revision, FName& OutReason)
{
	OutReason = NAME_None;
	auto* Pokemon = Cast<APokemon_Parent>(GetOwner());
	if (!IsHeldDefensePrototypeEnabled() || bEndingPlay || !Pokemon || !Pokemon->HasAuthority()
		|| !HasCurrentTrainer(Pokemon, Trainer) || Activation <= 0 || Revision <= 0)
	{
		OutReason = TEXT("InvalidDefensePress");
		return false;
	}

	if (HeldDefense.IsHeld())
	{
		RefreshHeldDefense();
		if (HeldDefense.IsHeld() && HeldDefense.Trainer == Trainer && HeldDefense.InputActivation == Activation
			&& HeldDefense.InputRevision == Revision)
		{
			return true; // A retransmission observes the original binding.
		}
	}
	if (LastDefenseInputTrainer.Get() != Trainer)
	{
		LastDefenseInputTrainer = Trainer;
		LastDefenseActivation = 0;
		LastDefenseRevision = 0;
	}
	if (Activation <= LastDefenseActivation || Revision <= LastDefenseRevision)
	{
		OutReason = TEXT("StaleDefensePress");
		return false;
	}

	// A valid owner's edge is spent even when no MoveTo exists. It cannot be
	// replayed later to acquire a new action.
	LastDefenseActivation = Activation;
	LastDefenseRevision = Revision;
	if (HeldDefense.IsHeld())
	{
		OutReason = TEXT("DefenseAlreadyHeld");
		return false;
	}
	HeldDefense = FPokemonHeldDefenseSession();
	HeldDefense.Trainer = Trainer;
	HeldDefense.Pokemon = Pokemon;
	HeldDefense.InputActivation = Activation;
	HeldDefense.InputRevision = Revision;

	if (!Command.IsValid() || Command->IsCommandActive() || !Pokemon->CanAct() || IsBeingRemoved(*Pokemon))
	{
		OutReason = TEXT("OwnerUnavailable");
	}
	else if (!HasRunningMoveToAction())
	{
		OutReason = TEXT("NoRunningMoveTo");
	}
	if (!OutReason.IsNone())
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Rejected, OutReason);
		return false;
	}

	const auto& Action = CurrentSequence.Actions[CurrentSequence.ActiveActionIndex];
	const auto& Request = Navigation->GetCurrentNavigationIntent();
	HeldDefense.IntentId = CurrentSequence.IntentId;
	HeldDefense.ActionId = Action.ActionId;
	HeldDefense.NavigationRequestId = Request.RequestId;
	HeldDefense.Destination = Request.TargetLocation;
	const FName Suspension = GetSuspensionReason(*Pokemon, *Navigation.Get());
	SetHeldDefenseState(Suspension.IsNone() ? EPokemonHeldDefenseState::Requested : EPokemonHeldDefenseState::Suspended, Suspension);

	// Observe changing movement ownership only while a request is held. Terminal
	// cancellation/arrival is synchronous in the sequence lifecycle.
	const FGuid BoundAction = Action.ActionId;
	const TWeakObjectPtr<AActor> BoundTrainer(Trainer);
	FTimerDelegate Observe = FTimerDelegate::CreateWeakLambda(this, [this, Activation, BoundAction, BoundTrainer]()
	{
		if (HeldDefense.IsHeld() && HeldDefense.ActionId == BoundAction && HeldDefense.InputActivation == Activation
			&& HeldDefense.Trainer == BoundTrainer.Get())
		{
			RefreshHeldDefense();
		}
	});
	GetWorld()->GetTimerManager().SetTimer(HeldDefenseObservationTimer, Observe, 0.05f, true);
	return true;
}

bool UPokemonIntentSequenceComponent::ReleaseHeldDefense(AActor* Trainer, int32 Activation, int32 Revision, FName Reason)
{
	if (!GetOwner()->HasAuthority() || !Trainer || HeldDefense.Trainer != Trainer
		|| HeldDefense.InputActivation != Activation)
	{
		return false;
	}
	if (HeldDefense.State == EPokemonHeldDefenseState::Released && Revision == HeldDefense.InputRevision)
	{
		return true;
	}
	if (!HeldDefense.IsHeld() || Revision <= HeldDefense.InputRevision)
	{
		return false;
	}
	HeldDefense.InputRevision = Revision;
	LastDefenseRevision = FMath::Max(LastDefenseRevision, Revision);
	SetHeldDefenseState(EPokemonHeldDefenseState::Released, Reason);
	return true;
}

void UPokemonIntentSequenceComponent::RevokeHeldDefense(FName Reason)
{
	if (HeldDefense.IsHeld() && GetOwner()->HasAuthority())
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Revoked, Reason);
	}
}

void UPokemonIntentSequenceComponent::RefreshHeldDefense()
{
	if (!HeldDefense.IsHeld() || !GetOwner()->HasAuthority())
	{
		return;
	}
	const APokemon_Parent* Pokemon = HeldDefense.Pokemon;
	if (!IsHeldDefensePrototypeEnabled() || bEndingPlay || !HasCurrentTrainer(Pokemon, HeldDefense.Trainer)
		|| IsBeingRemoved(*Pokemon) || Pokemon->IsIncapacitated()
		|| !Command.IsValid() || Command->IsCommandActive())
	{
		RevokeHeldDefense(TEXT("OwnerUnavailable"));
		return;
	}
	if (!HasRunningMoveToAction() || !OwnsRunningAction(HeldDefense.IntentId, HeldDefense.ActionId,
		HeldDefense.NavigationRequestId, EPokemonIntentActionType::NavigateToLocation))
	{
		RevokeHeldDefense(TEXT("MoveToRetired"));
		return;
	}
	const FName Reason = GetSuspensionReason(*Pokemon, *Navigation.Get());
	SetHeldDefenseState(Reason.IsNone() ? EPokemonHeldDefenseState::Requested : EPokemonHeldDefenseState::Suspended, Reason);
}

void UPokemonIntentSequenceComponent::SetHeldDefenseState(EPokemonHeldDefenseState State, FName Reason)
{
	if (HeldDefense.State == State && HeldDefense.Reason == Reason)
	{
		return;
	}
	HeldDefense.State = State;
	HeldDefense.Reason = Reason;
	++HeldDefense.ServerRevision;
	if (!HeldDefense.IsHeld() && GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(HeldDefenseObservationTimer);
	}
	UE_LOG(LogTemp, Display, TEXT("[HeldDefense] Pokemon=%s Trainer=%s Activation=%d InputRevision=%d ServerRevision=%d State=%s I=%s A=%s N=%s Destination=%s Reason=%s ServiceActive=0"),
		*GetNameSafe(HeldDefense.Pokemon), *GetNameSafe(HeldDefense.Trainer), HeldDefense.InputActivation,
		HeldDefense.InputRevision, HeldDefense.ServerRevision, *StaticEnum<EPokemonHeldDefenseState>()->GetNameStringByValue(static_cast<int64>(State)),
		*HeldDefense.IntentId.ToString(), *HeldDefense.ActionId.ToString(), *HeldDefense.NavigationRequestId.ToString(),
		*HeldDefense.Destination.ToCompactString(), *Reason.ToString());
}

bool UPokemonIntentSequenceComponent::TryGetHeldDefenseServiceContext(FPokemonHeldDefenseSession& OutContext) const
{
	// An accepted press alone never supplies steering or a stamina budget.
	OutContext = FPokemonHeldDefenseSession();
	return false;
}

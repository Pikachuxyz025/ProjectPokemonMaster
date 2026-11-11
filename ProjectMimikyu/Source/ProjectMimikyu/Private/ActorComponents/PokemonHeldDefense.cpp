#include "ActorComponents/PokemonIntentSequenceComponent.h"

#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonFieldPresenceComponent.h"
#include "ActorComponents/PokemonJumpExecutionComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "ActorComponents/PokemonStaminaComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Characters/TrainerCharacter.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HAL/IConsoleManager.h"

namespace
{
#if !UE_BUILD_SHIPPING && !UE_BUILD_TEST
	TAutoConsoleVariable<int32> CVarHeldDefenseAuthorization(
		TEXT("pokemon.Defense.AuthorizationPrototype"), 0,
		TEXT("Development: bind held dodge to a retained trainer MoveTo."), ECVF_Cheat);

	TAutoConsoleVariable<int32> CVarHeldDefenseStamina(
		TEXT("pokemon.Defense.StaminaPrototype"), 0,
		TEXT("Development: charge eligible held-defense intervals. ")
		TEXT("Requires AuthorizationPrototype. Implements no evasive movement"), ECVF_Cheat);
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

		if (!Pokemon.UsesGroundCrowdNavigation()|| !Movement || !Movement->IsActive() || !Movement->IsMovingOnGround()
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

	bool ReadDefenseStamina(const APokemon_Parent& Pokemon, float& OutCurrent, float& OutMaximum)
	{
		OutCurrent = 0.f;
		OutMaximum = 0.f;

		const UPokemonStaminaComponent* Stamina = Pokemon.GetStaminaComponent();

		if (!IsValid(Stamina))
		{
			return false;
		}

		OutCurrent = Stamina->GetStamina();
		OutMaximum = Stamina->GetMaxStamina();
		
		return FMath::IsFinite(OutCurrent) && FMath::IsFinite(OutMaximum)
			&& OutMaximum >= 0.f && OutMaximum > 0.f
			&& OutCurrent <= OutMaximum;
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

bool UPokemonIntentSequenceComponent::IsHeldDefenseStaminaPrototypeEnabled()
{
#if !UE_BUILD_SHIPPING && !UE_BUILD_TEST
	return IsHeldDefensePrototypeEnabled()
		&& CVarHeldDefenseStamina.GetValueOnGameThread() != 0;
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
		&& OwnsRunningAction(CurrentSequence.IntentId, Action.ActionId,
			Request.RequestId, EPokemonIntentActionType::NavigateToLocation);
}

bool UPokemonIntentSequenceComponent::ValidateHeldDefenseBinding(FName& OutReason) const
{
	OutReason = NAME_None;

	const APokemon_Parent* Pokemon = HeldDefense.Pokemon;

	if (bEndingPlay || !GetWorld() || !IsValid(Pokemon)
		|| Pokemon != GetOwner() || !Pokemon->HasAuthority()
		|| !IsHeldDefensePrototypeEnabled() || !HasCurrentTrainer(Pokemon, HeldDefense.Trainer)
		|| IsBeingRemoved(*Pokemon) || Pokemon->IsIncapacitated()
		|| !Command.IsValid() || Command->IsCommandActive())
	{
		OutReason = TEXT("OwnerUnavailable");
		return false;
	}

	if (!bHeldDefenseChargingRequested != IsHeldDefenseStaminaPrototypeEnabled())
	{
		OutReason = TEXT("StaminaPrototypeChanged");
		return false;
	}

	if (!HasRunningMoveToAction() || !OwnsRunningAction(HeldDefense.IntentId, HeldDefense.ActionId,
		HeldDefense.NavigationRequestId, EPokemonIntentActionType::NavigateToLocation))
	{
		OutReason = TEXT("MoveToRetired");
		return false;
	}
	if (!Navigation->GetCurrentNavigationIntent().TargetLocation.Equals(HeldDefense.Destination))
	{
		OutReason = TEXT("MoveToDestinationChanged");
		return false;
	}

	return true;
}

bool UPokemonIntentSequenceComponent::HasValidHeldDefenseResourceConfiguration() const
{
	return FMath::IsFinite(HeldDefenseStaminaPerSecond)
		&& HeldDefenseStaminaPerSecond > 0.f
		&& FMath::IsFinite(HeldDefenseReentryFraction)
		&& HeldDefenseReentryFraction > 0.f && HeldDefenseReentryFraction <= 1.f;
}

bool UPokemonIntentSequenceComponent::BeginHeldDefense(AActor* Trainer, int32 Activation, int32 Revision, FName& OutReason)
{
	OutReason = NAME_None;

	auto* Pokemon = Cast<APokemon_Parent>(GetOwner());

	if (!IsHeldDefensePrototypeEnabled() || bEndingPlay || !GetWorld() || 
		!IsValid(Pokemon) || !Pokemon->HasAuthority()
		|| !HasCurrentTrainer(Pokemon, Trainer) || Activation <= 0 || Revision != 1)
	{
		OutReason = TEXT("InvalidDefensePress");
		return false;
	}

	if (HeldDefense.IsHeld())
	{
		// Refresh validates state but never changes elapsed time.
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

		// A validated new owner cannot release the former owner's key.
		// The Pokemon still retains its recovery threshold requirement.
		bHeldDefenseReleaseRequired = false;
	}

	if (Activation <= LastDefenseActivation)
	{
		OutReason = TEXT("StaleDefensePress");
		return false;
	}

	// A valid owner's edge is spent even when no MoveTo exists. It cannot be
	// replayed later to acquire a new action.
	LastDefenseActivation = Activation;

	if (HeldDefense.IsHeld())
	{
		OutReason = TEXT("DefenseAlreadyHeld");
		return false;
	}

	// Exhaustion may have been followed by parent retirement or recall.
	// Do not overwrite the original release identity in that case.
	if (bHeldDefenseReleaseRequired)
	{
		OutReason = TEXT("ReleaseRequiredAfterExhaustion");
		return false;
	}

	StopHeldDefenseObservation();
	StopHeldDefenseResourceAccounting();

	HeldDefense = FPokemonHeldDefenseSession();
	HeldDefense.Trainer = Trainer;
	HeldDefense.Pokemon = Pokemon;
	HeldDefense.InputActivation = Activation;
	HeldDefense.InputRevision = Revision;

	bHeldDefenseChargingRequested = IsHeldDefenseStaminaPrototypeEnabled();

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

	// Only a fresh eligible press can clear the recovery requirement.
	// A press made while airborne or below threshold remains blocked;
	// Landing or regeneration cannot promote that same press.
	if(bHeldDefenseChargingRequested&&bHeldDefenseRecoveryRequired)
	{
		float Current = 0.f;
		float Maximum = 0.f;
		FName RecoveryBlock = NAME_None;

		if(!HasValidHeldDefenseResourceConfiguration())
		{
			RecoveryBlock = TEXT("InvalidStaminaConfiguration");
		}
		else if (!ReadDefenseStamina(*Pokemon, Current, Maximum))
		{
			RecoveryBlock = TEXT("InvalidStaminaValues");
		}
		else if(!Suspension.IsNone())
		{
			RecoveryBlock = TEXT("RecoveryRequiresEligiblePress");
		}
		else if (static_cast<double>(Current) < static_cast<double>(Maximum) * static_cast<double>(HeldDefenseReentryFraction))
		{
			RecoveryBlock = TEXT("BelowRecoveryThreshold");
		}

		if (!RecoveryBlock.IsNone())
		{
			SetHeldDefenseState(EPokemonHeldDefenseState::Blocked, RecoveryBlock);
			
			OutReason = RecoveryBlock;

			// This is an accepted input binding awaiting release,
			// even though resource authorization was denied.
			return true;
		}

		bHeldDefenseRecoveryRequired = false;
	}

	SetHeldDefenseState(Suspension.IsNone() 
		? EPokemonHeldDefenseState::Requested : EPokemonHeldDefenseState::Suspended,
		Suspension);

	RefreshHeldDefense();

	if (HeldDefense.HasAuthorization())
	{
		StartHeldDefenseObservation();
	}

	OutReason = HeldDefense.Reason;

	// Exhausted/blocked bindings still require acknowledgments and release.
	return HeldDefense.IsHeld();
}

bool UPokemonIntentSequenceComponent::ReleaseHeldDefense(AActor* Trainer, int32 Activation, int32 Revision, FName Reason)
{
	if (!IsValid(GetOwner()) || !GetOwner()->HasAuthority()
		|| !Trainer || HeldDefense.Trainer != Trainer
		|| HeldDefense.InputActivation != Activation || Revision != 2)
	{
		return false;
	}

	if(HeldDefense.InputRevision==2)
	{
		return HeldDefense.State == EPokemonHeldDefenseState::Released 
			|| HeldDefense.State == EPokemonHeldDefenseState::Revoked;
	}
	
	const bool bCanReleaseRevokedExhaustion = HeldDefense.State == EPokemonHeldDefenseState::Revoked
		&& 
		bHeldDefenseReleaseRequired;

	if (!HeldDefense.IsHeld() || !bCanReleaseRevokedExhaustion)
	{
		return false;
	}

	const uint64 ExpectedBinding = HeldDefenseBindingSerial;

	if (HeldDefense.HasAuthorization()&&GetWorld())
	{
		// Account only if the binding is still eligible. The accounting
		// function refreshes ownership before attempting any GAS write.
		AccountHeldDefenseElapsed(GetWorld()->GetTimeSeconds());
	}

	// GAS callbacks may synchronously replace or release the binding.
	if (HeldDefenseBindingSerial != ExpectedBinding
		|| HeldDefense.Trainer!=Trainer
		|| HeldDefense.InputActivation != Activation)
	{
		return false;
	}

	if (HeldDefense.InputRevision == 2)
	{
		return HeldDefense.State == EPokemonHeldDefenseState::Released
			|| HeldDefense.State == EPokemonHeldDefenseState::Revoked;
}

	if (HeldDefense.InputRevision != 1)
	{
		return false;
	}

	// Accounting may have exhausted this same binding. Its matching
	// release must still succeed even though its resource lease ended.
	const bool bNowReleasingRevokedExhaustion = HeldDefense.State == EPokemonHeldDefenseState::Revoked
		&& bHeldDefenseReleaseRequired;

	if (!HeldDefense.IsHeld() && !bNowReleasingRevokedExhaustion)
	{
		return false;
	}

	HeldDefense.InputRevision = Revision;
	bHeldDefenseReleaseRequired = false;

	if (HeldDefense.IsHeld())
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Released, Reason);
	}
	else
	{
		// Preserve the terminal revocation and its reason. Only the
		// exhaustion release latch and input revision are acknowledged.
		++HeldDefense.ServerRevision;

		UE_LOG(LogTemp, Display,
			TEXT("[HeldDefense] Exhaustion release observed after revocation | ")
			TEXT("Pokemon=%s Activation=%d InputRevision=%d ServerRevision=%d"),
			*GetNameSafe(HeldDefense.Pokemon),
			HeldDefense.InputActivation,
			HeldDefense.InputRevision,
			HeldDefense.ServerRevision);
	}

	return true;
}

void UPokemonIntentSequenceComponent::RevokeHeldDefense(FName Reason)
{
	if (!IsValid(GetOwner()) || !GetOwner()->HasAuthority())
	{
		return;
	}

	if (HeldDefense.IsHeld())
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Revoked, Reason);
	}
	else
	{
		StopHeldDefenseObservation();
		StopHeldDefenseResourceAccounting();
	}
}

void UPokemonIntentSequenceComponent::RefreshHeldDefense()
{
	if (!HeldDefense.IsHeld() ||!IsValid(GetOwner()) || !GetOwner()->HasAuthority())
	{
		return;
	}

	FName BindingFailure;

	if (!ValidateHeldDefenseBinding(BindingFailure))
	{
		RevokeHeldDefense(BindingFailure);
		return;
	}

	// Still validate lifecycle above, but never automatically rearm
	// an exhausted or blocked activation.
	if (!HeldDefense.HasAuthorization())
	{
		return;
	}

	auto* Pokemon = HeldDefense.Pokemon.Get();

	const FName Suspension = GetSuspensionReason(*Pokemon, *Navigation.Get());

	if(!Suspension.IsNone())
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Suspended, Suspension);
		return;
	}

	if(!bHeldDefenseChargingRequested)
	{
		StopHeldDefenseResourceAccounting();

		SetHeldDefenseState(EPokemonHeldDefenseState::Requested, NAME_None, false);
		return;
	}

	if (!HasValidHeldDefenseResourceConfiguration())
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Blocked, TEXT("InvalidStaminaConfiguration"));
		return;
	}

	float Current = 0.f;
	float Maximum = 0.f;

	if (!ReadDefenseStamina(*Pokemon, Current, Maximum))
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Blocked, TEXT("InvalidStaminaValues"));
		return;
	}

	if (Current <= KINDA_SMALL_NUMBER)
	{
		ExhaustHeldDefense(TEXT("StaminaExhausted"));
		return;
	}

	if (HeldDefenseSustainedToken.IsValid())
	{
		if (!HeldDefenseStamina.IsValid() || !HeldDefenseStamina->IsSustainedSpending(HeldDefenseSustainedToken))
		{
			SetHeldDefenseState(EPokemonHeldDefenseState::Blocked, TEXT("StaminaLeaseLost"));
			return;
		}

		SetHeldDefenseState(EPokemonHeldDefenseState::Requested, NAME_None, HeldDefense.bLastIntervalFunded);
		return;
	}

	UPokemonStaminaComponent* Stamina = Pokemon->GetStaminaComponent();

	const FGuid Token = Stamina->BeginSustainedSpending(this);

	if (!Token.IsValid())
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Blocked, TEXT("StaminaLeaseUnavailable"));
		return;
	}

	++HeldDefenseResourceSerial;
	HeldDefenseStamina = Stamina;
	HeldDefenseSustainedToken = Token;
	HeldDefenseLastAccountingTime = GetWorld()->GetTimeSeconds();
	HeldDefensePendingCost = 0.0;

	SetHeldDefenseState(EPokemonHeldDefenseState::Requested, NAME_None, false);
}

void UPokemonIntentSequenceComponent::StartHeldDefenseObservation()
{
	if (HeldDefenseObservationHandle.IsValid()
		|| !HeldDefense.HasAuthorization()
		|| !GetWorld())
	{
		return;
	}

	auto* Pokemon = Cast<APokemon_Parent>(GetOwner());

	if (!IsValid(Pokemon) || !Pokemon->HasAuthority())
	{
		return;
	}

	// Capture the current binding and its associated identifiers. The observation
	// lambda will ignore any subsequent binding changes, including those that
	// may be made by the GAS callbacks below. The binding serial is incremented
	// whenever a new input binding is installed, and the intent/action/request
	// IDs are all distinct and unique for each new MoveTo action. The input
	// activation is also distinct for each new binding, and the trainer pointer
	// is expected to remain valid for the lifetime of the binding. The lambda
	// will only account elapsed time when all of these identifiers match the
	// current binding, and the Pokemon is still owned by the same trainer.
	const uint64 ExpectedBinding = HeldDefenseBindingSerial;
	const FGuid ExpectedIntent = HeldDefense.IntentId;
	const FGuid ExpectedAction = HeldDefense.ActionId;
	const FGuid ExpectedNavigation = HeldDefense.NavigationRequestId;
	const int32 ExpectedActivation = HeldDefense.InputActivation;
	const TWeakObjectPtr<AActor> ExpectedTrainer(HeldDefense.Trainer.Get());

	HeldDefenseObservationHandle =
		FWorldDelegates::OnWorldPostActorTick.AddWeakLambda(this,
			[this, ExpectedBinding, ExpectedIntent, ExpectedAction,
			ExpectedNavigation, ExpectedActivation, ExpectedTrainer](
				UWorld* World, ELevelTick TickType, float)
			{
				if (World != GetWorld()
					|| TickType != LEVELTICK_All
					|| HeldDefenseBindingSerial != ExpectedBinding
					|| !HeldDefense.HasAuthorization()
					|| HeldDefense.IntentId != ExpectedIntent
					|| HeldDefense.ActionId != ExpectedAction
					|| HeldDefense.NavigationRequestId != ExpectedNavigation
					|| HeldDefense.InputActivation != ExpectedActivation
					|| HeldDefense.Trainer != ExpectedTrainer.Get())
				{
					return;
				}

				AccountHeldDefenseElapsed(World->GetTimeSeconds());
			});

	HeldDefenseObservedPokemon = Pokemon;

	Pokemon->MovementModeChangedDelegate.AddUniqueDynamic(this,
		&UPokemonIntentSequenceComponent::HandleHeldDefenseMovementModeChanged);

	if (UPokemonJumpExecutionComponent* Jump = Pokemon->GetJumpExecutionComponent())
	{
		HeldDefenseObservedJump = Jump;

		HeldDefenseJumpTakeoffHandle = Jump->OnJumpTakeoff.AddWeakLambda(this,
			[this, ExpectedBinding](FGuid RequestId)
			{
				if (HeldDefenseBindingSerial == ExpectedBinding
					&& HeldDefense.NavigationRequestId == RequestId)
				{
					InvalidateHeldDefenseMovementSample();
				}
			});

		HeldDefenseJumpFinishedHandle = Jump->OnJumpFinished.AddWeakLambda(this,
			[this, ExpectedBinding](FGuid RequestId, bool, FName)
			{
				if (HeldDefenseBindingSerial == ExpectedBinding
					&& HeldDefense.NavigationRequestId == RequestId)
				{
					InvalidateHeldDefenseMovementSample();
				}
			});
	}
}

void UPokemonIntentSequenceComponent::StopHeldDefenseObservation()
{
	if (HeldDefenseObservationHandle.IsValid())
	{
		FWorldDelegates::OnWorldPostActorTick.Remove(HeldDefenseObservationHandle);

		HeldDefenseObservationHandle.Reset();
	}

	if (APokemon_Parent* Pokemon = HeldDefenseObservedPokemon.Get())
	{
		Pokemon->MovementModeChangedDelegate.RemoveDynamic(this,
			&UPokemonIntentSequenceComponent::HandleHeldDefenseMovementModeChanged);
	}

	if (UPokemonJumpExecutionComponent* Jump =
		HeldDefenseObservedJump.Get())
	{
		Jump->OnJumpTakeoff.Remove(HeldDefenseJumpTakeoffHandle);
		Jump->OnJumpFinished.Remove(HeldDefenseJumpFinishedHandle);
	}

	HeldDefenseJumpTakeoffHandle.Reset();
	HeldDefenseJumpFinishedHandle.Reset();
	HeldDefenseObservedPokemon.Reset();
	HeldDefenseObservedJump.Reset();
}

// NTR
void UPokemonIntentSequenceComponent::StopHeldDefenseResourceAccounting()
{
	// Invalidate local accounting before releasing the external lease.
	// A stale accounting operation must not update a replacement session.
	++HeldDefenseResourceSerial;

	const TWeakObjectPtr<UPokemonStaminaComponent> PreviousStamina =
		HeldDefenseStamina;

	const FGuid PreviousToken = HeldDefenseSustainedToken;

	HeldDefenseStamina.Reset();
	HeldDefenseSustainedToken.Invalidate();
	HeldDefenseLastAccountingTime = -1.0;
	HeldDefensePendingCost = 0.0;

	if (PreviousStamina.IsValid() && PreviousToken.IsValid())
	{
		PreviousStamina->EndSustainedSpending(PreviousToken);
	}
}

// To-note: Looks like the variable names for EMovementMode and uint8 can be left blank without error
// I wonder if it's predicated by the UFUNCTION() or does it have to do with the lack of usage in the body of the function?
void UPokemonIntentSequenceComponent::HandleHeldDefenseMovementModeChanged(ACharacter* Character, EMovementMode, uint8)
{
	if (Character == GetOwner())
	{
		InvalidateHeldDefenseMovementSample();
	}
}

void UPokemonIntentSequenceComponent::InvalidateHeldDefenseMovementSample()
{
	if (!HeldDefense.HasAuthorization()
		|| !IsValid(GetOwner())
		|| !GetOwner()->HasAuthority())
	{
		return;
	}

	// Do not bill an interval that straddled a movement ownership change.
	// The next eligible interval starts at the current server world time.
	StopHeldDefenseResourceAccounting();

	SetHeldDefenseState(HeldDefense.State,HeldDefense.Reason,false);

	RefreshHeldDefense();
}

void UPokemonIntentSequenceComponent::AccountHeldDefenseElapsed(double ServerTime)
{
	if (bHeldDefenseSpendInProgress)
	{
		return;
	}

	RefreshHeldDefense();

	if (bEndingPlay
		|| HeldDefense.State != EPokemonHeldDefenseState::Requested
		|| !bHeldDefenseChargingRequested|| !HeldDefenseStamina.IsValid()
		|| !HeldDefenseSustainedToken.IsValid())
	{
		return;
	}

	if (!FMath::IsFinite(ServerTime)|| !FMath::IsFinite(HeldDefenseLastAccountingTime)
		|| HeldDefenseLastAccountingTime < 0.0|| ServerTime < HeldDefenseLastAccountingTime)
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Blocked,TEXT("InvalidAccountingTime"));

		return;
	}

	const double Elapsed = ServerTime - HeldDefenseLastAccountingTime;

	// Advance before calling GAS. Reentrant input cannot bill this time again.
	HeldDefenseLastAccountingTime = ServerTime;

	if (Elapsed <= 0.0)
	{
		return;
	}

	const double Due = HeldDefensePendingCost +
		Elapsed * static_cast<double>(HeldDefenseStaminaPerSecond);

	if (!FMath::IsFinite(Due) || Due < 0.0)
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Blocked,TEXT("InvalidAccountingCost"));

		return;
	}

	HeldDefensePendingCost = Due;

	// TrySpendStamina preserves its pre-existing negligible-cost convention.
	// Accumulate these fractions rather than reporting them as paid.
	if (Due <= static_cast<double>(KINDA_SMALL_NUMBER))
	{
		return;
	}

	auto* Pokemon = HeldDefense.Pokemon.Get();

	float Current = 0.f;
	float Maximum = 0.f;

	if (!IsValid(Pokemon)
		|| !ReadDefenseStamina(*Pokemon, Current, Maximum))
	{
		SetHeldDefenseState(EPokemonHeldDefenseState::Blocked,TEXT("InvalidStaminaValues"));

		return;
	}

	if (Current <= KINDA_SMALL_NUMBER)
	{
		ExhaustHeldDefense(TEXT("StaminaExhausted"));
		return;
	}

	const bool bInsufficient =Due > static_cast<double>(Current);

	const float Cost = static_cast<float>(
		FMath::Min(Due, static_cast<double>(Current)));

	if (!FMath::IsFinite(Cost) || Cost <= KINDA_SMALL_NUMBER)
	{
		ExhaustHeldDefense(TEXT("InsufficientStamina"));
		return;
	}

	const uint64 ExpectedBinding = HeldDefenseBindingSerial;
	const uint64 ExpectedResource = HeldDefenseResourceSerial;
	const FGuid ExpectedToken = HeldDefenseSustainedToken;

	UPokemonStaminaComponent* Stamina = HeldDefenseStamina.Get();

	// Retain only the fractional remainder before entering GAS callbacks.
	HeldDefensePendingCost =
		FMath::Max(0.0, Due - static_cast<double>(Cost));

	bool bPaid = false;

	{
		TGuardValue<bool> SpendingGuard(
			bHeldDefenseSpendInProgress,
			true);

		bPaid = Stamina->TrySpendStamina(Cost);
	}

	// GAS listeners can cancel the intent, change movement ownership,
	// release this input, or install a different defensive binding.
	if (bEndingPlay
		|| HeldDefenseBindingSerial != ExpectedBinding
		|| HeldDefenseResourceSerial != ExpectedResource
		|| HeldDefenseSustainedToken != ExpectedToken
		|| HeldDefense.InputRevision != 1
		|| HeldDefense.State != EPokemonHeldDefenseState::Requested)
	{
		return;
	}

	FName BindingFailure;

	if (!ValidateHeldDefenseBinding(BindingFailure))
	{
		RevokeHeldDefense(BindingFailure);
		return;
	}

	if (!GetSuspensionReason(
		*HeldDefense.Pokemon.Get(),
		*Navigation.Get()).IsNone())
	{
		RefreshHeldDefense();
		return;
	}

	if (!bPaid)
	{
		SetHeldDefenseState(
			EPokemonHeldDefenseState::Blocked,
			TEXT("StaminaSpendRejected"));

		return;
	}

	if (!HasValidHeldDefenseResourceConfiguration()
		|| !ReadDefenseStamina(
			*HeldDefense.Pokemon.Get(),
			Current,
			Maximum))
	{
		SetHeldDefenseState(
			EPokemonHeldDefenseState::Blocked,
			TEXT("InvalidStaminaAfterSpend"));

		return;
	}

	UE_LOG(LogTemp, Verbose,
		TEXT("[HeldDefenseStamina] Pokemon=%s Activation=%d ")
		TEXT("I=%s A=%s N=%s Elapsed=%.6f Cost=%.6f ")
		TEXT("Stamina=%.6f/%.6f Partial=%d ServiceActive=0"),
		*GetNameSafe(HeldDefense.Pokemon),
		HeldDefense.InputActivation,
		*HeldDefense.IntentId.ToString(),
		*HeldDefense.ActionId.ToString(),
		*HeldDefense.NavigationRequestId.ToString(),
		Elapsed,
		Cost,
		Current,
		Maximum,
		bInsufficient ? 1 : 0);

	if (bInsufficient || Current <= KINDA_SMALL_NUMBER)
	{
		ExhaustHeldDefense(
			bInsufficient
			? FName(TEXT("InsufficientStamina"))
			: FName(TEXT("StaminaExhausted")));

		return;
	}

	SetHeldDefenseState(
		EPokemonHeldDefenseState::Requested,
		NAME_None,
		true);
}

void UPokemonIntentSequenceComponent::ExhaustHeldDefense(FName Reason)
{
	bHeldDefenseRecoveryRequired = true;
	bHeldDefenseReleaseRequired = true;

	SetHeldDefenseState(EPokemonHeldDefenseState::Exhausted,Reason);
}

void UPokemonIntentSequenceComponent::SetHeldDefenseState(EPokemonHeldDefenseState State, FName Reason,bool bLastIntervalFunded)
{
	if (State != EPokemonHeldDefenseState::Requested)
	{
		bLastIntervalFunded = false;
	}

	const bool bChanged =
		HeldDefense.State != State
		|| HeldDefense.Reason != Reason
		|| HeldDefense.bLastIntervalFunded != bLastIntervalFunded;

	HeldDefense.State = State;
	HeldDefense.Reason = Reason;
	HeldDefense.bLastIntervalFunded = bLastIntervalFunded;

	if (State != EPokemonHeldDefenseState::Requested)
	{
		StopHeldDefenseResourceAccounting();
	}

	if (!HeldDefense.HasAuthorization())
	{
		StopHeldDefenseObservation();
	}

	if (!bChanged)
	{
		return;
	}

	++HeldDefense.ServerRevision;

	UE_LOG(LogTemp, Display,
		TEXT("[HeldDefense] Pokemon=%s Trainer=%s ")
		TEXT("Activation=%d InputRevision=%d ServerRevision=%d ")
		TEXT("State=%s I=%s A=%s N=%s Destination=%s Reason=%s ")
		TEXT("Charging=%d FundedLastInterval=%d ")
		TEXT("RecoveryRequired=%d ReleaseRequired=%d ServiceActive=0"),
		*GetNameSafe(HeldDefense.Pokemon),
		*GetNameSafe(HeldDefense.Trainer),
		HeldDefense.InputActivation,
		HeldDefense.InputRevision,
		HeldDefense.ServerRevision,
		*StaticEnum<EPokemonHeldDefenseState>()->GetNameStringByValue(static_cast<int64>(State)),
		*HeldDefense.IntentId.ToString(),
		*HeldDefense.ActionId.ToString(),
		*HeldDefense.NavigationRequestId.ToString(),
		*HeldDefense.Destination.ToCompactString(),
		*Reason.ToString(),
		bHeldDefenseChargingRequested ? 1 : 0,
		HeldDefense.bLastIntervalFunded ? 1 : 0,
		bHeldDefenseRecoveryRequired ? 1 : 0,
		bHeldDefenseReleaseRequired ? 1 : 0);
}

bool UPokemonIntentSequenceComponent::TryGetHeldDefenseServiceContext(FPokemonHeldDefenseSession& OutContext) const
{
	// A historical paid interval cannot be reused as a free steering budget.
	// Increment 3 implements diagnostic accounting, not evasive movement.
	OutContext = FPokemonHeldDefenseSession();
	return false;
}

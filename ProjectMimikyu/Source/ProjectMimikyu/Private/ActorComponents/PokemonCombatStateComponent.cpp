#include "ActorComponents/PokemonCombatStateComponent.h"

#include "GameplayTags/PokemonCombatGameplayTags.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokemonCombatState, Log, All);

UPokemonCombatStateComponent::UPokemonCombatStateComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

void UPokemonCombatStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPokemonCombatStateComponent, ActiveCombatStates);
}

void UPokemonCombatStateComponent::SetCombatState(FGameplayTag StateTag, float Duration, ECombatStateApplyPolicy ApplyPolicy)
{
	if (!StateTag.IsValid())
	{
		return;
	}

	AActor* OwnerActor = GetOwner();
	if (OwnerActor && !OwnerActor->HasAuthority())
	{
		return;
	}

	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	if (StateTag == CombatTags.Combat_State_Neutral)
	{
		ClearCombatStates();
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	FTimerManager& TimerManager = World->GetTimerManager();

	const bool bWasAlreadyActive = ActiveCombatStates.HasTagExact(StateTag);

	FTimerHandle* ExistingTimer = ActiveStateTimers.Find(StateTag);

	const bool bHasExistingTimer = ExistingTimer != nullptr;

	const bool bExistingTimerIsActive = bHasExistingTimer && TimerManager.TimerExists(*ExistingTimer);

	const float ExistingRemainingTime = bExistingTimerIsActive ? TimerManager.GetTimerRemaining(*ExistingTimer) : 0.f;
	
	// An active state without a timer is undesirable
	const bool bExistingStateIsIndefinite = bWasAlreadyActive && !bHasExistingTimer;

	if (bWasAlreadyActive)
	{
		switch (ApplyPolicy)
		{
		case ECombatStateApplyPolicy::ExtendIfLonger:
			// Nothing can extend beyond an indefinite state.
			if (bExistingStateIsIndefinite)
			{
				UE_LOG(
					LogPokemonCombatState,
					Verbose,
					TEXT("[PokemonCombatState] Ignored extension because state is indefinite. Actor=%s State=%s"),
					*GetNameSafe(OwnerActor),
					*StateTag.ToString()
				);

				return;
			}

			// A non-positive requested duration makes the state indefinite,
			// so it is always considered longer than a timed state.
			if (Duration > 0.f &&
				ExistingRemainingTime >= Duration - KINDA_SMALL_NUMBER)
			{
				UE_LOG(
					LogPokemonCombatState,
					Verbose,
					TEXT("[PokemonCombatState] Existing state duration is already longer. Actor=%s State=%s ExistingRemaining=%.2f RequestedDuration=%.2f"),
					*GetNameSafe(OwnerActor),
					*StateTag.ToString(),
					ExistingRemainingTime,
					Duration
				);

				return;
			}

			break;
		case ECombatStateApplyPolicy::IgnoreIfAlreadyActive:
			UE_LOG(
				LogPokemonCombatState,
				Verbose,
				TEXT("[PokemonCombatState] Ignored state application because state is already active. Actor=%s State=%s RequestedDuration=%.2f"),
				*GetNameSafe(OwnerActor),
				*StateTag.ToString(),
				Duration
			);

			return;
		case ECombatStateApplyPolicy::Override:
		default:
			break;
		}
	}

	// Remove the previous timer before installing the new duration.
	if (ExistingTimer)
	{
		TimerManager.ClearTimer(*ExistingTimer);
		ActiveStateTimers.Remove(StateTag);
	}

	// Only broadcast activation when transitioning from inactive to active.
	if (!bWasAlreadyActive)
	{
		ActiveCombatStates.AddTag(StateTag);
		OnCombatStateChanged.Broadcast(StateTag, true);
	}

	if (Duration > 0.f)
	{
		FTimerHandle NewTimerHandle;
		FTimerDelegate TimerDelegate;	

		TimerDelegate.BindUObject(this, &UPokemonCombatStateComponent::ClearCombatState, StateTag);

		TimerManager.SetTimer(NewTimerHandle, TimerDelegate, Duration, false);
		ActiveStateTimers.Add(StateTag, NewTimerHandle);

		if (bStateTimersPaused)
		{
			TimerManager.PauseTimer(NewTimerHandle);
		}
	}

	const UEnum* PolicyEnum = StaticEnum<ECombatStateApplyPolicy>();

	const FString PolicyName = PolicyEnum ? PolicyEnum->GetNameStringByValue(static_cast<int64>(ApplyPolicy)) : TEXT("Unknown");

	UE_LOG(
		LogPokemonCombatState,
		Display,
		TEXT("[PokemonCombatState] Combat state applied. Actor=%s State=%s Duration=%.2f Policy=%s PreviousRemaining=%.2f ActiveStates=%s"),
		*GetNameSafe(OwnerActor),
		*StateTag.ToString(),
		Duration,
		*PolicyName,
		ExistingRemainingTime,
		*ActiveCombatStates.ToString()
	);
}


float UPokemonCombatStateComponent::GetCombatStateRemainingTime(FGameplayTag StateTag) const
{
	if (!HasCombatState(StateTag))
	{
		return 0.f;
	}

	const FTimerHandle* ExistingTimer =
		ActiveStateTimers.Find(StateTag);

	// Active but without a timer means indefinite.
	if (!ExistingTimer)
	{
		return -1.f;
	}

	const UWorld* World = GetWorld();
	if (!World)
	{
		return 0.f;
	}

	// 0.0 = inactive
	// - 1.0 = active indefinitely
	// > 0.0 = remaining timed duration
	return FMath::Max(
		0.f,
		World->GetTimerManager().GetTimerRemaining(*ExistingTimer)
	);
}

void UPokemonCombatStateComponent::ClearCombatState(FGameplayTag StateTag)
{
	if (!StateTag.IsValid())
	{
		return;
	}

	AActor* OwnerActor = GetOwner();
	if (OwnerActor && !OwnerActor->HasAuthority())
	{
		return;
	}

	if (FTimerHandle* ExistingTimer = ActiveStateTimers.Find(StateTag))
	{
		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().ClearTimer(*ExistingTimer);
		}
		ActiveStateTimers.Remove(StateTag);
	}

	if (ActiveCombatStates.HasTagExact(StateTag))
	{
		ActiveCombatStates.RemoveTag(StateTag);
		OnCombatStateChanged.Broadcast(StateTag, false);

		UE_LOG(
			LogPokemonCombatState,
			Display,
			TEXT("Combat state cleared. Actor=%s State=%s ActiveStates=%s"),
			*GetNameSafe(OwnerActor),
			*StateTag.ToString(),
			*ActiveCombatStates.ToString()
		);
	}
}

void UPokemonCombatStateComponent::ClearCombatStates()
{
	AActor* OwnerActor = GetOwner();
	if (OwnerActor && !OwnerActor->HasAuthority())
	{
		return;
	}

	if (UWorld* World = GetWorld())
	{
		for (TPair<FGameplayTag, FTimerHandle>& Pair : ActiveStateTimers)
		{
			World->GetTimerManager().ClearTimer(Pair.Value);
		}
	}

	ActiveStateTimers.Empty();

	const FGameplayTagContainer OldStates = ActiveCombatStates;
	ActiveCombatStates.Reset();

	for (const FGameplayTag& OldState : OldStates)
	{
		OnCombatStateChanged.Broadcast(OldState, false);
	}

	UE_LOG(
		LogPokemonCombatState,
		Display,
		TEXT("Combat states cleared. Actor=%s"),
		*GetNameSafe(OwnerActor)
	);
}

bool UPokemonCombatStateComponent::HasCombatState(FGameplayTag StateTag) const
{
	return StateTag.IsValid() && ActiveCombatStates.HasTagExact(StateTag);
}

bool UPokemonCombatStateComponent::CanAct() const
{
	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	return
		!HasCombatState(CombatTags.Combat_State_Attacking) &&
		!HasCombatState(CombatTags.Combat_State_HitStun) &&
		!HasCombatState(CombatTags.Combat_State_BlockStun) &&
		!HasCombatState(CombatTags.Combat_State_Clashing) &&
		!HasCombatState(CombatTags.Combat_State_Launched) &&
		!HasCombatState(CombatTags.Combat_State_Recovering) &&
		!HasCombatState(CombatTags.Combat_State_Vulnerable);
}

bool UPokemonCombatStateComponent::CanMove() const
{
	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	return
		!HasCombatState(CombatTags.Combat_State_Attacking) &&
		!HasCombatState(CombatTags.Combat_State_HitStun) &&
		!HasCombatState(CombatTags.Combat_State_BlockStun) &&
		!HasCombatState(CombatTags.Combat_State_Clashing) &&
		!HasCombatState(CombatTags.Combat_State_Launched);
}

bool UPokemonCombatStateComponent::CanAttack() const
{
	return CanAct();
}

void UPokemonCombatStateComponent::PauseCombatStateTimers()
{
	AActor* OwnerActor = GetOwner();

	if (OwnerActor && !OwnerActor->HasAuthority())
	{
		return;
	}

	if(bStateTimersPaused)
	{
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	bStateTimersPaused = true;

	FTimerManager& TimerManager = World->GetTimerManager();

	for (TPair<FGameplayTag, FTimerHandle>& Pair : ActiveStateTimers)
	{
		if (TimerManager.TimerExists(Pair.Value))
		{
			TimerManager.PauseTimer(Pair.Value);
		}
	}

	UE_LOG(
		LogPokemonCombatState,
		Display,
		TEXT("Combat state timers paused. Actor=%s ActiveStates=%s"),
		*GetNameSafe(OwnerActor),
		*ActiveCombatStates.ToString()
	);
}

void UPokemonCombatStateComponent::ResumeCombatStateTimers()
{
	AActor* OwnerActor = GetOwner();

	if (OwnerActor && !OwnerActor->HasAuthority())
	{
		return;
	}

	if (!bStateTimersPaused)
	{
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	bStateTimersPaused = false;

	FTimerManager& TimerManager = World->GetTimerManager();

	for (TPair<FGameplayTag, FTimerHandle>& Pair : ActiveStateTimers)
	{
		if (TimerManager.TimerExists(Pair.Value))
		{
			TimerManager.UnPauseTimer(Pair.Value);
		}
	}

	UE_LOG(
		LogPokemonCombatState,
		Display,
		TEXT("[PokemonCombatState] Resumed combat-state timers. Actor=%s States=%s"),
		*GetNameSafe(OwnerActor),
		*ActiveCombatStates.ToString()
	);
}

void UPokemonCombatStateComponent::OnRep_ActiveCombatStates()
{
	UE_LOG(
		LogPokemonCombatState,
		Display,
		TEXT("Combat states replicated. Actor=%s ActiveStates=%s"),
		*GetNameSafe(GetOwner()),
		*ActiveCombatStates.ToString()
	);
}
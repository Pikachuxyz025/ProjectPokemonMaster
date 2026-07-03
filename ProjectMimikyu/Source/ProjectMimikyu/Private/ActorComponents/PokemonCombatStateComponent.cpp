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

void UPokemonCombatStateComponent::SetCombatState(FGameplayTag StateTag, float Duration)
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

	ActiveCombatStates.AddTag(StateTag);
	OnCombatStateChanged.Broadcast(StateTag, true);

	if (FTimerHandle* ExistingTimer = ActiveStateTimers.Find(StateTag))
	{
		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().ClearTimer(*ExistingTimer);
		}
		ActiveStateTimers.Remove(StateTag);
	}

	if (Duration > 0.f)
	{
		FTimerHandle TimerHandle;
		FTimerDelegate TimerDelegate;
		TimerDelegate.BindUObject(this, &UPokemonCombatStateComponent::ClearCombatState, StateTag);

		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, Duration, false);
			ActiveStateTimers.Add(StateTag, TimerHandle);
		}
	}

	UE_LOG(
		LogPokemonCombatState,
		Display,
		TEXT("[PokemonCombatState] Combat state applied. Actor=%s State=%s Duration=%.2f ActiveStates=%s"),
		*GetNameSafe(OwnerActor),
		*StateTag.ToString(),
		Duration,
		*ActiveCombatStates.ToString()
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
		!HasCombatState(CombatTags.Combat_State_HitStun) &&
		!HasCombatState(CombatTags.Combat_State_BlockStun) &&
		!HasCombatState(CombatTags.Combat_State_Clashing) &&
		!HasCombatState(CombatTags.Combat_State_Launched);
}

bool UPokemonCombatStateComponent::CanAttack() const
{
	return CanAct();
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
// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "ActorComponents/PokemonCombatStateComponent.h"
#include "Animation/AnimMontage.h"
#include "GameplayTags/PokemonCombatGameplayTags.h"
#include "Characters/Pokemon_Parent.h"

bool UPokemonGameplayAbilities::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	if (!ActorInfo || !ActorInfo->AvatarActor.IsValid())
	{
		return false;
	}

	const APokemon_Parent* AvatarPokemon = Cast<APokemon_Parent>(ActorInfo->AvatarActor.Get());
	if (!AvatarPokemon)
	{
		return true;
	}

	if (!AvatarPokemon->CanAct())
	{
		UE_LOG(LogTemp, Display,
			TEXT("CanActivateAbility rejected: Pokemon cannot act. Pokemon=%s Ability=%s"),
			*GetNameSafe(AvatarPokemon),
			*GetNameSafe(GetClass()));

		return false;
	}

	return true;
}

void UPokemonGameplayAbilities::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	ApplyAbilityCombatStateLock();

	if (bListenForAbilityAnimEvent)
	{
		ListenForAbilityAnimEvent();
	}

	if (bPlayMontageOnActivate)
	{
		PlayAbilityMontage();
}
}

UAbilityTask_WaitGameplayEvent* UPokemonGameplayAbilities::ListenForAbilityAnimEvent()
{
	if (!AbilityAnimEventTag.IsValid())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] Cannot listen for anim event. Ability=%s EventTag=None"),
			*GetNameSafe(this));

		return nullptr;
	}

	UAbilityTask_WaitGameplayEvent* EventTask =
		UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
			this,
			AbilityAnimEventTag,
			nullptr,
			bOnlyTriggerAnimEventOnce,
			true
		);

	if (!EventTask)
	{
		return nullptr;
	}

	EventTask->EventReceived.AddDynamic(
		this,
		&UPokemonGameplayAbilities::HandleAbilityAnimEventReceived
	);

	EventTask->ReadyForActivation();

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Listening for ability anim event. Ability=%s EventTag=%s"),
		*GetNameSafe(this),
		*AbilityAnimEventTag.ToString());

	return EventTask;
}

void UPokemonGameplayAbilities::HandleAbilityAnimEventReceived(FGameplayEventData Payload)
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Received ability anim event. Ability=%s EventTag=%s"),
		*GetNameSafe(this),
		*Payload.EventTag.ToString());

	OnAbilityAnimEventReceived(Payload);
}

void UPokemonGameplayAbilities::OnAbilityAnimEventReceived_Implementation(FGameplayEventData Payload)
{
	// Base ability does nothing by default.
	// Child abilities can override this in C++ or Blueprint.
}

UAbilityTask_PlayMontageAndWait* UPokemonGameplayAbilities::PlayAbilityMontage()
{
	if (!AbilityMontage)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayAbilityMontage called but AbilityMontage is null. Ability=%s"), *GetNameSafe(this));
		return nullptr;
	}

	UAbilityTask_PlayMontageAndWait* MontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, NAME_None, AbilityMontage, MontagePlayRate, MontageStartSection);
	
	if (!MontageTask)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PokemonGameplayAbilities] Failed to create montage task. Ability=%s Montage=%s"),
			*GetNameSafe(this),
			*GetNameSafe(AbilityMontage));

		return nullptr;
	}

	MontageTask->OnCompleted.AddDynamic(this, &UPokemonGameplayAbilities::OnAbilityMontageCompleted);
	MontageTask->OnBlendOut.AddDynamic(this, &UPokemonGameplayAbilities::OnAbilityMontageBlendOut);
	MontageTask->OnInterrupted.AddDynamic(this, &UPokemonGameplayAbilities::OnAbilityMontageInterrupted);
	MontageTask->OnCancelled.AddDynamic(this, &UPokemonGameplayAbilities::OnAbilityMontageCancelled);

	MontageTask->ReadyForActivation();

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Playing montage. Ability=%s Montage=%s PlayRate=%.2f StartSection=%s"),
		*GetNameSafe(this),
		*GetNameSafe(AbilityMontage),
		MontagePlayRate,
		*MontageStartSection.ToString());

	return MontageTask;
}

void UPokemonGameplayAbilities::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	ClearAbilityCombatStateLock(bWasCancelled);
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UPokemonGameplayAbilities::ApplyAbilityCombatStateLock()
{
	if (!bUseAbilityCombatStateLock)
	{
		return;
	}

	APokemon_Parent* AvatarPokemon = GetAvatarPokemon();
	if (!AvatarPokemon || !AvatarPokemon->HasAuthority())
	{
		return;
	}

	UPokemonCombatStateComponent* CombatStateComponent = AvatarPokemon->GetCombatStateComponent();
	if (!CombatStateComponent)
	{
		return;
	}

	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Applying combat state lock. Ability=%s Duration=%.2f"),
		*GetNameSafe(this),
		GetAbilityCombatLockDuration());

	CombatStateComponent->SetCombatState(CombatTags.Combat_State_Attacking, GetAbilityCombatLockDuration());
}

void UPokemonGameplayAbilities::ClearAbilityCombatStateLock(bool bWasCancelled)
{
	if (!bUseAbilityCombatStateLock)
	{
		return;
	}

	APokemon_Parent* AvatarPokemon = GetAvatarPokemon();
	if (!AvatarPokemon || !AvatarPokemon->HasAuthority())
	{
		return;
	}

	UPokemonCombatStateComponent* CombatStateComponent = AvatarPokemon->GetCombatStateComponent();
	if (!CombatStateComponent)
	{
		return;
	}

	const FPokemonCombatGameplayTags& CombatTags = FPokemonCombatGameplayTags::Get();

	CombatStateComponent->ClearCombatState(CombatTags.Combat_State_Attacking);

	if (!bWasCancelled && bApplyRecoveryStateOnEnd && MoveTimingSequence.RecoveryDuration > 0.f)
	{
		UE_LOG(LogTemp, Display,
			TEXT("[PokemonGameplayAbilities] Applying recovery state. Ability=%s RecoveryDuration=%.2f"),
			*GetNameSafe(this),
			MoveTimingSequence.RecoveryDuration);

		CombatStateComponent->SetCombatState(
			CombatTags.Combat_State_Recovering,
			MoveTimingSequence.RecoveryDuration
		);
	}
}

float UPokemonGameplayAbilities::GetAbilityCombatLockDuration() const
{
	float Duration =
		MoveTimingSequence.AnticipationDuration +
		MoveTimingSequence.ActiveDuration;

	if (AbilityMontage)
	{
		const float SafePlayRate = FMath::Max(MontagePlayRate, 0.01f);
		Duration = FMath::Max(Duration, AbilityMontage->GetPlayLength() / SafePlayRate);
	}

	return FMath::Max(Duration, MinimumAttackStateDuration);
}

APokemon_Parent* UPokemonGameplayAbilities::GetAvatarPokemon() const
{
	return Cast<APokemon_Parent>(GetAvatarActorFromActorInfo());
}

void UPokemonGameplayAbilities::OnAbilityMontageCompleted()
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Montage completed. Ability=%s"),
		*GetNameSafe(this));

	EndAbilityFromMontage(false);
}

void UPokemonGameplayAbilities::OnAbilityMontageBlendOut()
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Montage blend out. Ability=%s"),
		*GetNameSafe(this));
}

void UPokemonGameplayAbilities::OnAbilityMontageInterrupted()
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Montage interrupted. Ability=%s"),
		*GetNameSafe(this));

	EndAbilityFromMontage(true);
}

void UPokemonGameplayAbilities::OnAbilityMontageCancelled()
{
	UE_LOG(LogTemp, Display,
		TEXT("[PokemonGameplayAbilities] Montage cancelled. Ability=%s"),
		*GetNameSafe(this));

	EndAbilityFromMontage(true);
}

void UPokemonGameplayAbilities::EndAbilityFromMontage(bool bWasCancelled)
{
	if (!bEndAbilityWhenMontageEnds)
	{
		return;
	}

	if (!IsActive())
	{
		return;
	}

	EndAbility(
		CurrentSpecHandle,
		CurrentActorInfo,
		CurrentActivationInfo,
		true,
		bWasCancelled
	);
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
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
	if (bPlayMontageOnActivate)
	{
		PlayAbilityMontage();
}
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
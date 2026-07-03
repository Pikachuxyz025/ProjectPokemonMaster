// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
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

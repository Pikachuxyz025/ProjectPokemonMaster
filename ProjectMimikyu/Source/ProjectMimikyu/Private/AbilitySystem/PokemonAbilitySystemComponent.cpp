// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"

void UPokemonAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UPokemonAbilitySystemComponent::EffectApplied);
}

void UPokemonAbilitySystemComponent::AddCharacterAbilities(TArray<UPokemonMoveDataAsset*> CurrentPokemonMoves)
{ 
	for (auto Move: CurrentPokemonMoves)
	{	
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Move->PGAClass, 1);
		if (const UPokemonGameplayAbilities* PokemonAbility = Cast<UPokemonGameplayAbilities>(AbilitySpec.Ability))
		{
			AbilitySpec.DynamicAbilityTags.AddTag(Move->GetInputTag());
			GiveAbility(AbilitySpec);
		}
	}
}

void UPokemonAbilitySystemComponent::AddSingleAbility(TSubclassOf<UPokemonGameplayAbilities> NewAbility,FGameplayTag AbilityInputTag)
{
	FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(NewAbility, 1);
	if (const UPokemonGameplayAbilities* PokemonAbility = Cast<UPokemonGameplayAbilities>(AbilitySpec.Ability))
	{
		AbilitySpec.DynamicAbilityTags.AddTag(AbilityInputTag);
		GiveAbility(AbilitySpec);
	}
}

void UPokemonAbilitySystemComponent::ActivateAbilityByTag(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;

	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			//AbilitySpecInputPressed(AbilitySpec);
			if (!AbilitySpec.IsActive())
			{
				TryActivateAbility(AbilitySpec.Handle);
			}
		}
	}
}

int32 UPokemonAbilitySystemComponent::GetPokemonLevel() const
{
	const UPokemonBaseAttributeSet* PAS = CastChecked<UPokemonBaseAttributeSet>(GetAttributeSet(UAttributeSet::StaticClass()));
	return (int32)PAS->GetLevel();
}

int32 UPokemonAbilitySystemComponent::GetXP() const
{
	const UPokemonBaseAttributeSet* PAS = CastChecked<UPokemonBaseAttributeSet>(GetAttributeSet(UAttributeSet::StaticClass()));
	return (int32)PAS->GetXP();
}

void UPokemonAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	FGameplayTagContainer AssetTagContainer;
	EffectSpec.GetAllAssetTags(AssetTagContainer);

	EffectAssetTag.Broadcast(AssetTagContainer);
}

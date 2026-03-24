// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"

void UPokemonAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UPokemonAbilitySystemComponent::EffectApplied);
}

void UPokemonAbilitySystemComponent::AddCharacterAbilities(const TArray<UPokemonMoveDataAsset*>& CurrentPokemonMoves)
{ 
	for (auto Move : CurrentPokemonMoves)
	{	
		if(!Move||!Move->Ability)
		{
			continue;
		}
		FGameplayAbilitySpec AbilitySpec(Move->Ability, 1);

		if(Move->InputTag.IsValid())
		{
			AbilitySpec.GetDynamicSpecSourceTags().AddTag(Move->InputTag);
		}
		if(Move->CooldownTag.IsValid())
		{
			AbilitySpec.GetDynamicSpecSourceTags().AddTag(Move->CooldownTag);
		}
			GiveAbility(AbilitySpec);
	}
}

void UPokemonAbilitySystemComponent::AddCharacterPassiveAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartupPassiveAbilities)
{
	for (const TSubclassOf<UGameplayAbility> AbilityClass : StartupPassiveAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, 1);
		GiveAbilityAndActivateOnce(AbilitySpec);
	}
}

void UPokemonAbilitySystemComponent::AddSingleAbility(TSubclassOf<UPokemonGameplayAbilities> NewAbility, FGameplayTag AbilityInputTag)
{
	if (!NewAbility)
	{
		return;
	}
	FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(NewAbility, 1);

	if (AbilityInputTag.IsValid())
	{
		AbilitySpec.GetDynamicSpecSourceTags().AddTag(AbilityInputTag);
	}

	GiveAbility(AbilitySpec);
}

bool UPokemonAbilitySystemComponent::ActivateAbilityByTag(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) 
	{
		return false;
	}

	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.GetDynamicSpecSourceTags().HasTagExact(InputTag))
		{
			//AbilitySpecInputPressed(AbilitySpec);
			if (!AbilitySpec.IsActive())
			{
				return TryActivateAbility(AbilitySpec.Handle);
			}
			return false;
		}
	}

	return false;
}

void UPokemonAbilitySystemComponent::RestoreStatAttributes(const TMap<FGameplayAttribute, float>& AttributeValueInfo)
{
	for (const auto& StatPair : AttributeValueInfo)
	{
		SetNumericAttributeBase(StatPair.Key, StatPair.Value);
	}
}

void UPokemonAbilitySystemComponent::RestoreStatTagAttributes(const TMap<FGameplayTag, float>& AttributeValueInfo)
{
	for (const auto& StatPair : GetPAS()->TagsToAttributes)
	{
		SetNumericAttributeBase(StatPair.Value(), AttributeValueInfo[StatPair.Key]);
	}
}

void UPokemonAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	FGameplayTagContainer AssetTagContainer;
	EffectSpec.GetAllAssetTags(AssetTagContainer);

	EffectAssetTag.Broadcast(AssetTagContainer);
}

UPokemonBaseAttributeSet* UPokemonAbilitySystemComponent::GetPAS()
{
	if (!PokemonAttributeSet)
	{
		const UPokemonBaseAttributeSet* FoundSet =
			CastChecked<const UPokemonBaseAttributeSet>(
				GetAttributeSet(UPokemonBaseAttributeSet::StaticClass())
			);

		PokemonAttributeSet = const_cast<UPokemonBaseAttributeSet*>(FoundSet);
	}

	return PokemonAttributeSet.Get();
}

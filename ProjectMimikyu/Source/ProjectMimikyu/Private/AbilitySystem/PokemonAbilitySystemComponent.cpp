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
		//if (UPokemonGameplayAbilities* PokemonAbility = Move->Ability->GetDefaultObject<UPokemonGameplayAbilities>())//NewObject<UPokemonGameplayAbilities>(this, Move->Ability))
		//{
		//	PokemonAbility->CooldownTag = Move->CooldownTag;

		FGameplayAbilitySpec AbilitySpec(Move->Ability, 1);
			AbilitySpec.DynamicAbilityTags.AddTag(Move->InputTag);
			AbilitySpec.DynamicAbilityTags.AddTag(Move->CooldownTag);
			GiveAbility(AbilitySpec);
//		}
		
		//FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Move->Ability, 1);
		//if (UPokemonGameplayAbilities* PokemonAbility = Cast<UPokemonGameplayAbilities>(AbilitySpec.Ability))
		//{
		//	AbilitySpec.DynamicAbilityTags.AddTag(Move->InputTag);
		//	PokemonAbility->CooldownTag=Move->CooldownTag;
		//	GiveAbility(AbilitySpec);
		//}
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
	if(!PokemonAttributeSet)
		CastChecked<UPokemonBaseAttributeSet>(GetAttributeSet(UAttributeSet::StaticClass()));
	return PokemonAttributeSet;
}

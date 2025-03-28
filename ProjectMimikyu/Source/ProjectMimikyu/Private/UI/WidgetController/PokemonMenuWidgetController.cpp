// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/PokemonMenuWidgetController.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Characters/Pokemon_Parent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "Engine/DataTable.h"
#include "PokemonGameplayTags.h"
#include "DataAssets/PokemonDataAsset.h"

void UPokemonMenuWidgetController::BroadcastInitialValues()
{
	//check(StatInfo);
	for (auto& Pair : GetPAS()->TagsToAttributes)
	{
		BroadcastAttributeInfo(Pair.Key, Pair.Value());
	}
}

void UPokemonMenuWidgetController::BroadcastAttributeInfo(const FGameplayTag& AttributeTag, const FGameplayAttribute& Attribute) 
{
	const float PokemonStatValue = Attribute.GetNumericValue(AttributeSet);
	FPokemonStatInfo Info = GetPokemonData()->CreateStatInfo(AttributeTag, PokemonStatValue);
	StatInfoDelegate.Broadcast(Info);
}

void UPokemonMenuWidgetController::BindCallbacksToDependencies()
{
	for (auto& Pair : GetPAS()->TagsToAttributes)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Pair.Value()).AddLambda(
			[this, Pair](const FOnAttributeChangeData& Data)
			{
				BroadcastAttributeInfo(Pair.Key, Pair.Value());
			}
		);
	}
}




// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/PokemonMenuWidgetController.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Characters/Pokemon_Parent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "Engine/DataTable.h"
#include "PokemonGameplayTags.h"
#include "DataAssets/PokemonStatInfoDataAsset.h"

void UPokemonMenuWidgetController::BroadcastInitialValues()
{
	const UPokemonBaseAttributeSet* PAS = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);
	check(StatInfo);
	for (auto& Pair : PAS->TagsToAttributes)
	{
		BroadcastAttributeInfo(Pair.Key, Pair.Value());
	}
}

void UPokemonMenuWidgetController::BroadcastAttributeInfo(const FGameplayTag& AttributeTag, const FGameplayAttribute& Attribute) const
{
	FPokemonStatInfo Info = StatInfo->FindStatInfoForTag(AttributeTag);
	TScriptInterface<IPokemonCombatInterface> PokemonInterface = AbilitySystemComponent->GetAvatarActor();
	Info.StatBaseValue = PokemonInterface->GetBaseStatFromTag(AttributeTag);
	StatInfoDelegate.Broadcast(Info);
}

void UPokemonMenuWidgetController::BindCallbacksToDependencies()
{
	const  UPokemonBaseAttributeSet* PAS = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);

	for (auto& Pair : PAS->TagsToAttributes)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Pair.Value()).AddLambda(
			[this, Pair](const FOnAttributeChangeData& Data)
			{
				BroadcastAttributeInfo(Pair.Key, Pair.Value());
			}
		);
	}
}




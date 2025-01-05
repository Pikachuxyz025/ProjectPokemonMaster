// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/PokemonUIInfoWidgetController.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"

void UPokemonUIInfoWidgetController::BroadcastInitialValues()
{
	const UPokemonBaseAttributeSet* AS = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);
	OnMaxHealthChanged.Broadcast(AS->GetMaxHealth());
	OnHealthChanged.Broadcast(AS->GetHealth());
}

void UPokemonUIInfoWidgetController::BindCallbacksToDependencies()
{
	const  UPokemonBaseAttributeSet* PokemonAttributeSet = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		PokemonAttributeSet->GetHealthAttribute()).AddLambda
		(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		PokemonAttributeSet->GetMaxHealthAttribute()).AddLambda
		(
			[this](const FOnAttributeChangeData& Data)
			{
				OnMaxHealthChanged.Broadcast(Data.NewValue);
			}
	);
}

void UPokemonUIInfoWidgetController::SetInitialHealthValues(float& CurrentHealth, float& MaxHealth)
{
	const UPokemonBaseAttributeSet* AS = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);
	MaxHealth= AS->GetMaxHealth();
	CurrentHealth=AS->GetHealth();
}

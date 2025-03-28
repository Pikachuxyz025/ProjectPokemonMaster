// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/PokemonUIInfoWidgetController.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"

void UPokemonUIInfoWidgetController::BroadcastInitialValues()
{
	OnMaxHealthChanged.Broadcast(GetPAS()->GetMaxHealth());
	OnHealthChanged.Broadcast(GetPAS()->GetHealth());
}

void UPokemonUIInfoWidgetController::BindCallbacksToDependencies()
{
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetHealthAttribute()).AddLambda
		(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetMaxHealthAttribute()).AddLambda
		(
			[this](const FOnAttributeChangeData& Data)
			{
				OnMaxHealthChanged.Broadcast(Data.NewValue);
			}
	);
}

void UPokemonUIInfoWidgetController::SetInitialHealthValues(float& CurrentHealth, float& MaxHealth)
{
	MaxHealth = GetPAS()->GetMaxHealth();
	CurrentHealth = GetPAS()->GetHealth();
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/TrainerOverlayWidgetController.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"

void UTrainerOverlayWidgetController::BroadcastInitialValues()
{
	const  UPokemonBaseAttributeSet* AuraAttributeSet = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);
	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
}

void UTrainerOverlayWidgetController::BindCallbacksToDependencies()
{
	const  UPokemonBaseAttributeSet* PokemonAttributeSet = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		PokemonAttributeSet->GetHealthAttribute()).AddUObject(this, &UTrainerOverlayWidgetController::HealthChanged);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		PokemonAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &UTrainerOverlayWidgetController::MaxHealthChanged);
}

void UTrainerOverlayWidgetController::HealthChanged(const FOnAttributeChangeData& Data) const
{
	OnHealthChanged.Broadcast(Data.NewValue);
}

void UTrainerOverlayWidgetController::MaxHealthChanged(const FOnAttributeChangeData & Data) const
{
	OnMaxHealthChanged.Broadcast(Data.NewValue);
}

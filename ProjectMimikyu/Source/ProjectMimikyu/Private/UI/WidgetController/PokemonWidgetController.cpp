// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/PokemonWidgetController.h"

void UPokemonWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
	PokeUIInfo = WCParams.PokeUIInfo;
}

void UPokemonWidgetController::BroadcastInitialValues()
{
}

void UPokemonWidgetController::BindCallbacksToDependencies()
{
}

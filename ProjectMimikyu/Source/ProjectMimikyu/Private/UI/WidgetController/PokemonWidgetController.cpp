// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/PokemonWidgetController.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Player/TrainerPlayerState.h"
#include "AIControllers/TrainerController.h"
#include "Characters/Pokemon_Parent.h"

void UPokemonWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
	PlayerController = WCParams.PlayerController;
}

void UPokemonWidgetController::SetUpPokemonAbilitySystem(const FWidgetControllerParams& WCParams)
{
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UPokemonWidgetController::BroadcastInitialValues()
{
}

void UPokemonWidgetController::BindCallbacksToDependencies()
{
}

APokemon_Parent* UPokemonWidgetController::GetPokemon()
{
	if (!Pokemon)
		Pokemon = CastChecked<APokemon_Parent>(GetPASC()->GetAvatarActor());
	return Pokemon;
}

ATrainerPlayerState* UPokemonWidgetController::GetTPS()
{
	if (!TrainerPlayerState)
		TrainerPlayerState = CastChecked<ATrainerPlayerState>(PlayerState);
	return TrainerPlayerState;
}

UPokemonAbilitySystemComponent* UPokemonWidgetController::GetPASC()
{
	if (!PokemonAbilitySystemComponent)
		PokemonAbilitySystemComponent = CastChecked<UPokemonAbilitySystemComponent>(AbilitySystemComponent);
	return PokemonAbilitySystemComponent;
}

UPokemonBaseAttributeSet* UPokemonWidgetController::GetPAS()
{
	if (!PokemonAttributeSet)
		PokemonAttributeSet = CastChecked<UPokemonBaseAttributeSet>(AttributeSet);
	return PokemonAttributeSet;
}

UPokemonDataAsset* UPokemonWidgetController::GetPokemonData()
{
	if (!PokemonData)
		PokemonData = GetPokemon()->PokemonDataAsset;
	return PokemonData;
}

ATrainerController* UPokemonWidgetController::GetTC()
{
	if (!TrainerController)
		TrainerController = CastChecked<ATrainerController>(PlayerController);
	return TrainerController;
}

AActor* UPokemonWidgetController::GetWidgetAvatarActor()
{
	return AbilitySystemComponent->GetAvatarActor();
}



//FText UPokemonWidgetController::GetPokemonName()
//{
//	return PokeUIInfo.PokemonName;
//}

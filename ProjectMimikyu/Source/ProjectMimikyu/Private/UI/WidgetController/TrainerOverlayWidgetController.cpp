// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/TrainerOverlayWidgetController.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Player/TrainerPlayerState.h"
#include "AIControllers/TrainerController.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "DataAssets/PokemonDataAsset.h"

void UTrainerOverlayWidgetController::BroadcastInitialValues()
{
	UE_LOG(LogTemp, Display, TEXT("Broadcast"));
	OnMaxHealthChanged.Broadcast(GetPAS()->GetMaxHealth());
	OnHealthChanged.Broadcast(GetPAS()->GetHealth());
	OnMaxPowerPointsChanged.Broadcast(GetPAS()->GetMaxPowerPoints());
	OnPowerPointsChanged.Broadcast(GetPAS()->GetPowerPoints());
}

void UTrainerOverlayWidgetController::BindCallbacksToDependencies()
{	
	GetTPS()->OnPartyUpdatedDelegate.AddLambda(
		[this](TArray<APokemon_Parent*> PokemonParty)
		{
			OnPartyChanged.Broadcast(PokemonParty);
		}
	);

	GetTPS()->OnPartyInfoUpdatedDelegate.AddLambda(
		[this](TArray<FPokemonInfo> PokemonParty)
		{
			PokemonInfoDelegate.Broadcast(PokemonParty);
		}
	);
	GetTPS()->OnPokemonActiveDelegate.AddLambda(
		[this](APokemon_Parent* ActivePokemon)
		{
			UAbilitySystemComponent* PASC = ActivePokemon->GetAbilitySystemComponent();
			UAttributeSet* PAS = ActivePokemon->GetAttributeSet();
			FWidgetControllerParams PokemonWidgetParams(PASC, PAS);
			SetUpPokemonAbilitySystem(PokemonWidgetParams);
			BindPokemonCallbacksToDependencies();
			BroadcastInitialValues();
			PokemonAbilityConfigured.Broadcast(PASC);
		}
	);
	GetTPS()->PokemonActiveInCombat.AddLambda(
		[this]()
		{
			PokemonActivatedDelegate.Broadcast();
		}
	);

	GetTC()->ShiftLeftDelegate.AddLambda(
		[this]()
		{
			ShiftUILeftDelegate.Broadcast();
		}
	);
		
	GetTC()->ShiftRightDelegate.AddLambda(
		[this]()
		{
			ShiftUIRightDelegate.Broadcast();
		}
	);
		
	GetTC()->SwapUIModeDelegate.AddLambda(
		[this]()
		{
			SwapSlotModesDelegate.Broadcast();
		}
	);

	GetTC()->KeyCalledDelegate.AddLambda(
		[this](const EDirectionPoint KeyDirection)
		{
			KeyDirectionDelegate.Broadcast(KeyDirection);
		}
	);
}

void UTrainerOverlayWidgetController::BindPokemonCallbacksToDependencies()
{
	if (!AbilitySystemComponent) return;

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast((int32)Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetMaxHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				GetPAS()->SetHealth(Data.NewValue);
				OnMaxHealthChanged.Broadcast((int32)Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetMaxPowerPointsAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				GetPAS()->SetPowerPoints(Data.NewValue);
				OnMaxPowerPointsChanged.Broadcast((int32)Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetPowerPointsAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnPowerPointsChanged.Broadcast((int32)Data.NewValue);
			}
	);
}

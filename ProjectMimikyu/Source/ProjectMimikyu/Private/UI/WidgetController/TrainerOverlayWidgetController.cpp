// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/TrainerOverlayWidgetController.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Player/TrainerPlayerState.h"
#include "Net/UnrealNetwork.h"
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
		[](APokemon_Parent* ActivePokemon)
		{
			UE_LOG(LogTemp, Warning, TEXT("Simple OnPokemonActive test hit: %s"), *GetNameSafe(ActivePokemon));
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
	if (!AbilitySystemComponent || !GetPAS())
	{
		return;
	}

	BoundPokemonASC = AbilitySystemComponent;

	HealthChangedHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast((int32)Data.NewValue);
			}
		);

	MaxHealthChangedHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetMaxHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				GetPAS()->SetHealth(Data.NewValue);
				OnMaxHealthChanged.Broadcast((int32)Data.NewValue);
			}
		);

	MaxPowerPointsChangedHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetMaxPowerPointsAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				GetPAS()->SetPowerPoints(Data.NewValue);
				OnMaxPowerPointsChanged.Broadcast((int32)Data.NewValue);
			}
		);

	PowerPointsChangedHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetPowerPointsAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnPowerPointsChanged.Broadcast((int32)Data.NewValue);
			}
		);

	LevelChangedHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetCurrentLevelAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnLevelChanged.Broadcast((int32)Data.NewValue);
			}
		);
}

void UTrainerOverlayWidgetController::UnbindPokemonCallbacksFromDependencies()
{
	if (!BoundPokemonASC || !GetPAS())
	{
		return;
	}

	BoundPokemonASC->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetHealthAttribute()).Remove(HealthChangedHandle);
	BoundPokemonASC->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetMaxHealthAttribute()).Remove(MaxHealthChangedHandle);
	BoundPokemonASC->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetMaxPowerPointsAttribute()).Remove(MaxPowerPointsChangedHandle);
	BoundPokemonASC->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetPowerPointsAttribute()).Remove(PowerPointsChangedHandle);
	BoundPokemonASC->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetCurrentLevelAttribute()).Remove(LevelChangedHandle);

	HealthChangedHandle.Reset();
	MaxHealthChangedHandle.Reset();
	PowerPointsChangedHandle.Reset();
	MaxPowerPointsChangedHandle.Reset();
	LevelChangedHandle.Reset();

	BoundPokemonASC = nullptr;
}

void UTrainerOverlayWidgetController::RebindActivePokemon(APokemon_Parent* ActivePokemon)
{
	if (!IsValid(ActivePokemon))
	{
		UE_LOG(LogTemp, Warning, TEXT("RebindActivePokemon failed: ActivePokemon invalid"));
		return;
}

	UAbilitySystemComponent* PASC = ActivePokemon->GetAbilitySystemComponent();
	UAttributeSet* PAS = ActivePokemon->GetAttributeSet();

	if (!PASC || !PAS)
	{
		UE_LOG(LogTemp, Warning, TEXT("RebindActivePokemon failed: missing ASC or AttributeSet on %s"), *GetNameSafe(ActivePokemon));
		return;
	}

	if (BoundPokemonASC == PASC)
	{
		UE_LOG(LogTemp, Display, TEXT("RebindActivePokemon skipped: ASC already bound for %s"), *GetNameSafe(ActivePokemon));
		return;
	}

	UnbindPokemonCallbacksFromDependencies();

	FWidgetControllerParams PokemonWidgetParams(PASC, PAS);
	SetUpPokemonAbilitySystem(PokemonWidgetParams);

	BindPokemonCallbacksToDependencies();
	BroadcastInitialValues();
	PokemonAbilityConfigured.Broadcast(PASC);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/TrainerOverlayWidgetController.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "Player/TrainerPlayerState.h"
#include "AIControllers/TrainerController.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "DataAssets/PokemonDataAsset.h"

void UTrainerOverlayWidgetController::BroadcastInitialValues()
{
	UE_LOG(LogTemp, Display, TEXT("Broadcast"));
	//OnHealthChanged.Broadcast(GetPAS()->GetHealth());
	//OnMaxHealthChanged.Broadcast(GetPAS()->GetMaxHealth());
}

void UTrainerOverlayWidgetController::BindCallbacksToDependencies()
{	
	GetTPS()->OnPartyUpdatedDelegate.AddLambda(
		[this](TArray<APokemon_Parent*> PokemonParty)
		{
			OnPartyChanged.Broadcast(PokemonParty);
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

	if (!AbilitySystemComponent) return;

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				TScriptInterface<IPokemonCombatInterface> PokemonCombatInterface = GetPASC()->GetAvatarActor();
				FPokemonUIInfo UIInfo;
				UIInfo.PokemonSpriteImage = GetPokemonData()->SpriteImage;
				UIInfo.PokemonLevel = PokemonCombatInterface->GetPokemonLevel();
				UIInfo.PokemonName = GetPokemonData()->Name;
				UIInfo.PokemonHPPercent = Data.NewValue / GetPAS()->GetMaxHealth();

				PokemonUI_InfoDelegate.Broadcast(UIInfo);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		GetPAS()->GetMaxHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				GetPAS()->SetHealth(Data.NewValue);
			}
	);


}

//void UTrainerOverlayWidgetController::HealthChanged(const FOnAttributeChangeData& Data) const
//{
//	OnHealthChanged.Broadcast(Data.NewValue);
//}
//
//void UTrainerOverlayWidgetController::MaxHealthChanged(const FOnAttributeChangeData & Data) const
//{
//	OnMaxHealthChanged.Broadcast(Data.NewValue);
//}

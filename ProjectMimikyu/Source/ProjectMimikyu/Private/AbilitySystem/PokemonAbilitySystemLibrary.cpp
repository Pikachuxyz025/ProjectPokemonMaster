// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "UI/TrainerHUD.h"

void UPokemonAbilitySystemLibrary::ActivateAbilityByTag(const UObject* WorldContextObject, UPokemonAbilitySystemComponent* ASC, FGameplayTag AbilityTag)
{
	ASC->ActivateAbilityByTag(AbilityTag);
}

UPokemonMenuWidgetController* UPokemonAbilitySystemLibrary::GetStatMenuWidgetController(const UObject* WorldContextObject)
{
	if (APlayerController* PC = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if (ATrainerHUD* TrainerHUD = Cast<ATrainerHUD>(PC->GetHUD()))
		{
			/**
			* TODO::
			* Get Trainer's Pokemon Party
			* 
			* Get AttributeSet and AbilitySystem from each individual Pokemon
			* Set In Pokemon Menu Widget Controller
			*/
			return nullptr;
		}
	}
	return nullptr;
}

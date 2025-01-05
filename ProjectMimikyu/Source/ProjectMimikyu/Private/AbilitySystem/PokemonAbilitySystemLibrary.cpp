// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Characters/Pokemon_Parent.h"
#include "UI/WidgetController/PokemonWidgetController.h"
#include "UI/WidgetController/PokemonMenuWidgetController.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "UI/TrainerHUD.h"

void UPokemonAbilitySystemLibrary::ActivateAbilityByTag(const UObject* WorldContextObject, UPokemonAbilitySystemComponent* ASC, FGameplayTag AbilityTag)
{
	ASC->ActivateAbilityByTag(AbilityTag);
}

UPokemonMenuWidgetController* UPokemonAbilitySystemLibrary::GetPokemonMenuWidgetController(AActor* ObjectActor)
{
	if (TObjectPtr<APokemon_Parent> Pokemon = Cast<APokemon_Parent>(ObjectActor))
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(ObjectActor, 0);
		ATrainerHUD* TrainerHUD = CastChecked<ATrainerHUD>(PC->GetHUD());

		UAbilitySystemComponent* PASC = Pokemon->GetAbilitySystemComponent();
		UAttributeSet* PAS = Pokemon->GetAttributeSet();
		FPokemonUIInfo Info = Pokemon->GetPokemonUIInfo();

		const FWidgetControllerParams WidgetControllerParams(Info, PASC, PAS);
		UPokemonMenuWidgetController* WC = TrainerHUD->GetPokemonMenuWidgetController(WidgetControllerParams);
		WC->SetStatInfo(Pokemon->GetPokemonStatInfo());
		return WC;
	}

	return nullptr;
}

UPokemonUIInfoWidgetController* UPokemonAbilitySystemLibrary::GetPokemonUIInfoWidgetController(AActor* ObjectActor)
{
	if (TObjectPtr<APokemon_Parent> Pokemon = Cast<APokemon_Parent>(ObjectActor))
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(ObjectActor, 0);
		ATrainerHUD* TrainerHUD = CastChecked<ATrainerHUD>(PC->GetHUD());
		UAbilitySystemComponent* PASC = Pokemon->GetAbilitySystemComponent();
		UAttributeSet* PAS = Pokemon->GetAttributeSet();
		FPokemonUIInfo Info = Pokemon->GetPokemonUIInfo();
		const FWidgetControllerParams WidgetControllerParams(Info, PASC, PAS);
		return TrainerHUD->GetPokemonUIInfoWidgetController(WidgetControllerParams);
	}
	return nullptr;
}

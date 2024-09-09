// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"

void UPokemonAbilitySystemLibrary::ActivateAbilityByTag(const UObject* WorldContextObject, UPokemonAbilitySystemComponent* ASC, FGameplayTag AbilityTag)
{
	ASC->ActivateAbilityByTag(AbilityTag);
}

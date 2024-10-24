// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PokemonAbilitySystemLibrary.generated.h"

class UPokemonAbilitySystemComponent;
class UPokemonMenuWidgetController;
UCLASS(BlueprintType, Blueprintable)
class PROJECTMIMIKYU_API UPokemonAbilitySystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "PokemonAbilitySystemLibrary|AbilitySystemCalls")
	static void ActivateAbilityByTag(const UObject* WorldContextObject, UPokemonAbilitySystemComponent* ASC, FGameplayTag AbilityTag);

	UFUNCTION(BlueprintPure, Category = "PokemonAbilitySystemLibrary|WidgetController")
	static UPokemonMenuWidgetController* GetStatMenuWidgetController(const UObject* WorldContextObject);
};

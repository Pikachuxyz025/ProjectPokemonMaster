// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PokemonInputConfig.generated.h"

class UInputAction;
USTRUCT(BlueprintType)
struct FPokemonInputAction
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	const UInputAction* InputAction = nullptr;

	//UPROPERTY(EditDefaultsOnly)
	//FGameplayTag InputTag = FGameplayTag();

	UPROPERTY(EditDefaultsOnly)
	 int32 Index = 0;
};

USTRUCT(BlueprintType)
struct FPokemonInputDodgeAction
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	const UInputAction* InputAction = nullptr;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag InputTag = FGameplayTag();
};

UCLASS()
class PROJECTMIMIKYU_API UPokemonInputConfig : public UDataAsset
{
	GENERATED_BODY()
	
public:
	const UInputAction* FindAbilityInputActionForIndex(const int32 Index, bool bLogNotFound = false) const;
	const FVector FindInputActionForDodgeDirection(FGameplayTag GameplayTag, bool bLogNotFound = false) const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TArray<FPokemonInputAction> AbilityInputActions;
		UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TArray<FPokemonInputDodgeAction> DodgeInputActions;
};

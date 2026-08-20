// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Characters/CharacterTypes.h"
#include "PokemonMoveDataAsset.generated.h"

class UPokemonGameplayAbilities;
class UGameplayAbility; 

UCLASS()
class PROJECTMIMIKYU_API UPokemonMoveDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText MoveName;

	UPROPERTY(EditAnywhere)
	FText MoveDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "Abilities"))
	FGameplayTag AbilityTag = FGameplayTag();

	UPROPERTY(BlueprintReadOnly)
	FGameplayTag StatusTag = FGameplayTag();

	UPROPERTY(BlueprintReadOnly)
	FGameplayTag InputTag = FGameplayTag();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag AbilityType = FGameplayTag();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr <const UTexture2D> Icon = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UPokemonGameplayAbilities> Ability;

#pragma region Resources

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resources|Power Points", meta = (ClampMin = "1", UIMin = "1"));
	int32 BaseMaxPowerPoints = 3;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resources|Power Points", meta = (ClampMin = "0.0", UIMin = "0.0"))
	float PowerPointRechargeDuration = 8.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resources|Stamina", meta = (ClampMin = "0.0", UIMin = "0.0"))
	float BaseStaminaCost = 10.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resources|Stamina", meta = (ClampMin = "0.0", UIMin = "0.0"))
	float SustainedStaminaCostPerSecond = 0.f;

#pragma endregion

};

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
private:


};

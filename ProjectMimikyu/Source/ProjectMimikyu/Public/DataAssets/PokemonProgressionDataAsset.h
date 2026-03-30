// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PokemonProgressionDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PROJECTMIMIKYU_API UPokemonProgressionDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	int32 GetExperienceAtLevel(const FGameplayTag& XPType, int32 Level) const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	int32 GetExperienceNeededToLevelUp(const FGameplayTag& XPType, int32 CurrentLevel) const;
};

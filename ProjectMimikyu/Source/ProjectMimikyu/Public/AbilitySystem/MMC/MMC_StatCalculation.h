// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "PokemonGameplayTags.h"
#include "MMC_StatCalculation.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UMMC_StatCalculation : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	
public:
	int32 CalculateOtherStats(int CurrentLevel, int BaseStat, float Nature, float ELB) const;
	FPokemonGameplayTags GameplayTags = FPokemonGameplayTags::Get();
};

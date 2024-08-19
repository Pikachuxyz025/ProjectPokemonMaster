// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_HealthCalculation.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UMMC_HealthCalculation : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	
public:

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

};

// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/MMC/MMC_StatCalculation.h"
#include "MMC_Attack.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UMMC_Attack : public UMMC_StatCalculation
{
	GENERATED_BODY()
	
public:
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
};

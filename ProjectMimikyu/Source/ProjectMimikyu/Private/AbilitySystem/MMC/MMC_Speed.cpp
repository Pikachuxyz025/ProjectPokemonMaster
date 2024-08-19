// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_Speed.h"
#include <Interfaces/PokemonCombatInterface.h>

float UMMC_Speed::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	IPokemonCombatInterface* CombatInterface = Cast<IPokemonCombatInterface>(Spec.GetContext().GetSourceObject());
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetSpeed();

	float Nature = CombatInterface->GetNatureMultiplier(EStatsType::EST_Speed);
	float ELB = CombatInterface->GetELB(BaseStat, EStatsType::EST_Speed);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_SpecialDefense.h"
#include <Interfaces/PokemonCombatInterface.h>

float UMMC_SpecialDefense::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	IPokemonCombatInterface* CombatInterface = Cast<IPokemonCombatInterface>(Spec.GetContext().GetSourceObject());
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetSpecialDefense();

	float Nature = CombatInterface->GetNatureMultiplier(EStatsType::EST_SpecialDefense);
	float ELB = CombatInterface->GetELB(BaseStat, EStatsType::EST_SpecialDefense);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}
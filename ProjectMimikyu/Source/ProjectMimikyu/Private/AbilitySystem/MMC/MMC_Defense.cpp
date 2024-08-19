// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_Defense.h"
#include "Interfaces/PokemonCombatInterface.h"

float UMMC_Defense::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	IPokemonCombatInterface* CombatInterface = Cast<IPokemonCombatInterface>(Spec.GetContext().GetSourceObject());
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetDefense();

	float Nature = CombatInterface->GetNatureMultiplier(EStatsType::EST_Defense);
	float ELB = CombatInterface->GetELB(BaseStat, EStatsType::EST_Defense);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

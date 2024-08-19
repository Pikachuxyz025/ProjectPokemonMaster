// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_SpecialAttack.h"
#include <Interfaces/PokemonCombatInterface.h>

float UMMC_SpecialAttack::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	IPokemonCombatInterface* CombatInterface = Cast<IPokemonCombatInterface>(Spec.GetContext().GetSourceObject());
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetSpecialAttack();

	float Nature = CombatInterface->GetNatureMultiplier(EStatsType::EST_SpecialAttack);
	float ELB = CombatInterface->GetELB(BaseStat, EStatsType::EST_SpecialAttack);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_HealthCalculation.h"
#include "Interfaces/PokemonCombatInterface.h"

float UMMC_HealthCalculation::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	IPokemonCombatInterface* CombatInterface = Cast<IPokemonCombatInterface>(Spec.GetContext().GetSourceObject());
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetHP();

	float X = ((float)CurrentLevel / 100.f) + 1.f;
	int32 NewHealth = ((X * BaseStat) + CurrentLevel) + CombatInterface->GetELB(BaseStat, EStatsType::EST_HealthPoints);
	return (float)NewHealth;
}

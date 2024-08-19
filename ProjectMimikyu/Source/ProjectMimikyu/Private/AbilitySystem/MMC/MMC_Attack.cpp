// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_Attack.h"
#include "Interfaces/PokemonCombatInterface.h"

float UMMC_Attack::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	IPokemonCombatInterface* CombatInterface = Cast<IPokemonCombatInterface>(Spec.GetContext().GetSourceObject());
	int32 CurrentLevel = CombatInterface->GetPokemonLevel(); 
	int32 BaseStat = CombatInterface->GetAttack();

	float Nature = CombatInterface->GetNatureMultiplier(EStatsType::EST_Attack);
	float ELB = CombatInterface->GetELB(BaseStat,EStatsType::EST_Attack);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_SpecialDefense.h"
#include <Interfaces/PokemonCombatInterface.h>

float UMMC_SpecialDefense::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	FGameplayTag SpecialDefense = GameplayTags.Get().Attributes_Stats_SpecialDefense;
	IPokemonCombatInterface* CombatInterface = Cast<IPokemonCombatInterface>(Spec.GetContext().GetSourceObject());
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetBaseStatFromTag(SpecialDefense);

	float Nature = CombatInterface->GetNatureMultiplier(SpecialDefense);
	float ELB = CombatInterface->GetELB(BaseStat, SpecialDefense);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

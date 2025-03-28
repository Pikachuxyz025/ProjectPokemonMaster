// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_Defense.h"
#include "Interfaces/PokemonCombatInterface.h"

float UMMC_Defense::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	FGameplayTag Defense = FPokemonGameplayTags::Get().Attributes_Stats_Defense;
	TScriptInterface<IPokemonCombatInterface>  CombatInterface = Spec.GetContext().GetSourceObject();
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetBaseStatFromTag(Defense);

	float Nature = CombatInterface->GetNatureMultiplier(Defense);
	float ELB = CombatInterface->GetELB(BaseStat, Defense);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

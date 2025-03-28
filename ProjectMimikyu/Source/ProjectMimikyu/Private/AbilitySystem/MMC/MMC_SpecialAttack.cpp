// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_SpecialAttack.h"
#include <Interfaces/PokemonCombatInterface.h>

float UMMC_SpecialAttack::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	FGameplayTag SpecialAttack = FPokemonGameplayTags::Get().Attributes_Stats_SpecialAttack;
	TScriptInterface<IPokemonCombatInterface> CombatInterface = Spec.GetContext().GetSourceObject();
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetBaseStatFromTag(SpecialAttack);

	float Nature = CombatInterface->GetNatureMultiplier(SpecialAttack);
	float ELB = CombatInterface->GetELB(BaseStat, SpecialAttack);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

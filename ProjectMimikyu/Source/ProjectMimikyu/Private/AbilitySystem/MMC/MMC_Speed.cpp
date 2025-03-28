// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_Speed.h"
#include <Interfaces/PokemonCombatInterface.h>

float UMMC_Speed::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	FGameplayTag Speed = FPokemonGameplayTags::Get().Attributes_Stats_Speed;
	TScriptInterface<IPokemonCombatInterface> CombatInterface = Spec.GetContext().GetSourceObject();
	int32 CurrentLevel = CombatInterface->GetPokemonLevel();
	int32 BaseStat = CombatInterface->GetBaseStatFromTag(Speed);

	float Nature = CombatInterface->GetNatureMultiplier(Speed);
	float ELB = CombatInterface->GetELB(BaseStat, Speed);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

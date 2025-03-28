// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_Attack.h"
#include "Interfaces/PokemonCombatInterface.h"

float UMMC_Attack::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	FGameplayTag Attack = FPokemonGameplayTags::Get().Attributes_Stats_Attack;
	TScriptInterface<IPokemonCombatInterface> CombatInterface = Spec.GetContext().GetSourceObject();
	int32 CurrentLevel = CombatInterface->GetPokemonLevel(); 
	int32 BaseStat = CombatInterface->GetBaseStatFromTag(Attack);

	float Nature = CombatInterface->GetNatureMultiplier(Attack);
	float ELB = CombatInterface->GetELB(BaseStat, Attack);
	return (float)CalculateOtherStats(CurrentLevel, BaseStat, Nature, ELB);
}

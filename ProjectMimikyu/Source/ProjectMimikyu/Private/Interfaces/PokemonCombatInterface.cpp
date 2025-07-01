// Fill out your copyright notice in the Description page of Project Settings.


#include "Interfaces/PokemonCombatInterface.h"

// Add default functionality here for any IPokemonCombatInterface functions that are not pure virtual.

int32 IPokemonCombatInterface::GetPokemonLevel()
{
	return 0;
}

float IPokemonCombatInterface::GetNatureMultiplier(const FGameplayTag& StatTagToBeModified)
{
	return 0.0f;
}

int32 IPokemonCombatInterface::GetELB(int32 BaseStat, const FGameplayTag& StatTag)
{
	return 0;
}

int32 IPokemonCombatInterface::GetELBValue(const FGameplayTag& StatTag)
{
	return 0;
}

float IPokemonCombatInterface::GetTypeMatchup(EElementalType ElementalType)
{
	return 0.0f;
}

int32 IPokemonCombatInterface::GetXPBaseReward()
{
	return int32();
}

int32 IPokemonCombatInterface::GetExperienceNeededAtLevel(int32 Level)
{
	return int32();
}

int32 IPokemonCombatInterface::GetBaseStatFromTag(const FGameplayTag& StatTag)
{
	return int32();
}

UPokemonMoveDataAsset* IPokemonCombatInterface::GetPokemonActiveMove()
{
	return nullptr;
}

FPokemonTypeInfo IPokemonCombatInterface::GetPokemonElementalTypes()
{
	return FPokemonTypeInfo();
}

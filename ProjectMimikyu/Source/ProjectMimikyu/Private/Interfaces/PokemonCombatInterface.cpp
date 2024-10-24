// Fill out your copyright notice in the Description page of Project Settings.


#include "Interfaces/PokemonCombatInterface.h"

// Add default functionality here for any IPokemonCombatInterface functions that are not pure virtual.

int32 IPokemonCombatInterface::GetPokemonLevel()
{
	return 0;
}

int32 IPokemonCombatInterface::GetHP()
{
	return 0;
}

int32 IPokemonCombatInterface::GetSpecialDefense()
{
	return 0;
}

int32 IPokemonCombatInterface::GetSpecialAttack()
{
	return 0;
}

int32 IPokemonCombatInterface::GetAttack()
{
	return 0;
}

int32 IPokemonCombatInterface::GetDefense()
{
	return 0;
}

int32 IPokemonCombatInterface::GetSpeed()
{
	return 0;
}

float IPokemonCombatInterface::GetNatureMultiplier(EStatsType StatType)
{
	return 0.0f;
}

int32 IPokemonCombatInterface::GetELB(int32 BaseStat, EStatsType StatType)
{
	return 0;
}

float IPokemonCombatInterface::GetTypeMatchup(EElementalType ElementalType)
{
	return 0.0f;
}

FVector IPokemonCombatInterface::GetCombatSocketLocation()
{
	return FVector();
}

UPokemonMoveDataAsset* IPokemonCombatInterface::GetPokemonActiveMove()
{
	return nullptr;
}

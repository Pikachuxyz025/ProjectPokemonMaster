// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Characters/CharacterTypes.h"
#include "PokemonCombatInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPokemonCombatInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTMIMIKYU_API IPokemonCombatInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual int32 GetPokemonLevel();
	virtual int32 GetHP();
	virtual int32 GetSpecialDefense();
	virtual int32 GetSpecialAttack();
	virtual int32 GetAttack();
	virtual int32 GetDefense();
	virtual int32 GetSpeed();
	virtual float GetNatureMultiplier(EStatsType StatType);
	virtual int32 GetELB(int32 BaseStat, EStatsType StatType);
};
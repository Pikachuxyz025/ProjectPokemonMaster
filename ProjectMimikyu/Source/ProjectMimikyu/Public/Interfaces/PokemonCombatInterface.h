// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h" 
#include "Characters/CharacterTypes.h"
#include "PokemonCombatInterface.generated.h"

class UPokemonMoveDataAsset;

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
	virtual float GetNatureMultiplier(const FGameplayTag& StatTagToBeModified);
	virtual int32 GetELB(int32 BaseStat, const FGameplayTag& StatTag);
	virtual int32 GetELBValue(const FGameplayTag& StatTag);
	virtual float GetTypeMatchup(EElementalType ElementalType);
	virtual void AdjustXP(int32 NewXP) = 0;
	virtual void AdjustLevel(int32 NewLevel) = 0;
	virtual int32 GetXPBaseReward();
	virtual void ReinitializeDefaultAttributes() = 0;
	virtual int32 GetExperienceNeededAtLevel(int32 Level);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector GetCombatSocketLocation(const FGameplayTag& MontageTag);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* GetAvatar();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AActor* GetCombatTarget();

	virtual int32 GetBaseStatFromTag(const FGameplayTag& StatTag);
	virtual UPokemonMoveDataAsset* GetPokemonActiveMove();
	virtual FPokemonTypeInfo GetPokemonElementalTypes();

	virtual void Fainted(const FVector& DeathImpulse) = 0;
	virtual void DisengageFromCombat() = 0;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool IsDead() const;
};

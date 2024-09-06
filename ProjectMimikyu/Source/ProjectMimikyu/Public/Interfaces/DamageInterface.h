// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/CharacterTypes.h"
#include "UObject/Interface.h"
#include "DamageInterface.generated.h"

class UPokemonMoveDataAsset;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDamageInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTMIMIKYU_API IDamageInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual float GetCurrentHealth();
	virtual float GetMaxHealth();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RecieveHealth(float AddHealthPercent);

	virtual void RecieveDamage(FDamageInfo DamageInfo);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool HasFainted();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsAttacking();
};

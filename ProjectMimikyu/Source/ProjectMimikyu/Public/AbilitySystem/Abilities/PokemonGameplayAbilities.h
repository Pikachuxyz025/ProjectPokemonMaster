// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Characters/CharacterTypes.h"
#include "PokemonGameplayTags.h"
#include "PokemonGameplayAbilities.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UPokemonGameplayAbilities : public UGameplayAbility
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	float BaseDamage = 0;

	UPROPERTY(EditAnywhere, meta = (Categories = "PokemonMoves.MoveType"))
	FGameplayTag MoveType;

	UPROPERTY(EditAnywhere, meta = (Categories = "PokemonMoves.MoveAction"))
	FGameplayTag MoveAction;

	UPROPERTY(EditAnywhere, meta = (Categories = "Damage.Response"))
	FGameplayTag DamageResponse;

};

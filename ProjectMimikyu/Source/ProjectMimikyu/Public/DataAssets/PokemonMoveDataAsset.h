// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Characters/CharacterTypes.h"
#include "PokemonMoveDataAsset.generated.h"

/**
 *
 */
UCLASS()
class PROJECTMIMIKYU_API UPokemonMoveDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FText MoveName;

	UPROPERTY(EditAnywhere)
	FText MoveDescription;

	UPROPERTY(EditAnywhere)
	float BaseDamage = 0;

	UPROPERTY(EditAnywhere)
	EMoveType Category = EMoveType::EMT_None;

	UPROPERTY(EditAnywhere)
	EMoveAction MoveAction = EMoveAction::EMA_None;

	UPROPERTY(EditAnywhere,meta = (Categories = "PokemonMoves.MoveAction"))
	FGameplayTag ActionType;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "MoveAction == EMoveAction::EMA_Melee", EditConditionHides))
	float IdealRange = 0;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "MoveAction == EMoveAction::EMA_Melee || MoveAction == EMoveAction::EMA_Charging", EditConditionHides))
	float SpeedMultiplier = 1;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "MoveAction == EMoveAction::EMA_Projectile", EditConditionHides))
	bool bNeedsToBeInLineOfSight = false;

	UPROPERTY(EditAnywhere)
	EDamageResponse DamageResponse = EDamageResponse::EDR_None;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "DamageResponse == EDamageResponse::EDR_Stun", EditConditionHides))
	float ChanceOfFlinching = 0;

	UPROPERTY(EditAnywhere)
	EElementalType MoveElementalType = EElementalType::EET_None;

	UPROPERTY(EditAnywhere)
	float RechargeTime = 0;

	UPROPERTY(EditAnywhere)
	bool bShouldDamageInvincible = false;

	UPROPERTY(EditAnywhere)
	bool bCanBeBlocked = false;

	UPROPERTY(EditAnywhere)
	bool bCanBeParried = false;

	UPROPERTY(EditAnywhere)
	bool bShouldForceInterrupt = false;

	UPROPERTY(EditAnywhere)
	bool bIsTutorMove = false;

	UPROPERTY(EditAnywhere)
	bool bIsTM = false;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "bIsTM", EditConditionHides))
	int32 TMNumber = 0;

	UPROPERTY(EditAnywhere, Category = "Status Effect")
	bool bHasStatus = false;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "bHasStatus", EditConditionHides), Category = "Status Effect")
	EStatusType InflictableStatus = EStatusType::EST_None;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "bHasStatus", EditConditionHides), Category = "Status Effect")
	float ChanceOfStatus = 0;
};
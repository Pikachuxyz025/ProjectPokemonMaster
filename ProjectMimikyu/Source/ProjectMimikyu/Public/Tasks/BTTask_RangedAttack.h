// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tasks/BTTask_ActivateAbility.h"
#include "BTTask_RangedAttack.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UBTTask_RangedAttack : public UBTTask_ActivateAbility
{
	GENERATED_BODY()
public:
	UBTTask_RangedAttack();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;

	UFUNCTION()
	void AttackComplete();

protected:
	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector AttackTargetKey;

	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector PokemonMoveKey;

	UPROPERTY()
	class APokemonAIController* PokemonController;

	UPROPERTY()
	class UPokemonMoveDataAsset* PokemonMove;

	UPROPERTY()
	class APokemon_Parent* Pokemon;

	UPROPERTY()
	AActor* AttackTarget;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MeleeAttack.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UBTTask_MeleeAttack : public UBTTaskNode
{
	GENERATED_BODY()
	
public:

	UBTTask_MeleeAttack();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	EBTNodeResult::Type ProcessRequest(AAIController* Controller);

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
	class APokemon_Parent* Pokemon;

	UPROPERTY()
	AActor* AttackTarget;

	FAIMoveRequest MoveRequest;

	bool bMadeIt = false;
};

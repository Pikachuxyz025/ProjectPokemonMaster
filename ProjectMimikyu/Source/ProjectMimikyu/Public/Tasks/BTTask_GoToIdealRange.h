// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GoToIdealRange.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UBTTask_GoToIdealRange : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_GoToIdealRange();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	EBTNodeResult::Type ProcessRequest(AAIController* Controller);

	UFUNCTION()
	void AttackComplete();

private:

	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector AttackRangeKey;
	
	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector AttackTargetKey;

	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector PokemonMoveKey;
	UPROPERTY()
	AActor* AttackTarget;

	UPROPERTY()
	class APokemonAIController* PokemonController;

	UPROPERTY()
	class APokemon_Parent* Pokemon;

	FAIMoveRequest MoveRequest;
};

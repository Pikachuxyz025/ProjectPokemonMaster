// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RoamTo.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UBTTask_RoamTo : public UBTTaskNode
{
	GENERATED_BODY()
	

public:

	UBTTask_RoamTo();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	EBTNodeResult::Type ProcessRequest(AAIController* Controller);

	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector SpawnPointKey;

	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector TargetLocationKey;

	UPROPERTY()
	class APokemonAIController* PokemonController;

	FAIMoveRequest MoveRequest;

	UPROPERTY(EditAnywhere)
	float AcceptableRadius = 5.0f;
private:
};

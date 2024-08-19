// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FollowTrainer.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UBTTask_FollowTrainer : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_FollowTrainer();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	EBTNodeResult::Type ProcessRequest(AAIController* Controller);
protected:
	FAIMoveRequest MoveRequest;

	UPROPERTY(EditAnywhere)
	float AcceptableRadius = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector TrainerKey;

	UPROPERTY()
	class	APokemonAIController* PokemonController;

	UPROPERTY()
	class APokemon_Parent* Pokemon;
};

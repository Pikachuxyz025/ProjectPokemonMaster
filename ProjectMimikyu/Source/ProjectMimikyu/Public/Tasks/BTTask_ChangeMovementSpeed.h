// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Characters/CharacterTypes.h"
#include "BTTask_ChangeMovementSpeed.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UBTTask_ChangeMovementSpeed : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_ChangeMovementSpeed();

protected:

	UPROPERTY(EditAnywhere)
	EMovementSpeed NewMovement = EMovementSpeed::EMS_Idle;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

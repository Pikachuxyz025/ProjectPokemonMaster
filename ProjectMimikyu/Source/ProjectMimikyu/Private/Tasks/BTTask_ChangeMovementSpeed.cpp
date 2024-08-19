// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_ChangeMovementSpeed.h"
#include "AIController.h"
#include "Characters/Pokemon_Parent.h"

UBTTask_ChangeMovementSpeed::UBTTask_ChangeMovementSpeed()
{
	NodeName = TEXT("Change Movement Speed");
}

EBTNodeResult::Type UBTTask_ChangeMovementSpeed::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(OwnerComp.GetAIOwner()->GetPawn());

	if (Pokemon)
	{
		Pokemon->SetMovementSpeed(NewMovement);
	}
	return EBTNodeResult::Succeeded;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_GoToIdealRange.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIControllers/PokemonAIController.h"
#include "Characters/Pokemon_Parent.h"
#include "Navigation/PathFollowingComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"

UBTTask_GoToIdealRange::UBTTask_GoToIdealRange()
{
	NodeName = "Go To Ideal Range";
	bNotifyTick = true;
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_GoToIdealRange::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();

	PokemonController = Cast<APokemonAIController>(OwnerComp.GetAIOwner());
	Pokemon = Cast<APokemon_Parent>(OwnerComp.GetAIOwner()->GetPawn());

	AttackTarget = Cast<AActor>(MyBlackboard->GetValueAsObject(AttackTargetKey.SelectedKeyName));
	float AttackRadius = MyBlackboard->GetValueAsFloat(AttackRangeKey.SelectedKeyName);

	UPokemonMoveDataAsset* PokemonMove = Cast<UPokemonMoveDataAsset>(MyBlackboard->GetValueAsClass(PokemonMoveKey.SelectedKeyName));

	return EBTNodeResult::Failed;
}

void UBTTask_GoToIdealRange::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	if (PokemonController && MoveRequest.IsValid())
	{
		FinishLatentTask(OwnerComp, ProcessRequest(PokemonController));
	}
}

EBTNodeResult::Type UBTTask_GoToIdealRange::ProcessRequest(AAIController* Controller)
{
	EBTNodeResult::Type NodeResulted = EBTNodeResult::Type();
	EPathFollowingRequestResult::Type RequestResult = EPathFollowingRequestResult::Failed;

	RequestResult = Controller->MoveTo(MoveRequest);

	switch (RequestResult)
	{
	case EPathFollowingRequestResult::Failed:
		return EBTNodeResult::Failed;
		break;

	case EPathFollowingRequestResult::AlreadyAtGoal:
		PokemonController->SetFocus(AttackTarget);
		NodeResulted = EBTNodeResult::InProgress;
		break;

	case EPathFollowingRequestResult::RequestSuccessful:
		NodeResulted = EBTNodeResult::InProgress;
		break;
	}

	return NodeResulted;
}

void UBTTask_GoToIdealRange::AttackComplete()
{
	UE_LOG(LogTemp, Display, TEXT("Attack Complete"));
	UBehaviorTreeComponent* OwnerComp = Cast<UBehaviorTreeComponent>(GetOuter());
	if (OwnerComp)
	{
		FinishLatentTask(*OwnerComp, EBTNodeResult::Succeeded);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("OwnerComp null"));
	}
}

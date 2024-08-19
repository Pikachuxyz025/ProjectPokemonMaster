// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_FollowTrainer.h"
#include <BehaviorTree/BlackboardComponent.h>
#include "Characters/Pokemon_Parent.h"
#include "AIControllers/PokemonAIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameFramework/CharacterMovementComponent.h"

UBTTask_FollowTrainer::UBTTask_FollowTrainer()
{
	NodeName = TEXT("Follow Trainer");
	bCreateNodeInstance = true;
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_FollowTrainer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();

	PokemonController = Cast<APokemonAIController>(OwnerComp.GetAIOwner());
	AActor* Trainer = Cast<AActor>(MyBlackboard->GetValueAsObject(TrainerKey.SelectedKeyName));

	FAIMoveRequest Request;
	Request.SetGoalActor(Trainer);
	Request.SetAcceptanceRadius(AcceptableRadius);

	MoveRequest = Request;

	return ProcessRequest(PokemonController);

}

void UBTTask_FollowTrainer::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	if (PokemonController && MoveRequest.IsValid())
	{
		FinishLatentTask(OwnerComp, ProcessRequest(PokemonController));
	}
}

EBTNodeResult::Type UBTTask_FollowTrainer::ProcessRequest(AAIController* Controller)
{
	EBTNodeResult::Type NodeResulted = EBTNodeResult::Type();
	EPathFollowingRequestResult::Type RequestResult = EPathFollowingRequestResult::Failed;

	RequestResult = Controller->MoveTo(MoveRequest);

	switch (RequestResult)
	{
	case EPathFollowingRequestResult::Failed:
		return EBTNodeResult::InProgress;
		break;

	case EPathFollowingRequestResult::AlreadyAtGoal:
		NodeResulted = EBTNodeResult::Succeeded;
		break;

	case EPathFollowingRequestResult::RequestSuccessful:
		NodeResulted = EBTNodeResult::InProgress;
		break;
	}
	return NodeResulted;
}

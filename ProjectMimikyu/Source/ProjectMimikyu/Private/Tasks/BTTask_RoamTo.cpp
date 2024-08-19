// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_RoamTo.h"
#include <BehaviorTree/BlackboardComponent.h>
#include "AIControllers/PokemonAIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NavigationData.h"
#include "NavigationSystem.h"
UBTTask_RoamTo::UBTTask_RoamTo()
{
	NodeName = "Roam To";
	bNotifyTick = true;
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_RoamTo::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();
	PokemonController = Cast<APokemonAIController>(OwnerComp.GetAIOwner());

	FVector Origin = MyBlackboard->GetValueAsVector(SpawnPointKey.SelectedKeyName);
	UNavigationSystemV1* NavigationSystem = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavigationSystem)
		return EBTNodeResult::Failed;

	FNavLocation NavLocation;
	bool bSuccess = NavigationSystem->GetRandomPointInNavigableRadius(Origin, 500.f, NavLocation); // will likely turn the radius into an unique variable based on the bravery of the pokemon.

	if (bSuccess)
	{
		FAIMoveRequest Request;
		Request.SetGoalLocation(NavLocation.Location);
		Request.SetAcceptanceRadius(AcceptableRadius);

		MyBlackboard->SetValueAsVector(TargetLocationKey.SelectedKeyName, NavLocation.Location);
		MoveRequest = Request;
		if (MoveRequest.IsValid())
		{
				return ProcessRequest(PokemonController);
		}
		else
		{
			return EBTNodeResult::Succeeded;
		}

	}
	return EBTNodeResult::Failed;
}

void UBTTask_RoamTo::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	if (PokemonController && MoveRequest.IsValid())
	{
		FinishLatentTask(OwnerComp, ProcessRequest(PokemonController));
	}
}

EBTNodeResult::Type UBTTask_RoamTo::ProcessRequest(AAIController* Controller)
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
		NodeResulted = EBTNodeResult::Succeeded;
		break;

	case EPathFollowingRequestResult::RequestSuccessful:
		NodeResulted = EBTNodeResult::InProgress;
		break;
	}

	return NodeResulted;
}

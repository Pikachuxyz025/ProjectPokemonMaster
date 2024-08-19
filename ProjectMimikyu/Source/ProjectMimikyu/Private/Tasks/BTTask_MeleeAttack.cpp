// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_MeleeAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIControllers/PokemonAIController.h"
#include "Characters/Pokemon_Parent.h"
#include "Navigation/PathFollowingComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"

UBTTask_MeleeAttack::UBTTask_MeleeAttack()
{
	NodeName = "Melee Move";
	bNotifyTick = true;
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_MeleeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();

	PokemonController = Cast<APokemonAIController>(OwnerComp.GetAIOwner());
	Pokemon = Cast<APokemon_Parent>(OwnerComp.GetAIOwner()->GetPawn());

	AttackTarget = Cast<AActor>(MyBlackboard->GetValueAsObject(AttackTargetKey.SelectedKeyName));

	bMadeIt = false;
	UPokemonMoveDataAsset* PokemonMove = Cast<UPokemonMoveDataAsset>(MyBlackboard->GetValueAsObject(PokemonMoveKey.SelectedKeyName));

	if(Pokemon->OnAttackEnd.IsBound())
	{
		Pokemon->OnAttackEnd.Clear();
	}
	Pokemon->OnAttackEnd.AddDynamic(this, &UBTTask_MeleeAttack::AttackComplete);
	Pokemon->SetMovementSpeed(EMovementSpeed::EMS_Engaging);
	FAIMoveRequest Request;
	Request.SetGoalActor(AttackTarget);
	Request.SetAcceptanceRadius(PokemonMove->IdealRange);
	MoveRequest = Request;

	return ProcessRequest(PokemonController);
}

void UBTTask_MeleeAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	if (PokemonController && MoveRequest.IsValid()&&!bMadeIt)
	{
		FinishLatentTask(OwnerComp, ProcessRequest(PokemonController));
	}
}

EBTNodeResult::Type UBTTask_MeleeAttack::ProcessRequest(AAIController* Controller)
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
		// use Attack
		Pokemon->EnactMove();
		bMadeIt = true;
		UE_LOG(LogTemp, Display, TEXT("In melee range"));
		NodeResulted = EBTNodeResult::InProgress;
		break;

	case EPathFollowingRequestResult::RequestSuccessful:
		NodeResulted = EBTNodeResult::InProgress;
		break;
	}

	return NodeResulted;
}

void UBTTask_MeleeAttack::AttackComplete()
{
	UE_LOG(LogTemp, Display, TEXT("Attack Complete"));
	UBehaviorTreeComponent* OwnerComp = Cast<UBehaviorTreeComponent>(GetOuter());
	if (OwnerComp)
	{
		bMadeIt = true;
		FinishLatentTask(*OwnerComp, EBTNodeResult::Succeeded);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("OwnerComp null"));
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_ChargingAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIControllers/PokemonAIController.h"
#include "Characters/Pokemon_Parent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "GameFramework/CharacterMovementComponent.h"

UBTTask_ChargingAttack::UBTTask_ChargingAttack()
{
	NodeName = "Charging Attack";
	bNotifyTick = true;
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_ChargingAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();
	
	PokemonASC = GetPokemonAbilitySystemComponent(OwnerComp);
	PokemonController = Cast<APokemonAIController>(OwnerComp.GetAIOwner());
	Pokemon = Cast<APokemon_Parent>(OwnerComp.GetAIOwner()->GetPawn());
	PokemonMove = Cast<UPokemonMoveDataAsset>(MyBlackboard->GetValueAsObject(PokemonMoveKey.SelectedKeyName));

	AttackTarget = Cast<AActor>(MyBlackboard->GetValueAsObject(AttackTargetKey.SelectedKeyName));

	if (Pokemon->OnAttackEnd.IsBound())
	{
		Pokemon->OnAttackEnd.Clear();
	}
	Pokemon->OnAttackEnd.AddDynamic(this, &UBTTask_ChargingAttack::AttackComplete);
	Pokemon->SetMovementSpeed(EMovementSpeed::EMS_Engaging);
	PokemonController->SetFocus(AttackTarget);
	
	FAIMoveRequest Request;
	Request.SetGoalActor(AttackTarget);
	Request.SetAcceptanceRadius(5);
	MoveRequest = Request;
	bMadeIt = false;
	PokemonASC->ActivateAbilityByTag(PokemonMove->GetInputTag());
//	Pokemon->EnactMove();

	return ProcessRequest(PokemonController);
}

void UBTTask_ChargingAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	if (PokemonController && MoveRequest.IsValid()&&!bMadeIt)
	{
		FinishLatentTask(OwnerComp, ProcessRequest(PokemonController));
	}
}

EBTNodeResult::Type UBTTask_ChargingAttack::ProcessRequest(AAIController* Controller)
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
			bMadeIt = true;
			UE_LOG(LogTemp, Display, TEXT("Made it"));
			// If target is elevated or in the air
			//Pokemon->Charge();
	

		NodeResulted = EBTNodeResult::InProgress;
		break;

	case EPathFollowingRequestResult::RequestSuccessful:
		NodeResulted = EBTNodeResult::InProgress;
		break;
	}

	return NodeResulted;
}

void UBTTask_ChargingAttack::AttackComplete()
{
	Pokemon->GetMovementComponent()->StopMovementImmediately();
	UBehaviorTreeComponent* OwnerComp = Cast<UBehaviorTreeComponent>(GetOuter());
	if (OwnerComp)
	{
		//OwnerComp->OnTaskFinished(this, EBTNodeResult::Succeeded);
		bMadeIt = true;
		UE_LOG(LogTemp, Display, TEXT("Attack Complete"));
		FinishLatentTask(*OwnerComp, EBTNodeResult::Succeeded);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("OwnerComp null"));
	}
}

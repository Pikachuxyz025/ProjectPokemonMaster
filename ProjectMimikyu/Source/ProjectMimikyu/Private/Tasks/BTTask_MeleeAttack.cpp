// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_MeleeAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
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

	PokemonASC = GetPokemonAbilitySystemComponent(OwnerComp);
	PokemonController = Cast<APokemonAIController>(OwnerComp.GetAIOwner());
	Pokemon = Cast<APokemon_Parent>(OwnerComp.GetAIOwner()->GetPawn());

	AttackTarget = Cast<AActor>(MyBlackboard->GetValueAsObject(AttackTargetKey.SelectedKeyName));

	bMadeIt = false;
	 PokemonMove = Cast<UPokemonGameplayAbilities>(MyBlackboard->GetValueAsObject(PokemonMoveKey.SelectedKeyName));

	if(Pokemon->OnAttackEnd.IsBound())
	{
		Pokemon->OnAttackEnd.Clear();
	}
	Pokemon->OnAttackEnd.AddDynamic(this, &UBTTask_MeleeAttack::AttackComplete);	
	FAIMoveRequest Request;
		Pokemon->SetMovementSpeed(EMovementSpeed::EMS_Engaging, PokemonMove->SpeedMultiplier);
		Request.SetAcceptanceRadius(PokemonMove->IdealRange);

	Request.SetGoalActor(AttackTarget);

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
		//Pokemon->EnactMove();
		UE_LOG(LogTemp, Display, TEXT("In melee range"));
		PokemonASC->ActivateAbilityByTag(PokemonMove->InputTag);
		bMadeIt = true;

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

// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_RangedAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIControllers/PokemonAIController.h"
#include "Characters/Pokemon_Parent.h"
#include "Navigation/PathFollowingComponent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "DataAssets/PokemonMoveDataAsset.h"

UBTTask_RangedAttack::UBTTask_RangedAttack()
{
	NodeName = "Ranged Attack";
	bNotifyTick = true;
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_RangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();

	PokemonController = Cast<APokemonAIController>(OwnerComp.GetAIOwner());
	Pokemon = Cast<APokemon_Parent>(OwnerComp.GetAIOwner()->GetPawn());
	PokemonMove = Cast<UPokemonGameplayAbilities>(MyBlackboard->GetValueAsObject(PokemonMoveKey.SelectedKeyName));
	UPokemonAbilitySystemComponent* PokemonASC = GetPokemonAbilitySystemComponent(OwnerComp);
	AttackTarget = Cast<AActor>(MyBlackboard->GetValueAsObject(AttackTargetKey.SelectedKeyName));

	if (Pokemon->OnAttackEnd.IsBound())
	{
		Pokemon->OnAttackEnd.Clear();
	}
	Pokemon->OnAttackEnd.AddDynamic(this, &UBTTask_RangedAttack::AttackComplete);
	PokemonController->SetFocus(AttackTarget);
	//Pokemon->EnactMove();
	PokemonASC->ActivateAbilityByTag(PokemonMove->InputTag);
	return EBTNodeResult::InProgress;
}

void UBTTask_RangedAttack::AttackComplete()
{
	UE_LOG(LogTemp, Display, TEXT("Attack Complete"));
	UBehaviorTreeComponent* OwnerComp = Cast<UBehaviorTreeComponent>(GetOuter());
	if (OwnerComp)
	{
		//OwnerComp->OnTaskFinished(this, EBTNodeResult::Succeeded);
		FinishLatentTask(*OwnerComp, EBTNodeResult::Succeeded);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("OwnerComp null"));
	}
}

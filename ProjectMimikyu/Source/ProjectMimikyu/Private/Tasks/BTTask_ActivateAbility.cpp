// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/BTTask_ActivateAbility.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"

UPokemonAbilitySystemComponent* UBTTask_ActivateAbility::GetPokemonAbilitySystemComponent(UBehaviorTreeComponent& OwnerComp)
{
	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();

	return CastChecked<UPokemonAbilitySystemComponent>(MyBlackboard->GetValueAsObject(ASCKey.SelectedKeyName));
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ActivateAbility.generated.h"


class UPokemonAbilitySystemComponent;
UCLASS()
class PROJECTMIMIKYU_API UBTTask_ActivateAbility : public UBTTaskNode
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, Category = "Keys")
	FBlackboardKeySelector ASCKey;

	UPokemonAbilitySystemComponent* GetPokemonAbilitySystemComponent(UBehaviorTreeComponent& OwnerComp);
};

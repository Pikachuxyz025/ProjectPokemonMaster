// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AT_TickTask.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTickTaskDelegate, float, DeltaTime);

UCLASS()
class PROJECTMIMIKYU_API UAT_TickTask : public UAbilityTask
{
	GENERATED_BODY()
	
public:
	UAT_TickTask(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Ability|Task", meta = (DisplayName = "TickTask", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"))
	static UAT_TickTask* CreateTickTaskNode(UGameplayAbility* OwningAbility, FName TaskInstanceName);

	UPROPERTY(BlueprintAssignable)
	FOnTickTaskDelegate OnTick;

protected:
	virtual void Activate() override;
	virtual void TickTask(float DeltaTime) override;
};

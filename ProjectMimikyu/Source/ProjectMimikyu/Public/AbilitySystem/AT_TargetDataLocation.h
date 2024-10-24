// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AT_TargetDataLocation.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetDataLocationSignature, const FGameplayAbilityTargetDataHandle, DataHandle);
/**
 * 
 */


class UGameplayAbility;
UCLASS()
class PROJECTMIMIKYU_API UAT_TargetDataLocation : public UAbilityTask
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintCallable,Category="Ability|Task", meta = (DisplayName = "TargetDataLocation", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"))
	static UAT_TargetDataLocation* CreateTargetDataLocation(UGameplayAbility* OwningAbility);

	UPROPERTY(BlueprintAssignable)
	FTargetDataLocationSignature ValidData;

private:
	virtual void Activate() override;
	void SendTargetLocationData();

	void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& DataHandle, FGameplayTag ActivationTag);
};

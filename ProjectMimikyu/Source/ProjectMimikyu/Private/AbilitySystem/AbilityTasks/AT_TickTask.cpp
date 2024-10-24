// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/AT_TickTask.h"

UAT_TickTask::UAT_TickTask(const FObjectInitializer& ObjectInitializer)
{
	bTickingTask = true;
}

UAT_TickTask* UAT_TickTask::CreateTickTaskNode(UGameplayAbility* OwningAbility, FName TaskInstanceName)
{
	UAT_TickTask* MyObj = NewAbilityTask<UAT_TickTask>(OwningAbility, TaskInstanceName);
	return MyObj;
}

void UAT_TickTask::Activate()
{
	Super::Activate();
}

void UAT_TickTask::TickTask(float DeltaTime)
{
	Super::TickTask(DeltaTime);
	if(ShouldBroadcastAbilityTaskDelegates())
	{
		OnTick.Broadcast(DeltaTime);
	}
}

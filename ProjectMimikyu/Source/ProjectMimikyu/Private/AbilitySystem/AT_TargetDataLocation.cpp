// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AT_TargetDataLocation.h"
#include "AbilitySystemComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "AIControllers/PokemonAIController.h"

UAT_TargetDataLocation* UAT_TargetDataLocation::CreateTargetDataLocation(UGameplayAbility* OwningAbility)
{
	UAT_TargetDataLocation* MyObj = NewAbilityTask<UAT_TargetDataLocation>(OwningAbility);
	return MyObj;
}

void UAT_TargetDataLocation::Activate()
{
	const bool bIsLocallyControlled = Ability->GetCurrentActorInfo()->IsLocallyControlled();
	if (bIsLocallyControlled)
	{
		SendTargetLocationData();
	}
	else
	{
		const FGameplayAbilitySpecHandle SpecHandle = GetAbilitySpecHandle();
		const FPredictionKey ActivationPredictionKey = GetActivationPredictionKey();
		AbilitySystemComponent.Get()->AbilityTargetDataSetDelegate(SpecHandle, ActivationPredictionKey).AddUObject(this, &UAT_TargetDataLocation::OnTargetDataReplicatedCallback);
		const bool bCalledDelegate = AbilitySystemComponent.Get()->CallReplicatedTargetDataDelegatesIfSet(SpecHandle, ActivationPredictionKey);
		if (!bCalledDelegate)
		{
			SetWaitingOnRemotePlayerData();
		}
	}
}

void UAT_TargetDataLocation::SendTargetLocationData()
{
	FScopedPredictionWindow ScopedPrediction(AbilitySystemComponent.Get());

	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(Ability->GetCurrentActorInfo()->AvatarActor.Get());
	APokemonAIController* PC = Pokemon->GetPokemonController();


	FGameplayAbilityTargetingLocationInfo TargetInfo;
	TargetInfo.SourceActor = PC->GetCombatTarget();
	TargetInfo.LocationType = EGameplayAbilityTargetingLocationType::ActorTransform;

	FGameplayAbilityTargetDataHandle DataHandle;
	FGameplayAbilityTargetData_LocationInfo* Data = new FGameplayAbilityTargetData_LocationInfo();
	FGameplayAbilityTargetData_SingleTargetHit* DateHitResult = new FGameplayAbilityTargetData_SingleTargetHit();
	FHitResult HitResult;

	if (!PC->GetCombatTarget())
		return;

	HitResult.Location = PC->GetCombatTarget()->GetActorLocation();
	Data->TargetLocation = TargetInfo;
	DateHitResult->HitResult = HitResult;
	DataHandle.Add(Data);
	DataHandle.Add(DateHitResult);

	AbilitySystemComponent->ServerSetReplicatedTargetData(
		GetAbilitySpecHandle(),
		GetActivationPredictionKey(),
		DataHandle,
		FGameplayTag(),
		AbilitySystemComponent->ScopedPredictionKey);

	if (ShouldBroadcastAbilityTaskDelegates())
	{
		ValidData.Broadcast(DataHandle);
	}
}

void UAT_TargetDataLocation::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& DataHandle, FGameplayTag ActivationTag)
{
	AbilitySystemComponent->ConsumeClientReplicatedTargetData(GetAbilitySpecHandle(), GetActivationPredictionKey());
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		ValidData.Broadcast(DataHandle);
	}
}


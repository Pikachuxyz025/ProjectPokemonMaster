// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "AT_CombatApproach.generated.h"
 
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCombatApproachSimpleDelegate);

class APokemon_Parent;
class UPokemonNavigationComponent;

UCLASS()
class PROJECTMIMIKYU_API UAT_CombatApproach : public UAbilityTask
{
	GENERATED_BODY()
	
public:
	UAT_CombatApproach();

	UPROPERTY(BlueprintAssignable)
	FCombatApproachSimpleDelegate OnReachedRange;

	UPROPERTY(BlueprintAssignable)
	FCombatApproachSimpleDelegate OnFailed;

	/** Start approaching a target until within DesiredRange*/
	UFUNCTION(BlueprintCallable, Category = "Pokemon|AbilityTasks", meta = (DisplayName = "Combat Approach", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"))
		static UAT_CombatApproach* CreateCombatApproachTask(
			UGameplayAbility * OwningAbility,
			FName TaskInstanceName,
			AActor * InTargetActor,
			float InDesiredRange,
			float InMoveSpeedMultiplier = 1.f,
			float ReachBeforeThisTimeLimit = 3.f,
			bool bInFaceTarget = true
		);

	virtual void Activate() override;
	virtual void OnDestroy(bool bInOwnerFinished) override;
	virtual void TickTask(float DeltaTime) override;

protected:
	bool IsValidSetup() const;
	bool HasReachedDesiredRange() const;
	void FinishSuccess();
	void FinishFailure();

	bool ResolveApproahTargetLocation(FVector& OutTargetLocation) const;
	bool SubmitNavigationRequest();
	bool IsCurrentNavigationRequestOwnedByTask() const;
	void ClearOwnedNavigationRequest();
	void FaceTarget(float DeltaTime) const;

protected:
	UPROPERTY()
	TObjectPtr<AActor> TargetActor;

	UPROPERTY()
	TObjectPtr<APawn> AvatarPawn;

	UPROPERTY()
	TObjectPtr<ACharacter> AvatarCharacter;

	UPROPERTY()
	TObjectPtr<APokemon_Parent> AvatarPokemon;

	UPROPERTY()
	TObjectPtr<UPokemonNavigationComponent> NavigationComponent;

	UPROPERTY()
	TObjectPtr<AActor> SubmittedTargetActor;

	FGameplayTag SubmittedTargetPointTag;

	FVector SubmittedTargetLocation=FVector::ZeroVector;

	bool bSubmittedNavigationRequest = false;
	float DesiredRange = 100.f;
	float MoveSpeedMultiplier = 1.f;
	float Timeout = 3.f;
	float ElapsedTime = 0.f;
	bool bFaceTarget = true;

	float CachedOriginalMaxWalkSpeed = 0.f;
	bool bCachedWalkSpeed = false;
};

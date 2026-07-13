// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Characters/CharacterTypes.h"
#include "PokemonGameplayAbilities.generated.h"

class UAnimMontage;
class APokemon_Parent;
class UAbilityTask_PlayMontageAndWait;
class UAbilityTask_WaitGameplayEvent;

USTRUCT(BlueprintType)
struct FPokemonInputInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, meta = (Categories = "Abilities"))
	FGameplayTag PokemonUpgradeTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<EDirectionPoint> KeyDirectionSequence;
};

USTRUCT(BlueprintType)
struct FMoveTiming
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float CommandDelay = .75f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnticipationDuration = .5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActiveDuration = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RecoveryDuration = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DodgeWindowStart = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DodgeWindowEnd = 0.f;
};

UCLASS()
class PROJECTMIMIKYU_API UPokemonGameplayAbilities : public UGameplayAbility
{
	GENERATED_BODY()

public:

	virtual bool CanActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayTagContainer* SourceTags = nullptr,
		const FGameplayTagContainer* TargetTags = nullptr,
		OUT FGameplayTagContainer* OptionalRelevantTags = nullptr
	) const override;

	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData
	) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation|Events")
	bool bListenForAbilityAnimEvent = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation|Events", meta = (Categories = "Event"))
	FGameplayTag AbilityAnimEventTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation|Events")
	bool bOnlyTriggerAnimEventOnce = true;

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Animation|Events")
	UAbilityTask_WaitGameplayEvent* ListenForAbilityAnimEvent();

	UFUNCTION(BlueprintNativeEvent, Category = "Pokemon|Animation|Events")
	void OnAbilityAnimEventReceived(FGameplayEventData Payload);

	virtual void OnAbilityAnimEventReceived_Implementation(FGameplayEventData Payload);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation|Windows")
	bool bListenForAbilityWindowEvents = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation|Windows")
	bool bSuppressEndRecoveryWhenRecoveryWindowAuthored = true;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Pokemon|Animation|Windows")
	FGameplayTagContainer ActiveAbilityWindows;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation|Windows")
	bool bApplyRecoveryStateFromAuthoredWindow = true;

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Animation|Windows")
	void ListenForAbilityWindowEvents();

	UFUNCTION(BlueprintPure, Category = "Pokemon|Animation|Windows")
	bool HasActiveAbilityWindow(FGameplayTag AbilityWindowTag) const;

	UFUNCTION(BlueprintNativeEvent, Category = "Pokemon|Animation|Windows")
	void OnAbilityWindowBegin(FGameplayTag AbilityWindowTag, FGameplayEventData Payload);
	virtual void OnAbilityWindowBegin_Implementation(FGameplayTag AbilityWindowTag, FGameplayEventData Payload);

	UFUNCTION(BlueprintNativeEvent, Category = "Pokemon|Animation|Windows")
	void OnAbilityWindowEnd(FGameplayTag AbilityWindowTag, FGameplayEventData Payload);
	virtual void OnAbilityWindowEnd_Implementation(FGameplayTag AbilityWindowTag, FGameplayEventData Payload);

	UFUNCTION()
	void HandleAbilityAnimEventReceived(FGameplayEventData Payload);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	TObjectPtr<UAnimMontage> AbilityMontage = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	float MontagePlayRate = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	FName MontageStartSection = NAME_None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	bool bPlayMontageOnActivate = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	bool bEndAbilityWhenMontageEnds = true;

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Animation")
	UAbilityTask_PlayMontageAndWait* PlayAbilityMontage();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayTag InputTag;

	/**
	* Design-time and fallback move timing.
	* Authored montage windows take precedence for any phase they provide.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FMoveTiming MoveTimingSequence;

protected:
	virtual void EndAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility,
		bool bWasCancelled
	) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Combat State")
	bool bUseAbilityCombatStateLock = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Combat State")
	bool bApplyRecoveryStateOnEnd = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Combat State", meta = (ClampMin = "0.0"))
	float MinimumAttackStateDuration = 0.1f;

	void ApplyAbilityCombatStateLock();
	void ClearAbilityCombatStateLock(bool bWasCancelled);
	float GetAbilityCombatLockDuration() const;
	APokemon_Parent* GetAvatarPokemon() const;

	UFUNCTION()
	void OnAbilityMontageCompleted();

	UFUNCTION()
	void OnAbilityMontageBlendOut();

	UFUNCTION()
	void OnAbilityMontageInterrupted();

	UFUNCTION()
	void OnAbilityMontageCancelled();

	void EndAbilityFromMontage(bool bWasCancelled);

	UFUNCTION()
	void HandleAbilityWindowBeginEvent(FGameplayEventData Payload);

	UFUNCTION()
	void HandleAbilityWindowEndEvent(FGameplayEventData Payload);

	bool TryGetAbilityWindowTagFromPayload(const FGameplayEventData& Payload, FGameplayTag& OutAbilityWindowTag) const;

	void ResetAbilityWindowRuntimeState();

	void ApplyAbilityWindowCombatState(FGameplayTag AbilityWindowTag, float WindowDuration);

	UPROPERTY(Transient)
	bool bSawRecoveryWindowThisActivation = false;
};

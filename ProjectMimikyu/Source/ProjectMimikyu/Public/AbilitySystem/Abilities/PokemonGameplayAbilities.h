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

UENUM(BlueprintType)
enum class EAttackOutcome : uint8
{
	Unresolved,
	Hit,
	Miss
};

UENUM(BlueprintType)
enum class ESectionTransitionType : uint8
{
	None,
	JumpImmediately,
	WaitForEndOfSection,
	EndExecution
};

UENUM(BlueprintType)
enum class EAttackPresentationPhase :uint8
{
	None,
	Strike,
	Pending,
	HitContact,
	WhiffFollowThrough,
	Recovery,
	Complete
};

USTRUCT(BlueprintType)
struct FSectionTransition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESectionTransitionType TransitionType = ESectionTransitionType::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NextSectionName = NAME_None;
};

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
	// The command component binds this before Blueprint ActivateAbility can run/end.
	FGuid GetSequencedCommandId() const { return SequencedCommandId; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Command")
	bool IsSequencedExecution() const { return SequencedCommandId.IsValid(); }

	void EndSequencedExecution(FGuid OwnedCommandId, bool bWasCancelled);
	bool CanEndSequencedExecutionImmediately() const { return ScopeLockCount == 0 && !bSequencedEndInProgress; }

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

	UFUNCTION()
	FSectionTransition DetermineNextPresentationAction(const EAttackPresentationPhase CurrentPhase, const EAttackOutcome InputedOutcome);

	void SetPresentationPhaseBasedOnTransition_Sketch(const EAttackOutcome AttackOutcome);

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Presentation|Testing")
	bool bEnablePresentationBranchTest = false;

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Presentation|Testing")
	void PreviewConfirmedOutcome(EAttackOutcome Outcome);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	TObjectPtr<UAnimMontage> AbilityMontage = nullptr;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Pokemon|Animation")
	bool bUseAbilityMontageOverride = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	float MontagePlayRate = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	FName MontageStartSection = NAME_None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	bool bPlayMontageOnActivate = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Animation")
	bool bEndAbilityWhenMontageEnds = true;

	UFUNCTION(BlueprintPure, Category = "Pokemon|Animation")
	UAnimMontage* ResolveAbilityMontage() const;

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
	void RecordSequencedActivationFailure(FName Reason);
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

	bool bPresentationMontageFinished = false;

	virtual bool HasPendingPresentationGameplayRecovery() const
	{
		return false;
	}

	// Returns true if the ability is currently in a state where it can finish its presentation-driven execution.
	void TryFinishPresentationDrivenExecution();
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

private:
	// The command ID that this ability is executing in sequence with, if any.
	FGuid SequencedCommandId;

	// The FName that indicates the reason for a sequenced activation failure, if any.
	FName SequencedActivationFailure = NAME_None;
	
	// A bool that indicates whether the ability is currently in the process of ending its sequenced execution.
	// This is used to prevent re-entrant calls to EndSequencedExecution.
	bool bSequencedEndInProgress = false;

	EAttackPresentationPhase GetCurrentPresentationPhase(const UAnimMontage* AnimMontage) const;
};

// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Characters/CharacterTypes.h"
#include "PokemonGameplayAbilities.generated.h"

class UAnimMontage;
class UAbilityTask_PlayMontageAndWait;

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FMoveTiming MoveTimingSequence;

protected:

	UFUNCTION()
	void OnAbilityMontageCompleted();

	UFUNCTION()
	void OnAbilityMontageBlendOut();

	UFUNCTION()
	void OnAbilityMontageInterrupted();

	UFUNCTION()
	void OnAbilityMontageCancelled();

	void EndAbilityFromMontage(bool bWasCancelled);
};

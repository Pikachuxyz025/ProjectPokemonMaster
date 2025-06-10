// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "PokemonAbilityTypes.h"
#include "Characters/CharacterTypes.h"
#include "PokemonGameplayTags.h"
#include "PokemonGameplayAbilities.generated.h"

USTRUCT(BlueprintType)
struct FPokemonInputInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, meta = (Categories = "Abilities"))
	FGameplayTag PokemonUpgradeTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<EDirectionPoint> KeyDirectionSequence;
};

UCLASS()
class PROJECTMIMIKYU_API UPokemonGameplayAbilities : public UGameplayAbility
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FDamageEffectParams MakeDamageEffectParamsFromClassDefaults(AActor* TargetActor = nullptr) const;

	UPROPERTY(EditAnywhere, meta = (Categories = "PokemonMoves.MoveType"))
	FGameplayTag MoveTypeTag;

	UPROPERTY(EditAnywhere, meta = (Categories = "PokemonMoves.MoveAction"))
	FGameplayTag MoveActionTag;

	UPROPERTY(VisibleAnywhere)
	FGameplayTag InputTag;

	UPROPERTY(VisibleAnywhere)
	mutable FGameplayTag CooldownTag;

	UPROPERTY(EditAnywhere, meta = (Categories = "Damage.Response"))
	FGameplayTag DamageResponseTag;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float Damage;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float PowerPointCost = 5.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float CooldownTime = 3.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float IdealRange = 50.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float SpeedMultiplier = 1.f;

	/* Debuffs */
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DebuffChance = 20.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DebuffDamage = 5.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DebuffFrequency = 1.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DebuffDuration = 5.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DeathImpulseMagnitude = 1000.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float KnockbackForceMagnitude = 1000.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float KnockbackChance = 0.f;

	UPROPERTY(EditAnywhere)
	EElementalType MoveElementalType = EElementalType::EET_None;

	UFUNCTION(BlueprintCallable)
	void CauseDamage(AActor* TargetActor);

	UPROPERTY(EditDefaultsOnly)
	TArray<FPokemonInputInfo> UpgradeList;

	UFUNCTION(BlueprintCallable)
	TArray<EDirectionPoint> GetKeySequenceFromTag(const FGameplayTag& AbilityTag, bool bLogNotFound = false) const;
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UGameplayEffect> DamageEffectClass;

	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	virtual void ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)const override;
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

private:

	FGameplayTag GetCooldownTag();
};

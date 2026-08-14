#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "PokemonDodgeGameplayAbility.generated.h"

class APokemon_Parent;
class UCurveFloat;

UCLASS(Blueprintable)
class PROJECTMIMIKYU_API UPokemonDodgeGameplayAbility : public UPokemonGameplayAbilities
{
	GENERATED_BODY()
public:
	UPokemonDodgeGameplayAbility();

	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION()
	void HandleDodgeFinished();

	float ResolveDodgeStrength(APokemon_Parent* Pokemon) const;

protected:

	// How long the root motion dodge lasts
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Dodge|Movement")
	float DodgeDuration = 0.25f;

// Used if DodgeForce has not been initialized on the Pokemon's AttributeSet
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dodge|Movement")
	float BaseDodgeStrength = 1400.f;

	// Prefer the Pokemon's GAS DodgeForce attribute while it contains a usable value.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dodge|Movement")
	bool bUseDodgeForceAttribute = true;

	// Gives us a convienent per-ability multiplier while keeping DodgeForce itself as the Pokemon stat
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dodge|Movement")
	float DodgeStrengthMultiplier = 1.f;

	// Optional normalized-time curve controlling strength during the dodge. Null = constant strength
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dodge|Movement")
	TObjectPtr<UCurveFloat> DodgeStrengthCurve=nullptr;

	// Allows normal gravity to continue affecting the Pokemon while root motion is active
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dodge|Movement")
	bool bEnableGravityDuringDodge = true;

	// By default the Pokemon does not retain the dash velocity after the dodge finishes
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dodge|Movement")
	bool bStopOnFinish = true;
};

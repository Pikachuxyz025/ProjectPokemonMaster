#pragma once

#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "Components/ActorComponent.h"
#include "PokemonAttackAutomationFixture.generated.h"

class UAbilityTask_WaitDelay;
class UPokemonAttackAutomationAbility;

// Editor-only native fixtures. All command, GAS, resource, impact and intent logic
// exercised by these probes belongs to the production components.
enum class EPokemonAttackTestMode { Hold, SynchronousMiss, RejectCommit, CommitAndHold };

UCLASS(Transient, NotBlueprintable)
class UPokemonAttackAutomationProbe : public UActorComponent
{
	GENERATED_BODY()
public:
	EPokemonAttackTestMode Mode = EPokemonAttackTestMode::Hold;
	int32 Activations = 0;
	int32 LegacyEnds = 0;
	bool bOwnedBeforeActivation = false;
	bool bEndOnImpact = false;
	bool bCommitSucceeded = false;
	// Inspect duplicate callbacks synchronously after GAS marks this instance as
	// garbage. Tests never carry it across collection or a world tick after ending.
	UPROPERTY() TObjectPtr<UPokemonAttackAutomationAbility> Ability;
	TWeakObjectPtr<UAbilityTask_WaitDelay> Task;
	UFUNCTION() void LegacyEnded();
	UFUNCTION() void ImpactResolved(FPokemonMoveContactContext Context, FPokemonImpactResolution Resolution);
};

UCLASS(Transient, NotBlueprintable)
class UPokemonAttackAutomationAbility : public UPokemonDamageGameplayAbilities
{
	GENERATED_BODY()
public:
	UPokemonAttackAutomationAbility();
	virtual void ActivateAbility(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	void Finish(bool bCancelled = false);
	FPokemonImpactResolution Contact(AActor* Target);
	void WithAbilityScopeLock(TFunctionRef<void()> Callback);
};

UCLASS(Transient, NotBlueprintable)
class UPokemonRangedAutomationAbility : public UPokemonAttackAutomationAbility
{
	GENERATED_BODY()
public:
	UPokemonRangedAutomationAbility();
};

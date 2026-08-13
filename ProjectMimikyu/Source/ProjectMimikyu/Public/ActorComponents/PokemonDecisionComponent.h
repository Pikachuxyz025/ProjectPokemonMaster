#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Characters/CharacterTypes.h"
#include "PokemonDecisionComponent.generated.h"


class UPokemonAICombatBrainConfig;
class APokemonAIController;
class APokemon_Parent;
class UPokemonAbilitySystemComponent;
class UPokemonNavigationComponent;


/**
 * Executive decision authority for a Pokemon.
 *
 * Responsibilities:
 * - Evaluate the Pokemon's current context.
 * - Decide what the Pokemon wants / is allowed to do.
 * - Interpret trainer commands.
 * - Produce high-level combat/navigation intents.
 *
 * This component does NOT execute behavior directly.
 * Behavior Tree, Navigation, and GAS execute approved decisions.
 */
UCLASS(ClassGroup = (AI), BlueprintType, Blueprintable)
class PROJECTMIMIKYU_API UPokemonDecisionComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UPokemonDecisionComponent();

	virtual void TickComponent(	float DeltaTime,		enum ELevelTick TickType,		FActorComponentTickFunction* ThisTickFunction	) override;

	void InitializeDecisionComponent(APokemonAIController* InPokemonController);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Decision")
	void SetDecisionConfig(	UPokemonAICombatBrainConfig* NewConfig);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Decision")
	void StartDecisionMaking();

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Decision")
	void StopDecisionMaking(const FString& Reason);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|AI|Decision")
	void RestartDecisionMaking();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Decision")
	TObjectPtr<UPokemonAICombatBrainConfig> DecisionConfig;


	UPROPERTY(Transient)
	TObjectPtr<APokemonAIController> OwningPokemonController;


	UPROPERTY(Transient)
	TObjectPtr<APokemon_Parent> ControlledPokemon;


	UPROPERTY(Transient)
	TObjectPtr<UPokemonAbilitySystemComponent> CachedPokemonASC;


	UPROPERTY(Transient)
	TObjectPtr<UPokemonNavigationComponent> CachedNavigationComponent;


	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Decision|Runtime")
	bool bDecisionActive = false;


	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Decision|Runtime")
	float NextThinkTime = 0.f;


	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Decision|Runtime")
	float CommitUntilTime = 0.f;


	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Decision|Runtime")
	float LastDecisionTime = -1.f;


	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Decision|Runtime")
	bool bUrgentInterruptedRequested = false;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Decision|Runtime", meta = (Categories = "AI.Decision"))
	FGameplayTag DesiredCombatMode;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Decision|Navigation")
	bool bEnableNavigationIntentOutput = true;


protected:

	bool CanThink() const;
	bool ShouldThinkNow(float CurrentTime) const;

	bool HasUrgentInterrupt() const;
	void ClearUrgentInterrupt();

	void CacheReferences();
	void RunThink();

	void DebugLogState() const;

	float GetCurrentWorldTime() const;
	float GetRandomThinkInterval() const;
	float GetRandomCommitTime() const;
	float GetHPPercent() const;

	bool HasCombatTarget() const;

	void UpdateNavigationIntent();

	void RequestIdleNavigation();
	void RequestEngageNavigation(AActor* TargetActor);
	void RequestDefensiveNavigation(AActor* TargetActor);
	void RequestFleeNavigation(AActor* TargetActor);

	FGameplayTag DetermineDesiredCombatMode(float HPPercent, bool bHasTarget) const;


public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Decision")
	FGameplayTag GetDesiredCombatMode() const
	{
		return DesiredCombatMode;
	}

	void SetDesiredCombatMode(FGameplayTag NewCombatMode);
};
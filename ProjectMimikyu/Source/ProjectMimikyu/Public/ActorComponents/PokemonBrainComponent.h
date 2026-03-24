// Fill out your copyright notice in the Description page of Project Settings.

using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "BrainComponent.h"
#include "Characters/CharacterTypes.h"
#include "GameplayTagContainer.h"
#include "PokemonBrainComponent.generated.h"

//UENUM(BlueprintType)
//enum EAIMode
//{
//
//};


class UPokemonAICombatBrainConfig;
class APokemonAIController;
class APokemon_Parent;
class UPokemonAbilitySystemComponent;

// This script should be responsible for knowing when the AI is allowed to think
// Reading a bit of info form the controlled pawn/controller 
// Making a small/simple decision
// Pushing that result back into the controller or logging it

UCLASS(ClassGroup = (AI), BlueprintType, Blueprintable)
class PROJECTMIMIKYU_API UPokemonBrainComponent : public UBrainComponent
{
	GENERATED_BODY()

public:

	UPokemonBrainComponent();

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void StartLogic() override;
	virtual void StopLogic(const FString& Reason) override;
	virtual void RestartLogic() override;

	void InitializeBrain(APokemonAIController* InPokemonController);

	UFUNCTION(BlueprintCallable)
	void SetBrainConfig(UPokemonAICombatBrainConfig* NewConfig);

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Brain")
	TObjectPtr<UPokemonAICombatBrainConfig> BrainConfig;

	UPROPERTY(Transient)
	TObjectPtr<APokemonAIController> OwningPokemonController;

	UPROPERTY(Transient)
	TObjectPtr<APokemon_Parent> ControlledPokemon;

	UPROPERTY(Transient)
	TObjectPtr<UPokemonAbilitySystemComponent> CachedPokemonASC;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Brain|Runtime")
	bool bBrainActive = false;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Brain|Runtime")
	float NextThinkTime = 0.f;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Brain|Runtime")
	float CommitUntilTime = 0.f;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Brain|Runtime")
	float LastDecisionTime = -1.f;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Brain|Runtime")
	bool bUrgentInterruptedRequested = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Brain|Runtime", meta = (Categories = "AI.Decision"))
	FGameplayTag DesiredCombatMode;

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

	FGameplayTag DetermineDesiredCombatMode(float HPPercent,bool bHasTarget) const;

public: // Getters and Setters
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Brain")
	FGameplayTag GetDesiredCombatMode() const { return DesiredCombatMode; }

	void SetDesiredCombatMode(FGameplayTag NewCombatMode);
};

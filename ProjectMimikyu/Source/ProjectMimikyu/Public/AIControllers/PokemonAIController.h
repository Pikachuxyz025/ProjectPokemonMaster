// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GameplayTagContainer.h"
#include "Characters/CharacterTypes.h"
#include "PokemonAIController.generated.h"

class UPokemonAbilitySystemComponent;
class APokemon_Parent;
class UAIPerceptionComponent;
class UBehaviorTree;
UCLASS()
class PROJECTMIMIKYU_API APokemonAIController : public AAIController
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditDefaultsOnly)
	UBehaviorTree* AIBehaviorTree;

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	APokemon_Parent* ControlledPokemon;

	UPROPERTY(VisibleAnywhere)
	UAIPerceptionComponent* AIPerception;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UAISenseConfig_Sight> SightSense = nullptr;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UAISenseConfig_Damage> DamageSense = nullptr;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UAISenseConfig_Hearing> HearingSense = nullptr;

	UPROPERTY(VisibleAnywhere)
	AActor* CombatTarget;

	UPROPERTY(VisibleAnywhere)
	AActor* TrainerToFollow;

	//UPROPERTY(VisibleAnywhere)
	//FGameplayTag CurrentStateTag;

	UPROPERTY(EditAnywhere, Category = "Key Names")
	FName SpawnLocationKeyName = FName("SpawnLocationAnchor");

	UPROPERTY(EditAnywhere, Category = "Key Names")
	FName PokemonStateKeyName = FName("PokemonState");

	UPROPERTY(EditAnywhere, Category = "Key Names")
	FName PokemonStatusKeyName = FName("PokemonStatus");

	UPROPERTY(EditAnywhere, Category = "Key Names")
	FName PokemonASCKeyName = FName("PokemonASC");

	UPROPERTY(EditAnywhere, Category = "Key Names")
	FName PokemonActionStateKeyName = FName("PokemonActionState");

	UPROPERTY(EditAnywhere, Category = "Key Names")
	FName PokemonCurrentMoveKeyName = FName("CurrentMove");

	UPROPERTY(EditAnywhere, Category = "Key Names")
	FName PokemonTrainerKeyName = FName("PokemonTrainer");

	UPROPERTY(EditAnywhere, Category = "Key Names")
	FName CombatTargetKeyName = FName("CombatTarget");



	void SetBlackboardTrainer();
	void SetBlackboardASC();
	void SetBlackboardAttackTarget();
	virtual void OnPossess(APawn* InPawn) override;
	void HandleSenseDamage(AActor* Actor);
public:
	void SetTrainer(AActor* NewTrainer);
	void SetCombatTarget(AActor* NewTarget);
	void SetTree(UBehaviorTree* NewBehaviorTree, APokemon_Parent* NewPokemon);
	UFUNCTION(BlueprintCallable)
	FORCEINLINE AActor* GetCombatTarget() { return CombatTarget; }
	void SetPokemonState(EPokemonState NewPokemonState);
	void SetPokemonStatus(EPokemonStatus NewPokemonStatus);
	EPokemonState GetPokemonState() const;
	void SetBlackboardCurrentMove(class UPokemonMoveDataAsset* MoveData);
	void ActivateAbilityByTag(FGameplayTag InputTag);
	void SetBlackboardActionState(EMoveAction DamageAction);
private:

	UPROPERTY()
	TObjectPtr<UPokemonAbilitySystemComponent>PokemonAbilitySystemComponent;

	UPokemonAbilitySystemComponent* GetASC();

};

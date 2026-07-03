#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "PokemonCombatStateComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FPokemonCombatStateChangedSignature,
	FGameplayTag, StateTag,
	bool, bIsActive
);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonCombatStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonCombatStateComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Combat State")
	void SetCombatState(FGameplayTag StateTag, float Duration);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Combat State")
	void ClearCombatState(FGameplayTag StateTag);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Combat State")
	void ClearCombatStates();

	UFUNCTION(BlueprintPure, Category = "Pokemon|Combat State")
	bool HasCombatState(FGameplayTag StateTag) const;

	UFUNCTION(BlueprintPure, Category = "Pokemon|Combat State")
	FGameplayTagContainer GetActiveCombatStates() const { return ActiveCombatStates; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Combat State")
	bool CanAct() const;

	UFUNCTION(BlueprintPure, Category = "Pokemon|Combat State")
	bool CanMove() const;

	UFUNCTION(BlueprintPure, Category = "Pokemon|Combat State")
	bool CanAttack() const;

	UPROPERTY(BlueprintAssignable, Category = "Pokemon|Combat State")
	FPokemonCombatStateChangedSignature OnCombatStateChanged;

protected:
	UPROPERTY(ReplicatedUsing = OnRep_ActiveCombatStates, BlueprintReadOnly, Category = "Pokemon|Combat State")
	FGameplayTagContainer ActiveCombatStates;

	UFUNCTION()
	void OnRep_ActiveCombatStates();

private:
	TMap<FGameplayTag, FTimerHandle> ActiveStateTimers;
};
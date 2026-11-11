

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokemonStaminaComponent.generated.h"

class UAbilitySystemComponent;
class UPokemonBaseAttributeSet;
struct FOnAttributeChangeData;

UCLASS( ClassGroup=(Pokemon), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UPokemonStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPokemonStaminaComponent();

	UFUNCTION(BlueprintPure,Category="Pokemon|Stamina")
	float GetStamina() const;

	UFUNCTION(BlueprintPure, Category = "Pokemon|Stamina")
	float GetMaxStamina() const;

	UFUNCTION(BlueprintCallable,Category="Pokemon|Stamina")
	bool CanSpendStamina(float Cost) const;

	UFUNCTION(BlueprintCallable,Category="Pokemon|Stamina")
	bool TrySpendStamina(float Cost);

	UFUNCTION(BlueprintPure, Category = "Pokemon|Stamina")
	bool IsRegenerating() const;

	// Reconcile the existing timers without bypassing an outstanding delay
	// or granting another immediate regeneration tick.
	void RefreshRegenerationState();

	// Server-only regeneration suppression for on sustained spender.
	// This token does not spend stamina or authorize defensive movement.
	// 
	// Repeated acquisition by the same requester returns the existing token.
	// Acquisition by another requester fails while a live token exists.
	FGuid BeginSustainedSpending(UObject* Requester);

	// Only the matching token can release regeneration suppression.
	void EndSustainedSpending(FGuid Token);

	bool IsSustainedSpending(FGuid Token) const;

protected:
	virtual void BeginPlay() override; 
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Stamina restored per second once regeneration begins
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Stamina|Regeneration",meta=(ClampMin="0.0"))
	float StaminaRegenRate = 20.f;

	// Time after stamina expenditure before regeneration begins.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Stamina|Regeneration", meta = (ClampMin = "0.0"))
	float StaminaRegenDelay = 1.25f;

	// How frequently regeneration modifiers the attributes.
	// 0.1 = 10  updates per second.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Stamina|Regeneration", meta = (ClampMin = "0.01"))
	float StaminaRegenTickInterval = 0.1f;

private:

	friend struct FPokemonHeldDefenseStaminaTestAccess;

	UPROPERTY(Transient)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	FTimerHandle RegenDelayTimerHandle;
	FTimerHandle RegenTickTimerHandle;

	FDelegateHandle StaminaChangedHandle;

	TWeakObjectPtr<UObject> SustainedSpendRequester;
	FGuid SustainedSpendToken;

	// Absolute server world time at which regeneration may begin.
	// Retaining the deadline lets a released token resume the remaining
	// delay instead of starting an additional delay or bypassing it.
	double RegenerationAllowedAt = 0.0;

	// Invalidates work when GAS callbacks synchronously spend stamina,
	// acquire a token, or otherwise reschedule regeneration.
	uint64 RegenerationGeneration = 0;

	bool bApplyingLocalSpend = false;
	bool bStaminaEndingPlay = false;

	const UPokemonBaseAttributeSet* GetStaminaAttributesSet() const;

	bool CanMutateStamina() const;

	bool ReadStaminaValues(float& OutCurrent, float& OutMaximum) const;

	bool HasSustainedSpender() const;
	bool HasValidRegenerationConfiguration() const;

	float GetRegenerationInterval() const;

	void HandleStaminaChanged(const FOnAttributeChangeData& Data);

	void ClearRegenerationTimers();
	void RestartRegenerationDelay();
	void BeginRegeneration();
	void RegenerateStamina();
	void StopRegeneration();
};

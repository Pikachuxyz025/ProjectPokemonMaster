

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokemonStaminaComponent.generated.h"

class UAbilitySystemComponent;
class UPokemonBaseAttributeSet;

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

	void RefreshRegenerationState();

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
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	FTimerHandle RegenDelayTimerHandle;
	FTimerHandle RegenTickTimerHandle;

	const UPokemonBaseAttributeSet* GetStaminaAttributesSet() const;

	void RestartRegenerationDelay();
	void BeginRegeneration();
	void RegenerateStamina();
	void StopRegeneration();
};

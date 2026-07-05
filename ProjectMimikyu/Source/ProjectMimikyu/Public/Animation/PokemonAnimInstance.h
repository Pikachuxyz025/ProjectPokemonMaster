#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "PokemonAnimInstance.generated.h"

class APokemon_Parent;
class UCharacterMovementComponent;
class UPokemonCombatStateComponent;

UCLASS()
class PROJECTMIMIKYU_API UPokemonAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UFUNCTION(BlueprintPure, Category = "Pokemon|Animation")
	APokemon_Parent* GetOwningPokemon() const { return OwningPokemon; }

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|References")
	TObjectPtr<APokemon_Parent> OwningPokemon;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|References")
	TObjectPtr<UCharacterMovementComponent> CharacterMovementComponent;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|References")
	TObjectPtr<UPokemonCombatStateComponent> CombatStateComponent;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Movement")
	FVector WorldVelocity = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Movement")
	FVector LocalVelocity = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Movement")
	float GroundSpeed = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Movement")
	float VerticalSpeed = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Movement")
	float Direction = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Movement")
	bool bIsMoving = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Movement")
	bool bIsFalling = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Movement")
	bool bIsAccelerating = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	bool bCanAct = true;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	FGameplayTagContainer ActiveCombatStates;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	bool bIsRecovering = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	bool bIsHitStunned = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	bool bIsBlockStunned = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	bool bIsClashing = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	bool bIsLaunched = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	bool bIsVulnerable = false;

	UPROPERTY(BlueprintReadOnly, Category = "Pokemon|Combat")
	bool bIsFainted = false;

private:
	void CachePokemonReferences();
	void UpdateMovementData(float DeltaSeconds);
	void UpdateCombatStateData();
};
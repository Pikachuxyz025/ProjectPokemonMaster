// Fill out your copyright notice in the Description page of Project Settings.
// Pokemon Incapacitation Component - This component will handle the incapacitation state of a Pokemon, such as when it is knocked out or unable to battle.
// “how does this Pokémon physically go down?”
// “is it launched, ragdolled, prone, or fainted - prone ? ”
// “did it bounce ? ”
// “has it settled ? ”
// “can it now be manually returned ? ”
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PokemonIncapacitationComponent.generated.h"


class APokemon_Parent;

UENUM(BlueprintType)
enum class EPokemonIncapacitationState : uint8
{
	EIS_None UMETA(DisplayName = "None"),
	EIS_Launched UMETA(DisplayName = "Launched"),
	EIS_ControlledRagdoll UMETA(DisplayName = "Controlled Ragdoll"),
	EIS_Prone UMETA(DisplayName = "Prone"),
	EIS_FaintedProne UMETA(DisplayName = "Fainted Prone"),
	EIS_BeingReturned UMETA(DisplayName = "Being Returned")
};

USTRUCT(BlueprintType)
struct FKnockbackTuning
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Knockback")
	float LaunchThreshold = 600.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Knockback")
	float RagdollThreshold = 1200.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Knockback")
	float BounceThreshold = 800.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Knockback")
	float BounceVelocityMultiplier = 0.35f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Knockback")
	int32 MaxBounceCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Knockback")
	float MaxRagdollDuration = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Knockback")
	float SettleLinearSpeedThreshold = 25.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Knockback")
	float SettleAngularSpeedThreshold = 10., f;
};


USTRUCT(BlueprintType)
struct FActiveKnockbackState
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Knockback")
	FVector InitialVelocity = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Knockback")
	bool bCanCauseFaint = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Knockback")
	bool bForceRagdoll = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Knockback")
	bool bPendingFaintOnSettle = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Knockback")
	int32 RemainingBounces = 0;
};

// Events for entering different incapacitation states
// If used, only create one delegate and use each of these states as variables
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnProneEntered);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFaintedProneEntered);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnControlledRagdollStarted);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnManualReturnStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIncapacitationEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UPokemonIncapacitationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPokemonIncapacitationComponent();

	void InitializePokemonOwner(APokemon_Parent* InOwnerPokemon);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Incapacitation")
	void ApplyKnockback(const FVector& KnockbackVelocity, bool bCanCauseFaint, bool bForceRagdoll = false);
	
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Incapacitation")
	void EnterCollapsedFaint();
	
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Incapacitation")
	void EnterProneState();
	
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Incapacitation")
	void EnterFaintedProneState();
	
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Incapacitation")
	void BeginManualReturn();

	UFUNCTION(BlueprintPure, Category = "Pokemon|Incapacitation")
	bool IsProne() const { return bIsProne; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Incapacitation")
	bool IsFaintedProne() const { return bIsFaintedProne; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Incapacitation")
	bool IsInControlledRagdoll() const { return IncapacitationState == EPokemonIncapacitationState::ControlledRagdoll; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Incapacitation")
	bool CanBeReturned() const { return bCanBeReturned; }

	UPROPERTY(BlueprintAssignable, Category = "Pokemon|Incapacitation")
	FOnIncapacitationEvent OnProneEntered;

	UPROPERTY(BlueprintAssignable, Category = "Pokemon|Incapacitation")
	FOnIncapacitationEvent OnFaintedProneEntered;

	UPROPERTY(BlueprintAssignable, Category = "Pokemon|Incapacitation")
	FOnIncapacitationEvent OnControlledRagdollStarted;

	UPROPERTY(BlueprintAssignable, Category = "Pokemon|Incapacitation")
	FOnIncapacitationEvent OnManualReturnStarted;

protected:

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

void StopCombatAndMovement();
void EnterControlledRagdoll(const FVector& InitialVelocity);
void ExitControlledRagdoll();
void TransitionRagdollToProne();
void HandleImpact(const FHitResult& HitResult,const FVector& CurrentVelocity);
bool TryBounceFromImpact(const FHitResult& HitResult, const FVector& CurrentVelocity);
bool HasSettled() const;
void ForceStopMotion();
UFUNCTION()
void OnMeshPhysicsHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

void StartRagdollSafetyTimer();
void StopRagdollSafetyTimer();

UFUNCTION()
void OnRagdollSafetyTimeout();

bool IsGroundImpact(const FHitResult& Hit) const;
bool IsWallImpact(const FHitResult& Hit) const;

#pragma region Helper Functions
APokemon_Parent* GetPokemonOwner() const { return PokemonOwner.Get(); }
USkeletalMeshComponent* GetPokemonMesh() const;
UCharacterMovementComponent* GetPokemonMovement() const;
UCapsuleComponent* GetPokemonCapsule() const;
#pragma endregion


protected:

	UPROPERTY()
	TWeakObjectPtr<APokemon_Parent> PokemonOwner;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|Incapacitation")
	FKnockbackTuning KnockbackTuning;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Incapacitation")
	FActiveKnockbackState ActiveKnockbackState;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Incapacitation")
	EPokemonIncapacitationState IncapacitationState = EPokemonIncapacitationState::EIS_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Incapacitation")
	bool bIsProne = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Incapacitation")
	bool bIsFaintedProne = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Incapacitation")
	bool bCanBeReturned = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pokemon|Incapacitation")
	bool bAutoBindMeshHitEvent = true;

	FTimerHandle RagdollSafetyTimerHandle;
};

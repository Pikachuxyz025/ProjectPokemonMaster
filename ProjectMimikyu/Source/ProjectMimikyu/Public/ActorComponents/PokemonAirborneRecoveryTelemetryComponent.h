

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerManager.h"
#include "PokemonAirborneRecoveryTelemetryComponent.generated.h"

class APokemon_Parent;
class UPokemonJumpExecutionComponent;
struct FPokemonImpactResolution;


struct FAirborneRecoveryObservation
{
    FGuid RequestId;
    FGuid CommandId;

    FVector StartFeet = FVector::ZeroVector;
    FVector RequiredContactFeet = FVector::ZeroVector;
    FVector LaunchVelocity = FVector::ZeroVector;
    FVector LastFallingVelocity = FVector::ZeroVector;

    float PlannedContactTime = 0.f;
    float ElapsedMovementTime = 0.f;

    double StartWorldTime = 0.0;

    bool bReachedContact = false;
    bool bCombatOutcomeKnown = false;
    bool bCombatHit = false;
    bool bLanded = false;

    bool bAttackTriggered = false;
    bool bExecutionFinished = false;
    bool bGroundedObserved = false;

    int32 ImpactRequestCount = 0;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonAirborneRecoveryTelemetryComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPokemonAirborneRecoveryTelemetryComponent();

    void NotifyCombatOutcome(FGuid CommandId, bool bHit);

    void NotifyImpactRequest(FGuid CommandId, const FPokemonImpactResolution& Resolution,
        const FVector& IncomingVelocity, const FVector& RequestedVelocity,
        bool bStoppedImmediately);
protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:

    friend class FPokemonAirborneRecoveryTelemetryTest;

	// The maximum time to wait for the Pokemon to land or be grounded after takeoff.
    FAirborneRecoveryObservation Observation;

    bool bObserving = false;

    FDelegateHandle TakeoffDelegateHandle;
	FDelegateHandle TriggerDelegateHandle;
    FDelegateHandle ExecutionFinishDelegateHandle;
    FTimerHandle ObservationTimeoutHandle;

    float SampleAccumulator = .0f;

    void HandleAttackTrigger(FGuid RequestId);
    void HandleExecutionFinished(FGuid RequestId, bool bReachedContact, FName Reason = NAME_None);
	void HandleObservationTimeout();
	void LogMovementSample(FName Event, FName Reason = NAME_None) const;

    UFUNCTION()
    void HandleMovementUpdate(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
    UFUNCTION()
    void HandleLanded(const FHitResult& Hit);

    void HandleTakeoff(FGuid RequestId);
    void FinishObservation(FName Reason);

    bool MatchesObservedCommand(FGuid CommandId) const;

    bool bAwaitingPostImpactMovement = false;

    TWeakObjectPtr<APokemon_Parent> PokemonOwner;
    TWeakObjectPtr<UPokemonJumpExecutionComponent> ObservedExecutor;
};

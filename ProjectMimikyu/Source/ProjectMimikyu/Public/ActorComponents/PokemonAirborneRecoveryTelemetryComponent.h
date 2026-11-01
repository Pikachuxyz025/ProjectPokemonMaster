

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Navigation/PokemonRecoveryContinuation.h"
#include "Engine/EngineTypes.h"
#include "TimerManager.h"
#include "PokemonAirborneRecoveryTelemetryComponent.generated.h"

class APokemon_Parent;
class UPokemonJumpExecutionComponent;
struct FPokemonImpactResolution;
class UPrimitiveComponent;
class ACharacter;


// Diagnostic evidence under the supported constant-gravity,
// passive-amount model. This is not recovery-safety authorization.
struct PROJECTMIMIKYU_API FAirborneRecoveryHeightHistory
{
    bool bStarted = false;
    bool bComplete = false;
    bool bLanded = false;

	FName IncompleteReason = TEXT("NotObservedFromTakeoff");

    TOptional<double> TakeoffFeetZ;
    TOptional<double> ObservedMaxFeetZ;

    // Retained verified prefix if a later interval becomes unsupported.
    // Consult GetCompleteMaximum() before using this as full history
    TOptional<double> VerifiedMaxFeetZ;

    // Sum of verified, completed falling intervals.
    // Excludes the final partial interval containing landing
	double VerifiedMovementSeconds = 0.0;

    void Reset();

    // Call only at actual takeoff, using applied physical state.
    // A queued launch request is not sufficient.
	bool BeginAtTakeoff(const FPokemonRecoveryBallisticInput& AppliedState);

    // CurrentState describes the observed end of this interval.
   //
   // AppliedVelocityAtIntervalStart may be supplied only when a
   // replacement was applied at the interval's beginning.
   // Never supply a merely requested or still-pending launch.
    bool Advance(double MovementDeltaSeconds,
        const FPokemonRecoveryBallisticInput& CurrentState,
        TOptional<FVector> AppliedVelocityAtIntervalStart = TOptional<FVector>());

    // Conservative completion when the preceding verified state
    // was already descending. The caller must establish a real
    // landing and exclude intervening unsupported events.
    bool FinishDescendingLanding(
        const FPokemonRecoveryBallisticInput& LandingState);

    // Sticky until Reset()/BeginAtTakeoff(). Remains callable after
    // landing because deferred collision events may arrive later.
    void MarkIncomplete(FName Reason);

    TOptional<double> GetCompleteMaximum() const;

    const FPokemonRecoveryBallisticInput& GetLastState() const
    {
        return LastState;
    }

private:
    FPokemonRecoveryBallisticInput LastState;

    void RecordObservedFeet(const FVector& Feet);
};

struct FAirborneRecoveryHeightRuntime
{
    bool bFirstMovementUpdate = true;

    float CapsuleRadius = 0.f;
    float CapsuleHalfHeight = 0.f;

    TOptional<FVector> PendingReplacementVelocity;
    FVector ReplacementRequestFeet = FVector::ZeroVector;
    FVector ReplacementIncomingVelocity = FVector::ZeroVector;
    bool bReplacementBoundaryKnown = false;
    int32 ReplacementImpactIndex = 0;

    bool bLandingCaptured = false;
    FPokemonRecoveryBallisticInput LandingState;
    FHitResult LandingHit;

    // Scoped movement can dispatch these after Landed.
    TArray<FHitResult> BlockingHits;
};

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

struct FRecoveryPIEComparison
{
    bool bEnabled = false;
	bool bAttempted = false;
    bool bLandingCaptured = false;
    bool bCompared = false;

	FName SeedKind = NAME_None;
	FName LastImpactResult = NAME_None;
	FName InvalidatedReason = NAME_None;

    int32 ImpactIndex = 0;

	double SeedMovementTime = 0.0;
	double LandingTimeLower = 0.0;
	double LandingTimeUpper = 0.0;

	float SeedCapsuleRadius = 0.f;
	float SeedCapsuleHalfHeight = 0.f;

    FPokemonRecoveryBallisticInput Input;
    FPokemonRecoveryContinuationResult Prediction;

	FVector FeetAtLandingEvent = FVector::ZeroVector;
	FVector VelocityAtLandingEvent = FVector::ZeroVector;

	TWeakObjectPtr<UPrimitiveComponent> LandingComponent;
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

	FAirborneRecoveryHeightHistory HeightHistory;

    FAirborneRecoveryHeightRuntime HeightRuntime;

    FName CheckHeightGeometry() const;
    void BeginHeightHistory();

    void RememberHeightImpact(const FPokemonImpactResolution& Resolution,  const FVector& IncomingVelocity,
        const FVector& RequestedVelocity, bool bStoppedImmediately);

    void UpdateHeightHistory(    float DeltaSeconds,   const FVector& OldLocation, const FVector& OldVelocity);

    void CaptureHeightLanding(const FHitResult& Hit);
    void LogHeightHistory(FName Event) const;

    UFUNCTION()
    void HandleHeightCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

    UFUNCTION()
    void HandleHeightMovementModeChanged(ACharacter* Character,EMovementMode PreviousMode,uint8 PreviousCustomMode);

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

	FRecoveryPIEComparison PIEComparison;
    
    void UpdateRecoveryComparison();
    void CaptureRecoveryLanding(const FHitResult& Hit);
    void CheckRecoveryComparisonModel();

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

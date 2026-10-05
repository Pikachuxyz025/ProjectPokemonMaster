#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AIControllers/PokemonAITypes.h"
#include "Navigation/PokemonTraversalTypes.h"
#include "PokemonJumpExecutionComponent.generated.h"

class ACharacter;
class APokemon_Parent;
class UCharacterMovementComponent;
class UPrimitiveComponent;

UENUM(BlueprintType)
enum class EPokemonJumpExecutionState : uint8
{
	Idle,
	Preparing,
	LaunchPending,
	Airborne
};

UENUM(BlueprintType)
enum class EPokemonJumpExecutionContract :uint8
{
	None,
	LandingTraversal,
	AirborneContact
};

DECLARE_MULTICAST_DELEGATE_OneParam(FPokemonJumpTakeoffSignature, FGuid);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FPokemonJumpFinishedSignature, FGuid, bool, FName);
DECLARE_MULTICAST_DELEGATE_OneParam(FPokemonAirborneExecutionTriggerSignature, FGuid);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FPokemonAirborneExecutionFinishedSignature, FGuid, bool, FName);

// Owns only the short preparation and physical jump. Navigation owns the retained intent.
UCLASS(ClassGroup = (Pokemon), meta = (BlueprintSpawnableComponent))
class PROJECTMIMIKYU_API UPokemonJumpExecutionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPokemonJumpExecutionComponent();

	bool PrepareJump(const FPokemonTraversalCandidate& Candidate,
		const FPokemonTraversalRequirement& Requirement, const FAgentNavigationRequest& ParentRequest);
	void CancelBeforeTakeoff(FName Reason);
	// Airborne interruptions release the movement overrides but still observe the final landing.
	void InterruptJump(FName Reason);

	UFUNCTION(BlueprintPure, Category = "Pokemon|Traversal|Jump")
	bool IsBusy() const { return State != EPokemonJumpExecutionState::Idle; }

	UFUNCTION(BlueprintPure, Category = "Pokemon|Traversal|Jump")
	bool HasTakenOff() const { return State == EPokemonJumpExecutionState::Airborne; }

	bool PrepareAirborneExecution(const FPokemonAirborneExecutionTrajectoryCandidate& Candidate,
		const FPokemonTraversalRequirement& Requirement, const FAgentNavigationRequest& ParentRequest,
		const FRotator& LockedFacing);

	FGuid GetParentRequestId() const;

	bool IsAirborneContactExecutionFor(const FGuid& RequestId) const;

	bool HasAirborneExecutionTriggered() const
	{
		return ActiveContract == EPokemonJumpExecutionContract::AirborneContact
			&& bAirborneExecutionTriggerFired;
	}

	void CancelForParentResolution(FGuid RequestId, FName Reason);

	// A future animation notify calls this same handoff; it never resolves a new trajectory.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Pokemon|Traversal|Jump")
	void TriggerTakeoff();

	FPokemonJumpTakeoffSignature OnJumpTakeoff;
	FPokemonJumpFinishedSignature OnJumpFinished;
	FPokemonAirborneExecutionFinishedSignature OnAirborneExecutionFinished;
	FPokemonAirborneExecutionTriggerSignature OnAirborneExecutionTrigger;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump")
	EPokemonJumpExecutionState State = EPokemonJumpExecutionState::Idle;

	// Provisional development timing. Disable the timer when an authored notify is available.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Development")
	bool bUsePreparationTimer = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Development", meta = (ClampMin = "0.0"))
	float PreparationDuration = 0.15f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Development", meta = (ClampMin = "0.1"))
	float PreparationTimeout = 2.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Development", meta = (ClampMin = "0.0"))
	float TakeoffPositionTolerance = 8.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Development", meta = (ClampMin = "0.0"))
	float LandingHorizontalTolerance = 60.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Development", meta = (ClampMin = "0.0"))
	float LandingVerticalTolerance = 20.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Development", meta = (ClampMin = "0.1"))
	float FlightTimeoutGrace = 2.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Airborne", meta = (ClampMin = "0.0"))
	float AirborneContactPositionTolerance = 15.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Traversal|Jump|Airborne", meta = (ClampMin = "0.0"))
	float AirborneContactTimingGrace = 0.08f;

private:
	UPROPERTY(Transient)
	TObjectPtr<APokemon_Parent> PokemonOwner;

	UPROPERTY(Transient)
	FPokemonTraversalCandidate ActiveCandidate;

	UPROPERTY(Transient)
	FPokemonTraversalRequirement ActiveRequirement;

	UPROPERTY(Transient)
	FAgentNavigationRequest ActiveParentRequest;

	UPROPERTY(Transient)
	EPokemonJumpExecutionContract ActiveContract = EPokemonJumpExecutionContract::None;

	UPROPERTY(Transient)
	FPokemonAirborneExecutionTrajectoryCandidate ActiveAirborneCandidate;

	FRotator LockedAirborneFacing = FRotator::ZeroRotator;

	bool bAirborneExecutionTriggerFired = false;
	double AirborneExecutionElapsed = 0.0;

	bool bOrientationSettingsSaved = false;
	bool bSavedUseControllerRotationYaw = false;
	bool bSavedOrientRotationToMovement = false;
	bool bSavedUseControllerDesiredRotation = false;

	bool RevalidatePreparedAirborneExecution(FName& OutFailureReason) const;

	FPokemonJumpCapabilitySnapshot CaptureCurrentCapabilitiesForReservedPlan(
		const FPokemonJumpCapabilitySnapshot& ReservedSnapshot,
		const FVector& LaunchDirection) const;

	FVector GetActiveLaunchVelocity() const;

	void FinishActiveExecution(bool bSucceeded, FName Reason, bool bBroadcast = true);

	void FinishAirborneExecution(bool bReachedContact, FName Reason, bool bBroadcast = true);

	void TryBroadcastAirborneExecutionTrigger();

	float CalculateAirborneContactSegmentError(
		const FVector& OldFeet, const FVector& CurrentFeet);

	FTimerHandle PreparationTimer;
	double PhaseStartTime = 0.;
	bool bMovementSettingsSaved = false;
	bool bLandingObserved = false;
	bool bLandedAtDestination = false;
	bool bRuntimeObstructionObserved = false;
	FName InterruptionReason = NAME_None;
	FName LandingReason = NAME_None;

	float SavedAirControl = 0.f;
	float SavedFallingLateralFriction = 0.f;
	float SavedBrakingDecelerationFalling = 0.f;
	float SavedBrakingFriction = 0.f;
	bool bSavedUseRVOAvoidance = false;
	bool bSavedForceMaxAccel = false;

	bool CanPrepareOrTakeoff(FName& OutFailureReason) const;
	bool RevalidatePreparedJump(FName& OutFailureReason) const;
	void SaveAndApplyBallisticMovement();
	void RestoreMovement();
	void ClearOwnedPendingLaunch();
	void FinishJump(bool bReachedDestination, FName Reason, bool bBroadcast = true);
	void LogLifecycle(const TCHAR* Event, FName Reason = NAME_None) const;

	UFUNCTION()
	void HandleMovementModeChanged(ACharacter* Character, EMovementMode PreviousMode, uint8 PreviousCustomMode);

	UFUNCTION()
	void HandleLanded(const FHitResult& Hit);

	UFUNCTION()
	void HandleMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);

	UFUNCTION()
	void HandleCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};

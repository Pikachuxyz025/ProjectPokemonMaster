#include "ActorComponents/PokemonJumpExecutionComponent.h"

#include "ActorComponents/PokemonCommandComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HAL/IConsoleManager.h"
#include "Navigation/PokemonJumpSolver.h"
#include "Navigation/PokemonJumpTrajectoryValidator.h"
#include "EngineUtils.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokemonJumpExecution, Log, All);

namespace
{
	TAutoConsoleVariable<int32> CVarPokemonJumpExecutionDebug(
		TEXT("pokemon.Traversal.JumpExecutionDebug"), 0,
		TEXT("Log Jump Execution 0.2 preparation/takeoff/landing and interruption events."), ECVF_Default);
	constexpr float PendingLaunchTimeout = 0.5f;

#if !UE_BUILD_SHIPPING
	void DebugInterruptJump(const TArray<FString>& Args, UWorld* World)
	{
		const FName Reason = Args.Num() > 0 && !Args[0].IsEmpty()
			? FName(*Args[0])
			: FName(TEXT("DebugInterrupt"));

		if (!World)
		{
			UE_LOG(LogPokemonJumpExecution, Warning,
				TEXT("[Jump0.2] DebugInterruptJump skipped: no world."));
			return;
		}

		for (TActorIterator<APokemon_Parent> It(World); It; ++It)
		{
			APokemon_Parent* Pokemon = *It;
			if (Pokemon && Pokemon->JumpExecutionComponent
				&& Pokemon->JumpExecutionComponent->IsBusy())
			{
				Pokemon->JumpExecutionComponent->InterruptJump(Reason);
				UE_LOG(LogPokemonJumpExecution, Display,
					TEXT("[Jump0.2] DebugInterruptJump | Owner=%s | Reason=%s"),
					*GetNameSafe(Pokemon), *Reason.ToString());
				return;
			}
		}

		UE_LOG(LogPokemonJumpExecution, Warning,
			TEXT("[Jump0.2] DebugInterruptJump skipped: no busy Pokemon in world."));
	}

	FAutoConsoleCommandWithWorldAndArgs DebugInterruptJumpCommand(
		TEXT("pokemon.Traversal.DebugInterruptJump"),
		TEXT("Development-only: interrupt the first busy Pokemon jump. Optional argument is the interruption reason."),
		FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(&DebugInterruptJump),
		ECVF_Cheat);
#endif
}

UPokemonJumpExecutionComponent::UPokemonJumpExecutionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.TickGroup = TG_PrePhysics;
}

void UPokemonJumpExecutionComponent::BeginPlay()
{
	Super::BeginPlay();
	PokemonOwner = Cast<APokemon_Parent>(GetOwner());
	if (!PokemonOwner || !PokemonOwner->HasAuthority())
	{
		return;
	}

	PokemonOwner->MovementModeChangedDelegate.AddDynamic(this, &ThisClass::HandleMovementModeChanged);
	PokemonOwner->LandedDelegate.AddDynamic(this, &ThisClass::HandleLanded);
	PokemonOwner->OnCharacterMovementUpdated.AddDynamic(this, &ThisClass::HandleMovementUpdated);
	if (UCapsuleComponent* Capsule = PokemonOwner->GetCapsuleComponent())
	{
		Capsule->OnComponentHit.AddDynamic(this, &ThisClass::HandleCapsuleHit);
	}
	if (UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement())
	{
		// Detect cancellation and locomotion ownership changes before a queued launch is consumed.
		Movement->AddTickPrerequisiteComponent(this);
	}
}

void UPokemonJumpExecutionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FinishJump(false, TEXT("OwnerEndPlay"), false);
	if (PokemonOwner)
	{
		PokemonOwner->MovementModeChangedDelegate.RemoveDynamic(this, &ThisClass::HandleMovementModeChanged);
		PokemonOwner->LandedDelegate.RemoveDynamic(this, &ThisClass::HandleLanded);
		PokemonOwner->OnCharacterMovementUpdated.RemoveDynamic(this, &ThisClass::HandleMovementUpdated);
		if (UCapsuleComponent* Capsule = PokemonOwner->GetCapsuleComponent())
		{
			Capsule->OnComponentHit.RemoveDynamic(this, &ThisClass::HandleCapsuleHit);
		}
		if (UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement())
		{
			Movement->RemoveTickPrerequisiteComponent(this);
		}
	}
	Super::EndPlay(EndPlayReason);
}

bool UPokemonJumpExecutionComponent::CanPrepareOrTakeoff(FName& OutFailureReason) const
{
	OutFailureReason = NAME_None;
	if (!PokemonOwner || !PokemonOwner->HasAuthority())
	{
		OutFailureReason = TEXT("AuthorityRequired");
		return false;
	}
	const UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement();
	if (!Movement || !Movement->IsActive() || !Movement->IsComponentTickEnabled()
		|| !Movement->IsMovingOnGround())
	{
		OutFailureReason = TEXT("GroundedMovementRequired");
		return false;
	}
	if (!PokemonOwner->CanAct() || PokemonOwner->IsIncapacitated() || PokemonOwner->GetIsDodging())
	{
		OutFailureReason = TEXT("OwnerCannotPrepareJump");
		return false;
	}
	if (Movement->HasAnimRootMotion() || Movement->HasRootMotionSources())
	{
		OutFailureReason = TEXT("RootMotionOwnsMovement");
		return false;
	}
	if (!Movement->PendingLaunchVelocity.IsZero()
		&& (State != EPokemonJumpExecutionState::LaunchPending
			|| !Movement->PendingLaunchVelocity.Equals(ActiveCandidate.FinalLaunchVelocity)))
	{
		OutFailureReason = TEXT("ExternalLaunchPending");
		return false;
	}
	return true;
}

bool UPokemonJumpExecutionComponent::PrepareJump(const FPokemonTraversalCandidate& Candidate,
	const FPokemonTraversalRequirement& Requirement, const FAgentNavigationRequest& ParentRequest)
{
	FName FailureReason;
	if (IsBusy() || !CanPrepareOrTakeoff(FailureReason) || !Candidate.IsExecutable()
		|| Candidate.ParentRequestId != Requirement.ParentRequestId
		|| Candidate.ParentRequestId != ParentRequest.RequestId)
	{
		return false;
	}
	const UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement();
	if (FVector::Dist(Movement->GetActorFeetLocation(), Candidate.StartFeetLocation)
		> FMath::Max(0.f, TakeoffPositionTolerance))
	{
		return false;
	}

	ActiveCandidate = Candidate;
	ActiveRequirement = Requirement;
	ActiveParentRequest = ParentRequest;
	State = EPokemonJumpExecutionState::Preparing;
	PhaseStartTime = GetWorld()->GetTimeSeconds();
	bLandingObserved = false;
	bLandedAtDestination = false;
	bRuntimeObstructionObserved = false;
	InterruptionReason = NAME_None;
	LandingReason = NAME_None;
	SetComponentTickEnabled(true);

	// Navigation has stopped path following. Reserve the measured approach momentum only
	// for this uninterrupted anticipation, so a stance can hold the solved takeoff anchor.
	// A cancellation destroys this reservation; it is never carried into another attempt.
	PokemonOwner->GetCharacterMovement()->StopMovementImmediately();
	LogLifecycle(TEXT("Preparation"));
	if (bUsePreparationTimer)
	{
		GetWorld()->GetTimerManager().SetTimer(PreparationTimer, this, &ThisClass::TriggerTakeoff,
			FMath::Max(0.001f, PreparationDuration), false);
	}
	return true;
}

bool UPokemonJumpExecutionComponent::RevalidatePreparedJump(FName& OutFailureReason) const
{
	if (!CanPrepareOrTakeoff(OutFailureReason))
	{
		return false;
	}
	const UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement();
	if (FVector::Dist(Movement->GetActorFeetLocation(), ActiveCandidate.StartFeetLocation)
		> FMath::Max(0.f, TakeoffPositionTolerance))
	{
		OutFailureReason = TEXT("TakeoffAnchorMoved");
		return false;
	}
	const FVector LaunchDirection = (ActiveCandidate.DestinationFeetLocation
		- ActiveCandidate.StartFeetLocation).GetSafeNormal2D();
	FPokemonJumpCapabilitySnapshot Current = FPokemonJumpSolver::CaptureCapabilities(
		*PokemonOwner, ActiveParentRequest, LaunchDirection);
	const FPokemonJumpCapabilitySnapshot& Reserved = ActiveCandidate.CapabilitySnapshot;
	const float NaturalReservation = FMath::Max(Current.InheritedAlignedSpeed,
		FMath::Min(Reserved.InheritedAlignedSpeed, Current.EffectiveMovementSpeed));
	Current.AvailableHorizontalSpeed += NaturalReservation - Current.InheritedAlignedSpeed;
	Current.InheritedAlignedSpeed = NaturalReservation;

	// Only an existing, still-authorized command can reserve its measured charge momentum.
	// This does not start an ability or convert arbitrary high velocity into permission.
	if (Reserved.AuthorizedMoveAlignedSpeed > 0.f)
	{
		const UPokemonCommandComponent* Command = PokemonOwner->FindComponentByClass<UPokemonCommandComponent>();
		const bool bSameCommand = Command && ActiveParentRequest.bTrainerAuthorizedMoveMomentum
			&& ActiveParentRequest.ParentAttackCommandId.IsValid()
			&& Command->GetActiveTrainerCommandId() == ActiveParentRequest.ParentAttackCommandId;
		const float CurrentAuthorization = bSameCommand
			? FMath::Max(0.f, static_cast<float>(FVector::DotProduct(
				Command->GetAuthorizedTraversalMomentum(ActiveParentRequest.ParentAttackCommandId), LaunchDirection))) : 0.f;
		const float AuthorizedReservation = FMath::Min(Reserved.AuthorizedMoveAlignedSpeed,
			FMath::Max(0.f, CurrentAuthorization - Current.InheritedAlignedSpeed));
		Current.AvailableHorizontalSpeed += AuthorizedReservation - Current.AuthorizedMoveAlignedSpeed;
		Current.AuthorizedMoveAlignedSpeed = AuthorizedReservation;
	}
	if (!FPokemonJumpSolver::CanExecuteWithCapabilities(ActiveCandidate, Current, OutFailureReason))
	{
		return false;
	}

	FPokemonTraversalCandidate RevalidatedCandidate = ActiveCandidate;
	if (!FPokemonJumpTrajectoryValidator::Validate(*PokemonOwner, RevalidatedCandidate))
	{
		OutFailureReason = RevalidatedCandidate.FailureReason;
		return false;
	}
	OutFailureReason = NAME_None;
	return true;
}

void UPokemonJumpExecutionComponent::TriggerTakeoff()
{
	if (State != EPokemonJumpExecutionState::Preparing)
	{
		return;
	}
	GetWorld()->GetTimerManager().ClearTimer(PreparationTimer);
	FName FailureReason;
	if (!RevalidatePreparedJump(FailureReason))
	{
		FinishJump(false, FailureReason);
		return;
	}

	SaveAndApplyBallisticMovement();
	PokemonOwner->StopJumping();
	State = EPokemonJumpExecutionState::LaunchPending;
	PhaseStartTime = GetWorld()->GetTimeSeconds();
	// Exact override: the solver already included useful aligned approach momentum and
	// vertical launch. Ground Z velocity must not be added a second time.
	PokemonOwner->LaunchCharacter(ActiveCandidate.FinalLaunchVelocity, true, true);
	LogLifecycle(TEXT("LaunchQueued"));
	// LaunchCharacter queues movement. Only HandleMovementModeChanged consumes the attempt.
}

void UPokemonJumpExecutionComponent::SaveAndApplyBallisticMovement()
{
	UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement();
	SavedAirControl = Movement->AirControl;
	SavedFallingLateralFriction = Movement->FallingLateralFriction;
	SavedBrakingDecelerationFalling = Movement->BrakingDecelerationFalling;
	SavedBrakingFriction = Movement->BrakingFriction;
	bSavedUseRVOAvoidance = Movement->bUseRVOAvoidance;
	bSavedForceMaxAccel = Movement->bForceMaxAccel;
	bMovementSettingsSaved = true;
	Movement->AirControl = 0.f;
	Movement->FallingLateralFriction = 0.f;
	Movement->BrakingDecelerationFalling = 0.f;
	// Separate braking friction can decelerate falling even with FallingLateralFriction=0.
	Movement->BrakingFriction = 0.f;
	Movement->bForceMaxAccel = false;
	Movement->SetAvoidanceEnabled(false);
}

void UPokemonJumpExecutionComponent::RestoreMovement()
{
	if (bMovementSettingsSaved && PokemonOwner)
	{
		if (UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement())
		{
			Movement->AirControl = SavedAirControl;
			Movement->FallingLateralFriction = SavedFallingLateralFriction;
			Movement->BrakingDecelerationFalling = SavedBrakingDecelerationFalling;
			Movement->BrakingFriction = SavedBrakingFriction;
			Movement->bForceMaxAccel = bSavedForceMaxAccel;
			Movement->SetAvoidanceEnabled(bSavedUseRVOAvoidance);
		}
	}
	bMovementSettingsSaved = false;
}

void UPokemonJumpExecutionComponent::ClearOwnedPendingLaunch()
{
	if (State == EPokemonJumpExecutionState::LaunchPending && PokemonOwner)
	{
		if (UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement())
		{
			// Never erase a newer launch from knockback or another explicit movement owner.
			if (Movement->PendingLaunchVelocity.Equals(ActiveCandidate.FinalLaunchVelocity))
			{
				Movement->PendingLaunchVelocity = FVector::ZeroVector;
			}
		}
	}
}

void UPokemonJumpExecutionComponent::CancelBeforeTakeoff(FName Reason)
{
	if (State == EPokemonJumpExecutionState::Preparing || State == EPokemonJumpExecutionState::LaunchPending)
	{
		const FName EffectiveReason = Reason.IsNone() ? FName(TEXT("PreparationCancelled")) : Reason;
		// Keep the interruption visible before FinishJump clears the active request.
		// The state value in this event proves that no airborne handoff occurred.
		LogLifecycle(TEXT("Interrupted"), EffectiveReason);
		FinishJump(false, EffectiveReason);
	}
}

void UPokemonJumpExecutionComponent::InterruptJump(FName Reason)
{
	if (!HasTakenOff())
	{
		CancelBeforeTakeoff(Reason);
		return;
	}
	if (InterruptionReason.IsNone())
	{
		InterruptionReason = Reason.IsNone() ? FName(TEXT("AirborneInterrupted")) : Reason;
		RestoreMovement();
		LogLifecycle(TEXT("Interrupted"), InterruptionReason);
	}
}

void UPokemonJumpExecutionComponent::HandleMovementModeChanged(ACharacter* Character,
	EMovementMode PreviousMode, uint8 PreviousCustomMode)
{
	if (!IsBusy() || Character != PokemonOwner)
	{
		return;
	}
	UCharacterMovementComponent* Movement = Character->GetCharacterMovement();
	if (State == EPokemonJumpExecutionState::LaunchPending && Movement->IsFalling())
	{
		// UE 5.8 HandlePendingLaunch assigns velocity, then changes mode, then clears
		// PendingLaunchVelocity. Both comparisons identify our applied launch exactly.
		if (Movement->Velocity.Equals(ActiveCandidate.FinalLaunchVelocity, 1.0f)
			&& (Movement->PendingLaunchVelocity.IsZero()
				|| Movement->PendingLaunchVelocity.Equals(ActiveCandidate.FinalLaunchVelocity, 1.0f)))
		{
			State = EPokemonJumpExecutionState::Airborne;
			PhaseStartTime = GetWorld()->GetTimeSeconds();
			LogLifecycle(TEXT("Takeoff"));
			OnJumpTakeoff.Broadcast(ActiveCandidate.ParentRequestId);
		}
		else
		{
			FinishJump(false, TEXT("LaunchOverriddenBeforeTakeoff"));
		}
	}
	else if (State == EPokemonJumpExecutionState::Preparing && !Movement->IsMovingOnGround())
	{
		FinishJump(false, TEXT("GroundLostDuringPreparation"));
	}
}

void UPokemonJumpExecutionComponent::HandleLanded(const FHitResult& Hit)
{
	if (!HasTakenOff() || bLandingObserved)
	{
		return;
	}
	const UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement();
	const FVector ActualFeet = Movement->GetActorFeetLocation();
	bLandingObserved = true;
	bLandedAtDestination = Movement->IsWalkable(Hit) && !Hit.bStartPenetrating
		&& FVector::Dist2D(ActualFeet, ActiveCandidate.DestinationFeetLocation) <= FMath::Max(0.f, LandingHorizontalTolerance)
		&& FMath::Abs(ActualFeet.Z - ActiveCandidate.DestinationFeetLocation.Z) <= FMath::Max(0.f, LandingVerticalTolerance)
		&& InterruptionReason.IsNone();
	LandingReason = bLandedAtDestination ? NAME_None : !InterruptionReason.IsNone() ? InterruptionReason
		: bRuntimeObstructionObserved ? FName(TEXT("RuntimeObstruction")) : FName(TEXT("MissedLandingDestination"));
	LogLifecycle(TEXT("Landed"), LandingReason);
	// LandedDelegate fires while still Falling. Resume only after the scoped movement
	// update finishes and CharacterMovement installs grounded post-landing physics.
}

void UPokemonJumpExecutionComponent::HandleMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity)
{
	if (HasTakenOff() && bLandingObserved)
	{
		FinishJump(bLandedAtDestination, LandingReason);
	}
}

void UPokemonJumpExecutionComponent::HandleCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (HasTakenOff() && !bLandingObserved && !bRuntimeObstructionObserved && Hit.bBlockingHit
		&& PokemonOwner && !PokemonOwner->GetCharacterMovement()->IsWalkable(Hit))
	{
		bRuntimeObstructionObserved = true;
		LogLifecycle(TEXT("Collision"), TEXT("RuntimeObstruction"));
	}
}

void UPokemonJumpExecutionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!IsBusy() || !PokemonOwner || !PokemonOwner->HasAuthority())
	{
		return;
	}
	UCharacterMovementComponent* Movement = PokemonOwner->GetCharacterMovement();
	const double PhaseElapsed = GetWorld()->GetTimeSeconds() - PhaseStartTime;
	if (!HasTakenOff())
	{
		FName FailureReason;
		if (!CanPrepareOrTakeoff(FailureReason))
		{
			FinishJump(false, FailureReason);
		}
		else if (PhaseElapsed > (State == EPokemonJumpExecutionState::Preparing
			? FMath::Max(PreparationTimeout, PreparationDuration + 0.25f) : PendingLaunchTimeout))
		{
			FinishJump(false, TEXT("TakeoffTimeout"));
		}
		return;
	}
	if (bLandingObserved)
	{
		FinishJump(bLandedAtDestination, LandingReason);
		return;
	}
	if (!Movement || Movement->MovementMode == MOVE_None || (!Movement->IsFalling() && !Movement->IsMovingOnGround()))
	{
		FinishJump(false, TEXT("MovementModeInterrupted"));
		return;
	}
	if (Movement->IsMovingOnGround())
	{
		FinishJump(false, TEXT("GroundedWithoutLandingEvent"));
		return;
	}
	if (PokemonOwner->IsIncapacitated() || PokemonOwner->GetIsDodging()
		|| Movement->HasAnimRootMotion() || Movement->HasRootMotionSources()
		|| !Movement->PendingLaunchVelocity.IsZero())
	{
		InterruptJump(TEXT("ExternalMovementInterruption"));
	}
	if (PhaseElapsed > ActiveCandidate.FlightTime + FMath::Max(0.1f, FlightTimeoutGrace))
	{
		FinishJump(false, TEXT("LandingTimeout"));
	}
}

void UPokemonJumpExecutionComponent::FinishJump(bool bReachedDestination, FName Reason, bool bBroadcast)
{
	const bool bWasBusy = IsBusy();
	const FGuid FinishedRequestId = ActiveCandidate.ParentRequestId;
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(PreparationTimer);
	}
	ClearOwnedPendingLaunch();
	RestoreMovement();
	if (bWasBusy)
	{
		LogLifecycle(bReachedDestination ? TEXT("Finished") : TEXT("Failed"), Reason);
	}
	State = EPokemonJumpExecutionState::Idle;
	SetComponentTickEnabled(false);
	ActiveCandidate = FPokemonTraversalCandidate();
	ActiveRequirement = FPokemonTraversalRequirement();
	ActiveParentRequest = FAgentNavigationRequest();
	bLandingObserved = false;
	if (bWasBusy && bBroadcast)
	{
		// Clear ownership before observers can submit a new retained intent.
		OnJumpFinished.Broadcast(FinishedRequestId, bReachedDestination, Reason);
	}
}

void UPokemonJumpExecutionComponent::LogLifecycle(const TCHAR* Event, FName Reason) const
{
	if (CVarPokemonJumpExecutionDebug.GetValueOnGameThread() > 0)
	{
		UE_LOG(LogPokemonJumpExecution, Display,
			TEXT("[Jump0.2] Event=%s | RequestId=%s | Owner=%s | State=%d | StartFeet=%s | DestinationFeet=%s | CurrentFeet=%s | Reason=%s"),
			Event, *ActiveCandidate.ParentRequestId.ToString(), *GetNameSafe(PokemonOwner), static_cast<int32>(State),
			*ActiveCandidate.StartFeetLocation.ToCompactString(), *ActiveCandidate.DestinationFeetLocation.ToCompactString(),
			PokemonOwner && PokemonOwner->GetCharacterMovement()
				? *PokemonOwner->GetCharacterMovement()->GetActorFeetLocation().ToCompactString() : TEXT("Unavailable"), *Reason.ToString());
	}
}

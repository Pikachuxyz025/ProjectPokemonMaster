


#include "ActorComponents/PokemonAirborneRecoveryTelemetryComponent.h"
#include "ActorComponents/PokemonHitStopComponent.h"
#include "ActorComponents/PokemonJumpExecutionComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/PhysicsVolume.h"
#include "Combat/PokemonImpactTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "HAL/IConsoleManager.h"
#include "Characters/Pokemon_Parent.h"

namespace
{
    TAutoConsoleVariable<int32> CVarAirborneRecoveryTelemetry(
        TEXT("pokemon.Traversal.AirborneRecoveryTelemetry"),
        0,
        TEXT("Record authoritative airborne recovery observations. ")
        TEXT("Changes apply to new observations."),
        ECVF_Default);

    constexpr float RecoverySampleInterval = 0.1f;
	constexpr float RecoveryObservationTimeout = 30.0f;

    TAutoConsoleVariable<int32> CVarAirborneRecoveryCompare(
        TEXT("pokemon.Traversal.AirborneRecoveryCompare"),
        0,
        TEXT("Compare one observed recovery prediction with actual landing. ")
        TEXT("Requires AirborneRecoveryTelemetry. Changes apply to new observations."),
        ECVF_Default);

	static FName ReadRecoveryInput(APokemon_Parent& Pokemon, FPokemonRecoveryBallisticInput& OutInput)
	{
		UCharacterMovementComponent* Movement = Pokemon.GetCharacterMovement();
		if (!Movement)
		{
			return FName(TEXT("MovementUnavailable"));
		}

        OutInput = FPokemonRecoveryBallisticInput();
		OutInput.StartFeet = Movement->GetActorFeetLocation();
		OutInput.StartVelocity = Movement->Velocity;
        OutInput.Gravity = Movement->GetGravityDirection() * -Movement->GetGravityZ();

        // Conditional diagnostic assumptions, not promises about future movement.
		OutInput.Movement.bAssumeConstantGravity = true;
		OutInput.Movement.bAssumeNoFutureForces = true;

        OutInput.Movement.bHasRootMotion=Movement->HasAnimRootMotion()
			|| Movement->HasRootMotionSources()
			|| Pokemon.IsPlayingRootMotion();

		OutInput.Movement.bHasPendingLaunch = !Movement->PendingLaunchVelocity.IsZero();

		OutInput.Movement.NonGravityAcceleration = Movement->GetCurrentAcceleration();

		OutInput.Movement.FallingLateralFriction = Movement->FallingLateralFriction;

		OutInput.Movement.BrakingDecelerationFalling = Movement->BrakingDecelerationFalling;

        OutInput.Movement.EffectiveBrakingFriction = FMath::Max(0.f,
            Movement->bUseSeparateBrakingFriction
            ? Movement->BrakingFriction
            : Movement->FallingLateralFriction)
            * FMath::Max(0.f, Movement->BrakingFrictionFactor);

        const APhysicsVolume* Volume = Movement->GetPhysicsVolume();
		if (!Volume)
		{
			return FName(TEXT("PhysicsVolumeUnavailable"));
		}

		OutInput.Movement.TerminalDownSpeed = Volume->TerminalVelocity;

        // Sparse observations cannot establish the complete previous maximum.
        OutInput.MaxFeetZThroughStart.Reset();

		if (!Movement->IsFalling())
		{
			return FName(TEXT("NotFalling"));
		}
		
        if(Pokemon.IsJumpProvidingForce())
		{
			return FName(TEXT("JumpForceActive"));
		}

        if (!Movement->GetLastUpdateRequestedVelocity().IsZero())
        {
            return TEXT("PathFollowingRequestedVelocity");
        }

        return NAME_None;
	}
}

UPokemonAirborneRecoveryTelemetryComponent::UPokemonAirborneRecoveryTelemetryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPokemonAirborneRecoveryTelemetryComponent::NotifyCombatOutcome(FGuid CommandId, bool bHit)
{
	if (!MatchesObservedCommand(CommandId)
        ||Observation.bCombatOutcomeKnown)
	{
		return;
	}

	Observation.bCombatOutcomeKnown = true;
	Observation.bCombatHit = bHit;

	LogMovementSample(bHit? FName(TEXT("CombatHit")) : FName(TEXT("CombatMiss")));
}

void UPokemonAirborneRecoveryTelemetryComponent::NotifyImpactRequest(FGuid CommandId, const FPokemonImpactResolution& Resolution, const FVector& IncomingVelocity, const FVector& RequestedVelocity, bool bStoppedImmediately)
{
	if (!MatchesObservedCommand(CommandId))
	{
		return;
	}

    ++Observation.ImpactRequestCount;
    bAwaitingPostImpactMovement = true;

    const FString ResultName =
        StaticEnum<EPokemonImpactResult>()->GetNameStringByValue(
            static_cast<int64>(Resolution.ImpactResult));

    const FString PolicyName =
        StaticEnum<EPokemonAttackerMotionPolicy>()->GetNameStringByValue(
            static_cast<int64>(Resolution.AttackerMotionPolicy));

    PIEComparison.LastImpactResult=FName(*ResultName);

    // Preserve the original prediction. A later impact changes the trajectory
    // being compared, so it must not silently become a replacement seed.
    if (PIEComparison.bEnabled && PIEComparison.bAttempted
        && !PIEComparison.bLandingCaptured && PIEComparison.InvalidatedReason.IsNone())
    {
        PIEComparison.InvalidatedReason = TEXT("LaterImpact");
    }

    UE_LOG(LogTemp, Display,
        TEXT("[AirRecoveryTrace] ImpactRequested | ")
        TEXT("RequestId=%s | CommandId=%s | ImpactIndex=%d | ")
        TEXT("Result=%s | Policy=%s | Application=%s | ")
        TEXT("Incoming=%s | Requested=%s"),
        *Observation.RequestId.ToString(),
        *Observation.CommandId.ToString(),
        Observation.ImpactRequestCount,
        *ResultName,
        *PolicyName,
        bStoppedImmediately
        ? TEXT("StopMovementImmediately")
        : TEXT("LaunchCharacter"),
        *IncomingVelocity.ToCompactString(),
        *RequestedVelocity.ToCompactString());

    // Includes current velocity and pending launch immediately
    // after the existing motion operation.
    LogMovementSample(TEXT("ImpactRequestState"));
}

void UPokemonAirborneRecoveryTelemetryComponent::BeginPlay()
{
    Super::BeginPlay();

	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(GetOwner());
	if (!Pokemon || !Pokemon->HasAuthority())
	{
		return;
	}

	PokemonOwner = Pokemon;

	UPokemonJumpExecutionComponent* Executor = Pokemon->JumpExecutionComponent;

	if (!Executor)
	{
		return;
	}
        
    ObservedExecutor = Executor;

	TakeoffDelegateHandle = Executor->OnJumpTakeoff.AddUObject(this, 
        &UPokemonAirborneRecoveryTelemetryComponent::HandleTakeoff);

	TriggerDelegateHandle = Executor->OnAirborneExecutionTrigger.AddUObject(this,
		&UPokemonAirborneRecoveryTelemetryComponent::HandleAttackTrigger);

	ExecutionFinishDelegateHandle = Executor->OnAirborneExecutionFinished.AddUObject(this,
		&UPokemonAirborneRecoveryTelemetryComponent::HandleExecutionFinished);

    Pokemon->LandedDelegate.AddDynamic(this, 
        &UPokemonAirborneRecoveryTelemetryComponent::HandleLanded);

	Pokemon->OnCharacterMovementUpdated.AddDynamic(this,
		&UPokemonAirborneRecoveryTelemetryComponent::HandleMovementUpdate);
}

void UPokemonAirborneRecoveryTelemetryComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FinishObservation(TEXT("OwnerEndPlay"));

	if (UPokemonJumpExecutionComponent* Executor = ObservedExecutor.Get())
	{
		Executor->OnJumpTakeoff.Remove(TakeoffDelegateHandle);
		Executor->OnAirborneExecutionTrigger.Remove(TriggerDelegateHandle);
		Executor->OnAirborneExecutionFinished.Remove(ExecutionFinishDelegateHandle);
	}

	TakeoffDelegateHandle.Reset();
	TriggerDelegateHandle.Reset();
	ExecutionFinishDelegateHandle.Reset();

	if (APokemon_Parent* Pokemon = PokemonOwner.Get())
	{
		Pokemon->LandedDelegate.RemoveDynamic(this,
			&UPokemonAirborneRecoveryTelemetryComponent::HandleLanded);

		Pokemon->OnCharacterMovementUpdated.RemoveDynamic(this,
			&UPokemonAirborneRecoveryTelemetryComponent::HandleMovementUpdate);
	}

	ObservedExecutor.Reset();
	PokemonOwner.Reset();

	Super::EndPlay(EndPlayReason);
}

void UPokemonAirborneRecoveryTelemetryComponent::FinishObservation(FName Reason)
{
	const UWorld* World = GetWorld();

    if (World)
    {
		World->GetTimerManager().ClearTimer(ObservationTimeoutHandle);
    }

	if (!bObserving)
	{
		PIEComparison = FRecoveryPIEComparison();
		return;
	}

	if (PIEComparison.bEnabled && !PIEComparison.bCompared)
	{
        UE_LOG(LogTemp, Display,
            TEXT("[AirRecoveryCompare] Incomplete | ")
            TEXT("RequestId=%s | CommandId=%s | Reason=%s | ")
            TEXT("Attempted=%d | LandingCaptured=%d | Invalidated=%s"),
            *Observation.RequestId.ToString(),
            *Observation.CommandId.ToString(),
            *Reason.ToString(),
            PIEComparison.bAttempted,
            PIEComparison.bLandingCaptured,
            *PIEComparison.InvalidatedReason.ToString());
	}

    LogMovementSample(TEXT("FinalState"), Reason);
    bObserving = false;
    bAwaitingPostImpactMovement = false;

    const double WorldElapsed = World
        ? World->GetTimeSeconds() - Observation.StartWorldTime
        : 0.0;

    UE_LOG(LogTemp, Display,
        TEXT("[AirRecoveryTrace] Complete | ")
        TEXT("RequestId=%s | CommandId=%s | Reason=%s | ")
        TEXT("WorldElapsed=%.3f | MovementElapsed=%.3f | ")
        TEXT("AttackTriggered=%d | ExecutionFinished=%d | ")
        TEXT("ContactReached=%d | Landed=%d | GroundedObserved=%d | ")
        TEXT("CombatOutcomeKnown=%d | CombatHit=%d | ImpactRequests=%d"),
        *Observation.RequestId.ToString(),
        *Observation.CommandId.ToString(),
        *Reason.ToString(),
        WorldElapsed,
        Observation.ElapsedMovementTime,
        Observation.bAttackTriggered,
        Observation.bExecutionFinished,
        Observation.bReachedContact,
        Observation.bLanded,
        Observation.bGroundedObserved,
        Observation.bCombatOutcomeKnown,
        Observation.bCombatHit,
        Observation.ImpactRequestCount);

    SampleAccumulator = 0.f;
	PIEComparison = FRecoveryPIEComparison();
}

bool UPokemonAirborneRecoveryTelemetryComponent::MatchesObservedCommand(FGuid CommandId) const
{
	const APokemon_Parent* Pokemon = PokemonOwner.Get();

    return bObserving
        && Pokemon
        && Pokemon->HasAuthority()
        && CommandId.IsValid()
        && Observation.CommandId == CommandId;
}

void UPokemonAirborneRecoveryTelemetryComponent::HandleObservationTimeout()
{
    FinishObservation(TEXT("Timeout"));
}

void UPokemonAirborneRecoveryTelemetryComponent::HandleLanded(const FHitResult& Hit)
{
    if (!bObserving)
    {
        return;
    }

    APokemon_Parent* Pokemon = PokemonOwner.Get();
    if (!Pokemon || !Pokemon->HasAuthority())
    {
        return;
    }

    UCharacterMovementComponent* Movement =
        Pokemon->GetCharacterMovement();

    if (!Movement)
    {
        return;
    }

	Observation.bLanded = true;

    // Capture the event-time velocity before the normal ground transition.
    // Other Landing listeners may already have run, so label it explicitly.
	const FVector VelocityAtEvent = Movement->Velocity;

    if (Movement->IsFalling())
    {
        Observation.LastFallingVelocity = VelocityAtEvent;
    }

    UE_LOG(LogTemp, Display,
        TEXT("[AirRecoveryTrace] Landed | ")
        TEXT("RequestId=%s | CommandId=%s | ")
        TEXT("Feet=%s | VelocityAtEvent=%s | ")
        TEXT("LastFallingVelocity=%s | Walkable=%d | ")
        TEXT("StartPenetrating=%d | ImpactNormal=%s"),
        *Observation.RequestId.ToString(),
        *Observation.CommandId.ToString(),
        *Movement->GetActorFeetLocation().ToCompactString(),
        *VelocityAtEvent.ToCompactString(),
        *Observation.LastFallingVelocity.ToCompactString(),
        Movement->IsWalkable(Hit),
        Hit.bStartPenetrating,
        *Hit.ImpactNormal.ToCompactString());

	CaptureRecoveryLanding(Hit);

    LogMovementSample(TEXT("LandingState"));
}

void UPokemonAirborneRecoveryTelemetryComponent::HandleTakeoff(FGuid RequestId)
{
    APokemon_Parent* Pokemon = PokemonOwner.Get();
	UPokemonJumpExecutionComponent* Executor = ObservedExecutor.Get();
	UWorld* World = GetWorld();

    if (!Pokemon || !Pokemon->HasAuthority()||!Executor||!World)
    {
        return;
    }

    // Any new takeoff ends the previous observation, including
    // an ordinary Landing jump that we will not record.

	FinishObservation(TEXT("Superseded"));
    
	if (CVarAirborneRecoveryTelemetry.GetValueOnGameThread() == 0)
	{
		return; // Disabled by console variable.
	}

	FPokemonAirborneExecutionTrajectoryCandidate Candidate;
	FGuid CommandId;

    if (!Executor->GetActiveAirborneTelemetrySnapshot(Candidate, CommandId))
    {
        return; // No an airborne-contact jump.
    }

	if (!RequestId.IsValid() || Candidate.ParentRequestId != RequestId)
    {
        return;
    }

    Observation = FAirborneRecoveryObservation();

	PIEComparison = FRecoveryPIEComparison();
	PIEComparison.bEnabled = CVarAirborneRecoveryCompare.GetValueOnGameThread() != 0;

    Observation.RequestId = RequestId;
    Observation.CommandId = CommandId;
    Observation.StartFeet = Candidate.StartFeetLocation;
    Observation.RequiredContactFeet = Candidate.RequiredContactFeet;
    Observation.LaunchVelocity = Candidate.FinalLaunchVelocity;
    Observation.PlannedContactTime = Candidate.ContactTime;
    Observation.StartWorldTime = World->GetTimeSeconds();

	if (const UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement())
	{
		Observation.LastFallingVelocity = Movement->Velocity;
	}

    bObserving = true;

    SampleAccumulator = 0.0f;
    bAwaitingPostImpactMovement = false;
	World->GetTimerManager().SetTimer(ObservationTimeoutHandle, this,
		&UPokemonAirborneRecoveryTelemetryComponent::HandleObservationTimeout,
		RecoveryObservationTimeout, false);

    UE_LOG(LogTemp, Display,
        TEXT("[AirRecoveryTrace] Start | ")
        TEXT("RequestId=%s | CommandId=%s | ")
        TEXT("StartFeet=%s | RequiredContactFeet=%s | ")
        TEXT("LaunchVelocity=%s | PlannedContactTime=%.3f"),
        *Observation.RequestId.ToString(),
        *Observation.CommandId.ToString(),
        *Observation.StartFeet.ToCompactString(),
        *Observation.RequiredContactFeet.ToCompactString(),
        *Observation.LaunchVelocity.ToCompactString(),
        Observation.PlannedContactTime);

    LogMovementSample(TEXT("InitialState"));
}

void UPokemonAirborneRecoveryTelemetryComponent::HandleAttackTrigger(FGuid RequestId)
{
    if (!bObserving
        ||Observation.RequestId!=RequestId
        ||Observation.bAttackTriggered)
    {
        return;
}

	Observation.bAttackTriggered = true;
    LogMovementSample(TEXT("AttackTrigger"));
}

void UPokemonAirborneRecoveryTelemetryComponent::HandleExecutionFinished(FGuid RequestId, bool bReachedContact, FName Reason)
{
    if (!bObserving || Observation.RequestId != RequestId || Observation.bExecutionFinished)
    {
        return;
    }

    Observation.bExecutionFinished = true;
    Observation.bReachedContact = bReachedContact;

    const FName Event = bReachedContact
        ? FName(TEXT("ContactReached"))
        : FName(TEXT("ExecutionFailed"));

    LogMovementSample(Event, Reason);
}

void UPokemonAirborneRecoveryTelemetryComponent::LogMovementSample(FName Event, FName Reason) const
{

	APokemon_Parent* Pokemon = PokemonOwner.Get();
	const UWorld* World = GetWorld();
	if (!bObserving||!Pokemon || !World)
	{
		return;
	}
	UCharacterMovementComponent* Movement =
		Pokemon->GetCharacterMovement();
	if (!Movement)
	{
		return;
	}

    const UPokemonHitStopComponent* HitStop =
        Pokemon->GetHitStopComponent();

    UE_LOG(LogTemp, Display,
        TEXT("[AirRecoveryTrace] %s | ")
        TEXT("RequestId=%s | CommandId=%s | Reason=%s | ImpactRequests=%d | ")
        TEXT("WorldElapsed=%.3f | MovementElapsed=%.3f | ")
        TEXT("Feet=%s | Velocity=%s | PendingLaunch=%s | ")
        TEXT("Mode=%d | CustomMode=%d | ")
        TEXT("AnimRootMotion=%d | RootMotionSources=%d | ")
        TEXT("HitStop=%d | CustomTimeDilation=%.4f | ")
        TEXT("GravityZ=%.3f | AirControl=%.3f | ")
        TEXT("FallingFriction=%.3f | FallingBraking=%.3f | ")
        TEXT("SeparateBraking=%d | BrakingFriction=%.3f | ")
        TEXT("BrakingFrictionFactor=%.3f"),
        *Event.ToString(),
        *Observation.RequestId.ToString(),
        *Observation.CommandId.ToString(),
        *Reason.ToString(),
        Observation.ImpactRequestCount,
        World->GetTimeSeconds() - Observation.StartWorldTime,
        Observation.ElapsedMovementTime,
        *Movement->GetActorFeetLocation().ToCompactString(),
        *Movement->Velocity.ToCompactString(),
        *Movement->PendingLaunchVelocity.ToCompactString(),
        static_cast<int32>(Movement->MovementMode),
        static_cast<int32>(Movement->CustomMovementMode),
        Movement->HasAnimRootMotion(),
        Movement->HasRootMotionSources(),
        HitStop && HitStop->IsHitStopActive(),
        Pokemon->CustomTimeDilation,
        Movement->GetGravityZ(),
        Movement->AirControl,
        Movement->FallingLateralFriction,
        Movement->BrakingDecelerationFalling,
        Movement->bUseSeparateBrakingFriction,
        Movement->BrakingFriction,
        Movement->BrakingFrictionFactor);
}

void UPokemonAirborneRecoveryTelemetryComponent::UpdateRecoveryComparison()
{
    if (!PIEComparison.bEnabled || PIEComparison.bCompared)
    {
        return;
    }

    if (PIEComparison.bLandingCaptured)
    {
        PIEComparison.LandingTimeUpper = FMath::Max(PIEComparison.LandingTimeLower, static_cast<double>(Observation.ElapsedMovementTime)
            - PIEComparison.SeedMovementTime);

        PIEComparison.bCompared = true;

        const bool bHasPrediction = PIEComparison.Prediction.HasLandingGeometry();

        UE_LOG(LogTemp, Display,
            TEXT("[AirRecoveryCompare] Landing | ")
            TEXT("RequestId=%s | CommandId=%s | Kind=%s | ImpactIndex=%d | ")
            TEXT("ActualTime=[%.6f,%.6f] | FeetAtEvent=%s | ")
            TEXT("VelocityAtEvent=%s | HasLandingPrediction=%d | Invalidated=%s"),
            *Observation.RequestId.ToString(),
            *Observation.CommandId.ToString(),
            *PIEComparison.SeedKind.ToString(),
            PIEComparison.ImpactIndex,
            PIEComparison.LandingTimeLower,
            PIEComparison.LandingTimeUpper,
            *PIEComparison.FeetAtLandingEvent.ToCompactString(),
            *PIEComparison.VelocityAtLandingEvent.ToCompactString(),
            bHasPrediction,
            *PIEComparison.InvalidatedReason.ToString());

        if (bHasPrediction)
        {
            const FPokemonRecoveryContinuationResult& Prediction = PIEComparison.Prediction;

            const double PositionDelta = FVector::Dist(Prediction.ContactFeet,
                PIEComparison.FeetAtLandingEvent);

            // This is an event-velocity comparison, not an excat
            // instantaneous impact-speed error.
            const double VelocityAtEventDelta = FVector::Dist(Prediction.ContactPrediction.Sample.Velocity,
                PIEComparison.VelocityAtLandingEvent);

            const double TimeIntervalGap = FMath::Max(0.0, FMath::Max(
                Prediction.ContactIntervalStart - PIEComparison.LandingTimeUpper,
                PIEComparison.LandingTimeLower - Prediction.ContactIntervalEnd));

            const bool bSameSupport = PIEComparison.LandingComponent.IsValid()
                && Prediction.Hit.GetComponent() == PIEComparison.LandingComponent.Get();

            UE_LOG(LogTemp, Display,
                TEXT("[AirRecoveryCompare] Metrics | ")
                TEXT("RequestId=%s | CommandId=%s | ")
                TEXT("PositionDeltaCm=%.6f | VelocityAtEventDeltaCmS=%.6f | ")
                TEXT("TimeIntervalGapSeconds=%.6f | SameSupport=%d | ")
                TEXT("Invalidated=%s"),
                *Observation.RequestId.ToString(),
                *Observation.CommandId.ToString(),
                PositionDelta,
                VelocityAtEventDelta,
                TimeIntervalGap,
                bSameSupport,
                *PIEComparison.InvalidatedReason.ToString());
        }
        return;
    }

    if (PIEComparison.bAttempted)
    {
        CheckRecoveryComparisonModel();
        return;
    }

    APokemon_Parent* Pokemon = PokemonOwner.Get();
    UCharacterMovementComponent* Movement = Pokemon ? Pokemon->GetCharacterMovement() : nullptr;

    if (!Movement || !Observation.bCombatOutcomeKnown
        || !Observation.bReachedContact || !Observation.bExecutionFinished
        || Observation.bLanded || !Movement->IsFalling()
        || !Movement->PendingLaunchVelocity.IsZero() || bAwaitingPostImpactMovement)
    {
        return;
    }

    if (Observation.bCombatHit)
    {
        if (Observation.ImpactRequestCount == 0
            || PIEComparison.LastImpactResult != FName(TEXT("BounceOff")))
        {
            return;
        }
    }
    else if (Observation.ImpactRequestCount != 0)
    {
        // Keep the initial miss comparison unambiguous.
        return;
    }

    PIEComparison.bAttempted = true;
    PIEComparison.SeedKind = Observation.bCombatHit
        ? FName(TEXT("ObservedBounceOff"))
        : FName(TEXT("ObservedMiss"));

    PIEComparison.ImpactIndex = Observation.ImpactRequestCount;
    PIEComparison.SeedMovementTime = Observation.ElapsedMovementTime;

    const FName FailureReason = ReadRecoveryInput(*Pokemon, PIEComparison.Input);

    if (const UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent())
    {
        Capsule->GetScaledCapsuleSize(PIEComparison.SeedCapsuleRadius, PIEComparison.SeedCapsuleHalfHeight);
    }

    if (FailureReason.IsNone())
    {
        FPokemonRecoveryContinuationSettings Settings;
        Settings.bAssumeFrozenWorld = true;

        PIEComparison.Prediction = FPokemonRecoveryContinuation::Evaluate(*Pokemon, PIEComparison.Input, Settings);
    }
    else
    {
        PIEComparison.Prediction.Status =
            EPokemonRecoveryContinuationStatus::UnsupportedModel;
        PIEComparison.Prediction.Reason = FailureReason;
    }

    UE_LOG(LogTemp, Display,
        TEXT("[AirRecoveryCompare] Seed | ")
        TEXT("RequestId=%s | CommandId=%s | Kind=%s | ImpactIndex=%d | ")
        TEXT("MovementTime=%.6f | Feet=%s | Velocity=%s | Gravity=%s | ")
        TEXT("Status=%d | Reason=%s | QueryWork=%d | ")
        TEXT("FrozenWorld=1 | ConstantGravity=1 | NoFutureForces=1 | ")
        TEXT("FullHeightKnown=0"),
        *Observation.RequestId.ToString(),
        *Observation.CommandId.ToString(),
        *PIEComparison.SeedKind.ToString(),
        PIEComparison.ImpactIndex,
        PIEComparison.SeedMovementTime,
        *PIEComparison.Input.StartFeet.ToCompactString(),
        *PIEComparison.Input.StartVelocity.ToCompactString(),
        *PIEComparison.Input.Gravity.ToCompactString(),
        static_cast<int32>(PIEComparison.Prediction.Status),
        *PIEComparison.Prediction.Reason.ToString(),
        PIEComparison.Prediction.QueryWorkUsed);

    if (PIEComparison.Prediction.HasLandingGeometry())
    {
        UE_LOG(LogTemp, Display,
            TEXT("[AirRecoveryCompare] Prediction | ")
            TEXT("RequestId=%s | CommandId=%s | ")
            TEXT("ContactTime=[%.6f,%.6f] | ContactFeet=%s | ")
            TEXT("SupportedFeet=%s | IncomingVelocity=%s"),
            *Observation.RequestId.ToString(),
            *Observation.CommandId.ToString(),
            PIEComparison.Prediction.ContactIntervalStart,
            PIEComparison.Prediction.ContactIntervalEnd,
            *PIEComparison.Prediction.ContactFeet.ToCompactString(),
            *PIEComparison.Prediction.SupportedFeet.ToCompactString(),
            *PIEComparison.Prediction.ContactPrediction.Sample.Velocity
            .ToCompactString());
    }
}

void UPokemonAirborneRecoveryTelemetryComponent::CaptureRecoveryLanding(const FHitResult& Hit)
{
	if (!PIEComparison.bEnabled || !PIEComparison.bAttempted || PIEComparison.bLandingCaptured)
	{
		return;
	}

	APokemon_Parent* Pokemon = PokemonOwner.Get();
    UCharacterMovementComponent* Movement = Pokemon ? Pokemon->GetCharacterMovement() : nullptr;

    if(!Movement)
    {
        return;
    }

	CheckRecoveryComparisonModel();

	PIEComparison.bLandingCaptured = true;
	PIEComparison.FeetAtLandingEvent = Movement->GetActorFeetLocation();
	PIEComparison.VelocityAtLandingEvent = Movement->Velocity;
	PIEComparison.LandingComponent = Hit.GetComponent();

    // Landed occurs inside movement simulation. The observer's clock still
    // describes the preceding completed movement update.
	PIEComparison.LandingTimeLower = FMath::Max(0.0, static_cast<double>(Observation.ElapsedMovementTime)
        - PIEComparison.SeedMovementTime);
}

void UPokemonAirborneRecoveryTelemetryComponent::CheckRecoveryComparisonModel()
{
    if (!PIEComparison.bAttempted || PIEComparison.bLandingCaptured
        || !PIEComparison.Prediction.HasLandingGeometry() || !PIEComparison.InvalidatedReason.IsNone())
    {
        return;
    }

	APokemon_Parent* Pokemon = PokemonOwner.Get();
    if (!Pokemon)
    {
		PIEComparison.InvalidatedReason = TEXT("OwnerUnavailable");
        return;
    }

    FPokemonRecoveryBallisticInput CurrentInput;
	FName FailureReason = ReadRecoveryInput(*Pokemon, CurrentInput);

    if (FailureReason.IsNone())
    {
		const FPokemonRecoveryBallisticResult Check = FPokemonRecoveryBallistics::Evaluate(CurrentInput);

        if(!Check.HasPrediction())
		{
			FailureReason = Check.Reason;
		}
    }

    if (FailureReason.IsNone()
        && (!CurrentInput.Gravity.Equals(
            PIEComparison.Input.Gravity, 0.000001)
            || CurrentInput.Movement.TerminalDownSpeed !=
            PIEComparison.Input.Movement.TerminalDownSpeed))
    {
        FailureReason = TEXT("GravityOrTerminalSpeedChanged");
    }

	const UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent();

    if(FailureReason.IsNone()
        &&(!Capsule||Capsule->GetScaledCapsuleRadius()!=PIEComparison.SeedCapsuleRadius
            || Capsule->GetScaledCapsuleHalfHeight()!=PIEComparison.SeedCapsuleHalfHeight
            ||!Capsule->GetUpVector().Equals(FVector::UpVector,0.001)))
    {
		FailureReason = TEXT("CapsuleChanged");
    }

    if (!FailureReason.IsNone())
    {
		PIEComparison.InvalidatedReason = FailureReason;
    }
}

void UPokemonAirborneRecoveryTelemetryComponent::HandleMovementUpdate(float DeltaSeconds, FVector OldLocation, FVector OldVelocity)
{
    if (!bObserving)
    {
        return;
    }

    APokemon_Parent* Pokemon = PokemonOwner.Get();
    if (!Pokemon || !Pokemon->HasAuthority())
    {
        FinishObservation(TEXT("OwnerUnavailable"));
        return;
    }

    UCharacterMovementComponent* Movement =
        Pokemon->GetCharacterMovement();

    if (!Movement)
    {
        FinishObservation(TEXT("MovementUnavailable"));
        return;
    }

    const float Step = FMath::Max(0.f, DeltaSeconds);
    Observation.ElapsedMovementTime += Step;
    SampleAccumulator += Step;

    // Update every falling movement callback, even when no log is emitted.
    if (Movement->IsFalling())
    {
        Observation.LastFallingVelocity = Movement->Velocity;
    }

    if (bAwaitingPostImpactMovement)
    {
        LogMovementSample(TEXT("ImpactMovementUpdate"));

        // A request may originate inside this same movement-event
        // broadcast. Keep observing while its launch is still pending.
        bAwaitingPostImpactMovement =
            !Movement->PendingLaunchVelocity.IsZero();
    }


    UpdateRecoveryComparison();

    // A landing event alone does not establish grounded movement.
    // A queued launch also means another movement transition is pending.
    if (Observation.bLanded
        && Movement->IsMovingOnGround()
        && Movement->PendingLaunchVelocity.IsZero())
    {
        Observation.bGroundedObserved = true;
        LogMovementSample(TEXT("Grounded"));
        FinishObservation(TEXT("Landed"));
        return;
    }

    if (SampleAccumulator >= RecoverySampleInterval)
    {
        SampleAccumulator =
            FMath::Fmod(SampleAccumulator, RecoverySampleInterval);

        LogMovementSample(TEXT("Sample"));
    }
}

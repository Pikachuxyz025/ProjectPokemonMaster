


#include "ActorComponents/PokemonAirborneRecoveryTelemetryComponent.h"
#include "ActorComponents/PokemonHitStopComponent.h"
#include "ActorComponents/PokemonJumpExecutionComponent.h"
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
		return;
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

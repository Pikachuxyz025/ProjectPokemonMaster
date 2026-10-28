#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"
#include "Tests/PokemonJumpAutomationFixture.h"
#include "ActorComponents/PokemonAirborneRecoveryTelemetryComponent.h"
#include "Misc/ScopeExit.h"
#include "ActorComponents/PokemonJumpExecutionComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "HAL/IConsoleManager.h"
#include "Navigation/PokemonJumpSolver.h"
#include "Navigation/PokemonJumpTrajectoryValidator.h"
#include "Combat/PokemonImpactTypes.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/WorldSettings.h"

IMPLEMENT_COMPLEX_AUTOMATION_TEST(
    FPokemonAirborneRecoveryTelemetryTest,
    "ProjectMimikyu.Traversal.AirborneRecoveryTelemetry",
    EAutomationTestFlags::EditorContext
    | EAutomationTestFlags::EngineFilter)

    void FPokemonAirborneRecoveryTelemetryTest::GetTests(
        TArray<FString>& OutBeautifiedNames,
        TArray<FString>& OutTestCommands) const
{
    const TCHAR* Cases[] = {
       TEXT("CommandIdentity"),
       TEXT("HitLatch"),
       TEXT("MissLatch"),
       TEXT("ImpactRequests"),
       TEXT("LandingCompletion"),
       TEXT("TakeoffSession"),
       TEXT("Timeout"),
       TEXT("Supersession"),
       TEXT("Teardown")
    };

    for (const TCHAR* Case : Cases)
    {
        OutBeautifiedNames.Add(Case);
        OutTestCommands.Add(Case);
    }
}

bool FPokemonAirborneRecoveryTelemetryTest::RunTest(
    const FString& Parameters)
{
    FTestWorldWrapper TestWorld;

    if (!TestTrue(TEXT("Create transient world"),
        TestWorld.CreateTestWorld(EWorldType::Game)))
    {
        TestWorld.ForwardErrorMessages(this);
        return false;
    }

    UWorld* World = TestWorld.GetTestWorld();
    World->GetWorldSettings()->DefaultGameMode =
        AGameModeBase::StaticClass();

    const FTransform SpawnTransform(FVector(0.f, 0.f, 300.f));

    APokemonJumpAutomationPawn* Pokemon =
        World->SpawnActorDeferred<APokemonJumpAutomationPawn>(
            APokemonJumpAutomationPawn::StaticClass(),
            SpawnTransform,
            nullptr,
            nullptr,
            ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

    if (!TestNotNull(TEXT("Native test Pokemon"), Pokemon))
    {
        return false;
    }

    Pokemon->ConfigureForAutomation();
    Pokemon->FinishSpawning(SpawnTransform);

    if (!TestTrue(TEXT("Run normal BeginPlay"),
        TestWorld.BeginPlayInTestWorld()))
    {
        TestWorld.ForwardErrorMessages(this);
        return false;
    }

    UPokemonAirborneRecoveryTelemetryComponent* Telemetry =
        Pokemon->AirborneRecoveryTelemetryComponent.Get();

    UCharacterMovementComponent* Movement =
        Pokemon->GetCharacterMovement();

    if (!TestNotNull(TEXT("Telemetry component"), Telemetry)
        || !TestNotNull(TEXT("Movement component"), Movement))
    {
        return false;
    }

    if (!TestTrue(TEXT("Telemetry initialized on authoritative owner"),
        Pokemon->HasAuthority()
        && Telemetry->HasBegunPlay()
        && Telemetry->PokemonOwner.Get() == Pokemon))
    {
        return false;
    }

    const bool bLifecycleCase =
        Parameters == TEXT("TakeoffSession")
        || Parameters == TEXT("Timeout")
        || Parameters == TEXT("Supersession")
        || Parameters == TEXT("Teardown");

    if (bLifecycleCase)
    {
        UPokemonJumpExecutionComponent* Executor =
            Pokemon->JumpExecutionComponent.Get();

        UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent();

        IConsoleVariable* TraceVariable =
            IConsoleManager::Get().FindConsoleVariable(
                TEXT("pokemon.Traversal.AirborneRecoveryTelemetry"));

        if (!TestNotNull(TEXT("Jump executor"), Executor)
            || !TestNotNull(TEXT("Capsule"), Capsule)
            || !TestNotNull(TEXT("Telemetry console variable"), TraceVariable))
        {
            return false;
        }

        const int32 PreviousTraceValue = TraceVariable->GetInt();

        const EConsoleVariableFlags PreviousTracePriority =
            static_cast<EConsoleVariableFlags>(
                TraceVariable->GetFlags() & ECVF_SetByMask);

        ON_SCOPE_EXIT
        {
            TraceVariable->Set(PreviousTraceValue, PreviousTracePriority);
        };

        TraceVariable->Set(1, PreviousTracePriority);

        AActor* FloorActor = World->SpawnActor<AActor>();
        if (!TestNotNull(TEXT("Support actor"), FloorActor))
        {
            return false;
        }

        UBoxComponent* Floor = NewObject<UBoxComponent>(FloorActor);
        FloorActor->SetRootComponent(Floor);
        Floor->SetBoxExtent(FVector(250.f, 250.f, 20.f));
        Floor->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        Floor->SetCollisionObjectType(ECC_WorldStatic);
        Floor->SetCollisionResponseToAllChannels(ECR_Block);
        Floor->SetWorldLocation(FVector(0.f, 0.f, -20.f));
        Floor->RegisterComponent();

        Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        Capsule->SetCollisionObjectType(ECC_Pawn);
        Capsule->SetCollisionResponseToAllChannels(ECR_Block);

        const float FloorGap =
            (UCharacterMovementComponent::MIN_FLOOR_DIST
                + UCharacterMovementComponent::MAX_FLOOR_DIST) * 0.5f;

        const FVector SupportedLocation(
            0.f, 0.f, Capsule->GetScaledCapsuleHalfHeight() + FloorGap);

        FAgentNavigationRequest Parent;
        FPokemonAirborneExecutionTrajectoryCandidate Candidate;

        FTimerManager& Timers = World->GetTimerManager();

        const auto PrepareFlight = [&](FGuid AttackCommandId) -> bool
            {
                if (!TestFalse(TEXT("Executor is available for preparation"),
                    Executor->IsBusy()))
                {
                    return false;
                }

                Movement->SetComponentTickEnabled(true);
                Movement->StopMovementImmediately();

                Pokemon->SetActorLocation(
                    SupportedLocation,
                    false,
                    nullptr,
                    ETeleportType::TeleportPhysics);

                Movement->SetMovementMode(MOVE_Walking);

                Parent = FAgentNavigationRequest();
                Parent.RequestId = FGuid::NewGuid();
                Parent.ParentAttackCommandId = AttackCommandId;
                Parent.bIsAttackTraversal = true;

                const FVector StartFeet = Movement->GetActorFeetLocation();
                const FVector ContactFeet =
                    StartFeet + FVector(40.f, 0.f, 40.f);

                Parent.TargetLocation = ContactFeet;

                const FPokemonJumpCapabilitySnapshot Capability =
                    FPokemonJumpSolver::CaptureCapabilities(
                        *Pokemon, Parent, FVector::ForwardVector);

                FPokemonAirborneExecutionProfile Profile;
                Profile.Timing = EPokemonAirborneExecutionTiming::Ascending;
                Profile.ExecutionLeadTime = 0.05f;
                Profile.MinAscendingExecutionVelocity = 25.f;

                Candidate = FPokemonAirborneExecutionTrajectoryCandidate();

                const TArray<FPokemonAirborneExecutionTrajectoryCandidate> Options =
                    FPokemonJumpSolver::SolveToAirborneContact(
                        Parent.RequestId,
                        StartFeet,
                        ContactFeet,
                        Capability,
                        Profile,
                        EPokemonJumpTrajectoryPreference::Direct);

                for (FPokemonAirborneExecutionTrajectoryCandidate Option : Options)
                {
                    if (FPokemonJumpTrajectoryValidator::ValidateToAirborneContact(
                        *Pokemon, Option))
                    {
                        Candidate = Option;
                        break;
                    }
                }

                if (!TestTrue(TEXT("Solver and collision validator authorize flight"),
                    Candidate.IsExecutableToContact()))
                {
                    return false;
                }

                FPokemonTraversalRequirement Requirement;
                Requirement.ParentRequestId = Parent.RequestId;
                Requirement.Circumstance =
                    EPokemonTraversalCircumstance::AirborneExecution;
                Requirement.StartFeetLocation = StartFeet;
                Requirement.DestinationFeetLocation = ContactFeet;
                Requirement.bLandingRequired = false;
                Requirement.bParentMayCompleteWhileAirborne = true;

                return TestTrue(TEXT("Executor accepts airborne preparation"),
                    Executor->PrepareAirborneExecution(
                        Candidate,
                        Requirement,
                        Parent,
                        FRotator::ZeroRotator));
            };

        const auto TakeOff = [&]() -> bool
            {
                const int32 PreviousLaunchCalls = Pokemon->LaunchCalls;
                const bool bPreviouslyObserving = Telemetry->bObserving;
                const FGuid PreviousObservedRequest =
                    Telemetry->Observation.RequestId;

                Executor->TriggerTakeoff();

                if (!TestEqual(TEXT("Executor requests exactly one launch"),
                    Pokemon->LaunchCalls, PreviousLaunchCalls + 1))
                {
                    return false;
                }

                TestFalse(TEXT("Queued launch is not yet physical takeoff"),
                    Executor->HasTakenOff());

                TestEqual(TEXT("Queuing launch does not change observation activity"),
                    Telemetry->bObserving, bPreviouslyObserving);

                TestEqual(TEXT("Queuing launch does not replace observation identity"),
                    Telemetry->Observation.RequestId, PreviousObservedRequest);

                if (!TestTrue(TEXT("CharacterMovement applies launch"),
                    Movement->HandlePendingLaunch()))
                {
                    return false;
                }

                return TestTrue(TEXT("Real movement transition establishes takeoff"),
                    Executor->HasTakenOff() && Movement->IsFalling());
            };

        // Advance simulated world time without waiting in real time.
        const auto AdvanceTime = [&](int32 Steps) -> bool
            {
                for (int32 Index = 0; Index < Steps; ++Index)
                {
                    if (!TestWorld.TickTestWorld(0.1f))
                    {
                        TestWorld.ForwardErrorMessages(this);
                        return false;
                    }
                }
                return true;
            };

        const FGuid FirstCommandId = FGuid::NewGuid();

        if (!PrepareFlight(FirstCommandId))
        {
            return false;
        }

        TestFalse(TEXT("Preparation does not start observation"),
            Telemetry->bObserving);

        if (!TakeOff())
        {
            return false;
        }

        if (!TestTrue(TEXT("Takeoff starts observation"),
            Telemetry->bObserving))
        {
            return false;
        }

        const FGuid FirstRequestId = Parent.RequestId;
        const FTimerHandle FirstTimer = Telemetry->ObservationTimeoutHandle;

        TestEqual(TEXT("Request identity copied at takeoff"),
            Telemetry->Observation.RequestId, FirstRequestId);
        TestEqual(TEXT("Command identity copied at takeoff"),
            Telemetry->Observation.CommandId, FirstCommandId);
        TestEqual(TEXT("Start feet copied"),
            Telemetry->Observation.StartFeet, Candidate.StartFeetLocation);
        TestEqual(TEXT("Contact feet copied"),
            Telemetry->Observation.RequiredContactFeet,
            Candidate.RequiredContactFeet);
        TestEqual(TEXT("Launch velocity copied"),
            Telemetry->Observation.LaunchVelocity,
            Candidate.FinalLaunchVelocity);
        TestEqual(TEXT("Contact time copied"),
            Telemetry->Observation.PlannedContactTime,
            Candidate.ContactTime);

        if (!TestTrue(TEXT("Takeoff arms observation timeout"),
            Timers.TimerExists(FirstTimer)))
        {
            return false;
        }

        TestEqual(TEXT("Configured observation timeout"),
            Timers.GetTimerRate(FirstTimer), 30.f);

        if (Parameters == TEXT("TakeoffSession"))
        {
            const FVector SavedContactFeet =
                Telemetry->Observation.RequiredContactFeet;

          TraceVariable->Set(0, PreviousTracePriority);

            TestTrue(TEXT("Disabling telemetry preserves current observation"),
                Telemetry->bObserving);

            Executor->CancelForParentResolution(
                FirstRequestId, TEXT("AutomationRelease"));

            FPokemonAirborneExecutionTrajectoryCandidate ClearedCandidate;
            FGuid ClearedCommandId;

            TestFalse(TEXT("Executor releases its airborne snapshot"),
                Executor->GetActiveAirborneTelemetrySnapshot(
                    ClearedCandidate, ClearedCommandId));

            TestTrue(TEXT("Observer continues after executor finishes"),
                Telemetry->bObserving);
            TestTrue(TEXT("Executor failure event was received"),
                Telemetry->Observation.bExecutionFinished);
            TestFalse(TEXT("Interruption does not manufacture contact"),
                Telemetry->Observation.bReachedContact);
            TestEqual(TEXT("Observer retains copied trajectory"),
                Telemetry->Observation.RequiredContactFeet,
                SavedContactFeet);

            // A later real takeoff supersedes the old observation,
            // but recording remains disabled for the new attempt.
            if (!PrepareFlight(FGuid::NewGuid()) || !TakeOff())
            {
                return false;
            }

            TestFalse(TEXT("Disabled telemetry creates no replacement observation"),
                Telemetry->bObserving);
            TestFalse(TEXT("Superseded observation timer removed"),
                Timers.TimerExists(FirstTimer));
            TestTrue(TEXT("Telemetry switch does not prevent physical takeoff"),
                Executor->HasTakenOff());
        }
        else if (Parameters == TEXT("Timeout"))
        {
            Executor->CancelForParentResolution(
                FirstRequestId, TEXT("AutomationRelease"));

            TestTrue(TEXT("Executor completion leaves observer active"),
                Telemetry->bObserving);

            // Prevent landing so only the real observation timer can finish it.
            Movement->SetComponentTickEnabled(false);

            if (!AdvanceTime(250))
            {
                return false;
            }

            TestTrue(TEXT("Observation survives before timeout"),
                Telemetry->bObserving);
            TestTrue(TEXT("Timeout still exists before deadline"),
                Timers.TimerExists(FirstTimer));

            if (!AdvanceTime(60))
            {
                return false;
            }

            TestFalse(TEXT("Real timer expires observation"),
                Telemetry->bObserving);
            TestFalse(TEXT("Expired timer removed"),
                Timers.TimerExists(FirstTimer));
            TestFalse(TEXT("Timeout does not manufacture landing"),
                Telemetry->Observation.bLanded);
            TestFalse(TEXT("Timeout does not manufacture grounded state"),
                Telemetry->Observation.bGroundedObserved);

            Telemetry->NotifyCombatOutcome(FirstCommandId, true);

            TestFalse(TEXT("Late outcome cannot reopen timed-out observation"),
                Telemetry->bObserving
                || Telemetry->Observation.bCombatOutcomeKnown);
        }
        else if (Parameters == TEXT("Supersession"))
        {
            Telemetry->NotifyCombatOutcome(FirstCommandId, true);

            Executor->CancelForParentResolution(
                FirstRequestId, TEXT("AutomationRelease"));
            Movement->SetComponentTickEnabled(false);

            if (!AdvanceTime(100))
            {
                return false;
            }

            if (!TestTrue(TEXT("First observation remains active"),
                Telemetry->bObserving))
            {
                return false;
            }

            const FGuid SecondCommandId = FGuid::NewGuid();

            if (!PrepareFlight(SecondCommandId))
            {
                return false;
            }

            TestEqual(TEXT("Preparation retains previous observation"),
                Telemetry->Observation.CommandId, FirstCommandId);

            if (!TakeOff())
            {
                return false;
            }

            const FGuid SecondRequestId = Parent.RequestId;
            const FTimerHandle SecondTimer =
                Telemetry->ObservationTimeoutHandle;

            TestTrue(TEXT("Replacement observation active"),
                Telemetry->bObserving);
            TestEqual(TEXT("Replacement request copied"),
                Telemetry->Observation.RequestId, SecondRequestId);
            TestEqual(TEXT("Replacement command copied"),
                Telemetry->Observation.CommandId, SecondCommandId);
            TestFalse(TEXT("Previous outcome cleared"),
                Telemetry->Observation.bCombatOutcomeKnown);
            TestFalse(TEXT("Previous executor-finished state cleared"),
                Telemetry->Observation.bExecutionFinished);
            TestEqual(TEXT("Movement clock reset"),
                Telemetry->Observation.ElapsedMovementTime, 0.f);
            TestFalse(TEXT("Previous timeout removed"),
                Timers.TimerExists(FirstTimer));
            TestTrue(TEXT("Replacement timeout armed"),
                Timers.TimerExists(SecondTimer));

            Telemetry->NotifyCombatOutcome(FirstCommandId, false);
            Executor->OnAirborneExecutionTrigger.Broadcast(FirstRequestId);

            TestFalse(TEXT("Old command cannot set replacement outcome"),
                Telemetry->Observation.bCombatOutcomeKnown);
            TestFalse(TEXT("Old request cannot mark replacement trigger"),
                Telemetry->Observation.bAttackTriggered);

            Executor->CancelForParentResolution(
                SecondRequestId, TEXT("AutomationRelease"));
            Movement->SetComponentTickEnabled(false);

            // First session would now be over 30 seconds old;
            // replacement is only about 21 seconds old.
            if (!AdvanceTime(210))
            {
                return false;
            }

            TestTrue(TEXT("Old deadline cannot retire replacement"),
                Telemetry->bObserving);
            TestTrue(TEXT("Replacement timer remains armed"),
                Timers.TimerExists(SecondTimer));

            if (!AdvanceTime(100))
            {
                return false;
            }

            TestFalse(TEXT("Replacement expires at its own deadline"),
                Telemetry->bObserving);
            TestFalse(TEXT("Replacement timer removed after expiry"),
                Timers.TimerExists(SecondTimer));
        }
        else if (Parameters == TEXT("Teardown"))
        {
            TestTrue(TEXT("Takeoff subscription present"),
                Executor->OnJumpTakeoff.IsBoundToObject(Telemetry));
            TestTrue(TEXT("Trigger subscription present"),
                Executor->OnAirborneExecutionTrigger.IsBoundToObject(Telemetry));
            TestTrue(TEXT("Finished subscription present"),
                Executor->OnAirborneExecutionFinished.IsBoundToObject(Telemetry));

            TestTrue(TEXT("Landing subscription present"),
                Pokemon->LandedDelegate.IsAlreadyBound(
                    Telemetry,
                    &UPokemonAirborneRecoveryTelemetryComponent::HandleLanded));

            TestTrue(TEXT("Movement subscription present"),
                Pokemon->OnCharacterMovementUpdated.IsAlreadyBound(
                    Telemetry,
                    &UPokemonAirborneRecoveryTelemetryComponent::HandleMovementUpdate));

            FPokemonImpactResolution Impact;
            Impact.ImpactResult = EPokemonImpactResult::BounceOff;
            Impact.AttackerMotionPolicy =
                EPokemonAttackerMotionPolicy::Replace;

            Telemetry->NotifyImpactRequest(
                FirstCommandId,
                Impact,
                Movement->Velocity,
                FVector(50.f, 0.f, 200.f),
                false);

            TestTrue(TEXT("Post-impact observation armed before teardown"),
                Telemetry->bAwaitingPostImpactMovement);

            // Run normal world/actor/component EndPlay.
            // Objects remain available for inspection until wrapper destruction.
            if (!TestTrue(TEXT("Normal world EndPlay completes"),
                TestWorld.EndPlayInTestWorld()))
            {
                return false;
            }

            TestFalse(TEXT("Telemetry has ended play"),
                Telemetry->HasBegunPlay());
            TestFalse(TEXT("Observation retired"),
                Telemetry->bObserving);
            TestFalse(TEXT("Post-impact observation cleared"),
                Telemetry->bAwaitingPostImpactMovement);
            TestFalse(TEXT("Observation timeout removed"),
                Timers.TimerExists(FirstTimer));

            TestFalse(TEXT("Takeoff delegate handle reset"),
                Telemetry->TakeoffDelegateHandle.IsValid());
            TestFalse(TEXT("Trigger delegate handle reset"),
                Telemetry->TriggerDelegateHandle.IsValid());
            TestFalse(TEXT("Finished delegate handle reset"),
                Telemetry->ExecutionFinishDelegateHandle.IsValid());
            TestFalse(TEXT("Owner reference cleared"),
                Telemetry->PokemonOwner.IsValid());
            TestFalse(TEXT("Executor reference cleared"),
                Telemetry->ObservedExecutor.IsValid());

            TestFalse(TEXT("Takeoff subscription removed"),
                Executor->OnJumpTakeoff.IsBoundToObject(Telemetry));
            TestFalse(TEXT("Trigger subscription removed"),
                Executor->OnAirborneExecutionTrigger.IsBoundToObject(Telemetry));
            TestFalse(TEXT("Finished subscription removed"),
                Executor->OnAirborneExecutionFinished.IsBoundToObject(Telemetry));

            TestFalse(TEXT("Landing subscription removed"),
                Pokemon->LandedDelegate.IsAlreadyBound(
                    Telemetry,
                    &UPokemonAirborneRecoveryTelemetryComponent::HandleLanded));

            TestFalse(TEXT("Movement subscription removed"),
                Pokemon->OnCharacterMovementUpdated.IsAlreadyBound(
                    Telemetry,
                    &UPokemonAirborneRecoveryTelemetryComponent::HandleMovementUpdate));

            const float FinishedElapsed =
                Telemetry->Observation.ElapsedMovementTime;

            Executor->OnJumpTakeoff.Broadcast(FirstRequestId);
            Executor->OnAirborneExecutionTrigger.Broadcast(FirstRequestId);
            Executor->OnAirborneExecutionFinished.Broadcast(
                FirstRequestId, true, NAME_None);

            Pokemon->OnCharacterMovementUpdated.Broadcast(
                0.1f, Pokemon->GetActorLocation(), Movement->Velocity);

            TestFalse(TEXT("Late events cannot restart observation"),
                Telemetry->bObserving);
            TestEqual(TEXT("Late movement cannot advance observation"),
                Telemetry->Observation.ElapsedMovementTime, FinishedElapsed);
                }

                TestWorld.ForwardErrorMessages(this);
                return true;
    }
    Movement->SetMovementMode(MOVE_Falling);
    Movement->Velocity = FVector(40.f, 50.f, 300.f);

    // Seed only observer state. Takeoff creation is tested separately.
    const auto BeginObservation = [&](FGuid CommandId)
        {
            Telemetry->FinishObservation(TEXT("AutomationReset"));

            Telemetry->Observation = FAirborneRecoveryObservation();
            Telemetry->Observation.RequestId = FGuid::NewGuid();
            Telemetry->Observation.CommandId = CommandId;
            Telemetry->Observation.StartFeet =
                Movement->GetActorFeetLocation();
            Telemetry->Observation.StartWorldTime =
                World->GetTimeSeconds();

            Telemetry->bObserving = true;
            Telemetry->SampleAccumulator = 0.f;
            Telemetry->bAwaitingPostImpactMovement = false;
        };

    const FGuid CommandId = FGuid::NewGuid();
    BeginObservation(CommandId);

    FPokemonImpactResolution Resolution;
    Resolution.ImpactResult = EPokemonImpactResult::BounceOff;
    Resolution.AttackerMotionPolicy =
        EPokemonAttackerMotionPolicy::Replace;

    const FVector InitialLocation = Pokemon->GetActorLocation();
    const FVector InitialVelocity = Movement->Velocity;
    const FVector InitialPending = Movement->PendingLaunchVelocity;
    const int32 InitialLaunchCalls = Pokemon->LaunchCalls;

    // Exercise the registered callback, without simulating a physics frame.
    const auto MovementUpdate = [&]()
        {
            Pokemon->OnCharacterMovementUpdated.Broadcast(
                0.01f,
                Pokemon->GetActorLocation(),
                Movement->Velocity);
        };
    if (Parameters == TEXT("CommandIdentity"))
    {
        // Two invalid IDs must never establish a match.
        BeginObservation(FGuid());

        Telemetry->NotifyCombatOutcome(FGuid(), true);
        Telemetry->NotifyImpactRequest(
            FGuid(), Resolution,
            InitialVelocity, FVector(100.f, 0.f, 200.f), false);

        TestFalse(TEXT("Invalid ID cannot establish outcome"),
            Telemetry->Observation.bCombatOutcomeKnown);
        TestEqual(TEXT("Invalid ID cannot record impact"),
            Telemetry->Observation.ImpactRequestCount, 0);

        BeginObservation(CommandId);

        Telemetry->NotifyCombatOutcome(FGuid(), true);
        Telemetry->NotifyCombatOutcome(FGuid::NewGuid(), true);

        Telemetry->NotifyImpactRequest(
            FGuid::NewGuid(), Resolution,
            InitialVelocity, FVector(100.f, 0.f, 200.f), false);

        TestFalse(TEXT("Unrelated IDs cannot establish outcome"),
            Telemetry->Observation.bCombatOutcomeKnown);
        TestEqual(TEXT("Unrelated ID cannot record impact"),
            Telemetry->Observation.ImpactRequestCount, 0);
        TestFalse(TEXT("Rejected impact cannot arm movement observation"),
            Telemetry->bAwaitingPostImpactMovement);

        // Positive control: the matching ID must be accepted.
        Telemetry->NotifyCombatOutcome(CommandId, true);
        Telemetry->NotifyImpactRequest(
            CommandId, Resolution,
            InitialVelocity, FVector(100.f, 0.f, 200.f), false);

        TestTrue(TEXT("Matching outcome accepted"),
            Telemetry->Observation.bCombatOutcomeKnown
            && Telemetry->Observation.bCombatHit);
        TestEqual(TEXT("Matching impact accepted"),
            Telemetry->Observation.ImpactRequestCount, 1);

        Telemetry->FinishObservation(TEXT("AutomationFinished"));

        Telemetry->NotifyCombatOutcome(CommandId, false);
        Telemetry->NotifyImpactRequest(
            CommandId, Resolution,
            InitialVelocity, FVector::ZeroVector, true);

        TestTrue(TEXT("Late outcome cannot overwrite completed result"),
            Telemetry->Observation.bCombatHit);
        TestEqual(TEXT("Late impact cannot change completed count"),
            Telemetry->Observation.ImpactRequestCount, 1);
        TestFalse(TEXT("Late impact cannot restart observation"),
            Telemetry->bObserving
            || Telemetry->bAwaitingPostImpactMovement);
    }
    else if (Parameters == TEXT("HitLatch")
        || Parameters == TEXT("MissLatch"))
    {
        const bool bFirstHit = Parameters == TEXT("HitLatch");

        Telemetry->NotifyCombatOutcome(CommandId, bFirstHit);
        Telemetry->NotifyCombatOutcome(CommandId, bFirstHit);
        Telemetry->NotifyCombatOutcome(CommandId, !bFirstHit);

        TestTrue(TEXT("Outcome becomes known"),
            Telemetry->Observation.bCombatOutcomeKnown);
        TestEqual(TEXT("First accepted outcome remains latched"),
            Telemetry->Observation.bCombatHit, bFirstHit);
        TestTrue(TEXT("Outcome does not end physical observation"),
            Telemetry->bObserving);
        TestEqual(TEXT("Outcome alone creates no impact request"),
            Telemetry->Observation.ImpactRequestCount, 0);
    }
    else if (Parameters == TEXT("ImpactRequests"))
    {
        const auto ObserveImpact = [&](
            const FVector& Incoming,
            const FVector& Requested,
            bool bStoppedImmediately)
            {
                const FVector LocationBefore = Pokemon->GetActorLocation();
                const FVector VelocityBefore = Movement->Velocity;
                const FVector PendingBefore = Movement->PendingLaunchVelocity;
                const uint8 ModeBefore =
                    static_cast<uint8>(Movement->MovementMode);
                const int32 LaunchesBefore = Pokemon->LaunchCalls;
                const float AirControlBefore = Movement->AirControl;
                const float FrictionBefore = Movement->FallingLateralFriction;
                const float GravityBefore = Movement->GravityScale;

                Telemetry->NotifyImpactRequest(
                    CommandId, Resolution,
                    Incoming, Requested, bStoppedImmediately);

                TestEqual(TEXT("Telemetry preserves location"),
                    Pokemon->GetActorLocation(), LocationBefore);
                TestEqual(TEXT("Telemetry preserves current velocity"),
                    Movement->Velocity, VelocityBefore);
                TestEqual(TEXT("Telemetry preserves pending launch"),
                    Movement->PendingLaunchVelocity, PendingBefore);
                TestEqual(TEXT("Telemetry preserves movement mode"),
                    static_cast<uint8>(Movement->MovementMode), ModeBefore);
                TestEqual(TEXT("Telemetry makes no launch call"),
                    Pokemon->LaunchCalls, LaunchesBefore);
                TestEqual(TEXT("Telemetry preserves air control"),
                    Movement->AirControl, AirControlBefore);
                TestEqual(TEXT("Telemetry preserves falling friction"),
                    Movement->FallingLateralFriction, FrictionBefore);
                TestEqual(TEXT("Telemetry preserves gravity"),
                    Movement->GravityScale, GravityBefore);
            };

        const FVector FirstRequest(100.f, 20.f, 250.f);
        Pokemon->LaunchCharacter(FirstRequest, true, true);
        ObserveImpact(InitialVelocity, FirstRequest, false);

        const FVector SecondRequest(-80.f, 35.f, 200.f);
        Pokemon->LaunchCharacter(SecondRequest, true, true);
        ObserveImpact(InitialVelocity, SecondRequest, false);

        TestEqual(TEXT("Both impact requests recorded"),
            Telemetry->Observation.ImpactRequestCount, 2);
        TestEqual(TEXT("Launch remains deferred"),
            Movement->Velocity, InitialVelocity);
        TestEqual(TEXT("Latest request is pending"),
            Movement->PendingLaunchVelocity, SecondRequest);

        MovementUpdate();

        TestTrue(TEXT("Observer keeps waiting while launch is pending"),
            Telemetry->bAwaitingPostImpactMovement);
        TestEqual(TEXT("Observation did not consume launch"),
            Movement->PendingLaunchVelocity, SecondRequest);

        if (!TestTrue(TEXT("CharacterMovement consumes queued launch"),
            Movement->HandlePendingLaunch()))
        {
            return false;
        }

        MovementUpdate();

        TestEqual(TEXT("CharacterMovement applied latest request"),
            Movement->Velocity, SecondRequest);
        TestTrue(TEXT("Pending launch cleared"),
            Movement->PendingLaunchVelocity.IsZero());
        TestFalse(TEXT("Post-impact observation is satisfied"),
            Telemetry->bAwaitingPostImpactMovement);
        TestEqual(TEXT("Falling velocity updates between periodic samples"),
            Telemetry->Observation.LastFallingVelocity, SecondRequest);

        const FVector BeforeStop = Movement->Velocity;
        Movement->StopMovementImmediately();
        ObserveImpact(BeforeStop, FVector::ZeroVector, true);

        TestEqual(TEXT("Immediate-stop request recorded"),
            Telemetry->Observation.ImpactRequestCount, 3);
        TestTrue(TEXT("Immediate stop leaves velocity zero"),
            Movement->Velocity.IsZero());

        MovementUpdate();

        TestFalse(TEXT("Immediate stop does not leave observer waiting"),
            Telemetry->bAwaitingPostImpactMovement);
        TestTrue(TEXT("Impact observation does not finish the session"),
            Telemetry->bObserving);
    }
    else if (Parameters == TEXT("LandingCompletion"))
    {
        // Ground mode without a landing event is insufficient.
        Movement->SetMovementMode(MOVE_Walking);
        MovementUpdate();

        TestTrue(TEXT("Ground mode alone cannot finish observation"),
            Telemetry->bObserving);

        Movement->SetMovementMode(MOVE_Falling);
        Movement->Velocity = FVector(0.f, 0.f, -500.f);

        FHitResult LandingHit;
        LandingHit.bBlockingHit = true;
        LandingHit.Normal = FVector::UpVector;
        LandingHit.ImpactNormal = FVector::UpVector;

        Pokemon->LandedDelegate.Broadcast(LandingHit);

        TestTrue(TEXT("Landing event recorded"),
            Telemetry->Observation.bLanded);
        TestTrue(TEXT("Landing event alone keeps observation active"),
            Telemetry->bObserving);

        MovementUpdate();

        TestTrue(TEXT("Still falling means observation continues"),
            Telemetry->bObserving);
        TestFalse(TEXT("Grounded has not been observed"),
            Telemetry->Observation.bGroundedObserved);

        Movement->SetMovementMode(MOVE_Walking);
        Pokemon->LaunchCharacter(FVector(0.f, 0.f, 200.f), true, true);
        MovementUpdate();

        TestTrue(TEXT("Pending launch prevents grounded completion"),
            Telemetry->bObserving);

        if (!TestTrue(TEXT("Consume intervening launch"),
            Movement->HandlePendingLaunch()))
        {
            return false;
        }

        // Model a later landing and its completed ground transition.
        Pokemon->LandedDelegate.Broadcast(LandingHit);
        Movement->SetMovementMode(MOVE_Walking);
        MovementUpdate();

        TestFalse(TEXT("Grounded movement completes observation"),
            Telemetry->bObserving);
        TestTrue(TEXT("Grounded state retained in result"),
            Telemetry->Observation.bGroundedObserved);

        const float FinishedElapsed =
            Telemetry->Observation.ElapsedMovementTime;

        MovementUpdate();
        Telemetry->NotifyCombatOutcome(CommandId, true);

        TestEqual(TEXT("Late movement cannot extend finished session"),
            Telemetry->Observation.ElapsedMovementTime, FinishedElapsed);
        TestFalse(TEXT("Late outcome cannot modify finished session"),
            Telemetry->Observation.bCombatOutcomeKnown);
            }
    else
    {
        AddError(FString::Printf(
            TEXT("Unknown telemetry test case: %s"), *Parameters));
        return false;
        }

        if (Parameters == TEXT("CommandIdentity")
            || Parameters == TEXT("HitLatch")
            || Parameters == TEXT("MissLatch"))
        {
            TestEqual(TEXT("Notifications preserve actor location"),
                Pokemon->GetActorLocation(), InitialLocation);
            TestEqual(TEXT("Notifications preserve velocity"),
                Movement->Velocity, InitialVelocity);
            TestEqual(TEXT("Notifications preserve pending launch"),
                Movement->PendingLaunchVelocity, InitialPending);
            TestEqual(TEXT("Notifications never launch the actor"),
                Pokemon->LaunchCalls, InitialLaunchCalls);
        }

        TestWorld.ForwardErrorMessages(this);
        return true;
}

#endif
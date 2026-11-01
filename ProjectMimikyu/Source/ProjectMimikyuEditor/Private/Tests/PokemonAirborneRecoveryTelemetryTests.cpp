#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"
#include "Tests/PokemonJumpAutomationFixture.h"
#include "ActorComponents/PokemonAirborneRecoveryTelemetryComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "Misc/OutputDevice.h"
#include "Misc/OutputDeviceRedirector.h"
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
#include "GameFramework/PhysicsVolume.h"

// Capture the diagnostic record after landing validation,
// immediately before observation retirement clears its state.
class FHeightFinalCapture final : public FOutputDevice
{
public:
    FString RequestMarker;
    TFunction<void()> Capture;

    virtual bool CanBeUsedOnMultipleThreads() const override
    {
        return true;
    }

    virtual bool CanBeUsedOnAnyThread() const override
    {
        return true;
    }

    virtual void Serialize(
        const TCHAR* Text,
        ELogVerbosity::Type Verbosity,
        const FName& Category) override
    {
        if (!IsInGameThread()
            || !Capture
            || !FCString::Strstr(
                Text,
                TEXT("[AirRecoveryTrace] Height | Event=FinalState"))
            || !FCString::Strstr(Text, *RequestMarker))
        {
            return;
        }

        // Copy only. Assertions or logging here could recurse.
        Capture();
    }
};

IMPLEMENT_COMPLEX_AUTOMATION_TEST(FPokemonAirborneRecoveryTelemetryTest,
"ProjectMimikyu.Traversal.AirborneRecoveryTelemetry",
    EAutomationTestFlags::EditorContext| EAutomationTestFlags::EngineFilter)

    void FPokemonAirborneRecoveryTelemetryTest::GetTests(TArray<FString>& OutBeautifiedNames,
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
       TEXT("Teardown"),
       TEXT("PIEMissSeed"),
       TEXT("PIEBounceSeed"),
       TEXT("PIELandingBracket"),
       TEXT("PIEInvalidation"),
       TEXT("PIEUnsupportedSeed"),
       TEXT("PIEModelChanges"),
       TEXT("HeightCore"),
       TEXT("HeightMiss"),
       TEXT("HeightAfterApexSeed"),
       TEXT("HeightBounceBeforeApex"),
       TEXT("HeightBounceRetainPeak"),
       TEXT("HeightBounceHigherPeak"),
       TEXT("HeightGravityChange"),
       TEXT("HeightFrictionChange"),
       TEXT("HeightUntrackedLaunch"),
       TEXT("HeightModeChange"),
       TEXT("HeightReadOnly"),
       TEXT("HeightSupersession")
    };

    for (const TCHAR* Case : Cases)
    {
        OutBeautifiedNames.Add(Case);
        OutTestCommands.Add(Case);
    }
}

bool FPokemonAirborneRecoveryTelemetryTest::RunTest(const FString& Parameters)
{
    if (Parameters == TEXT("HeightCore"))
    {
        FPokemonRecoveryBallisticInput State;
        State.StartFeet = FVector(0, 0, 100);
        State.StartVelocity = FVector(0, 0, 100);
        State.Gravity = FVector(0, 0, -100);
        State.Movement.bAssumeConstantGravity = true;
        State.Movement.bAssumeNoFutureForces = true;
        State.Movement.TerminalDownSpeed = 4000.0;

        FAirborneRecoveryHeightHistory History;
        FAirborneRecoveryHeightHistory LateObserver;

        TestFalse(TEXT("A late update cannot initialize takeoff history"),
            LateObserver.Advance(0.1, State));
        TestFalse(TEXT("Late observation cannot invent a complete maximum"),
            LateObserver.GetCompleteMaximum().IsSet());

        const auto CheckMaximum = [&](double Expected)
            {
                const TOptional<double> Maximum =History.GetCompleteMaximum();

                return TestTrue(TEXT("Complete maximum matches analytical value"),
                    Maximum.IsSet()
                    && FMath::IsNearlyEqual(Maximum.GetValue(), Expected, 1.e-8));
            };

        if (!TestTrue(TEXT("Actual starting state initializes history"),
            History.BeginAtTakeoff(State))
            || !CheckMaximum(100.0))
        {
            return false;
        }

        TestEqual(TEXT("Takeoff has no elapsed movement"),
            History.VerifiedMovementSeconds, 0.0);

        // t = 0.6: z = 142, vz = 40. The apex has not happened.
        State.StartFeet.Z = 142.0;
        State.StartVelocity.Z = 40.0;

        if (!TestTrue(TEXT("Ascending interval verifies"),
            History.Advance(0.6, State))
            || !CheckMaximum(142.0))
        {
            return false;
        }

        // t = 1.4: z = 142, vz = -40.
        // The unobserved apex at t = 1.0 reached z = 150.
        State.StartVelocity.Z = -40.0;

        if (!TestTrue(TEXT("Interval crossing the apex verifies"),
            History.Advance(0.8, State))
            || !CheckMaximum(150.0))
        {
            return false;
        }

        TestTrue(TEXT("Sampled maximum remains distinct from analytical apex"),
            History.ObservedMaxFeetZ.IsSet()
            && FMath::IsNearlyEqual(
                History.ObservedMaxFeetZ.GetValue(), 142.0, 1.e-8));

        History.MarkIncomplete(TEXT("AutomationUnsupported"));

        State.StartFeet.Z = 137.5;
        State.StartVelocity.Z = -50.0;

        TestFalse(TEXT("Later supported motion cannot repair missing history"),
            History.Advance(0.1, State));
        TestFalse(TEXT("Incomplete history is unavailable to predictions"),
            History.GetCompleteMaximum().IsSet());
        TestTrue(TEXT("Verified prefix remains available for diagnostics"),
            History.VerifiedMaxFeetZ.IsSet()
            && FMath::IsNearlyEqual(
                History.VerifiedMaxFeetZ.GetValue(), 150.0, 1.e-8));

        History.Reset();

        TestFalse(TEXT("Reset clears initialization"), History.bStarted);
        TestFalse(TEXT("Reset clears observed maximum"),
            History.ObservedMaxFeetZ.IsSet());
        TestFalse(TEXT("Reset clears verified maximum"),
            History.VerifiedMaxFeetZ.IsSet());

        return true;
    }

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

	// Gets the Pokemon's Airborne Recovery Telemetry component.
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

    const bool bHeightCase = Parameters.StartsWith(TEXT("Height"));

    const bool bLifecycleCase =
        Parameters == TEXT("TakeoffSession")
        || Parameters == TEXT("Timeout")
        || Parameters == TEXT("Supersession")
        || Parameters == TEXT("Teardown");

    if (bLifecycleCase || bHeightCase)
    {
        UPokemonJumpExecutionComponent* Executor =
            Pokemon->JumpExecutionComponent.Get();

        UCapsuleComponent* Capsule = Pokemon->GetCapsuleComponent();

        IConsoleVariable* CompareVariable =
            IConsoleManager::Get().FindConsoleVariable(
                TEXT("pokemon.Traversal.AirborneRecoveryCompare"));

        IConsoleVariable* TraceVariable =
            IConsoleManager::Get().FindConsoleVariable(
                TEXT("pokemon.Traversal.AirborneRecoveryTelemetry"));

        if (!TestNotNull(TEXT("Jump executor"), Executor)
            || !TestNotNull(TEXT("Capsule"), Capsule)
            || !TestNotNull(TEXT("Telemetry console variable"), TraceVariable)
            || !TestNotNull(TEXT("Comparison console variable"), CompareVariable))
        {
            return false;
        }

        const int32 PreviousTraceValue = TraceVariable->GetInt();

        const EConsoleVariableFlags PreviousTracePriority =
            static_cast<EConsoleVariableFlags>(
                TraceVariable->GetFlags() & ECVF_SetByMask);

        const int32 PreviousCompareValue = CompareVariable->GetInt();

        const EConsoleVariableFlags PreviousComparePriority =
            static_cast<EConsoleVariableFlags>(
                CompareVariable->GetFlags() & ECVF_SetByMask);

        ON_SCOPE_EXIT
        {
            TraceVariable->Set(PreviousTraceValue, PreviousTracePriority);
            CompareVariable->Set(PreviousCompareValue, PreviousComparePriority);
        };

        TraceVariable->Set(1, PreviousTracePriority);

        if (bHeightCase)
        {
            CompareVariable->Set(1, PreviousComparePriority);

            // Set these before preparation so executor restoration
            // returns to the same supported passive model.
            Movement->FallingLateralFriction = 0.f;
            Movement->BrakingDecelerationFalling = 0.f;
            Movement->BrakingFriction = 0.f;
        }

        AActor* FloorActor = World->SpawnActor<AActor>();
        if (!TestNotNull(TEXT("Support actor"), FloorActor))
        {
            return false;
        }

        UBoxComponent* Floor = NewObject<UBoxComponent>(FloorActor);
        FloorActor->SetRootComponent(Floor);
        Floor->SetBoxExtent(bHeightCase
            ? FVector(2000.f, 2000.f, 20.f)
            : FVector(250.f, 250.f, 20.f));
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

                if (bHeightCase)
                {
                    // Exercise real PerformMovement ordering, including its
                    // pre-launch OldVelocity and pending-launch consumption.
                    const float FirstStep =
                        FMath::Min(0.037f, Candidate.ContactTime * 0.5f);

                    if (!TestWorld.TickTestWorld(FirstStep))
                    {
                        TestWorld.ForwardErrorMessages(this);
                        return false;
                    }
                }
                else if (!TestTrue(TEXT("CharacterMovement applies launch"),
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

        const auto CheckHeightCleared = [&]()
            {
                TestFalse(TEXT("Retirement clears height initialization"),
                    Telemetry->HeightHistory.bStarted);
                TestFalse(TEXT("Retirement clears complete height"),
                    Telemetry->HeightHistory.GetCompleteMaximum().IsSet());
                TestFalse(TEXT("Retirement clears observed height"),
                    Telemetry->HeightHistory.ObservedMaxFeetZ.IsSet());
                TestFalse(TEXT("Retirement clears verified height"),
                    Telemetry->HeightHistory.VerifiedMaxFeetZ.IsSet());
                TestFalse(TEXT("Retirement clears queued replacement"),
                    Telemetry->HeightRuntime.PendingReplacementVelocity.IsSet());
                TestFalse(TEXT("Retirement clears captured landing"),
                    Telemetry->HeightRuntime.bLandingCaptured);
                TestTrue(TEXT("Retirement clears collision records"),
                    Telemetry->HeightRuntime.BlockingHits.IsEmpty());
            };

        const FGuid FirstCommandId = FGuid::NewGuid();

        if (!PrepareFlight(FirstCommandId))
        {
            return false;
        }

        const FVector FirstTakeoffFeet = Movement->GetActorFeetLocation();

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

        if (bHeightCase)
        {
            constexpr double HeightToleranceCm = 0.05;

            const auto Tick = [&](float Delta = 0.037f) -> bool
                {
                    if (!TestWorld.TickTestWorld(Delta))
                    {
                        TestWorld.ForwardErrorMessages(this);
                        return false;
                    }
                    return true;
                };

            const auto TickUntil = [&](
                TFunctionRef<bool()> Done,
                const TCHAR* Description) -> bool
                {
                    for (int32 Index = 0;
                        Index < 300 && !Done() && Telemetry->bObserving;
                        ++Index)
                    {
                        if (!Tick())
                        {
                            return false;
                        }
                    }

                    return TestTrue(Description, Done());
                };

            const auto CheckPeak = [&](double Expected) -> bool
                {
                    const TOptional<double> Maximum =
                        Telemetry->HeightHistory.GetCompleteMaximum();

                    return TestTrue(TEXT("Complete peak matches independent calculation"),
                        Maximum.IsSet()
                        && FMath::IsNearlyEqual(
                            Maximum.GetValue(), Expected, HeightToleranceCm));
                };

            if (!TestTrue(TEXT("Real takeoff initialized complete height history"),
                Telemetry->HeightHistory.bStarted
                && Telemetry->HeightHistory.bComplete
                && Telemetry->HeightHistory.TakeoffFeetZ.IsSet()
                && Telemetry->HeightHistory.GetCompleteMaximum().IsSet()))
            {
                return false;
            }

            TestTrue(TEXT("Takeoff height comes from actual capsule feet"),
                FMath::IsNearlyEqual(
                    Telemetry->HeightHistory.TakeoffFeetZ.GetValue(),
                    FirstTakeoffFeet.Z, 1.e-6));

            TestTrue(TEXT("First real movement interval was verified"),
                Telemetry->HeightHistory.VerifiedMovementSeconds > 0.0);

            TestTrue(TEXT("Verified endpoint matches actual movement"),
                Telemetry->HeightHistory.GetLastState().StartFeet.Equals(
                    Movement->GetActorFeetLocation(), 1.e-6)
                && Telemetry->HeightHistory.GetLastState().StartVelocity.Equals(
                    Movement->Velocity, 1.e-6));

            const double GravityMagnitude = -Movement->GetGravityZ();
            const double InitialVerticalSpeed = Candidate.FinalLaunchVelocity.Z;
            const double OriginalApexTime =
                InitialVerticalSpeed / GravityMagnitude;
            const double OriginalPeak =
                FirstTakeoffFeet.Z
                + InitialVerticalSpeed * InitialVerticalSpeed
                / (2.0 * GravityMagnitude);

            TestTrue(TEXT("First interval does not credit a future apex"),
                Telemetry->HeightHistory.GetCompleteMaximum().GetValue()
                < OriginalPeak);

            if (!TickUntil(
                [&]() { return Telemetry->Observation.bExecutionFinished; },
                TEXT("Natural airborne contact completes")))
            {
                return false;
            }

            if (!TestTrue(TEXT("Contact succeeds before the apex"),
                Telemetry->Observation.bReachedContact
                && Movement->Velocity.Z > 0.f
                && Telemetry->HeightHistory.bComplete))
            {
                return false;
            }

            FPokemonAirborneExecutionTrajectoryCandidate ReleasedCandidate;
            FGuid ReleasedCommand;

            TestFalse(TEXT("Executor releases its active trajectory"),
                Executor->GetActiveAirborneTelemetrySnapshot(
                    ReleasedCandidate, ReleasedCommand));
            TestTrue(TEXT("Height observer survives executor release"),
                Telemetry->bObserving);

            if (!TestNotNull(TEXT("Global log"), GLog))
            {
                return false;
            }

            FAirborneRecoveryHeightHistory FinalHeight;
            FName FinalComparisonInvalidation = NAME_None;
            int32 FinalRecords = 0;

            FHeightFinalCapture FinalCapture;
            FinalCapture.RequestMarker = FString::Printf(
                TEXT("RequestId=%s"), *FirstRequestId.ToString());

            FinalCapture.Capture = [&]()
                {
                    FinalHeight = Telemetry->HeightHistory;
                    FinalComparisonInvalidation =
                        Telemetry->PIEComparison.InvalidatedReason;
                    ++FinalRecords;
                };

            const ELogVerbosity::Type PreviousLogVerbosity =
                LogTemp.GetVerbosity();

            LogTemp.SetVerbosity(ELogVerbosity::Display);
            GLog->AddOutputDevice(&FinalCapture);

            ON_SCOPE_EXIT
            {
                GLog->RemoveOutputDevice(&FinalCapture);
                LogTemp.SetVerbosity(PreviousLogVerbosity);
            };

            const bool bEarlyBounce =
                Parameters == TEXT("HeightBounceBeforeApex");
            const bool bRetainBounce =
                Parameters == TEXT("HeightBounceRetainPeak");
            const bool bHigherBounce =
                Parameters == TEXT("HeightBounceHigherPeak");
            const bool bBounce =
                bEarlyBounce || bRetainBounce || bHigherBounce;

            const bool bAfterApexSeed =
                Parameters == TEXT("HeightAfterApexSeed");
            const bool bSupersession =
                Parameters == TEXT("HeightSupersession");

            const bool bUnsupported =
                Parameters == TEXT("HeightGravityChange")
                || Parameters == TEXT("HeightFrictionChange")
                || Parameters == TEXT("HeightUntrackedLaunch")
                || Parameters == TEXT("HeightModeChange");

            if (bAfterApexSeed || bRetainBounce
                || bHigherBounce || bSupersession)
            {
                if (!TickUntil(
                    [&]()
                    {
                        return Telemetry->HeightHistory.VerifiedMovementSeconds
                            >= 1.6 * OriginalApexTime;
                    },
                    TEXT("Real movement passes the original apex"))
                    || !CheckPeak(OriginalPeak))
                {
                    return false;
                }

                TestTrue(TEXT("Post-apex state is descending"),
                    Movement->Velocity.Z < 0.f);
            }

            if (bSupersession)
            {
                const double PreviousPeak =
                    Telemetry->HeightHistory.GetCompleteMaximum().GetValue();

                const FGuid NewCommand = FGuid::NewGuid();

                if (!PrepareFlight(NewCommand) || !TakeOff())
                {
                    return false;
                }

                TestTrue(TEXT("New takeoff replaces request identity"),
                    Telemetry->Observation.RequestId != FirstRequestId);
                TestEqual(TEXT("New command owns replacement observation"),
                    Telemetry->Observation.CommandId, NewCommand);

                TestTrue(TEXT("Replacement starts complete history"),
                    Telemetry->HeightHistory.GetCompleteMaximum().IsSet());

                TestTrue(TEXT("Replacement does not inherit the earlier peak"),
                    Telemetry->HeightHistory.GetCompleteMaximum().IsSet()
                    && Telemetry->HeightHistory.GetCompleteMaximum().GetValue()
                    < PreviousPeak);

                TestTrue(TEXT("Replacement clock contains only its first interval"),
                    Telemetry->HeightHistory.VerifiedMovementSeconds > 0.0
                    && Telemetry->HeightHistory.VerifiedMovementSeconds
                    <= 0.037001);

                TestFalse(TEXT("Replacement clears pending-impact metadata"),
                    Telemetry->HeightRuntime.PendingReplacementVelocity.IsSet());
                TestFalse(TEXT("Replacement clears prior landing"),
                    Telemetry->HeightRuntime.bLandingCaptured);

                TestWorld.ForwardErrorMessages(this);
                return true;
            }

            if (bUnsupported)
            {
                const float SavedGravityScale = Movement->GravityScale;
                const float SavedFriction = Movement->FallingLateralFriction;

                ON_SCOPE_EXIT
                {
                    Movement->GravityScale = SavedGravityScale;
                    Movement->FallingLateralFriction = SavedFriction;
                };

                if (Parameters == TEXT("HeightGravityChange"))
                {
                    Movement->GravityScale = SavedGravityScale * 1.1f;
                }
                else if (Parameters == TEXT("HeightFrictionChange"))
                {
                    Movement->FallingLateralFriction = 0.5f;
                }
                else if (Parameters == TEXT("HeightUntrackedLaunch"))
                {
                    // Physical launch without a matching combat notification.
                    Pokemon->LaunchCharacter(
                        Movement->Velocity + FVector(0, 0, 100),
                        true, true);
                }
                else
                {
                    // The mode excursion must remain visible even though
                    // both surrounding completed samples are Falling.
                    Movement->SetMovementMode(MOVE_Flying);
                    Movement->SetMovementMode(MOVE_Falling);
                }

                if (!Tick())
                {
                    return false;
                }

                TestFalse(TEXT("Unsupported interval loses complete history"),
                    Telemetry->HeightHistory.GetCompleteMaximum().IsSet());

                const FName FirstFailure =
                    Telemetry->HeightHistory.IncompleteReason;

                TestFalse(TEXT("Incomplete history explains its failure"),
                    FirstFailure.IsNone());

                Movement->GravityScale = SavedGravityScale;
                Movement->FallingLateralFriction = SavedFriction;

                if (!Tick())
                {
                    return false;
                }

                TestFalse(TEXT("Restoring the model cannot repair the missing interval"),
                    Telemetry->HeightHistory.GetCompleteMaximum().IsSet());
                TestEqual(TEXT("First failure reason remains sticky"),
                    Telemetry->HeightHistory.IncompleteReason, FirstFailure);
            }

            double ExpectedPeak = OriginalPeak;

            if (bBounce)
            {
                if (!TestTrue(TEXT("Bounce starts with complete prior history"),
                    Telemetry->HeightHistory.GetCompleteMaximum().IsSet()))
                {
                    return false;
                }

                const FVector RequestFeet = Movement->GetActorFeetLocation();
                const FVector Incoming = Movement->Velocity;
                const double MaximumBeforeRequest =
                    Telemetry->HeightHistory.GetCompleteMaximum().GetValue();

                const double ReplacementVerticalSpeed = bEarlyBounce
                    ? 0.25 * Incoming.Z
                    : (bRetainBounce ? 0.25 : 1.0) * InitialVerticalSpeed;

                if (!TestTrue(TEXT("Replacement has upward velocity"),
                    ReplacementVerticalSpeed > 0.0))
                {
                    return false;
                }

                const FVector Requested(-40.0, 20.0, ReplacementVerticalSpeed);

                const double ReplacementPeak =
                    RequestFeet.Z
                    + ReplacementVerticalSpeed * ReplacementVerticalSpeed
                    / (2.0 * GravityMagnitude);

                ExpectedPeak = FMath::Max(
                    bEarlyBounce ? RequestFeet.Z : OriginalPeak,
                    ReplacementPeak);

                if (bEarlyBounce)
                {
                    TestTrue(TEXT("Early replacement cannot reach the old future apex"),
                        ExpectedPeak < OriginalPeak);
                }
                else if (bRetainBounce)
                {
                    TestTrue(TEXT("Lower replacement preserves the earlier apex"),
                        ReplacementPeak < OriginalPeak);
                }
                else
                {
                    TestTrue(TEXT("Higher replacement creates an additional apex"),
                        ReplacementPeak > OriginalPeak);
                }

                FPokemonImpactResolution Impact;
                Impact.ImpactResult = EPokemonImpactResult::BounceOff;
                Impact.AttackerMotionPolicy =
                    EPokemonAttackerMotionPolicy::Replace;

                Telemetry->NotifyCombatOutcome(FirstCommandId, true);

                const int32 LaunchesBeforeRequest = Pokemon->LaunchCalls;

                Pokemon->LaunchCharacter(Requested, true, true);
                Telemetry->NotifyImpactRequest(
                    FirstCommandId, Impact, Incoming, Requested, false);

                TestEqual(TEXT("Only the fixture requests the replacement launch"),
                    Pokemon->LaunchCalls, LaunchesBeforeRequest + 1);
                TestTrue(TEXT("Replacement remains pending before movement"),
                    Movement->PendingLaunchVelocity.Equals(Requested, 1.e-6));
                TestTrue(TEXT("Observer records the pending replacement"),
                    Telemetry->HeightRuntime.PendingReplacementVelocity.IsSet());

                TestTrue(TEXT("Request alone contributes no additional peak"),
                    Telemetry->HeightHistory.GetCompleteMaximum().IsSet()
                    && FMath::IsNearlyEqual(
                        Telemetry->HeightHistory.GetCompleteMaximum().GetValue(),
                        MaximumBeforeRequest, 1.e-8));
            }
            else
            {
                Telemetry->NotifyCombatOutcome(FirstCommandId, false);
            }

            if (Parameters == TEXT("HeightReadOnly"))
            {
                UPokemonCommandComponent* Command =
                    Pokemon->GetCommandComponent();

                if (!TestNotNull(TEXT("Command component"), Command))
                {
                    return false;
                }

                const FTransform BeforeTransform = Pokemon->GetActorTransform();
                const FVector BeforeVelocity = Movement->Velocity;
                const FVector BeforePending = Movement->PendingLaunchVelocity;
                const auto BeforeMode = Movement->MovementMode;
                const uint8 BeforeCustomMode = Movement->CustomMovementMode;
                const int32 BeforeLaunches = Pokemon->LaunchCalls;
                const FGuid BeforeRequest = Executor->GetParentRequestId();
                const FGuid BeforeCommand = Command->GetActiveTrainerCommandId();
                const auto* BeforeMove = Command->GetActiveMove();

                // Explicitly exercise diagnostics at a completed boundary.
                Telemetry->UpdateHeightHistory(
                    0.f, Pokemon->GetActorLocation(), Movement->Velocity);
                Telemetry->UpdateRecoveryComparison();
                Telemetry->LogHeightHistory(TEXT("AutomationReadOnly"));

                TestTrue(TEXT("Diagnostics preserve actor transform"),
                    Pokemon->GetActorTransform().Equals(BeforeTransform, 0.0));
                TestEqual(TEXT("Diagnostics preserve velocity"),
                    Movement->Velocity, BeforeVelocity);
                TestEqual(TEXT("Diagnostics preserve pending launch"),
                    Movement->PendingLaunchVelocity, BeforePending);
                TestEqual(TEXT("Diagnostics preserve movement mode"),
                    Movement->MovementMode, BeforeMode);
                TestEqual(TEXT("Diagnostics preserve custom movement mode"),
                    Movement->CustomMovementMode, BeforeCustomMode);
                TestEqual(TEXT("Diagnostics issue no launches"),
                    Pokemon->LaunchCalls, BeforeLaunches);
                TestEqual(TEXT("Diagnostics preserve executor request"),
                    Executor->GetParentRequestId(), BeforeRequest);
                TestEqual(TEXT("Diagnostics preserve gameplay command"),
                    Command->GetActiveTrainerCommandId(), BeforeCommand);
                TestTrue(TEXT("Diagnostics preserve active move"),
                    Command->GetActiveMove() == BeforeMove);
                TestTrue(TEXT("Read-only comparison actually evaluated a seed"),
                    Telemetry->PIEComparison.bAttempted);
            }

            // Real movement consumes a queued replacement and/or creates
            // the ordinary post-outcome comparison seed.
            if (!Tick())
            {
                return false;
            }

            if (!TestTrue(TEXT("Recovery comparison captures a seed"),
                Telemetry->PIEComparison.bAttempted))
            {
                return false;
            }

            if (bBounce)
            {
                TestTrue(TEXT("CMC consumed the replacement"),
                    Movement->PendingLaunchVelocity.IsZero());
                TestFalse(TEXT("Observer retires consumed replacement metadata"),
                    Telemetry->HeightRuntime.PendingReplacementVelocity.IsSet());
                TestTrue(TEXT("Applied replacement keeps complete history"),
                    Telemetry->HeightHistory.GetCompleteMaximum().IsSet());
            }

            if (bUnsupported)
            {
                TestFalse(TEXT("Unsupported prior history is omitted from the seed"),
                    Telemetry->PIEComparison.Input.MaxFeetZThroughStart.IsSet());
            }
            else
            {
                const FPokemonRecoveryBallisticInput& Seed =
                    Telemetry->PIEComparison.Input;

                if (!TestTrue(TEXT("Verified history is supplied to the seed"),
                    Seed.MaxFeetZThroughStart.IsSet()))
                {
                    return false;
                }

                if (bAfterApexSeed)
                {
                    TestTrue(TEXT("Delayed seed begins after the apex"),
                        Seed.StartVelocity.Z < 0.0);
                    TestTrue(TEXT("Delayed seed retains the earlier maximum"),
                        FMath::IsNearlyEqual(
                            Seed.MaxFeetZThroughStart.GetValue(),
                            OriginalPeak, HeightToleranceCm)
                        && Seed.MaxFeetZThroughStart.GetValue()
                        > Seed.StartFeet.Z);
                }

                if (Parameters == TEXT("HeightMiss"))
                {
                    TestTrue(TEXT("Normal miss seed still has future ascent"),
                        Seed.StartVelocity.Z > 0.0);
                    TestTrue(TEXT("Seed history excludes the unreached future apex"),
                        Seed.MaxFeetZThroughStart.GetValue() < OriginalPeak);
                }

                const FPokemonRecoveryContinuationResult& Prediction =
                    Telemetry->PIEComparison.Prediction;

                TestTrue(TEXT("Recovery finds strict landing geometry"),
                    Prediction.HasLandingGeometry());

                TestTrue(TEXT("Prediction combines prior history and future ascent"),
                    Prediction.ContactPrediction.MaxFeetZSinceTakeoff.IsSet()
                    && FMath::IsNearlyEqual(
                        Prediction.ContactPrediction.MaxFeetZSinceTakeoff.GetValue(),
                        ExpectedPeak, HeightToleranceCm));
            }

            if (!TickUntil(
                [&]() { return !Telemetry->bObserving; },
                TEXT("Real landing retires the observation")))
            {
                return false;
            }

            TestTrue(TEXT("Landing and grounded callbacks were observed"),
                Telemetry->Observation.bLanded
                && Telemetry->Observation.bGroundedObserved);

            TestEqual(TEXT("Final height was captured before cleanup"),
                FinalRecords, 1);
            TestTrue(TEXT("Final height record includes landing"),
                FinalHeight.bLanded);

            if (bUnsupported)
            {
                TestFalse(TEXT("Landing cannot repair unsupported earlier motion"),
                    FinalHeight.GetCompleteMaximum().IsSet());
                TestTrue(TEXT("Incomplete flight still records observed heights"),
                    FinalHeight.ObservedMaxFeetZ.IsSet());
            }
            else
            {
                const TOptional<double> FinalMaximum =
                    FinalHeight.GetCompleteMaximum();

                TestTrue(TEXT("Complete history survives through landing"),
                    FinalMaximum.IsSet()
                    && FMath::IsNearlyEqual(
                        FinalMaximum.GetValue(),
                        ExpectedPeak, HeightToleranceCm));

                TestTrue(TEXT("Supported comparison remains valid"),
                    FinalComparisonInvalidation.IsNone());

                if (Parameters == TEXT("HeightMiss"))
                {
                    TestTrue(TEXT("Analytical apex exceeds sparse sampled maximum"),
                        FinalMaximum.IsSet()
                        && FinalHeight.ObservedMaxFeetZ.IsSet()
                        && FinalMaximum.GetValue()
                        > FinalHeight.ObservedMaxFeetZ.GetValue() + 1.e-6);
                }
            }

            CheckHeightCleared();
            TestWorld.ForwardErrorMessages(this);
            return true;
        }

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
            TestTrue(TEXT("Interrupted history remains owned by the observer"),
                Telemetry->HeightHistory.bStarted);
            TestFalse(TEXT("Interruption invalidates complete height evidence"),
                Telemetry->HeightHistory.GetCompleteMaximum().IsSet());

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

            CheckHeightCleared();
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

            CheckHeightCleared();
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

            CheckHeightCleared();
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

            Pokemon->LaunchCharacter(FVector(50.f, 0.f, 200.f), true, true);

            Telemetry->NotifyImpactRequest(
                FirstCommandId,
                Impact,
                Movement->Velocity,
                FVector(50.f, 0.f, 200.f),
                false);

            TestTrue(TEXT("Teardown begins with recorded replacement metadata"),
                Telemetry->HeightRuntime.PendingReplacementVelocity.IsSet());

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

            TestFalse(TEXT("Height movement-mode subscription removed"),
                Pokemon->MovementModeChangedDelegate.IsAlreadyBound(
                    Telemetry,
                    &UPokemonAirborneRecoveryTelemetryComponent::HandleHeightMovementModeChanged));

            TestFalse(TEXT("Height collision subscription removed"),
                Capsule->OnComponentHit.IsAlreadyBound(
                    Telemetry,
                    &UPokemonAirborneRecoveryTelemetryComponent::HandleHeightCapsuleHit));

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

                CheckHeightCleared();
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

			Telemetry->PIEComparison = FRecoveryPIEComparison();
			Telemetry->PIEComparison.bEnabled = Parameters.StartsWith(TEXT("PIE"));

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

    if (Parameters.StartsWith(TEXT("PIE")))
    {
        Movement->FallingLateralFriction = 0.f;
        Movement->BrakingDecelerationFalling = 0.f;
        Movement->BrakingFriction = 0.f;
    }

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
    else if (Parameters.StartsWith(TEXT("PIE")))
    {
        const auto CompleteMiss = [&]()
            {
                Telemetry->NotifyCombatOutcome(CommandId, false);
                Telemetry->HandleExecutionFinished(
                    Telemetry->Observation.RequestId, true);
            };

        const auto CheckedMovementUpdate = [&]()
            {
                const FVector Location = Pokemon->GetActorLocation();
                const FVector Velocity = Movement->Velocity;
                const FVector Pending = Movement->PendingLaunchVelocity;
                const EMovementMode Mode = Movement->MovementMode;
                const bool bFloorCheck = Movement->bForceNextFloorCheck;
                const int32 LaunchCalls = Pokemon->LaunchCalls;

                MovementUpdate();

                TestEqual(TEXT("Diagnostic preserves location"),
                    Pokemon->GetActorLocation(), Location);
                TestEqual(TEXT("Diagnostic preserves velocity"),
                    Movement->Velocity, Velocity);
                TestEqual(TEXT("Diagnostic preserves pending launch"),
                    Movement->PendingLaunchVelocity, Pending);
                TestTrue(TEXT("Diagnostic preserves movement mode"),
                    Movement->MovementMode == Mode);
                TestTrue(TEXT("Diagnostic preserves floor cache"),
                    Movement->bForceNextFloorCheck == bFloorCheck);
                TestEqual(TEXT("Diagnostic never launches"),
                    Pokemon->LaunchCalls, LaunchCalls);
            };

        if (Parameters == TEXT("PIEMissSeed"))
        {
            MovementUpdate();
            TestFalse(TEXT("No seed before outcome"),
                Telemetry->PIEComparison.bAttempted);

            Telemetry->NotifyCombatOutcome(CommandId, false);
            MovementUpdate();

            TestFalse(TEXT("No seed before execution finishes"),
                Telemetry->PIEComparison.bAttempted);

            Telemetry->HandleExecutionFinished(
                Telemetry->Observation.RequestId, true);

            CheckedMovementUpdate();

            TestTrue(TEXT("Completed post-miss update seeds prediction"),
                Telemetry->PIEComparison.bAttempted);

            TestEqual(TEXT("Observed feet become the seed"),
                Telemetry->PIEComparison.Input.StartFeet,
                Movement->GetActorFeetLocation());

            TestEqual(TEXT("Observed velocity becomes the seed"),
                Telemetry->PIEComparison.Input.StartVelocity,
                Movement->Velocity);

            TestTrue(TEXT("Seed uses completed movement time"),
                FMath::IsNearlyEqual(
                    Telemetry->PIEComparison.SeedMovementTime,
                    static_cast<double>(
                        Telemetry->Observation.ElapsedMovementTime),
                    0.000001));

            TestFalse(TEXT("Full-jump maximum is not invented"),
                Telemetry->PIEComparison.Input.MaxFeetZThroughStart.IsSet());

            const double SavedSeedTime =
                Telemetry->PIEComparison.SeedMovementTime;

            MovementUpdate();

            TestEqual(TEXT("Prediction is attempted only once"),
                Telemetry->PIEComparison.SeedMovementTime, SavedSeedTime);
        }
        else if (Parameters == TEXT("PIEBounceSeed"))
        {
            Telemetry->HandleExecutionFinished(
                Telemetry->Observation.RequestId, true);
            Telemetry->NotifyCombatOutcome(CommandId, true);

            MovementUpdate();

            TestFalse(TEXT("CombatHit alone cannot seed BounceOff"),
                Telemetry->PIEComparison.bAttempted);

            const FVector Requested(80.f, -20.f, 300.f);
            Pokemon->LaunchCharacter(Requested, true, true);

            Telemetry->NotifyImpactRequest(
                CommandId, Resolution, Movement->Velocity, Requested, false);

            CheckedMovementUpdate();

            TestFalse(TEXT("Pending launch postpones the seed"),
                Telemetry->PIEComparison.bAttempted);

            if (!TestTrue(TEXT("Movement consumes the launch"),
                Movement->HandlePendingLaunch()))
            {
                return false;
            }

            // Represent the velocity observed after some gravity integration.
            Movement->Velocity.Z -= 9.8f;
            const FVector ObservedVelocity = Movement->Velocity;

            CheckedMovementUpdate();

            TestTrue(TEXT("Post-consumption movement seeds prediction"),
                Telemetry->PIEComparison.bAttempted);

            TestEqual(TEXT("Seed uses observed velocity, not requested impulse"),
                Telemetry->PIEComparison.Input.StartVelocity, ObservedVelocity);

            TestEqual(TEXT("Impact index retained"),
                Telemetry->PIEComparison.ImpactIndex, 1);
        }
        else if (Parameters == TEXT("PIELandingBracket"))
        {
            CompleteMiss();
            CheckedMovementUpdate(); // Seed at .01.

            MovementUpdate();        // .02
            MovementUpdate();        // .03

            Movement->Velocity = FVector(40.f, 50.f, -500.f);

            const FVector LandingFeet = Movement->GetActorFeetLocation();
            const FVector LandingVelocity = Movement->Velocity;

            FHitResult Hit;
            Hit.bBlockingHit = true;
            Hit.Normal = FVector::UpVector;
            Hit.ImpactNormal = FVector::UpVector;

            Pokemon->LandedDelegate.Broadcast(Hit);

            TestTrue(TEXT("Landing event captured"),
                Telemetry->PIEComparison.bLandingCaptured);
            TestFalse(TEXT("Landing waits for the completed movement callback"),
                Telemetry->PIEComparison.bCompared);

            // Later movement must not replace the captured contact-event pose.
            Pokemon->SetActorLocation(
                Pokemon->GetActorLocation() + FVector(100.f, 0.f, 0.f));

            // Keep Falling here so existing grounded completion does not yet
            // retire the observation and clear the comparison.
            CheckedMovementUpdate(); // .04

            TestTrue(TEXT("Next callback completes comparison"),
                Telemetry->PIEComparison.bCompared);

            TestTrue(TEXT("Lower contact-time boundary"),
                FMath::IsNearlyEqual(
                    Telemetry->PIEComparison.LandingTimeLower, 0.02, 0.00001));

            TestTrue(TEXT("Upper contact-time boundary"),
                FMath::IsNearlyEqual(
                    Telemetry->PIEComparison.LandingTimeUpper, 0.03, 0.00001));

            TestEqual(TEXT("Raw landing feet retained"),
                Telemetry->PIEComparison.FeetAtLandingEvent, LandingFeet);

            TestEqual(TEXT("Landing event velocity retained"),
                Telemetry->PIEComparison.VelocityAtLandingEvent, LandingVelocity);

            Movement->SetMovementMode(MOVE_Walking);
            MovementUpdate();

            TestFalse(TEXT("Grounded completion clears comparison"),
                Telemetry->PIEComparison.bEnabled
                || Telemetry->PIEComparison.bAttempted
                || Telemetry->PIEComparison.bLandingCaptured
                || Telemetry->PIEComparison.bCompared);
        }
        else if (Parameters == TEXT("PIEInvalidation"))
        {
            CompleteMiss();
            CheckedMovementUpdate();

            const double SeedTime = Telemetry->PIEComparison.SeedMovementTime;

            Telemetry->NotifyImpactRequest(
                FGuid::NewGuid(), Resolution,
                Movement->Velocity, FVector(10.f, 0.f, 200.f), false);

            TestTrue(TEXT("Unrelated impact cannot invalidate comparison"),
                Telemetry->PIEComparison.InvalidatedReason.IsNone());

            Telemetry->NotifyImpactRequest(
                CommandId, Resolution,
                Movement->Velocity, FVector(10.f, 0.f, 200.f), false);

            TestEqual(TEXT("Later matching impact is identified"),
                Telemetry->PIEComparison.InvalidatedReason,
                FName(TEXT("LaterImpact")));

            MovementUpdate();

            TestEqual(TEXT("Later impact does not silently replace the seed"),
                Telemetry->PIEComparison.SeedMovementTime, SeedTime);

            Telemetry->FinishObservation(TEXT("AutomationFinished"));

            TestFalse(TEXT("Retirement clears comparison state"),
                Telemetry->PIEComparison.bEnabled
                || Telemetry->PIEComparison.bAttempted
                || Telemetry->PIEComparison.bLandingCaptured
                || Telemetry->PIEComparison.bCompared);
        }
        else if (Parameters == TEXT("PIEModelChanges"))
        {
            AActor* FloorActor = World->SpawnActor<AActor>();
            if (!TestNotNull(TEXT("Model-check floor actor"), FloorActor))
            {
                return false;
            }

            UBoxComponent* Floor = NewObject<UBoxComponent>(FloorActor);
            FloorActor->SetRootComponent(Floor);
            Floor->SetMobility(EComponentMobility::Static);
            Floor->SetBoxExtent(FVector(2000.f, 2000.f, 20.f));
            Floor->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
            Floor->SetCollisionObjectType(ECC_WorldStatic);
            Floor->SetCollisionResponseToAllChannels(ECR_Block);
            Floor->SetWorldLocation(FVector(0.f, 0.f, -20.f));
            Floor->RegisterComponent();

            APhysicsVolume* Volume = Movement->GetPhysicsVolume();
            if (!TestNotNull(TEXT("Physics volume"), Volume))
            {
                return false;
            }

            CompleteMiss();
            CheckedMovementUpdate();

            if (!TestTrue(TEXT("Real landing geometry enables model monitoring"),
                Telemetry->PIEComparison.Prediction.HasLandingGeometry()))
            {
                return false;
            }

            const FRecoveryPIEComparison Baseline = Telemetry->PIEComparison;
            const float OriginalFriction = Movement->FallingLateralFriction;
            const float OriginalGravityScale = Movement->GravityScale;
            const float OriginalTerminalSpeed = Volume->TerminalVelocity;

            ON_SCOPE_EXIT
            {
                Movement->FallingLateralFriction = OriginalFriction;
                Movement->GravityScale = OriginalGravityScale;
                Volume->TerminalVelocity = OriginalTerminalSpeed;
            };

            // A newly unsupported movement model must invalidate the prediction.
            Movement->FallingLateralFriction = 0.5f;
            CheckedMovementUpdate();

            TestEqual(TEXT("Friction change is detected"),
                Telemetry->PIEComparison.InvalidatedReason,
                FName(TEXT("UnsupportedMovement")));

            // Later changes must preserve the first invalidation reason.
            Movement->FallingLateralFriction = OriginalFriction;
            Movement->GravityScale = OriginalGravityScale * 1.1f;
            CheckedMovementUpdate();

            TestEqual(TEXT("First invalidation reason is preserved"),
                Telemetry->PIEComparison.InvalidatedReason,
                FName(TEXT("UnsupportedMovement")));

            // Restore only the saved diagnostic state to isolate the gravity check.
            Telemetry->PIEComparison = Baseline;
            CheckedMovementUpdate();

            TestEqual(TEXT("Changed gravity is detected"),
                Telemetry->PIEComparison.InvalidatedReason,
                FName(TEXT("GravityOrTerminalSpeedChanged")));

            Movement->GravityScale = OriginalGravityScale;
            Telemetry->PIEComparison = Baseline;
            Volume->TerminalVelocity = OriginalTerminalSpeed + 100.f;
            CheckedMovementUpdate();

            TestEqual(TEXT("Changed terminal speed is detected"),
                Telemetry->PIEComparison.InvalidatedReason,
                FName(TEXT("GravityOrTerminalSpeedChanged")));

            Telemetry->FinishObservation(TEXT("AutomationFinished"));
        }
        else if (Parameters == TEXT("PIEUnsupportedSeed"))
        {
            Movement->FallingLateralFriction = 0.5f;
            CompleteMiss();
            CheckedMovementUpdate();

            TestTrue(TEXT("Unsupported model is recorded"),
                Telemetry->PIEComparison.bAttempted
                && Telemetry->PIEComparison.Prediction.Status ==
                EPokemonRecoveryContinuationStatus::UnsupportedModel);

            TestEqual(TEXT("Unsupported model makes no world queries"),
                Telemetry->PIEComparison.Prediction.QueryWorkUsed, 0);

            const double SeedTime = Telemetry->PIEComparison.SeedMovementTime;

            Movement->FallingLateralFriction = 0.f;
            MovementUpdate();

            TestEqual(TEXT("Changed parameters do not cause a silent retry"),
                Telemetry->PIEComparison.SeedMovementTime, SeedTime);

            TestTrue(TEXT("Original unsupported result retained"),
                Telemetry->PIEComparison.Prediction.Status ==
                EPokemonRecoveryContinuationStatus::UnsupportedModel);
        }
        else
        {
            AddError(TEXT("Unknown PIE comparison test."));
            return false;
        }
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
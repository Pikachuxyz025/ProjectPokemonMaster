#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Navigation/PokemonRecoveryBallistics.h"
#include "Navigation/PokemonRecoveryTolerance.h"
#include <limits>

IMPLEMENT_COMPLEX_AUTOMATION_TEST(FPokemonRecoveryToleranceTest,
	"ProjectMimikyu.Traversal.RecoveryTolerance",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

	void FPokemonRecoveryToleranceTest::GetTests(
		TArray<FString>& OutBeautifiedNames,
		TArray<FString>& OutTestCommands
	) const
{
    const TCHAR* Cases[] = {
        TEXT("Within"), TEXT("SpeedExceeded"), TEXT("DropExceeded"),
        TEXT("BothExceeded"), TEXT("SpeedEquality"), TEXT("DropEquality"),
        TEXT("ZeroStamina"), TEXT("PartialStamina"), TEXT("FullStamina"),
        TEXT("MonotonicStamina"), TEXT("MissingStamina"),
        TEXT("InvalidMaximumStamina"), TEXT("InvalidCurrentStamina"),
        TEXT("UnconfiguredProfile"), TEXT("MissingProfile"),
        TEXT("InvalidProfileValues"), TEXT("InvalidMultipliers"),
        TEXT("MultiplierOrdering"), TEXT("EffectiveOverflow"),
        TEXT("NoLandingGeometry"), TEXT("UnsupportedPrediction"),
        TEXT("InvalidatedPrediction"), TEXT("UnknownHistory"),
        TEXT("SpeedExceededUnknownHistory"), TEXT("MissingVelocityExceededDrop"),
        TEXT("MissingVelocityAcceptableDrop"), TEXT("NonfiniteVelocity"),
        TEXT("InvalidCompleteMaximum"), TEXT("MaximumBelowLanding"),
        TEXT("InvalidContactFeet"), TEXT("NegativeWorldHeight"),
        TEXT("DropOverflow"), TEXT("EarlierApex"), TEXT("FutureApex"),
        TEXT("DownwardOnly"), TEXT("AscendingVelocity"), TEXT("ZeroLimits"),
        TEXT("InvalidEffectiveSnapshot"), TEXT("InvalidEvidenceEnum"), TEXT("ReadOnly"),
        TEXT("ProvisionalProfileStamina")
    };
	for (const TCHAR* Case : Cases)
	{
		OutBeautifiedNames.Add(Case);
		OutTestCommands.Add(Case);
	}
}

bool FPokemonRecoveryToleranceTest::RunTest(const FString& Parameters)
{
    // Outcome
    using O = EPokemonRecoveryToleranceOutcome;

    // Evidence status
    using S = EPokemonRecoveryLandingEvidenceStatus;

    const double NaN = std::numeric_limits<double>::quiet_NaN();
    const double Inf = std::numeric_limits<double>::infinity();
    const double Max = std::numeric_limits<double>::max();

    // Test-only values. Full stamina: speed 800 cm/s, drop 400 cm.
    // Zero stamina: speed 400 cm/s, drop 100 cm.
    FPokemonRecoveryToleranceProfileSnapshot Config;
    Config.ProfileId = TEXT("AutomationOnly");
    Config.bConfigured = true;
    Config.BaseMaxDownwardSpeed = 800.0;
    Config.BaseMaxPeakDrop = 400.0;
    Config.SpeedResponse = { 0.5,1.0 };
    Config.DropResponse = { 0.25, 1.0 };
    TOptional<FPokemonRecoveryToleranceProfileSnapshot> Profile(Config);
    FPokemonRecoveryStaminaSnapshot Stamina;
    Stamina.bAvailable = true;
    Stamina.Current = 100.0;
    Stamina.Maximum = 100.0;

    FPokemonRecoveryLandingEvidence Evidence;
    Evidence.Status = S::SupportedPrediction;
    Evidence.IncomingVelocity = FVector(0, 0, -200);
    Evidence.ContactFeet = FVector(0, 0, 100);
    Evidence.CompleteMaximumFeetZ = 150.0; // 50 cm drop.

    const auto Check = [&](const FPokemonRecoveryToleranceResult& Result,
        O Speed, O Drop, O Overall)
        {
            TestTrue(TEXT("Landing-speed outcome"), Result.LandingSpeed.Outcome == Speed);
            TestTrue(TEXT("Peak-drop outcome"), Result.PeakDrop.Outcome == Drop);
            TestTrue(TEXT("Overall outcome"), Result.Overall == Overall);
        };

    const auto Number = [&](const TCHAR* Label, const TOptional<double>& Value, double Expected)
        {
            TestTrue(Label, Value.IsSet()
                && FMath::IsNearlyEqual(Value.GetValue(), Expected, 1.e-8));
        };

    const auto Reason = [&](const TArray<FName>& Reasons, const TCHAR* Expected)
        {
            TestTrue(FString::Printf(TEXT("Reason retained: %s"), Expected),
                Reasons.Contains(FName(Expected)));
        };

    const auto CheckRejected = [&](
        const TOptional<FPokemonRecoveryToleranceProfileSnapshot>& TestProfile,
        const FPokemonRecoveryStaminaSnapshot& TestStamina, const TCHAR* ExpectedReason)
        {
            const auto Limits = FPokemonRecoveryTolerance::BuildEffectiveLimits(TestProfile, TestStamina);
            TestFalse(TEXT("Rejected input supplies no speed limit"), Limits.MaxDownwardSpeed.IsSet());
            TestFalse(TEXT("Rejected input supplies no drop limit"), Limits.MaxPeakDrop.IsSet());
            Reason(Limits.Reasons, ExpectedReason);
            const auto Result = FPokemonRecoveryTolerance::Evaluate(Limits, Evidence);
            Check(Result, O::Unknown, O::Unknown, O::Unknown);
            Reason(Result.LandingSpeed.Reasons, ExpectedReason);
            Reason(Result.PeakDrop.Reasons, ExpectedReason);
        };

	// The "ProvisionalProfileStamina" case is a special test of the provisional profile logic, 
    // which is not part of the normal tolerance evaluation. 
    // It is tested separately to ensure that the provisional profile produces the expected effective limits 
    // and outcomes based on different stamina levels.
    if (Parameters == TEXT("ProvisionalProfileStamina"))
    {
        FPokemonRecoveryToleranceProfileSnapshot Provisional;
        Provisional.ProfileId = TEXT("AutomationProvisionalLucario");
        Provisional.bConfigured = true;
        Provisional.BaseMaxDownwardSpeed = 1200.0;
        Provisional.BaseMaxPeakDrop = 600.0;
        Provisional.SpeedResponse = { 0.5, 1.0 };
        Provisional.DropResponse = { 0.5, 1.0 };

        FPokemonRecoveryStaminaSnapshot TestStamina;
        TestStamina.bAvailable = true;
        TestStamina.Maximum = 100.0;

        FPokemonRecoveryLandingEvidence TestEvidence;
        TestEvidence.Status = EPokemonRecoveryLandingEvidenceStatus::SupportedPrediction;
        TestEvidence.ContactFeet = FVector(0, 0, 100);
        TestEvidence.IncomingVelocity = FVector(0, 0, -950);
        TestEvidence.CompleteMaximumFeetZ = 500.0; // 400 cm drop.

        struct FRow
        {
            double Current;
            double Fraction;
            double SpeedLimit;
            double DropLimit;
            O SpeedOutcome;
            O DropOutcome;
            O Overall;
        };

        // Independently calculated expected values, in increasing stamina order.
        const FRow Rows[] = {
            {30.0, 0.3, 780.0, 390.0, O::ExceedsTolerance, O::ExceedsTolerance, O::ExceedsTolerance},
            {50.0, 0.5, 900.0, 450.0, O::ExceedsTolerance, O::WithinTolerance, O::ExceedsTolerance},
            {90.0, 0.9, 1140.0, 570.0, O::WithinTolerance, O::WithinTolerance, O::WithinTolerance}
        };

        double PreviousSpeedLimit = -1.0;
        double PreviousDropLimit = -1.0;

        for (const FRow& Row : Rows)
        {
            TestStamina.Current = Row.Current;
            const auto Limits = FPokemonRecoveryTolerance::
                BuildEffectiveLimits(Provisional, TestStamina);

            if (!TestTrue(TEXT("Provisional profile produces both effective limits"),
                Limits.Reasons.IsEmpty() && Limits.MaxDownwardSpeed.IsSet() && Limits.MaxPeakDrop.IsSet()))
            {
                return false;
            }

            Number(TEXT("Provisional stamina fraction"), Limits.StaminaFraction, Row.Fraction);
            Number(TEXT("Provisional speed limit"), Limits.MaxDownwardSpeed, Row.SpeedLimit);
            Number(TEXT("Provisional drop limit"), Limits.MaxPeakDrop, Row.DropLimit);

            TestTrue(TEXT("Increasing stamina does not decrease either provisional limit"),
                Limits.MaxDownwardSpeed.GetValue() >= PreviousSpeedLimit
                && Limits.MaxPeakDrop.GetValue() >= PreviousDropLimit);

            PreviousSpeedLimit = Limits.MaxDownwardSpeed.GetValue();
            PreviousDropLimit = Limits.MaxPeakDrop.GetValue();

            const auto Result = FPokemonRecoveryTolerance::Evaluate(Limits, TestEvidence);
            Check(Result, Row.SpeedOutcome, Row.DropOutcome, Row.Overall);
            Number(TEXT("Fixed predicted downward speed"), Result.LandingSpeed.Measured, 950.0);
            Number(TEXT("Fixed complete peak-to-contact drop"), Result.PeakDrop.Measured, 400.0);
            if (Row.SpeedOutcome == O::ExceedsTolerance)
            {
                Reason(Result.LandingSpeed.Reasons, TEXT("LandingSpeedExceeded"));
            }
            else
            {
                TestTrue(TEXT("Accepted speed has no rejection reasons"), Result.LandingSpeed.Reasons.IsEmpty());
            }
            if (Row.DropOutcome == O::ExceedsTolerance)
            {
                Reason(Result.PeakDrop.Reasons, TEXT("PeakDropExceeded"));
            }
            else
            {
                TestTrue(TEXT("Accepted drop has no rejection reasons"), Result.PeakDrop.Reasons.IsEmpty());
            }

            AddInfo(FString::Printf(
                TEXT("[RecoveryToleranceProvisional] Synthetic=1 | Stamina=%.0f/100 | ")
                TEXT("SpeedLimit=%.6f | DropLimit=%.6f | Speed=950 | Drop=400 | ")
                TEXT("SpeedOutcome=%s | DropOutcome=%s | Overall=%s"),
                Row.Current, Limits.MaxDownwardSpeed.GetValue(), Limits.MaxPeakDrop.GetValue(),
                FPokemonRecoveryTolerance::OutcomeName(Result.LandingSpeed.Outcome),
                FPokemonRecoveryTolerance::OutcomeName(Result.PeakDrop.Outcome),
                FPokemonRecoveryTolerance::OutcomeName(Result.Overall)));
        }

        // Same provisional profile at 50/100, with a separate synthetic trajectory:
        // speed 850 <= 900, drop 500 > 450. Only drop must fail.
        TestStamina.Current = 50.0;
        TestEvidence.IncomingVelocity = FVector(0, 0, -850);
        TestEvidence.CompleteMaximumFeetZ = 600.0;

        const auto Limits = FPokemonRecoveryTolerance::BuildEffectiveLimits(Provisional, TestStamina);

        Number(TEXT("Drop-only case speed limit"), Limits.MaxDownwardSpeed, 900.0);
        Number(TEXT("Drop-only case drop limit"), Limits.MaxPeakDrop, 450.0);

        const auto Result = FPokemonRecoveryTolerance::Evaluate(Limits, TestEvidence);

        Check(Result, O::WithinTolerance, O::ExceedsTolerance, O::ExceedsTolerance);

        Number(TEXT("Drop-only measured speed"), Result.LandingSpeed.Measured, 850.0);
        Number(TEXT("Drop-only measured drop"), Result.PeakDrop.Measured, 500.0);

        TestTrue(TEXT("Drop violation does not add a speed reason"), Result.LandingSpeed.Reasons.IsEmpty());
        Reason(Result.PeakDrop.Reasons, TEXT("PeakDropExceeded"));

        AddInfo(TEXT("[RecoveryToleranceProvisional] Synthetic=1 | Stamina=50/100 | ")
            TEXT("SpeedLimit=900 | DropLimit=450 | Speed=850 | Drop=500 | ")
            TEXT("SpeedOutcome=WithinTolerance | DropOutcome=ExceedsTolerance | Overall=ExceedsTolerance"));
        return true;
    }

    // Rejection families iterate all relevant fields, including NaN and infinity.
    if (Parameters == TEXT("InvalidMaximumStamina") || Parameters == TEXT("InvalidCurrentStamina"))
    {
        const bool bMaximum = Parameters == TEXT("InvalidMaximumStamina");
        const double Values[] = { -1.0, NaN, Inf, bMaximum ? 0.0 : 101.0 };
        for (double Value : Values)
        {
            auto Invalid = Stamina;
            if (bMaximum) Invalid.Maximum = Value;
            else Invalid.Current = Value;
            CheckRejected(Profile, Invalid, TEXT("InvalidStamina"));
        }
        return true;
    }

    if (Parameters == TEXT("InvalidProfileValues"))
    {
        for (double Value : {-1.0, NaN, Inf})
        {
            auto Invalid = Config;
            Invalid.BaseMaxDownwardSpeed = Value;
            CheckRejected(Invalid, Stamina, TEXT("InvalidBaseLandingSpeed"));
            Invalid = Config;
            Invalid.BaseMaxPeakDrop = Value;
            CheckRejected(Invalid, Stamina, TEXT("InvalidBasePeakDrop"));
        }
        return true;
    }

    if (Parameters == TEXT("InvalidMultipliers") || Parameters == TEXT("MultiplierOrdering"))
    {
        const bool bOrdering = Parameters == TEXT("MultiplierOrdering");
        for (int32 Field = 0; Field < 4; ++Field)
        {
            for (double Value : {-1.0, NaN, Inf})
            {
                auto Invalid = Config;
                auto& Response = Field < 2 ? Invalid.SpeedResponse : Invalid.DropResponse;
                if (bOrdering) Response = { 2.0, 1.0 };
                else if (Field % 2 == 0) Response.AtZeroStamina = Value;
                else Response.AtFullStamina = Value;
                CheckRejected(Invalid, Stamina, Field < 2
                    ? TEXT("InvalidSpeedStaminaResponse") : TEXT("InvalidDropStaminaResponse"));
            }
        }
        return true;
    }

    if (Parameters == TEXT("EffectiveOverflow"))
    {
        Stamina.Current = 0.0; // Still reject a profile that overflows at full stamina.
        auto Invalid = Config;
        Invalid.BaseMaxDownwardSpeed = Max;
        Invalid.SpeedResponse = { 0.0, 2.0 };
        CheckRejected(Invalid, Stamina, TEXT("EffectiveLimitOverflow"));
        Invalid = Config;
        Invalid.BaseMaxPeakDrop = Max;
        Invalid.DropResponse = { 0.0, 2.0 };
        CheckRejected(Invalid, Stamina, TEXT("EffectiveLimitOverflow"));
        return true;
    }

    if (Parameters == TEXT("MonotonicStamina"))
    {
        double PreviousSpeed = -1.0;
        double PreviousDrop = -1.0;
        for (int32 Current = 0; Current <= 100; ++Current)
        {
            Stamina.Current = Current;
            const auto Limits = FPokemonRecoveryTolerance::BuildEffectiveLimits(Profile, Stamina);
            if (!TestTrue(TEXT("Every valid stamina produces both limits"),
                Limits.MaxDownwardSpeed.IsSet() && Limits.MaxPeakDrop.IsSet())) return false;
            const double Speed = Limits.MaxDownwardSpeed.GetValue();
            const double Drop = Limits.MaxPeakDrop.GetValue();
            TestTrue(TEXT("Limits never decrease"), Speed >= PreviousSpeed && Drop >= PreviousDrop);
            Number(TEXT("Independent linear speed expectation"), Limits.MaxDownwardSpeed, 400.0 + 4.0 * Current);
            Number(TEXT("Independent linear drop expectation"), Limits.MaxPeakDrop, 100.0 + 3.0 * Current);
            PreviousSpeed = Speed;
            PreviousDrop = Drop;
        }
        return true;
    }

    if (Parameters == TEXT("NonfiniteVelocity"))
    {
        const auto Limits = FPokemonRecoveryTolerance::BuildEffectiveLimits(Profile, Stamina);
        for (int32 Axis = 0; Axis < 3; ++Axis)
        {
            for (double Value : {NaN, Inf, -Inf})
            {
                FVector Velocity(0, 0, -200);
                Velocity[Axis] = Value;
                Evidence.IncomingVelocity = Velocity;
                const auto Result = FPokemonRecoveryTolerance::Evaluate(Limits, Evidence);
                Check(Result, O::Unknown, O::WithinTolerance, O::Unknown);
                Reason(Result.LandingSpeed.Reasons, TEXT("InvalidLandingVelocity"));
                Number(TEXT("Drop remains independently measured"), Result.PeakDrop.Measured, 50.0);
            }
        }
        return true;
    }

    if (Parameters == TEXT("InvalidCompleteMaximum"))
    {
        const auto Limits = FPokemonRecoveryTolerance::BuildEffectiveLimits(Profile, Stamina);
        for (double Value : {NaN, Inf, -Inf})
        {
            Evidence.CompleteMaximumFeetZ = Value;
            const auto Result = FPokemonRecoveryTolerance::Evaluate(Limits, Evidence);
            Check(Result, O::WithinTolerance, O::Unknown, O::Unknown);
            Reason(Result.PeakDrop.Reasons, TEXT("InvalidHeightHistory"));
        }
        return true;
    }

    if (Parameters == TEXT("InvalidContactFeet"))
    {
        const auto Limits = FPokemonRecoveryTolerance::BuildEffectiveLimits(Profile, Stamina);
        Evidence.ContactFeet.Reset();
        auto Result = FPokemonRecoveryTolerance::Evaluate(Limits, Evidence);
        Check(Result, O::Unknown, O::Unknown, O::Unknown);
        Reason(Result.PeakDrop.Reasons, TEXT("InvalidLandingGeometry"));
        for (int32 Axis = 0; Axis < 3; ++Axis)
        {
            for (double Value : {NaN, Inf, -Inf})
            {
                FVector Feet(0, 0, 100);
                Feet[Axis] = Value;
                Evidence.ContactFeet = Feet;
                Result = FPokemonRecoveryTolerance::Evaluate(Limits, Evidence);
                Check(Result, O::Unknown, O::Unknown, O::Unknown);
                Reason(Result.LandingSpeed.Reasons, TEXT("InvalidLandingGeometry"));
            }
        }
        return true;
    }

    O ExpectedSpeed = O::WithinTolerance;
    O ExpectedDrop = O::WithinTolerance;
    O ExpectedOverall = O::WithinTolerance;
    const TCHAR* SpeedReason = nullptr;
    const TCHAR* DropReason = nullptr;
    double ExpectedMeasuredSpeed = 200.0;
    double ExpectedMeasuredDrop = 50.0;
    double ExpectedSpeedLimit = 800.0;
    double ExpectedDropLimit = 400.0;

    if (Parameters == TEXT("Within") || Parameters == TEXT("FullStamina") || Parameters == TEXT("ReadOnly")) {}
    else if (Parameters == TEXT("SpeedExceeded") || Parameters == TEXT("BothExceeded")
        || Parameters == TEXT("SpeedExceededUnknownHistory"))
    {
        Evidence.IncomingVelocity = FVector(0, 0, -801);
        ExpectedMeasuredSpeed = 801.0;
        ExpectedSpeed = ExpectedOverall = O::ExceedsTolerance;
        SpeedReason = TEXT("LandingSpeedExceeded");
        if (Parameters == TEXT("BothExceeded"))
        {
            Evidence.CompleteMaximumFeetZ = 501.0;
            ExpectedMeasuredDrop = 401.0;
            ExpectedDrop = O::ExceedsTolerance;
            DropReason = TEXT("PeakDropExceeded");
        }
        if (Parameters == TEXT("SpeedExceededUnknownHistory"))
        {
            Evidence.CompleteMaximumFeetZ.Reset();
            ExpectedDrop = O::Unknown;
            DropReason = TEXT("IncompleteHeightHistory");
        }
    }
    else if (Parameters == TEXT("DropExceeded"))
    {
        Evidence.CompleteMaximumFeetZ = 501.0;
        ExpectedMeasuredDrop = 401.0;
        ExpectedDrop = ExpectedOverall = O::ExceedsTolerance;
        DropReason = TEXT("PeakDropExceeded");
    }
    else if (Parameters == TEXT("SpeedEquality"))
    {
        Evidence.IncomingVelocity = FVector(0, 0, -800);
        ExpectedMeasuredSpeed = 800.0;
    }
    else if (Parameters == TEXT("DropEquality"))
    {
        Evidence.CompleteMaximumFeetZ = 500.0;
        ExpectedMeasuredDrop = 400.0;
    }
    else if (Parameters == TEXT("ZeroStamina") || Parameters == TEXT("PartialStamina"))
    {
        const bool bZero = Parameters == TEXT("ZeroStamina");
        Stamina.Current = bZero ? 0.0 : 50.0;
        ExpectedSpeedLimit = bZero ? 400.0 : 600.0;
        ExpectedDropLimit = bZero ? 100.0 : 250.0;
    }
    else if (Parameters == TEXT("MissingStamina"))
    {
        Stamina.bAvailable = false;
        CheckRejected(Profile, Stamina, TEXT("MissingStamina"));
        return true;
    }
    else if (Parameters == TEXT("UnconfiguredProfile"))
    {
        Profile.GetValue().bConfigured = false;
        CheckRejected(Profile, Stamina, TEXT("ProfileNotConfigured"));
        return true;
    }
    else if (Parameters == TEXT("MissingProfile"))
    {
        Profile.Reset();
        CheckRejected(Profile, Stamina, TEXT("MissingProfile"));
        return true;
    }
    else if (Parameters == TEXT("NoLandingGeometry") || Parameters == TEXT("UnsupportedPrediction")
        || Parameters == TEXT("InvalidatedPrediction") || Parameters == TEXT("InvalidEvidenceEnum"))
    {
        Evidence.Status = Parameters == TEXT("NoLandingGeometry") ? S::Unavailable
            : Parameters == TEXT("UnsupportedPrediction") ? S::UnsupportedModel
            : Parameters == TEXT("InvalidatedPrediction") ? S::InvalidatedPrediction
            : static_cast<S>(255);
        Evidence.PredictionReason = TEXT("AutomationEvidenceReason");
        ExpectedSpeed = ExpectedDrop = ExpectedOverall = O::Unknown;
        SpeedReason = DropReason = Evidence.Status == S::Unavailable ? TEXT("NoLandingPrediction")
            : Evidence.Status == S::UnsupportedModel ? TEXT("UnsupportedMovementModel")
            : Evidence.Status == S::InvalidatedPrediction ? TEXT("PredictionInvalidated")
            : TEXT("InvalidPredictionEvidence");
    }
    else if (Parameters == TEXT("UnknownHistory"))
    {
        Evidence.CompleteMaximumFeetZ.Reset();
        Evidence.HeightHistoryReason = TEXT("AutomationIncompletePrefix");
        ExpectedDrop = ExpectedOverall = O::Unknown;
        DropReason = TEXT("IncompleteHeightHistory");
    }
    else if (Parameters == TEXT("MissingVelocityExceededDrop") || Parameters == TEXT("MissingVelocityAcceptableDrop"))
    {
        Evidence.IncomingVelocity.Reset();
        ExpectedSpeed = ExpectedOverall = O::Unknown;
        SpeedReason = TEXT("InvalidLandingVelocity");
        if (Parameters == TEXT("MissingVelocityExceededDrop"))
        {
            Evidence.CompleteMaximumFeetZ = 501.0;
            ExpectedMeasuredDrop = 401.0;
            ExpectedDrop = ExpectedOverall = O::ExceedsTolerance;
            DropReason = TEXT("PeakDropExceeded");
        }
    }
    else if (Parameters == TEXT("MaximumBelowLanding") || Parameters == TEXT("DropOverflow"))
    {
        Evidence.CompleteMaximumFeetZ = Parameters == TEXT("DropOverflow") ? Max : 99.0;
        if (Parameters == TEXT("DropOverflow")) Evidence.ContactFeet = FVector(0, 0, -Max);
        ExpectedDrop = ExpectedOverall = O::Unknown;
        DropReason = TEXT("InvalidDropGeometry");
    }
    else if (Parameters == TEXT("NegativeWorldHeight"))
    {
        Evidence.ContactFeet = FVector(0, 0, -300);
        Evidence.CompleteMaximumFeetZ = -250.0;
    }
    else if (Parameters == TEXT("EarlierApex") || Parameters == TEXT("FutureApex"))
    {
        FPokemonRecoveryBallisticInput Input;
        Input.StartFeet = FVector(0, 0, 100);
        Input.StartVelocity = FVector(0, 0, 100);
        Input.Gravity = FVector(0, 0, -100);
        Input.PredictionTime = 2.0;
        Input.Movement.bAssumeConstantGravity = true;
        Input.Movement.bAssumeNoFutureForces = true;
        Input.Movement.TerminalDownSpeed = 4000.0;
        const bool bEarlier = Parameters == TEXT("EarlierApex");
        Input.MaxFeetZThroughStart = bEarlier ? 200.0 : 100.0;
        const auto Prediction = FPokemonRecoveryBallistics::Evaluate(Input);
        if (!TestTrue(TEXT("Analytical interval evaluates"), Prediction.HasPrediction())) return false;
        Number(TEXT("Complete peak includes historical or future apex"),
            Prediction.MaxFeetZSinceTakeoff, bEarlier ? 200.0 : 150.0);
        TestEqual(TEXT("Contact at z=100 after two seconds"), Prediction.Sample.Feet.Z, 100.0);
        Evidence.IncomingVelocity = Prediction.Sample.Velocity;
        Evidence.ContactFeet = Prediction.Sample.Feet;
        Evidence.CompleteMaximumFeetZ = Prediction.MaxFeetZSinceTakeoff;
        ExpectedMeasuredSpeed = 100.0;
        ExpectedMeasuredDrop = bEarlier ? 100.0 : 50.0;
    }
    else if (Parameters == TEXT("DownwardOnly"))
    {
        Evidence.IncomingVelocity = FVector(100000, -100000, -200);
    }
    else if (Parameters == TEXT("AscendingVelocity"))
    {
        Evidence.IncomingVelocity = FVector(0, 0, 200);
        ExpectedMeasuredSpeed = 0.0;
    }
    else if (Parameters == TEXT("ZeroLimits"))
    {
        Profile.GetValue().BaseMaxDownwardSpeed = 0.0;
        Profile.GetValue().BaseMaxPeakDrop = 0.0;
        Evidence.IncomingVelocity = FVector::ZeroVector;
        Evidence.CompleteMaximumFeetZ = 100.0;
        ExpectedMeasuredSpeed = ExpectedMeasuredDrop = 0.0;
        ExpectedSpeedLimit = ExpectedDropLimit = 0.0;
    }
    else if (Parameters != TEXT("InvalidEffectiveSnapshot"))
    {
        AddError(FString::Printf(TEXT("Unknown case: %s"), *Parameters));
        return false;
    }

    const auto BeforeProfile = Profile;
    const auto BeforeStamina = Stamina;
    const auto BeforeEvidence = Evidence;
    auto Limits = FPokemonRecoveryTolerance::BuildEffectiveLimits(Profile, Stamina);

    if (Parameters == TEXT("InvalidEffectiveSnapshot"))
    {
        Limits.StaminaFraction = 0.5; // Contradicts the actual 100/100 snapshot.
        const auto Result = FPokemonRecoveryTolerance::Evaluate(Limits, Evidence);
        Check(Result, O::Unknown, O::Unknown, O::Unknown);
        Reason(Result.LandingSpeed.Reasons, TEXT("InvalidEffectiveLimits"));
        Reason(Result.PeakDrop.Reasons, TEXT("InvalidEffectiveLimits"));
        return true;
    }

    const auto BeforeLimits = Limits;
    const auto Result = FPokemonRecoveryTolerance::Evaluate(Limits, Evidence);
    Check(Result, ExpectedSpeed, ExpectedDrop, ExpectedOverall);
    Number(TEXT("Effective speed limit"), Limits.MaxDownwardSpeed, ExpectedSpeedLimit);
    Number(TEXT("Effective drop limit"), Limits.MaxPeakDrop, ExpectedDropLimit);
    Number(TEXT("Stamina fraction"), Limits.StaminaFraction, Stamina.Current / Stamina.Maximum);
    if (ExpectedSpeed != O::Unknown) Number(TEXT("Downward component only"), Result.LandingSpeed.Measured, ExpectedMeasuredSpeed);
    if (ExpectedDrop != O::Unknown) Number(TEXT("Complete peak minus contact feet"), Result.PeakDrop.Measured, ExpectedMeasuredDrop);
    if (SpeedReason) Reason(Result.LandingSpeed.Reasons, SpeedReason);
    if (DropReason) Reason(Result.PeakDrop.Reasons, DropReason);
    if (Evidence.Status != S::SupportedPrediction)
    {
        TestFalse(TEXT("Unsupported numerical speed is ignored"), Result.LandingSpeed.Measured.IsSet());
        TestFalse(TEXT("Unsupported numerical height is ignored"), Result.PeakDrop.Measured.IsSet());
        Reason(Result.LandingSpeed.Reasons, TEXT("AutomationEvidenceReason"));
    }
    if (Parameters == TEXT("UnknownHistory")) Reason(Result.PeakDrop.Reasons, TEXT("AutomationIncompletePrefix"));

    if (Parameters == TEXT("ReadOnly"))
    {
        // Compare values, not struct padding or serialized object addresses.
        const auto Rebuilt = FPokemonRecoveryTolerance::BuildEffectiveLimits(Profile, Stamina);
        const auto Repeated = FPokemonRecoveryTolerance::Evaluate(Rebuilt, Evidence);
        TestTrue(TEXT("Repeated effective limits are identical"), Rebuilt.ProfileId == Limits.ProfileId
            && Rebuilt.StaminaFraction == Limits.StaminaFraction
            && Rebuilt.MaxDownwardSpeed == Limits.MaxDownwardSpeed
            && Rebuilt.MaxPeakDrop == Limits.MaxPeakDrop && Rebuilt.Reasons == Limits.Reasons);
        const auto& P = Profile.GetValue();
        const auto& B = BeforeProfile.GetValue();
        TestTrue(TEXT("Profile input preserved"), P.ProfileId == B.ProfileId && P.bConfigured == B.bConfigured
            && P.BaseMaxDownwardSpeed == B.BaseMaxDownwardSpeed && P.BaseMaxPeakDrop == B.BaseMaxPeakDrop
            && P.SpeedResponse.AtZeroStamina == B.SpeedResponse.AtZeroStamina
            && P.SpeedResponse.AtFullStamina == B.SpeedResponse.AtFullStamina
            && P.DropResponse.AtZeroStamina == B.DropResponse.AtZeroStamina
            && P.DropResponse.AtFullStamina == B.DropResponse.AtFullStamina);
        TestTrue(TEXT("Stamina input preserved"), Stamina.bAvailable == BeforeStamina.bAvailable
            && Stamina.Current == BeforeStamina.Current && Stamina.Maximum == BeforeStamina.Maximum);
        TestTrue(TEXT("Evidence input preserved"), Evidence.Status == BeforeEvidence.Status
            && Evidence.PredictionReason == BeforeEvidence.PredictionReason
            && Evidence.HeightHistoryReason == BeforeEvidence.HeightHistoryReason
            && Evidence.ContactFeet == BeforeEvidence.ContactFeet
            && Evidence.IncomingVelocity == BeforeEvidence.IncomingVelocity
            && Evidence.CompleteMaximumFeetZ == BeforeEvidence.CompleteMaximumFeetZ);
        TestTrue(TEXT("Effective snapshot preserved"), Limits.ProfileId == BeforeLimits.ProfileId
            && Limits.Stamina.bAvailable == BeforeLimits.Stamina.bAvailable
            && Limits.Stamina.Current == BeforeLimits.Stamina.Current && Limits.Stamina.Maximum == BeforeLimits.Stamina.Maximum
            && Limits.StaminaFraction == BeforeLimits.StaminaFraction
            && Limits.MaxDownwardSpeed == BeforeLimits.MaxDownwardSpeed
            && Limits.MaxPeakDrop == BeforeLimits.MaxPeakDrop && Limits.Reasons == BeforeLimits.Reasons);
        Check(Repeated, ExpectedSpeed, ExpectedDrop, ExpectedOverall);
        TestTrue(TEXT("Repeated numerical results and reasons are identical"),
            Repeated.LandingSpeed.Measured == Result.LandingSpeed.Measured
            && Repeated.PeakDrop.Measured == Result.PeakDrop.Measured
            && Repeated.LandingSpeed.Reasons == Result.LandingSpeed.Reasons
            && Repeated.PeakDrop.Reasons == Result.PeakDrop.Reasons);
    }
    return true;
}
#endif
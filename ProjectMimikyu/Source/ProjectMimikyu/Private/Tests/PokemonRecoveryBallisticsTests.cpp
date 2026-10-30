#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Navigation/PokemonRecoveryBallistics.h"

#include <limits>

namespace PokemonRecoveryBallisticsTests
{
	static FPokemonRecoveryBallisticInput MakeInput()
	{
		FPokemonRecoveryBallisticInput Input;
		Input.StartFeet = FVector(10.0, 20.0, 100.0);
		Input.StartVelocity = FVector(40.0, -20.0, 100.0);
		Input.Gravity = FVector(0.0, 0.0, -100.0);

		Input.Movement.bAssumeConstantGravity = true;
		Input.Movement.bAssumeNoFutureForces = true;
		Input.Movement.TerminalDownSpeed = 4000.0;

		return Input;
}

    struct FRecordedCase
    {
        const TCHAR* Name;
        bool bBounceOff;

        FVector TakeoffFeet;
        FVector LaunchVelocity;
        double ContactTime;
        FVector RequiredContactFeet;

        double SeedTime;
        FVector SeedFeet;
        FVector SeedVelocity;

        double EndTime;
        FVector EndFeet;
        FVector EndVelocity;
    };

    // Source: supplied PIE log 1f088272-d032-498a-b9a6-b0107a70a3df.
    // All times below are MovementElapsed except planned ContactTime.
    // Seeds are completed post-outcome Sample events.
    // Endpoints are the last Sample before Landed.
    static const FRecordedCase RecordedCases[] =
    {
        {
            TEXT("F2B10C25_Miss"), false,
            FVector(1090.78, 794.52, 2.21),
            FVector(31.55, 477.28, 838.24),
            0.301, FVector(1100.28, 938.27, 210.22),
            // Lines 2905 -> 3023; launch line 2869.
            0.404, FVector(1103.53, 987.52, 261.05),
            FVector(31.55, 477.28, 441.96),
            1.701, FVector(1144.44, 1606.42, 10.21),
            FVector(31.55, 477.28, -828.84)
        },
        {
            TEXT("813F3246_Miss"), false,
            FVector(960.33, 1055.16, 2.21),
            FVector(388.10, -7.85, 709.44),
            0.381, FVector(1108.31, 1052.16, 201.48),
            // Lines 3417 -> 3513; launch line 3380.
            0.407, FVector(1118.12, 1051.96, 209.65),
            FVector(388.10, -7.85, 311.01),
            1.402, FVector(1504.32, 1044.15, 33.92),
            FVector(388.10, -7.85, -664.21)
        },
        {
            TEXT("44BF910E_Miss"), false,
            FVector(993.84, 988.52, 2.21),
            FVector(-507.19, -6.83, 790.26),
            0.317, FVector(833.08, 986.36, 203.47),
            // Lines 3965 -> 4096; launch line 3928.
            0.406, FVector(787.81, 985.75, 242.37),
            FVector(-507.19, -6.83, 392.16),
            1.609, FVector(177.71, 977.53, 5.09),
            FVector(-507.19, -6.83, -786.68)
        },
        {
            TEXT("B711C4EF_BounceOff"), true,
            FVector(758.48, 1128.15, 2.21),
            FVector(30.55, -386.98, 688.44),
            0.384, FVector(770.22, 979.52, 194.34),
            // Lines 4758 -> 4778; launch line 4696.
            0.404, FVector(771.14, 978.88, 200.51),
            FVector(52.34, 103.89, 302.72),
            1.406, FVector(823.57, 1082.97, 11.97),
            FVector(52.34, 103.89, -679.09)
        },
        {
            TEXT("E7632683_BounceOff"), true,
            FVector(1030.72, 1222.72, 2.21),
            FVector(382.13, 331.30, 850.02),
            0.308, FVector(1148.40, 1324.74, 217.51),
            // Lines 5461 -> 5502; launch line 5362.
            0.406, FVector(1142.93, 1314.49, 244.00),
            FVector(-82.12, -131.01, 209.65),
            1.305, FVector(1069.07, 1196.65, 36.17),
            FVector(-82.12, -131.01, -671.80)
        },
        {
            TEXT("71E52FE5_Miss"), false,
            FVector(500.60, 2702.51, 202.40),
            FVector(-6.08, -358.77, 1540.91),
            0.208, FVector(499.33, 2627.94, 501.50),
            // Lines 6079 -> 6162; launch line 6045.
            0.301, FVector(498.77, 2594.63, 621.44),
            FVector(-6.08, -358.77, 1246.23),
            3.102, FVector(481.75, 1589.66, 267.54),
            FVector(-6.08, -358.77, -1498.91)
        }
    };
}

IMPLEMENT_COMPLEX_AUTOMATION_TEST(FPokemonRecoveryBallisticsTest, 
    "ProjectMimikyu.Traversal.RecoveryBallistics", 
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

void FPokemonRecoveryBallisticsTest::GetTests(TArray<FString>& OutBeautifiedNames, TArray<FString>& OutTestCommands) const
{
    const TCHAR* Cases[] =
    {
        TEXT("Equations"),
        TEXT("HeightHistory"),
        TEXT("Validation"),
        TEXT("RecordedObserved"),
        TEXT("RecordedPlanned")
    };

    for (const TCHAR* Name : Cases)
    {
        OutBeautifiedNames.Add(Name);
        OutTestCommands.Add(Name);
    }
}
bool FPokemonRecoveryBallisticsTest::RunTest(const FString& Parameters)
{
    using namespace PokemonRecoveryBallisticsTests;
    using EStatus = EPokemonRecoveryBallisticStatus;

    if (Parameters == TEXT("Equations"))
    {
        struct FEquationCase
        {
            double Time;
            FVector Feet;
            FVector Velocity;
            double MaximumZ;
        };

        const FEquationCase Cases[] =
        {
            { 0.0, FVector(10, 20, 100), FVector(40, -20, 100), 100.0 },
            { 0.5, FVector(30, 10, 137.5), FVector(40, -20, 50), 137.5 },
            { 1.0, FVector(50, 0, 150), FVector(40, -20, 0), 150.0 },
            { 2.0, FVector(90, -20, 100), FVector(40, -20, -100), 150.0 }
        };

        const FPokemonRecoveryBallisticResult DefaultResult;
        TestFalse(TEXT("Default result has no prediction"), DefaultResult.HasPrediction());

        for (const FEquationCase& Expected : Cases)
        {
            auto Input = MakeInput();
            Input.PredictionTime = Expected.Time;

            const auto Result = FPokemonRecoveryBallistics().Evaluate(Input);

            TestTrue(TEXT("Evaluation succeeded"), Result.HasPrediction());
            TestTrue(TEXT("Position matches"),
                Result.Sample.Feet.Equals(Expected.Feet, 1.e-8));
            TestTrue(TEXT("Velocity matches"),
                Result.Sample.Velocity.Equals(Expected.Velocity, 1.e-8));
            TestTrue(TEXT("Maximum includes only elapsed segment"),
                FMath::IsNearlyEqual(
                    Result.MaxFeetZInSegment, Expected.MaximumZ, 1.e-8));
            TestFalse(TEXT("Local evaluation cannot invent jump history"),
                Result.MaxFeetZSinceTakeoff.IsSet());
        }

        return true;
    }

    if (Parameters == TEXT("HeightHistory"))
    {
        auto Input = MakeInput();
        Input.StartFeet = FVector(0, 0, 500);
        Input.StartVelocity = FVector(0, 0, -100);
        Input.PredictionTime = 1.0;
        Input.MaxFeetZThroughStart = 900.0;

        auto Result = FPokemonRecoveryBallistics().Evaluate(Input);

        TestTrue(TEXT("Descending seed evaluates"), Result.HasPrediction());
        TestTrue(TEXT("Descending interval maximum is its starting height"),
            FMath::IsNearlyEqual(Result.MaxFeetZInSegment, 500.0, 1.e-8));
        TestTrue(TEXT("Earlier jump apex is retained"),
            Result.MaxFeetZSinceTakeoff.IsSet()
            && FMath::IsNearlyEqual(
                Result.MaxFeetZSinceTakeoff.GetValue(), 900.0, 1.e-8));

        Input.MaxFeetZThroughStart.Reset();
        Result = FPokemonRecoveryBallistics().Evaluate(Input);

        TestTrue(TEXT("Missing history does not prevent local mathematics"),
            Result.HasPrediction());
        TestFalse(TEXT("Descending seed cannot reconstruct prior apex"),
            Result.MaxFeetZSinceTakeoff.IsSet());

        Input = MakeInput();
        Input.MaxFeetZThroughStart = Input.StartFeet.Z;
        Input.PredictionTime = 1.0;

        const auto FirstSegment = FPokemonRecoveryBallistics().Evaluate(Input);
        if (!TestTrue(TEXT("First segment evaluates"), FirstSegment.HasPrediction()))
        {
            return false;
        }

        Input.StartFeet = FirstSegment.Sample.Feet;
        Input.StartVelocity = FVector(0, 0, 200);
        Input.MaxFeetZThroughStart = FirstSegment.MaxFeetZSinceTakeoff;
        Input.PredictionTime = 2.0;

        const auto AfterImpulse = FPokemonRecoveryBallistics().Evaluate(Input);

        TestTrue(TEXT("Replacement-velocity segment evaluates"),
            AfterImpulse.HasPrediction());
        TestTrue(TEXT("New apex extends accumulated history"),
            AfterImpulse.MaxFeetZSinceTakeoff.IsSet()
            && FMath::IsNearlyEqual(
                AfterImpulse.MaxFeetZSinceTakeoff.GetValue(), 350.0, 1.e-8));

        return true;
    }

    if (Parameters == TEXT("Validation"))
    {
        const double NaN = std::numeric_limits<double>::quiet_NaN();
        const double Infinity = std::numeric_limits<double>::infinity();

        const auto Reject = [this](const TCHAR* Name, auto Mutate, EStatus Expected)
            {
                auto Input = MakeInput();
                Mutate(Input);

                const auto Result = FPokemonRecoveryBallistics().Evaluate(Input);

                TestTrue(Name, Result.Status == Expected);
                TestFalse(TEXT("Rejected input has no prediction"),
                    Result.HasPrediction());
                TestFalse(TEXT("Rejected input exposes no complete height history"),
                    Result.MaxFeetZSinceTakeoff.IsSet());
            };

        Reject(TEXT("Nonfinite feet"),
            [NaN](auto& I) { I.StartFeet.X = NaN; }, EStatus::InvalidInput);
        Reject(TEXT("Nonfinite velocity"),
            [Infinity](auto& I) { I.StartVelocity.Y = Infinity; },
            EStatus::InvalidInput);
        Reject(TEXT("Nonfinite gravity"),
            [NaN](auto& I) { I.Gravity.Z = NaN; }, EStatus::InvalidInput);
        Reject(TEXT("Nonfinite time"),
            [Infinity](auto& I) { I.PredictionTime = Infinity; },
            EStatus::InvalidInput);
        Reject(TEXT("Invalid time bound"),
            [](auto& I) { I.MaxPredictionTime = 0.0; }, EStatus::InvalidInput);
        Reject(TEXT("Negative time"),
            [](auto& I) { I.PredictionTime = -0.01; }, EStatus::TimeOutOfRange);
        Reject(TEXT("Time beyond bound"),
            [](auto& I) { I.PredictionTime = 5.01; }, EStatus::TimeOutOfRange);
        Reject(TEXT("Nonfinite history"),
            [NaN](auto& I) { I.MaxFeetZThroughStart = NaN; },
            EStatus::InvalidInput);
        Reject(TEXT("History below starting height"),
            [](auto& I) { I.MaxFeetZThroughStart = 99.0; },
            EStatus::InvalidInput);
        Reject(TEXT("Zero gravity"),
            [](auto& I) { I.Gravity.Z = 0.0; }, EStatus::UnsupportedMotion);
        Reject(TEXT("Upward gravity"),
            [](auto& I) { I.Gravity.Z = 100.0; }, EStatus::UnsupportedMotion);
        Reject(TEXT("Lateral gravity"),
            [](auto& I) { I.Gravity.X = 1.0; }, EStatus::UnsupportedMotion);
        Reject(TEXT("Constant gravity not assumed"),
            [](auto& I) { I.Movement.bAssumeConstantGravity = false; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Future forces not excluded"),
            [](auto& I) { I.Movement.bAssumeNoFutureForces = false; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Root motion"),
            [](auto& I) { I.Movement.bHasRootMotion = true; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Pending launch"),
            [](auto& I) { I.Movement.bHasPendingLaunch = true; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Additional acceleration"),
            [](auto& I) { I.Movement.NonGravityAcceleration.X = 1.0; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Falling friction"),
            [](auto& I) { I.Movement.FallingLateralFriction = 0.1; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Falling braking"),
            [](auto& I) { I.Movement.BrakingDecelerationFalling = 1.0; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Effective braking friction"),
            [](auto& I) { I.Movement.EffectiveBrakingFriction = 0.1; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Invalid terminal speed"),
            [](auto& I) { I.Movement.TerminalDownSpeed = 0.0; },
            EStatus::InvalidInput);
        Reject(TEXT("Interval reaches unsupported terminal clamp"),
            [](auto& I)
            {
                I.PredictionTime = 3.0;
                I.Movement.TerminalDownSpeed = 150.0;
            },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Starting velocity already exceeds terminal speed"),
            [](auto& I) { I.StartVelocity.Z = -4001.0; },
            EStatus::UnsupportedMotion);
        Reject(TEXT("Finite inputs can still overflow"),
            [](auto& I)
            {
                I.StartFeet.X = std::numeric_limits<double>::max();
                I.StartVelocity.X = std::numeric_limits<double>::max();
                I.PredictionTime = 2.0;
            },
            EStatus::NonFiniteResult);

        auto Boundary = MakeInput();
        Boundary.PredictionTime = Boundary.MaxPredictionTime;
        TestTrue(TEXT("Exact time bound is allowed"),
            FPokemonRecoveryBallistics::Evaluate(Boundary).HasPrediction());

        return true;
    }

    const bool bObserved = Parameters == TEXT("RecordedObserved");
    const bool bPlanned = Parameters == TEXT("RecordedPlanned");

    if (!bObserved && !bPlanned)
    {
        AddError(TEXT("Unknown recovery-ballistics test case"));
        return false;
    }

    for (const FRecordedCase& Recorded : RecordedCases)
    {
        auto Input = MakeInput();
        Input.Gravity = FVector(0.0, 0.0, -980.0);

        if (bObserved)
        {
            Input.StartFeet = Recorded.SeedFeet;
            Input.StartVelocity = Recorded.SeedVelocity;
            Input.PredictionTime = Recorded.EndTime - Recorded.SeedTime;

            // These snapshots do not establish complete earlier height history.
            Input.MaxFeetZThroughStart.Reset();
        }
        else
        {
            Input.StartFeet = Recorded.TakeoffFeet;
            Input.StartVelocity = Recorded.LaunchVelocity;
            Input.PredictionTime = Recorded.ContactTime;
            Input.MaxFeetZThroughStart = Recorded.TakeoffFeet.Z;

            const auto Contact = FPokemonRecoveryBallistics::Evaluate(Input);

            if (!TestTrue(
                FString::Printf(TEXT("%s contact evaluates"), Recorded.Name),
                Contact.HasPrediction()))
            {
                return false;
            }

            TestTrue(
                FString::Printf(TEXT("%s logged contact agrees"), Recorded.Name),
                FVector::Dist(
                    Contact.Sample.Feet,
                    Recorded.RequiredContactFeet) <= 1.0);

            // Use one internally consistent planned contact state.
            // The printed contact time and position are independently rounded.
            Input.StartFeet = Contact.Sample.Feet;
            Input.StartVelocity = Contact.Sample.Velocity;
            Input.MaxFeetZThroughStart = Contact.MaxFeetZSinceTakeoff;
            Input.PredictionTime = Recorded.EndTime - Recorded.ContactTime;
        }

        const auto Result = FPokemonRecoveryBallistics::Evaluate(Input);

        if (!TestTrue(
            FString::Printf(TEXT("%s evaluates"), Recorded.Name),
            Result.HasPrediction()))
        {
            return false;
        }

        const double PositionError =FVector::Dist(Result.Sample.Feet, Recorded.EndFeet);

        const double VelocityError =FVector::Dist(Result.Sample.Velocity, Recorded.EndVelocity);

        AddInfo(FString::Printf(
            TEXT("%s | %s | PositionError=%.6f cm | VelocityError=%.6f cm/s"),
            Recorded.Name,
            bObserved ? TEXT("ObservedSeed") : TEXT("PlannedContact"),
            PositionError,
            VelocityError));

        if (bPlanned && Recorded.bBounceOff)
        {
            // Negative control: the original arc omits the actual impact.
            TestTrue(
                FString::Printf(TEXT("%s requires a replacement seed"),
                    Recorded.Name),
                PositionError > 100.0 && VelocityError > 100.0);
        }
        else
        {
            // Logged time is rounded to milliseconds; vectors to hundredths.
            TestTrue(
                FString::Printf(TEXT("%s position matches recording"),
                    Recorded.Name),
                PositionError <= 2.0);

            TestTrue(
                FString::Printf(TEXT("%s velocity matches recording"),
                    Recorded.Name),
                VelocityError <= 2.0);
        }
    }

    return true;
}

#endif
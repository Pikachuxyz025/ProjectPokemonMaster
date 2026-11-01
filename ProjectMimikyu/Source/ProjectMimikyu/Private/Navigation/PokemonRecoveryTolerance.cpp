


#include "Navigation/PokemonRecoveryTolerance.h"

namespace PokemonRecoveryTolerancePrivate
{
	static bool IsFiniteVector(const FVector& Vector)
	{
		return FMath::IsFinite(Vector.X)
			&& FMath::IsFinite(Vector.Y)
			&& FMath::IsFinite(Vector.Z);
	}

	static bool IsNonnegativeFinite(double Value)
	{
		return FMath::IsFinite(Value) && Value >= 0.0;
	}

	static bool IsValidStamina(const FPokemonRecoveryStaminaSnapshot& Stamina)
	{
		return Stamina.bAvailable
			&& FMath::IsFinite(Stamina.Current)
			&& FMath::IsFinite(Stamina.Maximum)
			&& Stamina.Maximum > 0.0
			&& Stamina.Current >= 0.0
			&& Stamina.Current <= Stamina.Maximum;
	}

	static bool IsValidResponse(const FPokemonRecoveryStaminaResponse& Response)
	{
		return IsNonnegativeFinite(Response.AtZeroStamina)
			&& IsNonnegativeFinite(Response.AtFullStamina)
			&& Response.AtZeroStamina <= Response.AtFullStamina;
	}

	static double  SampleResponse(const FPokemonRecoveryStaminaResponse& Response, double Fraction)
	{
		// Preserve authored endpoint values exactly.
		if(Fraction==0.0)
		{
			return Response.AtZeroStamina;
		}

		if (Fraction == 1.0)
		{
			return Response.AtFullStamina;
		}

		return FMath::Lerp(
			Response.AtZeroStamina,
			Response.AtFullStamina,
			Fraction);
	}

	static void AddReason(TArray<FName>& Reasons, const TCHAR* Reason)
	{
		Reasons.AddUnique(FName(Reason));
	}

	static void AssessCriterion(FPokemonRecoveryCriterionAssessment& Assessment, const TCHAR* ExceededReason)
	{
		if (!Assessment.Reasons.IsEmpty()
			|| !Assessment.Measured.IsSet()
			|| !Assessment.Limit.IsSet())
		{
			return;
		}
			
		// Equality satifies the configured limit.
		// No hidden numerical allowance changes the policy.
		if(Assessment.Measured.GetValue()<=Assessment.Limit.GetValue())
		{
			Assessment.Outcome = EPokemonRecoveryToleranceOutcome::WithinTolerance;
		}
		else
		{
			Assessment.Outcome = EPokemonRecoveryToleranceOutcome::ExceedsTolerance;
			AddReason(Assessment.Reasons, ExceededReason);
		}
	}
}


FPokemonRecoveryEffectiveLimits
FPokemonRecoveryTolerance::BuildEffectiveLimits(
    const TOptional<FPokemonRecoveryToleranceProfileSnapshot>& Profile,
    const FPokemonRecoveryStaminaSnapshot& Stamina)
{
    using namespace PokemonRecoveryTolerancePrivate;

    FPokemonRecoveryEffectiveLimits Result;
    Result.Stamina = Stamina;

    const auto InvalidProfile = [&](const TCHAR* Detail)
        {
            AddReason(Result.Reasons, TEXT("InvalidProfile"));
            AddReason(Result.Reasons, Detail);
        };

    if (!Profile.IsSet())
    {
        AddReason(Result.Reasons, TEXT("MissingProfile"));
    }
    else
    {
        const FPokemonRecoveryToleranceProfileSnapshot& Config =
            Profile.GetValue();

        Result.ProfileId = Config.ProfileId;

        if (!Config.bConfigured)
        {
            InvalidProfile(TEXT("ProfileNotConfigured"));
        }

        if (!IsNonnegativeFinite(Config.BaseMaxDownwardSpeed))
        {
            InvalidProfile(TEXT("InvalidBaseLandingSpeed"));
        }

        if (!IsNonnegativeFinite(Config.BaseMaxPeakDrop))
        {
            InvalidProfile(TEXT("InvalidBasePeakDrop"));
        }

        if (!IsValidResponse(Config.SpeedResponse))
        {
            InvalidProfile(TEXT("InvalidSpeedStaminaResponse"));
        }

        if (!IsValidResponse(Config.DropResponse))
        {
            InvalidProfile(TEXT("InvalidDropStaminaResponse"));
        }

        if (Result.Reasons.IsEmpty())
        {
            // Validate the largest configured products, not just
            // the products at the current stamina fraction.
            const double MaximumSpeedLimit =
                Config.BaseMaxDownwardSpeed
                * Config.SpeedResponse.AtFullStamina;

            const double MaximumDropLimit =
                Config.BaseMaxPeakDrop
                * Config.DropResponse.AtFullStamina;

            if (!IsNonnegativeFinite(MaximumSpeedLimit)
                || !IsNonnegativeFinite(MaximumDropLimit))
            {
                InvalidProfile(TEXT("EffectiveLimitOverflow"));
            }
        }
    }

    if (!Stamina.bAvailable)
    {
        AddReason(Result.Reasons, TEXT("MissingStamina"));
    }
    else if (!IsValidStamina(Stamina))
    {
        AddReason(Result.Reasons, TEXT("InvalidStamina"));
    }
    else
    {
        Result.StaminaFraction = Stamina.Current / Stamina.Maximum;
    }

    if (!Result.Reasons.IsEmpty())
    {
        return Result;
    }

    const FPokemonRecoveryToleranceProfileSnapshot& Config = Profile.GetValue();

    const double Fraction = Result.StaminaFraction.GetValue();

    const double SpeedMultiplier = SampleResponse(Config.SpeedResponse, Fraction);

    const double DropMultiplier = SampleResponse(Config.DropResponse, Fraction);

    const double SpeedLimit = Config.BaseMaxDownwardSpeed * SpeedMultiplier;

    const double DropLimit = Config.BaseMaxPeakDrop * DropMultiplier;

    if (!IsNonnegativeFinite(SpeedLimit) || !IsNonnegativeFinite(DropLimit))
    {
        InvalidProfile(TEXT("EffectiveLimitOverflow"));
        return Result;
    }

    Result.MaxDownwardSpeed = SpeedLimit;
    Result.MaxPeakDrop = DropLimit;

    return Result;
}

FPokemonRecoveryToleranceResult FPokemonRecoveryTolerance::Evaluate(
    const FPokemonRecoveryEffectiveLimits& Limits,
    const FPokemonRecoveryLandingEvidence& Evidence
)
{
    using namespace PokemonRecoveryTolerancePrivate;
    using EOutcome = EPokemonRecoveryToleranceOutcome;
    using EEvidence = EPokemonRecoveryLandingEvidenceStatus;

    FPokemonRecoveryToleranceResult Result;


    Result.LandingSpeed.Limit = Limits.MaxDownwardSpeed;
    Result.PeakDrop.Limit = Limits.MaxPeakDrop;

    Result.LandingSpeed.Reasons = Limits.Reasons;
    Result.PeakDrop.Reasons = Limits.Reasons;

    const auto AddSharedReason = [&](const FName Reason)
        {
            if (!Reason.IsNone())
            {
                Result.LandingSpeed.Reasons.AddUnique(Reason);
                Result.PeakDrop.Reasons.AddUnique(Reason);
            }
        };

    // Defensive validation of the effective snapshot contract.
    // Normal callers obtain this snapshot from BuildEffectiveLimits().
    const bool bValidEffectiveSnapshot = IsValidStamina(Limits.Stamina)
        && Limits.StaminaFraction.IsSet()
        && FMath::IsFinite(Limits.StaminaFraction.GetValue())
        && Limits.StaminaFraction.GetValue() == Limits.Stamina.Current / Limits.Stamina.Maximum
        && Limits.MaxDownwardSpeed.IsSet()
        && IsNonnegativeFinite(Limits.MaxDownwardSpeed.GetValue())
        && Limits.MaxPeakDrop.IsSet()
        && IsNonnegativeFinite(Limits.MaxPeakDrop.GetValue());

    if (Limits.Reasons.IsEmpty() && !bValidEffectiveSnapshot)
    {
        AddSharedReason(TEXT("InvalidEffectiveLimits"));
    }

    if (Evidence.Status != EEvidence::SupportedPrediction)
    {
        switch (Evidence.Status)
        {
        case EEvidence::Unavailable:
            AddSharedReason(TEXT("NoLandingPrediction"));
            break;

        case EEvidence::UnsupportedModel:
            AddSharedReason(TEXT("UnsupportedMovementModel"));
            break;

        case EEvidence::InvalidatedPrediction:
            AddSharedReason(TEXT("PredictionInvalidated"));
            break;

        default:
            AddSharedReason(TEXT("InvalidPredictionEvidence"));
            break;
        }

        AddSharedReason(Evidence.PredictionReason);

        // Numerical payload from an unsuccessful prediction is
        // not usable landing evidence.
        return Result;
    }

    if (!Evidence.ContactFeet.IsSet()
        || !IsFiniteVector(Evidence.ContactFeet.GetValue()))
    {
        AddSharedReason(TEXT("InvalidLandingGeometry"));
        return Result;
    }

    if (!Evidence.IncomingVelocity.IsSet()
        || !IsFiniteVector(Evidence.IncomingVelocity.GetValue()))
    {
        AddReason(Result.LandingSpeed.Reasons, TEXT("InvalidLandingVelocity"));
        return Result;
    }
    else
    {
        Result.LandingSpeed.Measured = FMath::Max(0.0, -Evidence.IncomingVelocity.GetValue().Z);
    }

    if (!Evidence.CompleteMaximumFeetZ.IsSet())
    {
        AddReason(Result.PeakDrop.Reasons, TEXT("IncompleteHeightHistory"));

        if (!Evidence.HeightHistoryReason.IsNone())
        {
            Result.PeakDrop.Reasons.AddUnique(Evidence.HeightHistoryReason);
        }
    }
    else
    {
        const double MaximumFeetZ = Evidence.CompleteMaximumFeetZ.GetValue();

        const double ContactFeetZ = Evidence.ContactFeet.GetValue().Z;

        if (!FMath::IsFinite(MaximumFeetZ))
        {
            AddReason(Result.PeakDrop.Reasons, TEXT("InvalidHeightHistory"));
        }
        else if (MaximumFeetZ < ContactFeetZ)
        {
            // Absolute world Z may be negative. What is invalid is
            // claiming a complete maximum below the landing itself.
            AddReason(Result.PeakDrop.Reasons, TEXT("InvalidDropGeometry"));
        }
        else
        {
            const double Drop = MaximumFeetZ - ContactFeetZ;

            if (!IsNonnegativeFinite(Drop))
            {
                AddReason(
                    Result.PeakDrop.Reasons,
                    TEXT("InvalidDropGeometry"));
            }
            else
            {
                Result.PeakDrop.Measured = Drop;
            }
        }
    }

    AssessCriterion(Result.LandingSpeed, TEXT("LandingSpeedExceeded"));

    AssessCriterion(Result.PeakDrop, TEXT("PeakDropExceeded"));

    if (Result.LandingSpeed.Outcome == EOutcome::ExceedsTolerance
        || Result.PeakDrop.Outcome == EOutcome::ExceedsTolerance)
    {
        Result.Overall = EOutcome::ExceedsTolerance;
    }
    else if (Result.LandingSpeed.Outcome == EOutcome::WithinTolerance
        && Result.PeakDrop.Outcome == EOutcome::WithinTolerance)
    {
        Result.Overall = EOutcome::WithinTolerance;
    }

    // Otherwise the default overall result remains Unknown.
    return Result;
}

const TCHAR* FPokemonRecoveryTolerance::OutcomeName(
    EPokemonRecoveryToleranceOutcome Outcome)
{
    switch (Outcome)
    {
    case EPokemonRecoveryToleranceOutcome::WithinTolerance:
        return TEXT("WithinTolerance");

    case EPokemonRecoveryToleranceOutcome::ExceedsTolerance:
        return TEXT("ExceedsTolerance");

    default:
        return TEXT("Unknown");
    }
}
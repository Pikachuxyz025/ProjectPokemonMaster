


#include "Navigation/PokemonRecoveryBallistics.h"

namespace PokemonRecoveryBallisticsPrivate
{
	static bool IsFiniteVector(const FVector& Value)
	{
		return FMath::IsFinite(Value.X) 
			&& FMath::IsFinite(Value.Y) 
			&& FMath::IsFinite(Value.Z);
	}
}

FPokemonRecoveryBallisticResult FPokemonRecoveryBallistics::Evaluate(const FPokemonRecoveryBallisticInput& Input)
{
	using EStatus = EPokemonRecoveryBallisticStatus;
	using namespace PokemonRecoveryBallisticsPrivate;

	const auto Fail = [](EStatus Status, const TCHAR* Reason)
		{
			FPokemonRecoveryBallisticResult Result;
			Result.Status = Status;
			Result.Reason = FName(Reason);
			return Result;
		};

	const FPokemonRecoveryMovementAssumptions& Motion = Input.Movement;

	if(!IsFiniteVector(Input.StartFeet)
		|| !IsFiniteVector(Input.StartVelocity)
		|| !IsFiniteVector(Input.Gravity)
		|| !IsFiniteVector(Motion.NonGravityAcceleration)
		|| !FMath::IsFinite(Input.PredictionTime)
		|| !FMath::IsFinite(Input.MaxPredictionTime)
		|| !FMath::IsFinite(Motion.FallingLateralFriction)
		|| !FMath::IsFinite(Motion.BrakingDecelerationFalling)
		|| !FMath::IsFinite(Motion.EffectiveBrakingFriction)
		|| !FMath::IsFinite(Motion.TerminalDownSpeed))
	{
		return Fail(EStatus::InvalidInput, TEXT("NonFiniteInput"));
	}

	if (Input.MaxPredictionTime <= 0.0
		|| Motion.TerminalDownSpeed <= 0.0
		|| Motion.FallingLateralFriction < 0.0
		|| Motion.BrakingDecelerationFalling < 0.0
		|| Motion.EffectiveBrakingFriction < 0.0)
	{
		return Fail(EStatus::InvalidInput, TEXT("InvalidMovementParameters"));
	}

	if (Input.MaxFeetZThroughStart.IsSet())
	{
		const double PriorMaximum = Input.MaxFeetZThroughStart.GetValue();

		if(!FMath::IsFinite(PriorMaximum)
			||PriorMaximum<Input.StartFeet.Z)
		{
			return Fail(EStatus::InvalidInput, TEXT("InvalidHeightHistory"));
		}
	}
	
	if(Input.PredictionTime<0.0
		|| Input.PredictionTime>Input.MaxPredictionTime)
	{
		return Fail(EStatus::TimeOutOfRange, TEXT("PredictionTimeOutOfRange"));
	}

	// Increment 1 supports upright, constant downward gravity only.
	if (Input.Gravity.X != 0.0
		|| Input.Gravity.Y != 0.0
		|| Input.Gravity.Z >= 0.0)
	{
		return Fail(EStatus::UnsupportedMotion, TEXT("NonDownwardGravity"));
	}

	if (!Motion.bAssumeConstantGravity
		|| !Motion.bAssumeNoFutureForces
		|| Motion.bHasRootMotion
		|| Motion.bHasPendingLaunch
		|| !Motion.NonGravityAcceleration.IsZero()
		|| Motion.FallingLateralFriction != 0.0
		|| Motion.BrakingDecelerationFalling != 0.0
		|| Motion.EffectiveBrakingFriction != 0.0)
	{
		return Fail(EStatus::UnsupportedMotion, TEXT("UnsupportedMovement"));
	}

	const double Time = Input.PredictionTime;
	const double GravityZ = Input.Gravity.Z;

	// Compute scalars first so overflow can be rejected before constructing
	// an FVector that could trigger Unreal's nonfinite-vector diagnostics.
	const double X = Input.StartFeet.X + Input.StartVelocity.X * Time;

	const double Y = Input.StartFeet.Y + Input.StartVelocity.Y * Time;

	const double Z = Input.StartFeet.Z 
		+ Input.StartVelocity.Z * Time 
		+ 0.5 * GravityZ * Time * Time;

	const double VelocityZ = Input.StartVelocity.Z + GravityZ * Time;

	if (!FMath::IsFinite(X)
		|| !FMath::IsFinite(Y)
		|| !FMath::IsFinite(Z)
		|| !FMath::IsFinite(VelocityZ))
	{
		return Fail(EStatus::NonFiniteResult, TEXT("PredictionOverflow"));
	}

	// Downward speed increases monotonically under this gravity model.
	if (Input.StartVelocity.Z < -Motion.TerminalDownSpeed
		|| VelocityZ < -Motion.TerminalDownSpeed)
	{
		return Fail(EStatus::UnsupportedMotion, TEXT("TerminalSpeedRequired"));
	}

	const double PeakTime = Input.StartVelocity.Z>0.0
		? FMath::Min<double>(
			Time, Input.StartVelocity.Z / -GravityZ)
		: 0.0;

	const double MaximumZ = Input.StartFeet.Z
		+ Input.StartVelocity.Z * PeakTime
		+ 0.5 * GravityZ * PeakTime * PeakTime;

	if(!FMath::IsFinite(MaximumZ))
	{
		return Fail(EStatus::NonFiniteResult, TEXT("HeightOverflow"));
	}

	FPokemonRecoveryBallisticResult Result;
	Result.Status = EStatus::Evaluated;
	Result.Reason = NAME_None;

	Result.Sample.Time = Time;
	Result.Sample.Feet = FVector(X, Y, Z);
	Result.Sample.Velocity = FVector(Input.StartVelocity.X, Input.StartVelocity.Y, VelocityZ);

	Result.MaxFeetZInSegment = MaximumZ;

	if (Input.MaxFeetZThroughStart.IsSet())
	{
		Result.MaxFeetZSinceTakeoff = FMath::Max<double>(
			MaximumZ, Input.MaxFeetZThroughStart.GetValue());
	}

	return Result;
}

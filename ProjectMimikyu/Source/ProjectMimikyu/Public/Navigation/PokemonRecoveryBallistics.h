

#pragma once

#include "CoreMinimal.h"
#include "Misc/Optional.h"

enum class EPokemonRecoveryBallisticStatus :uint8
{
	NotEvaluated,
	Evaluated,
	InvalidInput,
	TimeOutOfRange,
	UnsupportedMotion,
	NonFiniteResult,
 };

struct PROJECTMIMIKYU_API FPokemonRecoveryMovementAssumptions
{
	// Caller declarations, not guarantees established by this evaluator.
	bool bAssumeConstantGravity = false;
	bool bAssumeNoFutureForces = false;

	bool bHasRootMotion = false;
	bool bHasPendingLaunch = false;

	FVector NonGravityAcceleration = FVector::ZeroVector;

	double FallingLateralFriction = 0.0;
	double BrakingDecelerationFalling = 0.0;
	double EffectiveBrakingFriction = 0.0;

	// Physical terminal speed, not an acceptable Landing-speed limit.
	// This evaluator rejects intervals that require terminal-speed clamping.
	double TerminalDownSpeed = 0.0;
};

struct PROJECTMIMIKYU_API FPokemonRecoveryBallisticInput
{
	// World-space capsule feet; distances in cm, velocities in cm/s.
	FVector StartFeet = FVector::ZeroVector;
	FVector StartVelocity = FVector::ZeroVector;
	FVector Gravity = FVector::ZeroVector;

	// Movement simulation seconds from this explicit starting state.
	double PredictionTime = 0.0;

	// Mathmatical query bound only; not a recovery-safety threshold.
	double MaxPredictionTime = 5.0;

	FPokemonRecoveryMovementAssumptions Movement;

	// When set, this must be the complete maximum feet height from
	// this jump's takeoff through StartFeet, including prior apices.
	// Omit when that history is unknown. Sparse samples alone are
	// insufficient to establish the exact historical maximum.
	TOptional<double> MaxFeetZThroughStart;
};


struct PROJECTMIMIKYU_API FPokemonRecoveryBallisticSample
{
	double Time = 0.0;
	FVector Feet = FVector::ZeroVector;
	FVector Velocity = FVector::ZeroVector;
};

struct PROJECTMIMIKYU_API FPokemonRecoveryBallisticResult
{
	EPokemonRecoveryBallisticStatus Status = EPokemonRecoveryBallisticStatus::NotEvaluated;

	FName Reason = TEXT("NotEvaluated");

	// Read prediction fields only when HasPrediction() is true.
	FPokemonRecoveryBallisticSample Sample;

	// Maximum over [0, Sample.Time], including an apex only if crossed.
	double MaxFeetZInSegment = 0.0;

	// Maximum from takeoff through the queried time.
	// Remains unset when the preceding history was not supplied.
	TOptional<double> MaxFeetZSinceTakeoff;

	bool HasPrediction() const
	{
		return Status == EPokemonRecoveryBallisticStatus::Evaluated;
	}
};

// Pure mathmatics. Performs no world queries or gameplay operations.
struct PROJECTMIMIKYU_API FPokemonRecoveryBallistics
{
	static FPokemonRecoveryBallisticResult Evaluate(const FPokemonRecoveryBallisticInput& Input);
};

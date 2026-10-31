#pragma once

#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Navigation/PokemonRecoveryBallistics.h"

class APokemon_Parent;

enum class EPokemonRecoveryContinuationStatus :uint8
{
	NotEvaluated,
	LandingGeometryFound,
	NoLandingWithinBounds,
	StartBlocked,
	CollisionUnresolved,
	LandingRejected,
	BudgetExhausted,
	InvalidInput,
	UnsupportedModel
};

struct PROJECTMIMIKYU_API FPokemonRecoveryContinuationSettings
{
	// Explicit diagnostic assumptions: query today's geometry as stationary.
	// This does not establish that actors or physics volumes remain unchanged.
	bool bAssumeFrozenWorld = false;

	// Movement simulation seconds from Seed.StartFeet/StartVelocity.
	double Horizon = 2.0;

	// Bound on capsule-center travel, using a conservative speed upper bound.
	double MaxTravel = 4000.0;

	double MaxStepTime = 0.05;
	double MaxSegmentTravel = 40.0;
	double MaxChordDeviation = 0.5;

	// Numerical resolution, not gameplay safety thresholds.
	double ContactTimeTolerance = 0.0005;
	double ContactTravelTolerance = 0.25;

	int32 MaxRefinementDepth = 16;

	// Conservative world-query work units, not an exact query counter.
	// Each sweep/overlap costs one. The existing landing check reserves eleven.
	int32 MaxQueryWork = 512;
};

struct PROJECTMIMIKYU_API FPokemonRecoveryContinuationResult
{
	EPokemonRecoveryContinuationStatus Status = EPokemonRecoveryContinuationStatus::NotEvaluated;

	FName Reason = TEXT("NotEvaluated");

	int32 QueryWorkUsed = 0;

	// Only intervals whose enlarged sweeps were clear advance this value.
	double ClearThroughTime = 0.0;

	// Includes the furthest coarse interval queried, even if a hit ended it early.
	double QueriedTravelUpperBound = 0.0;

	// Numerical search interval; not an exact time-of-impact certificate.
	double ContactIntervalStart = 0.0;
	double ContactIntervalEnd = 0.0;

	FHitResult Hit;

	// Read the following landing fields only when HasLandingGeometry() is true.
	FPokemonRecoveryBallisticResult ContactPrediction;

	// Feet at the uninflated sweep hit, before adding normal floor clearance.
	FVector ContactFeet = FVector::ZeroVector;

	// Diagnostic supported pose, including CharacterMovement's floor gap.
	// Never applied to the actor.
	FVector SupportedFeet = FVector::ZeroVector;

	double ContactPositionDiscrepancy = 0.0;
	double ContactChordDeviationBound = 0.0;

	bool HasLandingGeometry() const
	{
		return Status ==
			EPokemonRecoveryContinuationStatus::LandingGeometryFound;
	}
};

// Read-only world queries on the game thread.
// A successful result describes current landing geometry at finite resolution.
// It does not authorize recovery, establish safe impact speed, or guarantee
// future collision geometry, movement inputs, gravity, or support.
struct PROJECTMIMIKYU_API FPokemonRecoveryContinuation
{
	static FPokemonRecoveryContinuationResult Evaluate(
		APokemon_Parent& Pokemon,
		const FPokemonRecoveryBallisticInput& Seed,
		const FPokemonRecoveryContinuationSettings& Settings);
};
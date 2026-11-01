

#pragma once

#include "CoreMinimal.h"
#include "Misc/Optional.h"

enum class EPokemonRecoveryToleranceOutcome : uint8
{
	Unknown,
	WithinTolerance,
	ExceedsTolerance
};


enum class EPokemonRecoveryLandingEvidenceStatus :uint8
{
	Unavailable,
	SupportedPrediction,
	UnsupportedModel,
	InvalidatedPrediction
};

// A linear response over normalized stamina [0,1]
struct PROJECTMIMIKYU_API FPokemonRecoveryStaminaResponse
{
	double AtZeroStamina = 0.0;
	double AtFullStamina = 0.0;
};

// Copied configuration values. Contains no actor or asset references.
struct PROJECTMIMIKYU_API FPokemonRecoveryToleranceProfileSnapshot
{
	FName ProfileId = NAME_None;
	bool bConfigured = false;
 
	double BaseMaxDownwardSpeed = 0.0; // cm/s
	double BaseMaxPeakDrop = 0.0;      // cm

	FPokemonRecoveryStaminaResponse SpeedResponse;
	FPokemonRecoveryStaminaResponse DropResponse;
};

struct PROJECTMIMIKYU_API FPokemonRecoveryStaminaSnapshot
{
	bool bAvailable = false;

	double Current = 0.0;
	double Maximum = 0.0;
};

// Produced by BuildEffectiveLimits().
// These limits describe the supplied stamina snapshot, not future stamina.
struct PROJECTMIMIKYU_API FPokemonRecoveryEffectiveLimits
{
	FName ProfileId = NAME_None;
	FPokemonRecoveryStaminaSnapshot Stamina;

	TOptional<double> StaminaFraction;
	TOptional<double> MaxDownwardSpeed;
	TOptional<double> MaxPeakDrop;

	TArray<FName> Reasons;
};

struct PROJECTMIMIKYU_API FPokemonRecoveryLandingEvidence
{
	// SupportedPrediction requires a successful, supported,
	// uninvalidated continuation prediction.
	EPokemonRecoveryLandingEvidenceStatus Status = EPokemonRecoveryLandingEvidenceStatus::Unavailable;

	FName PredictionReason = NAME_None;

	// Predicted pre-contact velocity, never grounded walking velocity.
	TOptional<FVector> IncomingVelocity;

	// Capsule feet at the uninflated contact sweep.
	// Do not substitute SupportedFeet or capsule-center coordinates.
	TOptional<FVector> ContactFeet;

	// Complete maximum through predicted contact, including future
	// acent after the seed. Unset when prior history is incomplete.
	TOptional<double> CompleteMaximumFeetZ;

	FName HeightHistoryReason = NAME_None;
};

struct PROJECTMIMIKYU_API FPokemonRecoveryCriterionAssessment
{
	EPokemonRecoveryToleranceOutcome Outcome = EPokemonRecoveryToleranceOutcome::Unknown;

	TOptional<double> Measured;
	TOptional<double> Limit;

	TArray<FName> Reasons;
};

struct PROJECTMIMIKYU_API FPokemonRecoveryToleranceResult
{
	EPokemonRecoveryToleranceOutcome Overall = EPokemonRecoveryToleranceOutcome::Unknown;

	FPokemonRecoveryCriterionAssessment LandingSpeed;
	FPokemonRecoveryCriterionAssessment PeakDrop;
};

// Value-only calculations. No world queries, asset access,
// attribute changes, movement operations, or gameplay callbacks.
struct PROJECTMIMIKYU_API FPokemonRecoveryTolerance
{
	static FPokemonRecoveryEffectiveLimits BuildEffectiveLimits(
		const TOptional<FPokemonRecoveryToleranceProfileSnapshot>& Profile,
		const FPokemonRecoveryStaminaSnapshot& Stamina);

	static FPokemonRecoveryToleranceResult Evaluate(
		const FPokemonRecoveryEffectiveLimits& Limits,
		const  FPokemonRecoveryLandingEvidence& Evidence);

	static const TCHAR* OutcomeName(
		EPokemonRecoveryToleranceOutcome Outcome);
};
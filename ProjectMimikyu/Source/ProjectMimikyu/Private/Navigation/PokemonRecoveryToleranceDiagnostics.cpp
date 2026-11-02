


#include "Navigation/PokemonRecoveryToleranceDiagnostics.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Characters/Pokemon_Parent.h"
#include "DataAssets/PokemonDataAsset.h"
#include "DataAssets/PokemonRecoveryToleranceProfile.h"
#include "Navigation/PokemonRecoveryContinuation.h"

TOptional<FPokemonRecoveryToleranceProfileSnapshot> FPokemonRecoveryToleranceDiagnostics::CaptureProfile(
	const APokemon_Parent& Pokemon)
{
	const UPokemonDataAsset* Species = Pokemon.PokemonDataAsset;
	if (!IsValid(Species) || !IsValid(Species->RecoveryToleranceProfile.Get()))
	{
		return {};
	}

	return Species->RecoveryToleranceProfile->MakeSnapshot();
}

FPokemonRecoveryStaminaSnapshot FPokemonRecoveryToleranceDiagnostics::CaptureStamina(
	const UAbilitySystemComponent* AbilitySystem)
{
	FPokemonRecoveryStaminaSnapshot Result;
	const  UPokemonBaseAttributeSet* Attributes = IsValid(AbilitySystem)
		? AbilitySystem->GetSet<UPokemonBaseAttributeSet>()
		: nullptr;
	if (IsValid(Attributes))
	{
		// Copy raw current values. BuildEffectiveLimits validates them.
		// Availablity is independent of whether the Current is zero or invalid.
		Result.bAvailable = true;
		Result.Current = Attributes->GetStamina();
		Result.Maximum = Attributes->GetMaxStamina();
	}

	return Result;
}

FPokemonRecoveryLandingEvidence FPokemonRecoveryToleranceDiagnostics::MakeEvidence(
	const FPokemonRecoveryContinuationResult& Prediction,
	FName InvalidatedReason,
	FName HeightHistoryReason)
{
	FPokemonRecoveryLandingEvidence Result;
	Result.HeightHistoryReason = HeightHistoryReason;

	if (!InvalidatedReason.IsNone())
	{
		Result.Status = EPokemonRecoveryLandingEvidenceStatus::InvalidatedPrediction;
		Result.PredictionReason = InvalidatedReason;
		return Result;
	}
	
	if (Prediction.Status ==EPokemonRecoveryContinuationStatus::UnsupportedModel
		||Prediction.ContactPrediction.Status==EPokemonRecoveryBallisticStatus::UnsupportedMotion)
	{
		Result.Status = EPokemonRecoveryLandingEvidenceStatus::UnsupportedModel;
		Result.PredictionReason = Prediction.Status == EPokemonRecoveryContinuationStatus::UnsupportedModel
			? Prediction.Reason
			: Prediction.ContactPrediction.Reason;

		return Result;
	}


	if (!Prediction.HasLandingGeometry())
	{
		Result.PredictionReason = Prediction.Reason;
		return Result;
	}

	if (!Prediction.ContactPrediction.HasPrediction())
	{
		Result.PredictionReason = Prediction.ContactPrediction.Reason.IsNone()
			? FName(TEXT("InvalidContactPrediction"))
			: Prediction.ContactPrediction.Reason;
		return Result;
	}

	Result.Status = EPokemonRecoveryLandingEvidenceStatus::SupportedPrediction;
	Result.IncomingVelocity = Prediction.ContactPrediction.Sample.Velocity;
	Result.ContactFeet = Prediction.ContactFeet;
	Result.CompleteMaximumFeetZ = Prediction.ContactPrediction.MaxFeetZSinceTakeoff;
	if (Result.CompleteMaximumFeetZ.IsSet())
	{
		Result.HeightHistoryReason = NAME_None;
	}
	return Result;
}

FPokemonRecoveryToleranceDiagnostic FPokemonRecoveryToleranceDiagnostics::Evaluate(
	const APokemon_Parent& Pokemon,
	const FPokemonRecoveryContinuationResult& Prediction,
	FName InvalidatedReason,
	FName HeightHistoryReason)
{
	FPokemonRecoveryToleranceDiagnostic Result;
	Result.Limits = FPokemonRecoveryTolerance::BuildEffectiveLimits(CaptureProfile(Pokemon),
		CaptureStamina(Pokemon.GetAbilitySystemComponent()));
	Result.Evidence = MakeEvidence(Prediction, InvalidatedReason, HeightHistoryReason);
	Result.Assessment = FPokemonRecoveryTolerance::Evaluate(Result.Limits, Result.Evidence);
	return Result;
}
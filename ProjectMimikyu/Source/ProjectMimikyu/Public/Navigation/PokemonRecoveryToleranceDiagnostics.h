

#pragma once

#include "CoreMinimal.h"
#include "Navigation/PokemonRecoveryTolerance.h"

class APokemon_Parent;
class UAbilitySystemComponent;
struct FPokemonRecoveryContinuationResult;

// Diagnostic values captured at evaluation time. Not landing authorization.
struct PROJECTMIMIKYU_API FPokemonRecoveryToleranceDiagnostic
{
    FPokemonRecoveryEffectiveLimits Limits;
    FPokemonRecoveryLandingEvidence Evidence;
    FPokemonRecoveryToleranceResult Assessment;
};

// Game-thread adapter. Reads existing objects; never initializes them.
struct PROJECTMIMIKYU_API FPokemonRecoveryToleranceDiagnostics
{
	static TOptional<FPokemonRecoveryToleranceProfileSnapshot> CaptureProfile(const APokemon_Parent& Pokemon);

	static FPokemonRecoveryStaminaSnapshot CaptureStamina(const UAbilitySystemComponent* AbilitySystem);

	static FPokemonRecoveryLandingEvidence MakeEvidence(
		const FPokemonRecoveryContinuationResult& Prediction,
		FName InvalidatedReason = NAME_None,
		FName HeightHistoryReason = NAME_None);

	static FPokemonRecoveryToleranceDiagnostic Evaluate(
		const APokemon_Parent& Pokemon,
		const FPokemonRecoveryContinuationResult& Prediction,
		FName InvalidatedReason = NAME_None,
		FName HeightHistoryReason = NAME_None);
};

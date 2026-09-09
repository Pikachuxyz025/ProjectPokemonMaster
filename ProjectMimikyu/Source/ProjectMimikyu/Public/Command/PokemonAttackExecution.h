#pragma once

#include "CoreMinimal.h"
#include "PokemonAttackExecution.generated.h"

// Combat outcome is separate from generic action success/failure. A miss completes an attempt.
UENUM(BlueprintType)
enum class EPokemonAttackExecutionOutcome : uint8
{
	None,
	Connected,
	Missed,
	Interrupted,
	ActivationFailed
};

struct FPokemonTrainerCommandSubmission
{
	FGuid CommandId;
	FName Reason = NAME_None;
	bool IsAccepted() const { return CommandId.IsValid(); }
};

DECLARE_MULTICAST_DELEGATE_ThreeParams(FPokemonTrainerCommandResolvedSignature,
	FGuid, EPokemonAttackExecutionOutcome, FName);

inline FName PokemonAttackOutcomeName(EPokemonAttackExecutionOutcome Outcome)
{
	switch (Outcome)
	{
	case EPokemonAttackExecutionOutcome::Connected: return TEXT("Connected");
	case EPokemonAttackExecutionOutcome::Missed: return TEXT("Missed");
	case EPokemonAttackExecutionOutcome::Interrupted: return TEXT("Interrupted");
	case EPokemonAttackExecutionOutcome::ActivationFailed: return TEXT("ActivationFailed");
	default: return NAME_None;
	}
}

#pragma once

#include "Command/PokemonAttackExecution.h"
#include "Intent/PokemonIntentSequenceTypes.h"

class UPokemonCommandComponent;

// Two phases: reserve, then adopt/bind in the coordinator, then activate GAS.
struct FPokemonAttackExecutionAction
{
	static FPokemonTrainerCommandSubmission Reserve(UPokemonCommandComponent* Command, const FPokemonIntentActionSpec& Spec, FGuid IntentId);
	static void Execute(UPokemonCommandComponent* Command, FGuid CommandId);
	static void Cancel(UPokemonCommandComponent* Command, FGuid CommandId, FName Reason);
};

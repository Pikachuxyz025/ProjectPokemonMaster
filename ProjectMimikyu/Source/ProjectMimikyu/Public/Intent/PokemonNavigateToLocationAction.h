#pragma once

#include "Intent/PokemonIntentSequenceTypes.h"
#include "Navigation/PokemonNavigationResult.h"

class UPokemonNavigationComponent;

// Stateless adapter. Lifetime and IDs live in the coordinator's action record.
struct FPokemonNavigateToLocationAction
{
	static FPokemonNavigationSubmission Start(UPokemonNavigationComponent* Navigation, const FPokemonIntentActionSpec& Spec);
	static void Cancel(UPokemonNavigationComponent* Navigation, FGuid ExecutorRequestId, FName Reason);
};

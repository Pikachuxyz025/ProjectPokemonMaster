

#pragma once

#include "Intent/PokemonIntentSequenceTypes.h"
#include "Navigation/PokemonNavigationResult.h"

class APokemon_Parent;
class UPokemonNavigationComponent;

struct FPokemonCombatApproachAction
{
	static FPokemonNavigationSubmission Start(
		APokemon_Parent* Pokemon,
		UPokemonNavigationComponent* Navigation,
		const FPokemonIntentActionSpec& Spec,
		FGuid ParentAttackCommandId);

	static void Cancel(
		UPokemonNavigationComponent* Navigation,
		FGuid RequestId,
		FName Reason);
};

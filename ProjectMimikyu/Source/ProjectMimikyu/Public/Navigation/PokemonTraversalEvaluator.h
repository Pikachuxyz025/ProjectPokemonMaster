

#pragma once

#include "CoreMinimal.h"
#include "Navigation/PokemonTraversalTypes.h"

class PROJECTMIMIKYU_API FPokemonTraversalEvaluator
{
public:
	static FPokemonTraversalCandidate Evaluate(const FPokemonTraversalRequirement& Requirement, const FPokemonTraversalCapabilities& Capabilities);
};

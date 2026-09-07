

#pragma once

#include "CoreMinimal.h"
#include "Navigation/PokemonTraversalTypes.h"

class PROJECTMIMIKYU_API FPokemonTraversalEvaluator
{
public:
	// Deprecated Traversal 0.1 diagnostic only; its result can never IsExecutable().
	// New execution callers must use FPokemonJumpSolver and body/landing validation.
	static FPokemonTraversalCandidate Evaluate(const FPokemonTraversalRequirement& Requirement, const FPokemonTraversalCapabilities& Capabilities);
};

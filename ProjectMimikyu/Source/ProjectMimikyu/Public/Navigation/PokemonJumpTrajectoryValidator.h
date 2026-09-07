#pragma once

#include "CoreMinimal.h"

class APokemon_Parent;
struct FPokemonTraversalCandidate;
struct FPokemonTraversalRequirement;

// Predictive world queries only. CharacterMovement remains the runtime collision authority.
// Every position is a current-capsule feet position, never a mesh/socket location.
struct PROJECTMIMIKYU_API FPokemonJumpTrajectoryValidator
{
	// Resolve before solving. Includes the normal CharacterMovement floor clearance in OutFeet.
	static bool ResolveLanding(APokemon_Parent& Pokemon, const FVector& ProposedFeet,
		FVector& OutFeet, FName& OutFailure);

	// Confirms the saved geometry; never moves a solved endpoint to a nav projection or new floor.
	static bool Validate(APokemon_Parent& Pokemon, FPokemonTraversalCandidate& Candidate);

	// A failed route is not evidence. Only measured missing support / an unwalkable height
	// discontinuity between supported endpoints can classify an emergent traversal request.
	static bool MeasureDiscontinuity(APokemon_Parent& Pokemon, const FVector& StartFeet,
		const FVector& DestinationFeet, FPokemonTraversalRequirement& OutRequirement);
};

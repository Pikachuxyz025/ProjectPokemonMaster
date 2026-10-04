#pragma once

#include "CoreMinimal.h"

class APokemon_Parent;
struct FPokemonTraversalCandidate;
struct FPokemonAirborneExecutionTrajectoryCandidate;
struct FPokemonTraversalRequirement;
struct FPokemonJumpCapabilitySnapshot;
struct FPokemonTraversalExitSearchSettings;

// Predictive world queries only. CharacterMovement remains the runtime collision authority.
// Every position is a current-capsule feet position, never a mesh/socket location.
struct PROJECTMIMIKYU_API FPokemonJumpTrajectoryValidator
{
	// Modest support discovery only; every fan point still passes ResolveLanding,
	// the production ballistic solver and Validate before execution is authorized.
	static bool DiscoverLandingFan(APokemon_Parent& Pokemon, const FVector& SupportedOrigin,
		const FVector& Heading, const FPokemonJumpCapabilitySnapshot& Capability,
		const FPokemonTraversalExitSearchSettings& Settings, TArray<FVector>& OutExits,
		FName& OutFailure);

	// Resolve before solving. Includes the normal CharacterMovement floor clearance in OutFeet.
	static bool ResolveLanding(APokemon_Parent& Pokemon, const FVector& ProposedFeet,
		FVector& OutFeet, FName& OutFailure);

	// Confirms the saved geometry; never moves a solved endpoint to a nav projection or new floor.
	static bool Validate(APokemon_Parent& Pokemon, FPokemonTraversalCandidate& Candidate);

	// Airborne execution validation:
	// takeoff -> attack contact.
	//
	// Nothing after ContactTime is validated or implied.
	static bool ValidateToAirborneContact(APokemon_Parent& Pokemon, FPokemonAirborneExecutionTrajectoryCandidate& Candidate);

	// A failed route is not evidence. Only measured missing support / an unwalkable height
	// discontinuity between supported endpoints can classify an emergent traversal request.
	static bool MeasureDiscontinuity(APokemon_Parent& Pokemon, const FVector& StartFeet,
		const FVector& DestinationFeet, FPokemonTraversalRequirement& OutRequirement);

	// Evaluate the exact ballistic trajectory retained by the solved
	// traversal candidate. These functions do not re-solve the jump.
	// Ordinary traversal evaluation.
	static FVector EvaluateFeetAtTime(const FPokemonTraversalCandidate& Candidate, float Time);

	static FVector EvaluateVelocityAtTime(const FPokemonTraversalCandidate& Candidate, float Time);

	// Airborne-contact trajectory evaluation.
	static FVector EvaluateFeetAtTime(const FPokemonAirborneExecutionTrajectoryCandidate& Candidate, float Time);

	static FVector EvaluateVelocityAtTime(const FPokemonAirborneExecutionTrajectoryCandidate& Candidate, float Time);
};

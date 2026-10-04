#pragma once

#include "CoreMinimal.h"
#include "Navigation/PokemonTraversalTypes.h"

class APokemon_Parent;

struct FAgentNavigationRequest;
struct FPokemonAirborneExecutionProfile;

// Stateless capability capture and constant-gravity ballistic solving.
// This class never starts movement or activates an ability.
class PROJECTMIMIKYU_API FPokemonJumpSolver
{
public:
	static FPokemonJumpCapabilitySnapshot CaptureCapabilities(APokemon_Parent& Pokemon,
		const FAgentNavigationRequest& Request, const FVector& Direction);

	// Ordered physical alternatives for the validator. Failure returns one
	// NoSolution candidate with a structured reason; never executable by itself.
	static TArray<FPokemonTraversalCandidate> Solve(const FPokemonTraversalRequirement& Requirement,
		const FPokemonJumpCapabilitySnapshot& Capabilities, EPokemonJumpTrajectoryPreference Preference);
	
	// Airborne execution:
	// support takeoff -> required attack-contact state.
	// 
	// RequiredContactFeet is an intermediate execution constraint,
	// NOT a landing destination.
	static TArray<FPokemonAirborneExecutionTrajectoryCandidate> SolveToAirborneContact(
		const FGuid& ParentRequestId, const FVector& StartFeet,
		const FVector& RequiredContactFeet, const FPokemonJumpCapabilitySnapshot& Capabilities,
		const FPokemonAirborneExecutionProfile& AirborneExecutionProfile,
		EPokemonJumpTrajectoryPreference TrajectoryPreference);

	// Check a stable plan against current inputs without re-solving its geometry.
	static bool CanExecuteWithCapabilities(const FPokemonTraversalCandidate& Candidate,
		const FPokemonJumpCapabilitySnapshot& Capabilities, FName& OutFailureReason);

	static bool IsDebugEnabled();
};
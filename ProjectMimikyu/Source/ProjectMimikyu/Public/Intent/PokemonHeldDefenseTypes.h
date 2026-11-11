#pragma once

#include "CoreMinimal.h"
#include "PokemonHeldDefenseTypes.generated.h"

class APokemon_Parent;

UENUM()
enum class EPokemonHeldDefenseState : uint8
{
	None,
	Requested,
	Suspended,
	Released,
	Revoked,
	Rejected,
	Exhausted,
	Blocked
};

// The authoritative binding of an input activation to an existing MoveTo.
//
// IsHeld() describes an accepted binding awaiting release. It does not
// independently prove that a physical key is down, that movement is eligible,
// or that evasive protection exists.
USTRUCT()
struct PROJECTMIMIKYU_API FPokemonHeldDefenseSession
{
	GENERATED_BODY()

	UPROPERTY(VisibleInstanceOnly) 
	TObjectPtr<APokemon_Parent> Pokemon = nullptr;

	UPROPERTY(VisibleInstanceOnly)
	TObjectPtr<AActor> Trainer = nullptr;

	UPROPERTY(VisibleInstanceOnly)
	FGuid IntentId;

	UPROPERTY(VisibleInstanceOnly) 
	FGuid ActionId;

	UPROPERTY(VisibleInstanceOnly) 
	FGuid NavigationRequestId;

	UPROPERTY(VisibleInstanceOnly) 
	FVector Destination = FVector::ZeroVector;

	UPROPERTY(VisibleInstanceOnly) 
	int32 InputActivation = 0;

	UPROPERTY(VisibleInstanceOnly) 
	int32 InputRevision = 0;

	UPROPERTY(VisibleInstanceOnly) 
	int32 ServerRevision = 0;

	UPROPERTY(VisibleInstanceOnly) 
	EPokemonHeldDefenseState State = EPokemonHeldDefenseState::None;

	UPROPERTY(VisibleInstanceOnly) 
	FName Reason = NAME_None;

	// Diagnostic evidence that the last completed accounting interval
	// was paid in full. This is not a reusable spending authorization,
	// a prediction of the next interval, or an evasion/protection flag.
	UPROPERTY(VisibleInstanceOnly)
	bool bLastIntervalFunded = false;

	// Means an accepted input binding remains unreleased.
	// It does not prove the physical key is down, resource availability,
	// or that evasive movement is operational.
	bool IsHeld() const
	{
		return State == EPokemonHeldDefenseState::Requested
			|| State == EPokemonHeldDefenseState::Suspended
			|| State == EPokemonHeldDefenseState::Exhausted
			|| State == EPokemonHeldDefenseState::Blocked;
	}

	// Input authorization may survive temporary movement suspension.
	// Exhausted and blocked bindings retain input identity only.
	bool HasAuthorization() const
	{
		return State == EPokemonHeldDefenseState::Requested
			|| State == EPokemonHeldDefenseState::Suspended;
	}
};

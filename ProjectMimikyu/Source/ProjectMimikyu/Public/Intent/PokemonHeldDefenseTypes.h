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
	Rejected
};

// Authoritative input authorization. The server copies this snapshot into the
// owning trainer's acknowledgement. I/A/N always belong to the existing MoveTo.
USTRUCT()
struct PROJECTMIMIKYU_API FPokemonHeldDefenseSession
{
	GENERATED_BODY()

	UPROPERTY(VisibleInstanceOnly) TObjectPtr<APokemon_Parent> Pokemon = nullptr;
	UPROPERTY(VisibleInstanceOnly) TObjectPtr<AActor> Trainer = nullptr;
	UPROPERTY(VisibleInstanceOnly) FGuid IntentId;
	UPROPERTY(VisibleInstanceOnly) FGuid ActionId;
	UPROPERTY(VisibleInstanceOnly) FGuid NavigationRequestId;
	UPROPERTY(VisibleInstanceOnly) FVector Destination = FVector::ZeroVector;
	UPROPERTY(VisibleInstanceOnly) int32 InputActivation = 0;
	UPROPERTY(VisibleInstanceOnly) int32 InputRevision = 0;
	UPROPERTY(VisibleInstanceOnly) int32 ServerRevision = 0;
	UPROPERTY(VisibleInstanceOnly) EPokemonHeldDefenseState State = EPokemonHeldDefenseState::None;
	UPROPERTY(VisibleInstanceOnly) FName Reason = NAME_None;

	bool IsHeld() const
	{
		return State == EPokemonHeldDefenseState::Requested || State == EPokemonHeldDefenseState::Suspended;
	}
};

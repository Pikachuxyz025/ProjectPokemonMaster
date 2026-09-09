#pragma once

#include "CoreMinimal.h"
#include "PokemonNavigationResult.generated.h"

// Terminal results only. Composite failure holds and Dodge suspension are not resolutions.
UENUM(BlueprintType)
enum class EPokemonNavigationResolution : uint8
{
	Succeeded,
	Failed,
	Interrupted
};

struct FPokemonNavigationSubmission
{
	// Valid only when this submission positively acquired the retained request.
	FGuid RequestId;
	bool bGroundPathAccepted = false;
	FName Reason = NAME_None;
	bool IsAccepted() const { return RequestId.IsValid(); }
};

DECLARE_MULTICAST_DELEGATE_ThreeParams(FPokemonNavigationResolvedSignature,
	FGuid, EPokemonNavigationResolution, FName);

#pragma once

#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "PokemonJumpNavLink.generated.h"

// A traversal opportunity, never a capability grant. Simple links are intentionally absent.
UCLASS(Blueprintable)
class PROJECTMIMIKYU_API APokemonJumpNavLink : public ANavLinkProxy
{
	GENERATED_BODY()
public:
	APokemonJumpNavLink();
	virtual void BeginPlay() override;
private:
	UFUNCTION()
	void HandleJumpLinkReached(AActor* Agent, const FVector& Destination);
};

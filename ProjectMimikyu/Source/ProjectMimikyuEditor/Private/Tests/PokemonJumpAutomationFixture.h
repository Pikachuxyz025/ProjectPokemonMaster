#pragma once

#include "Characters/Pokemon_Parent.h"
#include "GameplayEffect.h"
#include "PokemonJumpAutomationFixture.generated.h"

// Native test types live in the editor module so packaged gameplay never includes them.
UCLASS(Transient, NotBlueprintable)
class UPokemonJumpAutomationAttributes : public UGameplayEffect
{
	GENERATED_BODY()

public:
	UPokemonJumpAutomationAttributes(const FObjectInitializer& ObjectInitializer);
};

UCLASS(Transient, NotBlueprintable, NotPlaceable)
class APokemonJumpAutomationPawn : public APokemon_Parent
{
	GENERATED_BODY()

public:
	APokemonJumpAutomationPawn();
	void ConfigureForAutomation();
	virtual void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) override;
	virtual void OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode = 0) override;

	int32 LaunchCalls = 0;
	int32 FallingTransitions = 0;
};

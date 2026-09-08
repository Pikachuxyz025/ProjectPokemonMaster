#include "Tests/PokemonJumpAutomationFixture.h"

#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "DataAssets/PokemonDataAsset.h"
#include "GameFramework/CharacterMovementComponent.h"

UPokemonJumpAutomationAttributes::UPokemonJumpAutomationAttributes(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DurationPolicy = EGameplayEffectDurationType::Instant;
	const auto SetAttribute = [this](const FGameplayAttribute& Attribute, float Value)
	{
		FGameplayModifierInfo& Modifier = Modifiers.AddDefaulted_GetRef();
		Modifier.Attribute = Attribute;
		Modifier.ModifierOp = EGameplayModOp::Override;
		Modifier.ModifierMagnitude = FScalableFloat(Value);
	};
	// Supply maxima before vitals: the production attribute set clamps vitals.
	SetAttribute(UPokemonBaseAttributeSet::GetMaxHealthAttribute(), 100.f);
	SetAttribute(UPokemonBaseAttributeSet::GetHealthAttribute(), 100.f);
	SetAttribute(UPokemonBaseAttributeSet::GetMaxPowerPointsAttribute(), 10.f);
	SetAttribute(UPokemonBaseAttributeSet::GetPowerPointsAttribute(), 10.f);
	SetAttribute(UPokemonBaseAttributeSet::GetMaxStaminaAttribute(), 100.f);
	SetAttribute(UPokemonBaseAttributeSet::GetStaminaAttribute(), 100.f);
	SetAttribute(UPokemonBaseAttributeSet::GetSpeedAttribute(), 200.f);
}

APokemonJumpAutomationPawn::APokemonJumpAutomationPawn()
{
	DefaultStatAttributes = UPokemonJumpAutomationAttributes::StaticClass();
	// No derived stats are needed, but the second production initialization pass
	// still receives and applies a valid native (empty, instant) GameplayEffect.
	DependentStatAttributes = UGameplayEffect::StaticClass();
	AutoPossessAI = EAutoPossessAI::Disabled;
	GetCharacterMovement()->bRunPhysicsWithNoController = true;
}

void APokemonJumpAutomationPawn::ConfigureForAutomation()
{
	// This fixture supplies its own moveset; skip the wild-species move/XP lookup.
	// Leave bHasStartupPokemonInfo false so normal default GAS initialization runs.
	bSpawnedFromPartyStartup = true;
	PokemonDataAsset = NewObject<UPokemonDataAsset>(this, NAME_None, RF_Transient);
	PokemonDataAsset->BaseVerticalLaunchVelocity = 500.f;
	TraversalCapabilities.bCanNaturallyJump = true;
}

void APokemonJumpAutomationPawn::LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	++LaunchCalls;
	Super::LaunchCharacter(LaunchVelocity, bXYOverride, bZOverride);
}

void APokemonJumpAutomationPawn::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	if (GetCharacterMovement()->IsFalling())
	{
		++FallingTransitions;
	}
	Super::OnMovementModeChanged(PrevMovementMode, PreviousCustomMode);
}

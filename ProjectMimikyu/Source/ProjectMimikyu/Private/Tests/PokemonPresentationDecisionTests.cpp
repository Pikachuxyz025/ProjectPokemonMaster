#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "Characters/Pokemon_Parent.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
FPokemonPresentationTest,
"ProjectMimikyu.Presentation.PokemonPresentationDecisionTests",
EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter
)

bool FPokemonPresentationTest::RunTest(const FString& Parameters)
{
	FTestWorldWrapper TestWorld;
	if (!TestWorld.CreateTestWorld(EWorldType::Game))
	{
		AddError(TEXT("Could not create transient automation world."));
		return false;
	}

	UWorld* World = TestWorld.GetTestWorld();
	if (!TestNotNull(TEXT("Transient automation world"), World))
	{
		return false;
	}
	if (!TestNotNull(TEXT("Transient world physics scene"), World->GetPhysicsScene()))
	{
		return false;
	}

	UPokemonGameplayAbilities* Ability = NewObject<UPokemonGameplayAbilities>();

	if (!TestNotNull(TEXT("PokemonGameplayAbilities instance"), Ability))
	{
		return false;
	}

    const FSectionTransition Result =
        Ability->DetermineNextPresentationAction(
            EAttackPresentationPhase::Strike,
            EAttackOutcome::Hit
        );

	if (!TestEqual(TEXT("Next section name for Strike phase with Hit outcome"), Result.NextSectionName, FName("HitContact")))
	{
		return false;
	}

	return true;
}

#endif
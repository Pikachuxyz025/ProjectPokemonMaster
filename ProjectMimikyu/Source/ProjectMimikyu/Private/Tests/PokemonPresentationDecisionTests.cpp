#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
FPokemonPresentationTest,
"ProjectMimikyu.Presentation.PokemonPresentationDecisionTests",
EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter
)

bool FPokemonPresentationTest::RunTest(const FString& Parameters)
{
    const FSectionTransition Result =
        Ability->DetermineNextPresentationAction(
            EAttackPresentationPhase::Strike,
            EAttackOutcome::Hit
        );
}

#endif
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

	UPokemonGameplayAbilities* Ability = NewObject<UPokemonGameplayAbilities>();

	if (!TestNotNull(TEXT("PokemonGameplayAbilities instance"), Ability))
	{
		return false;
	}

    const FSectionTransition ResultA =
        Ability->DetermineNextPresentationAction(
            EAttackPresentationPhase::Strike,
            EAttackOutcome::Hit
        );

	if (!TestEqual(TEXT("Next section name for Strike phase with Hit outcome"), ResultA.NextSectionName, FName("HitContact")))
	{
		return false;
	}

	if (!TestEqual(TEXT("Resulting Transition type "), ResultA.TransitionType, ESectionTransitionType::WaitForEndOfSection))
	{
		return false;
	}

	const FSectionTransition ResultB =
		Ability->DetermineNextPresentationAction(
			EAttackPresentationPhase::Strike,
			EAttackOutcome::Miss
		);

	if (!TestEqual(TEXT("Next section name for Strike phase with Miss outcome"), ResultB.NextSectionName, FName("WhiffFollowThrough")))
	{
		return false;
	}

	if(!TestEqual(TEXT("Resulting Transition type "), ResultB.TransitionType, ESectionTransitionType::WaitForEndOfSection))
	{
		return false;
	}

	return true;
}

#endif
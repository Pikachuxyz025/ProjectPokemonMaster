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


	const FSectionTransition ResultC =
		Ability->DetermineNextPresentationAction(
			EAttackPresentationPhase::Pending,
			EAttackOutcome::Miss
		);

	if (!TestEqual(TEXT("Next section name for Pending phase with Miss outcome"), ResultC.NextSectionName, FName("WhiffFollowThrough")))
	{
		return false;
	}

	if (!TestEqual(TEXT("Resulting Transition type "), ResultC.TransitionType, ESectionTransitionType::JumpImmediately))
	{
		return false;
	}

	const FSectionTransition ResultD =
		Ability->DetermineNextPresentationAction(
			EAttackPresentationPhase::Pending,
			EAttackOutcome::Hit
		);

	if (!TestEqual(TEXT("Next section name for Pending phase with Hit outcome"), ResultD.NextSectionName, FName("HitContact")))
	{
		return false;
	}

	if (!TestEqual(TEXT("Resulting Transition type "), ResultD.TransitionType, ESectionTransitionType::JumpImmediately))
	{
		return false;
	}

	const FSectionTransition ResultE =
		Ability->DetermineNextPresentationAction(
			EAttackPresentationPhase::Pending,
			EAttackOutcome::Unresolved
		);

	if (!TestEqual(TEXT("Next section name for Pending phase with Unresolved outcome"), ResultE.NextSectionName, NAME_None))
	{
		return false;
	}

	if (!TestEqual(TEXT("Resulting Transition type "), ResultE.TransitionType, ESectionTransitionType::None))
	{
		return false;
	}

	const FSectionTransition ResultF =
		Ability->DetermineNextPresentationAction(
			EAttackPresentationPhase::Strike,
			EAttackOutcome::Unresolved
		);

	if (!TestEqual(TEXT("Next section name for Strike phase with Unresolved outcome"), ResultF.NextSectionName, NAME_None))
	{
		return false;
	}

	if (!TestEqual(TEXT("Resulting Transition type "), ResultF.TransitionType, ESectionTransitionType::None))
	{
		return false;
	}

	const FSectionTransition ResultH =
		Ability->DetermineNextPresentationAction(
			EAttackPresentationPhase::Complete,
			EAttackOutcome::Hit
		);

	if (!TestEqual(TEXT("Next section name for Complete phase with Hit outcome"), ResultH.NextSectionName, NAME_None))
	{
		return false;
	}

	if (!TestEqual(TEXT("Resulting Transition type "), ResultH.TransitionType, ESectionTransitionType::None))
	{
		return false;
	}

	const FSectionTransition ResultG =
		Ability->DetermineNextPresentationAction(
			EAttackPresentationPhase::None,
			EAttackOutcome::Hit
		);

	if (!TestEqual(TEXT("Next section name for None phase with Hit outcome"), ResultG.NextSectionName, NAME_None))
	{
		return false;
	}

	if (!TestEqual(TEXT("Resulting Transition type "), ResultG.TransitionType, ESectionTransitionType::None))
	{
		return false;
	}

	return true;
}

#endif
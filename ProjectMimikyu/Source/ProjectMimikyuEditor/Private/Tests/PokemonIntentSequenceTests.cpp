#if WITH_DEV_AUTOMATION_TESTS

#include "Tests/PokemonCompositeMoveAutomationFixture.h"
#include "ActorComponents/PokemonIntentSequenceComponent.h"
#include "Misc/ScopeExit.h"

// Deterministic lifecycle input only. The physical integration test below uses no
// fabricated results, destinations, jump candidates, or action advancement.
struct FPokemonIntentSequenceTestAccess
{
	static FGuid Submit(UPokemonIntentSequenceComponent& Intent, const TArray<FPokemonIntentActionSpec>& Specs)
	{
		return Intent.SubmitSequence(Specs);
	}
	static bool Resolve(UPokemonNavigationComponent& Nav, FGuid RequestId,
		EPokemonNavigationResolution Result, FName Reason = NAME_None)
	{
		return Nav.ResolveNavigationRequest(RequestId, Result, Reason);
	}
	static void Detach(UPokemonIntentSequenceComponent& Intent) { Intent.UnbindExecutor(); }
	static void Deliver(UPokemonIntentSequenceComponent& Intent, FGuid IntentId, FGuid ActionId,
		FGuid RequestId, EPokemonNavigationResolution Result)
	{
		Intent.HandleNavigationResolved(IntentId, ActionId, EPokemonIntentActionType::NavigateToLocation, RequestId, Result, NAME_None);
	}
};

namespace PokemonIntentSequenceTests
{
	struct FNavigationResult
	{
		FGuid RequestId;
		EPokemonNavigationResolution Result;
		FName Reason;
		bool bOwnershipRetired;
	};

	struct FFixture : PokemonCompositeMoveTests::FFixture
	{
		UPokemonIntentSequenceComponent* Intent = nullptr;
		TArray<FNavigationResult> NavigationResults;
		TArray<FPokemonIntentSequence> IntentResults;
		FDelegateHandle NavigationHandle, IntentHandle;

		~FFixture()
		{
			// Remove stack-backed observers before the base fixture tears its world down.
			if (Nav) Nav->OnNavigationResolved.Remove(NavigationHandle);
			if (Intent) Intent->OnIntentResolved.Remove(IntentHandle);
		}
		bool InitIntent(FAutomationTestBase& Test, bool bFarFloor = true)
		{
			if (!Init(Test, bFarFloor) || !EnableNavigation(Test, bFarFloor)) return false;
			Intent = Pokemon->GetIntentSequenceComponent();
			if (!Test.TestNotNull(TEXT("Pokemon owns production coordinator"), Intent)) return false;
			NavigationHandle = Nav->OnNavigationResolved.AddLambda(
				[this](FGuid RequestId, EPokemonNavigationResolution Result, FName Reason)
				{
					NavigationResults.Add({ RequestId, Result, Reason,
						!Nav->HasActiveNavigationRequest() || Nav->GetCurrentNavigationIntent().RequestId != RequestId });
				});
			IntentHandle = Intent->OnIntentResolved.AddLambda(
				[this](const FPokemonIntentSequence& Sequence) { IntentResults.Add(Sequence); });
			return true;
		}
		FGuid Submit()
		{
			const FGuid Id = Intent->SubmitMoveToIntent(Parent.TargetLocation);
			Parent = Nav->GetCurrentNavigationIntent();
			return Id;
		}
		void AssertRunning(FAutomationTestBase& Test, const FPokemonIntentSequence& Expected)
		{
			const FPokemonIntentSequence& Actual = Intent->GetCurrentSequence();
			Test.TestEqual(TEXT("Same intent"), Actual.IntentId, Expected.IntentId);
			Test.TestEqual(TEXT("Intent running"), Actual.State, EPokemonIntentSequenceState::Running);
			Test.TestEqual(TEXT("Same action index"), Actual.ActiveActionIndex, Expected.ActiveActionIndex);
			const FPokemonIntentActionRecord& Action = Actual.Actions[Actual.ActiveActionIndex];
			Test.TestEqual(TEXT("Same action"), Action.ActionId, Expected.Actions[Expected.ActiveActionIndex].ActionId);
			Test.TestEqual(TEXT("Action running"), Action.State, EPokemonIntentActionState::Running);
			Test.TestEqual(TEXT("Same executor"), Action.ExecutorRequestId, Expected.Actions[Expected.ActiveActionIndex].ExecutorRequestId);
			Test.TestTrue(TEXT("Navigation owns action request"), Nav->HasActiveNavigationRequest()
				&& Nav->GetCurrentNavigationIntent().RequestId == Action.ExecutorRequestId);
		}
	};
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentMoveShapeTest,
	"ProjectMimikyu.Intent.Sequence.MoveToBuildsOneNavigateAction", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentMoveShapeTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	TestEqual(TEXT("Initially idle"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Idle);
	TestFalse(TEXT("No coordinator tick"), F.Intent->PrimaryComponentTick.bCanEverTick);
	const FGuid IntentId = F.Submit();
	const FPokemonIntentSequence Sequence = F.Intent->GetCurrentSequence();
	TestTrue(TEXT("Valid intent ID"), IntentId.IsValid());
	TestEqual(TEXT("Returned installed intent"), IntentId, Sequence.IntentId);
	if (!TestEqual(TEXT("Exactly one high-level action"), Sequence.Actions.Num(), 1)) return false;
	const FPokemonIntentActionRecord& Action = Sequence.Actions[0];
	TestEqual(TEXT("Navigate action type"), Action.Spec.Type, EPokemonIntentActionType::NavigateToLocation);
	TestTrue(TEXT("Valid action ID"), Action.ActionId.IsValid());
	TestTrue(TEXT("Valid executor ID"), Action.ExecutorRequestId.IsValid());
	TestTrue(TEXT("Three distinct IDs"), IntentId != Action.ActionId && IntentId != Action.ExecutorRequestId
		&& Action.ActionId != Action.ExecutorRequestId);
	TestEqual(TEXT("One action owns entire clicked destination"), Action.Spec.Destination, F.Parent.TargetLocation);
	F.AssertRunning(*this, Sequence);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentPartialRouteTest,
	"ProjectMimikyu.Intent.Sequence.RetainedPartialRoute", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentPartialRouteTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	TestFalse(TEXT("Legacy bool rejects initial partial ground path"), F.Nav->RequestPlayerMoveToLocation(F.Parent.TargetLocation));
	TestTrue(TEXT("Despite false, navigation retains parent"), F.Nav->HasActiveNavigationRequest());
	const FGuid LegacyId = F.Nav->GetCurrentNavigationIntent().RequestId;
	F.Submit();
	const FPokemonIntentSequence Sequence = F.Intent->GetCurrentSequence();
	TestTrue(TEXT("Adapter captured its own fresh request"), Sequence.Actions[0].ExecutorRequestId != LegacyId);
	F.AssertRunning(*this, Sequence);
	TestEqual(TEXT("No intent failure for partial route"), F.IntentResults.Num(), 0);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentSuccessTest,
	"ProjectMimikyu.Intent.Sequence.MatchingNavigationSuccess", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentSuccessTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	F.Submit();
	const FPokemonIntentSequence Before = F.Intent->GetCurrentSequence();
	const FGuid RequestId = Before.Actions[0].ExecutorRequestId;
	F.Nav->OnNavigationResolved.Broadcast(FGuid::NewGuid(), EPokemonNavigationResolution::Succeeded, NAME_None);
	F.AssertRunning(*this, Before);
	F.NavigationResults.Reset(); // Discard the deliberately stale input above.
	F.SetFeet(F.Parent.TargetLocation);
	TestTrue(TEXT("Production final-destination check completes navigation"), FPokemonCompositeMoveTestAccess::Complete(*F.Nav));
	TestFalse(TEXT("Navigation retired"), F.Nav->HasActiveNavigationRequest());
	TestEqual(TEXT("Action succeeded"), F.Intent->GetCurrentSequence().Actions[0].State, EPokemonIntentActionState::Succeeded);
	TestEqual(TEXT("Parent succeeded"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Succeeded);
	if (TestEqual(TEXT("Exactly one navigation terminal"), F.NavigationResults.Num(), 1))
	{
		TestEqual(TEXT("Terminal carries completed ID"), F.NavigationResults[0].RequestId, RequestId);
		TestEqual(TEXT("Terminal success"), F.NavigationResults[0].Result, EPokemonNavigationResolution::Succeeded);
		TestEqual(TEXT("Stable success reason"), F.NavigationResults[0].Reason, NAME_None);
		TestTrue(TEXT("Ownership retired before callback"), F.NavigationResults[0].bOwnershipRetired);
	}
	TestFalse(TEXT("Retired request cannot resolve again"), FPokemonIntentSequenceTestAccess::Resolve(*F.Nav, RequestId, EPokemonNavigationResolution::Succeeded));
	F.Nav->OnNavigationResolved.Broadcast(RequestId, EPokemonNavigationResolution::Succeeded, NAME_None);
	TestEqual(TEXT("Parent resolves once despite duplicate input"), F.IntentResults.Num(), 1);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentAdvanceTest,
	"ProjectMimikyu.Intent.Sequence.TwoOrderedActions", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentAdvanceTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	FPokemonIntentActionSpec First, Second;
	First.Destination = FVector(-100.f, 0.f, 2.15f);
	Second.Destination = F.Parent.TargetLocation;
	FPokemonIntentSequenceTestAccess::Submit(*F.Intent, { First, Second });
	const FPokemonIntentSequence Before = F.Intent->GetCurrentSequence();
	TestEqual(TEXT("Second action pending"), Before.Actions[1].State, EPokemonIntentActionState::Pending);
	TestFalse(TEXT("Pending action has no executor"), Before.Actions[1].ExecutorRequestId.IsValid());
	F.SetFeet(First.Destination);
	TestTrue(TEXT("First navigation completes"), FPokemonCompositeMoveTestAccess::Complete(*F.Nav));
	const FPokemonIntentSequence Advanced = F.Intent->GetCurrentSequence();
	TestEqual(TEXT("Same parent after first success"), Advanced.IntentId, Before.IntentId);
	TestEqual(TEXT("First action succeeded"), Advanced.Actions[0].State, EPokemonIntentActionState::Succeeded);
	TestEqual(TEXT("Second action active"), Advanced.ActiveActionIndex, 1);
	TestTrue(TEXT("Second action owns a distinct executor"), Advanced.Actions[1].ExecutorRequestId.IsValid()
		&& Advanced.Actions[1].ExecutorRequestId != Before.Actions[0].ExecutorRequestId);
	TestTrue(TEXT("Distinct ordered action IDs"), Advanced.Actions[0].ActionId != Advanced.Actions[1].ActionId);
	TestEqual(TEXT("First success did not complete parent"), F.IntentResults.Num(), 0);
	F.AssertRunning(*this, Advanced);
	// Exercise all three ownership filters, including an old action paired with the NEW request ID.
	FPokemonIntentSequenceTestAccess::Deliver(*F.Intent, FGuid::NewGuid(), Advanced.Actions[1].ActionId,
		Advanced.Actions[1].ExecutorRequestId, EPokemonNavigationResolution::Succeeded);
	FPokemonIntentSequenceTestAccess::Deliver(*F.Intent, Before.IntentId, Before.Actions[0].ActionId,
		Advanced.Actions[1].ExecutorRequestId, EPokemonNavigationResolution::Succeeded);
	F.Nav->OnNavigationResolved.Broadcast(Before.Actions[0].ExecutorRequestId, EPokemonNavigationResolution::Succeeded, NAME_None);
	F.AssertRunning(*this, Advanced);
	F.SetFeet(Second.Destination);
	TestTrue(TEXT("Second navigation completes"), FPokemonCompositeMoveTestAccess::Complete(*F.Nav));
	TestEqual(TEXT("Second action succeeded"), F.Intent->GetCurrentSequence().Actions[1].State, EPokemonIntentActionState::Succeeded);
	TestEqual(TEXT("Parent succeeded after both actions"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Succeeded);
	TestEqual(TEXT("One parent terminal"), F.IntentResults.Num(), 1);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentSuspendTest,
	"ProjectMimikyu.Intent.Sequence.PreparationSuspendResume", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentSuspendTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	F.Submit();
	const FPokemonIntentSequence Before = F.Intent->GetCurrentSequence();
	for (int32 Frame = 0; Frame < 120 && !F.Pokemon->JumpExecutionComponent->IsBusy(); ++Frame) F.TestWorld.TickTestWorld(1.f / 60.f);
	TestTrue(TEXT("Actual jump preparation started"), F.Pokemon->JumpExecutionComponent->IsBusy());
	TestEqual(TEXT("Suspending before physical launch"), F.Pokemon->LaunchCalls, 0);
	F.Nav->SuspendNavigation();
	TestFalse(TEXT("Dodge suspension cancels preparation"), F.Pokemon->JumpExecutionComponent->IsBusy());
	for (int32 Frame = 0; Frame < 30; ++Frame) F.TestWorld.TickTestWorld(1.f / 60.f);
	F.AssertRunning(*this, Before);
	F.Nav->ResumeNavigation();
	F.AssertRunning(*this, Before);
	TestEqual(TEXT("No navigation terminal during suspend/resume"), F.NavigationResults.Num(), 0);
	TestEqual(TEXT("No intent terminal during suspend/resume"), F.IntentResults.Num(), 0);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentReplaceTest,
	"ProjectMimikyu.Intent.Sequence.ReplacementRejectsStaleCallbacks", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentReplaceTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	F.Submit();
	const FPokemonIntentSequence Old = F.Intent->GetCurrentSequence();
	for (int32 Frame = 0; Frame < 120 && !F.Pokemon->JumpExecutionComponent->IsBusy(); ++Frame) F.TestWorld.TickTestWorld(1.f / 60.f);
	TestTrue(TEXT("Replace during actual preparation"), F.Pokemon->JumpExecutionComponent->IsBusy());
	F.Intent->SubmitMoveToIntent(FVector(-200.f, 0.f, 2.15f));
	const FPokemonIntentSequence New = F.Intent->GetCurrentSequence();
	if (TestEqual(TEXT("Old parent resolved once"), F.IntentResults.Num(), 1))
	{
		TestEqual(TEXT("Old identity preserved in result"), F.IntentResults[0].IntentId, Old.IntentId);
		TestEqual(TEXT("Old parent interrupted"), F.IntentResults[0].State, EPokemonIntentSequenceState::Interrupted);
		TestEqual(TEXT("Old action interrupted"), F.IntentResults[0].Actions[0].State, EPokemonIntentActionState::Interrupted);
		TestEqual(TEXT("Replacement reason"), F.IntentResults[0].Reason, FName(TEXT("ParentReplaced")));
	}
	if (TestEqual(TEXT("Owned executor cancelled once"), F.NavigationResults.Num(), 1))
	{
		TestEqual(TEXT("Only old executor cancelled"), F.NavigationResults[0].RequestId, Old.Actions[0].ExecutorRequestId);
		TestEqual(TEXT("Navigation interrupted"), F.NavigationResults[0].Result, EPokemonNavigationResolution::Interrupted);
		TestEqual(TEXT("Navigation replacement reason"), F.NavigationResults[0].Reason, FName(TEXT("ParentReplaced")));
		TestTrue(TEXT("Old navigation retired before reporting"), F.NavigationResults[0].bOwnershipRetired);
	}
	TestFalse(TEXT("Old jump preparation cancelled"), F.Pokemon->JumpExecutionComponent->IsBusy());
	TestTrue(TEXT("All ownership IDs replaced"), New.IntentId != Old.IntentId && New.Actions[0].ActionId != Old.Actions[0].ActionId
		&& New.Actions[0].ExecutorRequestId != Old.Actions[0].ExecutorRequestId);
	F.Nav->OnNavigationResolved.Broadcast(Old.Actions[0].ExecutorRequestId, EPokemonNavigationResolution::Succeeded, NAME_None);
	F.Pokemon->JumpExecutionComponent->OnJumpFinished.Broadcast(Old.Actions[0].ExecutorRequestId, true, NAME_None);
	F.AssertRunning(*this, New);
	TestEqual(TEXT("Stale results did not resolve new parent"), F.IntentResults.Num(), 1);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentTargetedCancelTest,
	"ProjectMimikyu.Intent.Sequence.TargetedOwnership", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentTargetedCancelTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	F.Submit();
	const FPokemonIntentSequence Old = F.Intent->GetCurrentSequence();
	// Deliberately model a missed/delayed terminal delivery: the coordinator still
	// believes it owns the old request when an unrelated caller installs another.
	FPokemonIntentSequenceTestAccess::Detach(*F.Intent);
	FAgentNavigationRequest External = F.Parent;
	External.RequestId = FGuid::NewGuid();
	External.TargetLocation = FVector(-100.f, 0.f, 2.15f);
	F.Nav->SetNavigationIntent(External);
	F.NavigationResults.Reset();
	TestTrue(TEXT("Cancel old parent"), F.Intent->CancelIntent(Old.IntentId, TEXT("IntentCancelled")));
	TestFalse(TEXT("Stale direct executor cancel rejected"), F.Nav->CancelNavigationRequest(Old.Actions[0].ExecutorRequestId, TEXT("IntentCancelled")));
	TestTrue(TEXT("Unrelated navigation remains active"), F.Nav->HasActiveNavigationRequest());
	TestEqual(TEXT("Unrelated ID preserved"), F.Nav->GetCurrentNavigationIntent().RequestId, External.RequestId);
	TestEqual(TEXT("No fabricated/cancelled result for unrelated request"), F.NavigationResults.Num(), 0);
	TestEqual(TEXT("Only old intent resolves"), F.IntentResults.Num(), 1);
	TestFalse(TEXT("Repeated intent cancel is ignored"), F.Intent->CancelIntent(Old.IntentId, TEXT("IntentCancelled")));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentFailureHoldTest,
	"ProjectMimikyu.Intent.Sequence.CompositeFailureHoldIsNonterminal", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentFailureHoldTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this, false)) return false;
	F.Submit();
	const FPokemonIntentSequence Before = F.Intent->GetCurrentSequence();
	TestTrue(TEXT("Unsupported final region held by composite navigation"), FPokemonCompositeMoveTestAccess::Held(*F.Nav));
	for (int32 Frame = 0; Frame < 60; ++Frame) F.TestWorld.TickTestWorld(1.f / 60.f);
	F.AssertRunning(*this, Before);
	TestEqual(TEXT("Retained failure is not navigation terminal"), F.NavigationResults.Num(), 0);
	TestEqual(TEXT("Retained failure is not intent failure"), F.IntentResults.Num(), 0);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentSubmissionFailureTest,
	"ProjectMimikyu.Intent.Sequence.RejectedSubmissionDoesNotCaptureOtherRequest", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentSubmissionFailureTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	FAgentNavigationRequest External = F.Parent;
	External.RequestId = FGuid::NewGuid();
	F.Nav->SetNavigationIntent(External);
	const FGuid IntentId = F.Intent->SubmitMoveToIntent(External.TargetLocation, false);
	const FPokemonIntentSequence& Sequence = F.Intent->GetCurrentSequence();
	TestTrue(TEXT("Rejected submission still identifies created parent"), IntentId.IsValid());
	TestEqual(TEXT("True rejection fails action"), Sequence.Actions[0].State, EPokemonIntentActionState::Failed);
	TestFalse(TEXT("No unrelated ID captured"), Sequence.Actions[0].ExecutorRequestId.IsValid());
	TestEqual(TEXT("Parent fails"), Sequence.State, EPokemonIntentSequenceState::Failed);
	TestEqual(TEXT("Explicit submission failure reason"), Sequence.Reason, FName(TEXT("SpecialTraversalDisabled")));
	TestEqual(TEXT("Existing external navigation preserved"), F.Nav->GetCurrentNavigationIntent().RequestId, External.RequestId);
	TestEqual(TEXT("No terminal result fabricated for existing executor"), F.NavigationResults.Num(), 0);
	TestEqual(TEXT("One parent failure"), F.IntentResults.Num(), 1);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentTerminalFailureTest,
	"ProjectMimikyu.Intent.Sequence.TerminalFailureStopsSequence", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentTerminalFailureTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	FPokemonIntentActionSpec Spec;
	Spec.Destination = F.Parent.TargetLocation;
	FPokemonIntentSequenceTestAccess::Submit(*F.Intent, { Spec, Spec });
	const FGuid RequestId = F.Intent->GetCurrentSequence().Actions[0].ExecutorRequestId;
	TestTrue(TEXT("Matching executor terminal failure"), FPokemonIntentSequenceTestAccess::Resolve(*F.Nav, RequestId,
		EPokemonNavigationResolution::Failed, TEXT("AutomationTerminalFailure")));
	const FPokemonIntentSequence& Sequence = F.Intent->GetCurrentSequence();
	TestEqual(TEXT("Parent failed"), Sequence.State, EPokemonIntentSequenceState::Failed);
	TestEqual(TEXT("Active action failed"), Sequence.Actions[0].State, EPokemonIntentActionState::Failed);
	TestEqual(TEXT("Reason propagated"), Sequence.Reason, FName(TEXT("AutomationTerminalFailure")));
	TestEqual(TEXT("Did not advance"), Sequence.ActiveActionIndex, 0);
	TestEqual(TEXT("Second action stays pending"), Sequence.Actions[1].State, EPokemonIntentActionState::Pending);
	TestFalse(TEXT("Second executor never submitted"), Sequence.Actions[1].ExecutorRequestId.IsValid());
	TestFalse(TEXT("Failed navigation retired"), F.Nav->HasActiveNavigationRequest());
	TestEqual(TEXT("Parent failed once"), F.IntentResults.Num(), 1);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentExternalReplaceTest,
	"ProjectMimikyu.Intent.Sequence.ExternalNavigationReplacement", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentExternalReplaceTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	F.Submit();
	const FGuid IntentId = F.Intent->GetCurrentSequence().IntentId;
	FAgentNavigationRequest External = F.Parent;
	External.RequestId = FGuid::NewGuid();
	F.Nav->SetNavigationIntent(External);
	TestEqual(TEXT("External executor replacement interrupts action"), F.Intent->GetCurrentSequence().Actions[0].State, EPokemonIntentActionState::Interrupted);
	TestEqual(TEXT("External executor replacement interrupts parent"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Interrupted);
	TestEqual(TEXT("One parent terminal"), F.IntentResults.Num(), 1);
	TestFalse(TEXT("Old parent no longer cancelable"), F.Intent->CancelIntent(IntentId, TEXT("IntentCancelled")));
	TestEqual(TEXT("External request remains installed"), F.Nav->GetCurrentNavigationIntent().RequestId, External.RequestId);
	TestEqual(TEXT("Only replaced navigation reported"), F.NavigationResults.Num(), 1);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentReentrantReplaceTest,
	"ProjectMimikyu.Intent.Sequence.ReentrantIntentReplacement", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentReentrantReplaceTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	const FGuid OldId = F.Submit();
	FGuid ListenerIntentId;
	const FDelegateHandle Handle = F.Intent->OnIntentResolved.AddLambda([&](const FPokemonIntentSequence& Result)
	{
		if (Result.IntentId == OldId) ListenerIntentId = F.Intent->SubmitMoveToIntent(FVector(-100.f, 0.f, 2.15f));
	});
	ON_SCOPE_EXIT { F.Intent->OnIntentResolved.Remove(Handle); };
	const FGuid Superseded = F.Intent->SubmitMoveToIntent(FVector(1000.f, 0.f, 2.15f));
	TestFalse(TEXT("Outer replacement reports supersession"), Superseded.IsValid());
	TestTrue(TEXT("Terminal listener created newer intent"), ListenerIntentId.IsValid());
	TestEqual(TEXT("Newer listener intent wins"), F.Intent->GetCurrentSequence().IntentId, ListenerIntentId);
	TestEqual(TEXT("Newer destination survives cancellation return"), F.Nav->GetCurrentNavigationIntent().TargetLocation, FVector(-100.f, 0.f, 2.15f));
	F.AssertRunning(*this, F.Intent->GetCurrentSequence());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentReentrantSubmissionTest,
	"ProjectMimikyu.Intent.Sequence.ReentrantNavigationSubmission", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentReentrantSubmissionTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	FAgentNavigationRequest External = F.Parent;
	External.RequestId = FGuid::NewGuid();
	F.Nav->SetNavigationIntent(External);
	FGuid ListenerIntentId;
	bool bRetiredBeforeCallback = false;
	const FDelegateHandle Handle = F.Nav->OnNavigationResolved.AddLambda([&](FGuid Id, EPokemonNavigationResolution, FName)
	{
		if (Id == External.RequestId)
		{
			bRetiredBeforeCallback = !F.Nav->HasActiveNavigationRequest();
			ListenerIntentId = F.Intent->SubmitMoveToIntent(FVector(-100.f, 0.f, 2.15f));
		}
	});
	ON_SCOPE_EXIT { F.Nav->OnNavigationResolved.Remove(Handle); };
	F.Intent->SubmitMoveToIntent(F.Parent.TargetLocation);
	TestTrue(TEXT("External navigation retired before synchronous callback"), bRetiredBeforeCallback);
	TestTrue(TEXT("Reentrant intent submitted"), ListenerIntentId.IsValid());
	TestEqual(TEXT("Older pending submission cannot overwrite newer intent"), F.Intent->GetCurrentSequence().IntentId, ListenerIntentId);
	TestEqual(TEXT("Older nav installation cannot overwrite newer request"), F.Nav->GetCurrentNavigationIntent().TargetLocation, FVector(-100.f, 0.f, 2.15f));
	F.AssertRunning(*this, F.Intent->GetCurrentSequence());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonIntentWalkJumpWalkTest,
	"ProjectMimikyu.Intent.Sequence.WalkJumpWalkOneIntent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonIntentWalkJumpWalkTest::RunTest(const FString& Parameters)
{
	PokemonIntentSequenceTests::FFixture F;
	if (!F.InitIntent(*this)) return false;
	const FVector Start = F.Pokemon->GetCharacterMovement()->GetActorFeetLocation();
	F.Submit(); // Exactly one production intent submission; every subsequent step is a world tick.
	const FPokemonIntentSequence Submitted = F.Intent->GetCurrentSequence();
	bool bWalkedBeforeTakeoff = false, bLandedWithIntent = false, bWalkedAfterLanding = false;
	FVector LandingFeet = FVector::ZeroVector;
	for (int32 Frame = 0; Frame < 1200 && F.Nav->HasActiveNavigationRequest(); ++Frame)
	{
		F.TestWorld.TickTestWorld(1.f / 60.f);
		const FVector Feet = F.Pokemon->GetCharacterMovement()->GetActorFeetLocation();
		if (F.Pokemon->LaunchCalls == 0 && Feet.X > Start.X + 30.f) bWalkedBeforeTakeoff = true;
		if (!bLandedWithIntent && F.Pokemon->LaunchCalls == 1 && !F.Pokemon->JumpExecutionComponent->IsBusy()
			&& F.Pokemon->GetCharacterMovement()->IsMovingOnGround() && Feet.X > 300.f)
		{
			bLandedWithIntent = F.Nav->HasActiveNavigationRequest()
				&& F.Intent->GetCurrentSequence().State == EPokemonIntentSequenceState::Running;
			LandingFeet = Feet;
			F.AssertRunning(*this, Submitted);
			TestEqual(TEXT("Landing is not navigation terminal"), F.NavigationResults.Num(), 0);
			TestEqual(TEXT("Landing is not intent terminal"), F.IntentResults.Num(), 0);
		}
		if (bLandedWithIntent && Feet.X > LandingFeet.X + 100.f) bWalkedAfterLanding = true;
		if (F.Nav->HasActiveNavigationRequest()) F.AssertRunning(*this, Submitted);
	}
	TestTrue(TEXT("Walked before takeoff"), bWalkedBeforeTakeoff);
	TestEqual(TEXT("Exactly one actual physical jump"), F.Pokemon->LaunchCalls, 1);
	TestTrue(TEXT("Intermediate landing retains intent/action/navigation"), bLandedWithIntent);
	TestTrue(TEXT("Automatically walked after landing"), bWalkedAfterLanding);
	TestFalse(TEXT("Navigation completes without second command"), F.Nav->HasActiveNavigationRequest());
	TestTrue(TEXT("Original destination reached"), FVector::Dist2D(F.Pokemon->GetCharacterMovement()->GetActorFeetLocation(),
		F.Parent.TargetLocation) <= F.Parent.AcceptableRadius);
	TestEqual(TEXT("Single Navigate action spans entire composite move"), F.Intent->GetCurrentSequence().Actions.Num(), 1);
	TestEqual(TEXT("Navigate action succeeded"), F.Intent->GetCurrentSequence().Actions[0].State, EPokemonIntentActionState::Succeeded);
	TestEqual(TEXT("Parent MoveTo intent succeeded"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Succeeded);
	TestEqual(TEXT("Exactly one navigation terminal"), F.NavigationResults.Num(), 1);
	TestEqual(TEXT("Exactly one intent terminal"), F.IntentResults.Num(), 1);
	AddInfo(FString::Printf(TEXT("WalkJumpWalk IntentId=%s ActionId=%s ExecutorRequestId=%s Start=%s Landing=%s Final=%s Launches=%d"),
		*Submitted.IntentId.ToString(), *Submitted.Actions[0].ActionId.ToString(), *Submitted.Actions[0].ExecutorRequestId.ToString(),
		*Start.ToCompactString(), *LandingFeet.ToCompactString(),
		*F.Pokemon->GetCharacterMovement()->GetActorFeetLocation().ToCompactString(), F.Pokemon->LaunchCalls));
	return true;
}

#endif

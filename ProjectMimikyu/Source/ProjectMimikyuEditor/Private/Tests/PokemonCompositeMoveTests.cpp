#if WITH_DEV_AUTOMATION_TESTS

#include "Tests/PokemonCompositeMoveAutomationFixture.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositePersistenceTest,
	"ProjectMimikyu.Navigation.CompositeMove.ParentDestinationPersistence", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositePersistenceTest::RunTest(const FString& Parameters)
{
	PokemonCompositeMoveTests::FFixture F;
	if (!F.Init(*this)) return false;
	FPokemonCompositeMoveTestAccess::Plan(*F.Nav);
	const FPokemonTraversalCandidate Candidate = FPokemonCompositeMoveTestAccess::Candidate(*F.Nav);
	TestTrue(TEXT("Dynamic intermediate exit is executable"), Candidate.IsExecutable());
	TestTrue(TEXT("Exit is well before the original destination"), Candidate.DestinationFeetLocation.X < 600.f);
	F.AssertParent(*this);
	// State-transition coverage; real physical landing is covered separately below.
	F.SetFeet(Candidate.DestinationFeetLocation);
	F.Pokemon->JumpExecutionComponent->OnJumpFinished.Broadcast(F.Parent.RequestId, true, NAME_None);
	F.AssertParent(*this);
	TestTrue(TEXT("Ground navigation released"), FPokemonCompositeMoveTestAccess::GroundEnabled(*F.Nav));
	TestFalse(TEXT("Completed local plan discarded"), FPokemonCompositeMoveTestAccess::HasLocalState(*F.Nav));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositeLandingTest,
	"ProjectMimikyu.Navigation.CompositeMove.PhysicalLandingRetainsParent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositeLandingTest::RunTest(const FString& Parameters)
{
	PokemonCompositeMoveTests::FFixture F;
	if (!F.Init(*this)) return false;
	FPokemonCompositeMoveTestAccess::Plan(*F.Nav);
	if (!TestTrue(TEXT("Production plan executable"), FPokemonCompositeMoveTestAccess::Candidate(*F.Nav).IsExecutable())) return false;
	const FVector Exit = FPokemonCompositeMoveTestAccess::Candidate(*F.Nav).DestinationFeetLocation;
	FPokemonCompositeMoveTestAccess::Start(*F.Nav);
	if (!TestTrue(TEXT("Preparation started"), F.Pokemon->JumpExecutionComponent->IsBusy())) return false;
	for (int32 Frame = 0; Frame < 240 && F.Pokemon->JumpExecutionComponent->IsBusy(); ++Frame)
	{
		F.TestWorld.TickTestWorld(1.f / 60.f);
	}
	TestEqual(TEXT("Exactly one actual launch"), F.Pokemon->LaunchCalls, 1);
	TestFalse(TEXT("Executor finished"), F.Pokemon->JumpExecutionComponent->IsBusy());
	TestTrue(TEXT("Actual feet reached intermediate exit"), FVector::Dist2D(
		F.Pokemon->GetCharacterMovement()->GetActorFeetLocation(), Exit) < 60.f);
	TestTrue(TEXT("Successful landing releases ground navigation"), FPokemonCompositeMoveTestAccess::GroundEnabled(*F.Nav));
	F.AssertParent(*this);
	TestFalse(TEXT("Intermediate landing cannot complete parent"), FPokemonCompositeMoveTestAccess::Complete(*F.Nav));
	F.SetFeet(F.Parent.TargetLocation);
	TestTrue(TEXT("Only original destination completes"), FPokemonCompositeMoveTestAccess::Complete(*F.Nav));
	TestFalse(TEXT("Parent resolved at final destination"), F.Nav->HasActiveNavigationRequest());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositeRouteCostTest,
	"ProjectMimikyu.Navigation.CompositeMove.RouteCostPreference", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositeRouteCostTest::RunTest(const FString& Parameters)
{
	const FVector Parent(1000.f, 0.f, 0.f), ExitA(600.f, 0.f, 0.f), ExitB(500.f, 100.f, 0.f);
	FPokemonCompositeMoveCost A, B;
	A.Ground = B.Ground = 0.5;
	A.Jump = B.Jump = 0.7;
	A.bCompleteRoute = B.bCompleteRoute = true;
	A.Remaining = 12.; // fixture route around an obstacle
	B.Remaining = 4.;
	TestTrue(TEXT("A geometrically closer"), FVector::Dist(ExitA, Parent) < FVector::Dist(ExitB, Parent));
	TestTrue(TEXT("Actual route metric chooses farther B"), B.IsBetterThan(A, 0.05));
	A = B;
	A.Remaining -= 0.01;
	TestFalse(TEXT("Tiny cost change retains incumbent"), A.IsBetterThan(B, 0.05));
	A.bCompleteRoute = false;
	A.Remaining = 0.;
	TestFalse(TEXT("Unknown optimistic tail cannot undercut known route"), A.IsBetterThan(B, 0.05));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositeFallbackTest,
	"ProjectMimikyu.Navigation.CompositeMove.StraightLineFallback", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositeFallbackTest::RunTest(const FString& Parameters)
{
	PokemonCompositeMoveTests::FFixture F;
	if (!F.Init(*this)) return false;
	const auto A = FPokemonCompositeMoveTestAccess::Cost(*F.Nav, FVector(400.f, 0.f, 2.15f));
	const auto B = FPokemonCompositeMoveTestAccess::Cost(*F.Nav, FVector(500.f, 0.f, 2.15f));
	TestEqual(TEXT("No nav data explicitly reports fallback"), A.RouteSource, FName(TEXT("StraightLineFallback")));
	TestFalse(TEXT("Fallback is not a complete route proof"), A.bCompleteRoute);
	TestTrue(TEXT("Fallback chooses the shorter remaining distance"), B.IsBetterThan(A, 0.05));
	F.AssertParent(*this);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositeMultiSegmentTest,
	"ProjectMimikyu.Navigation.CompositeMove.MultiSegmentParentPersistence", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositeMultiSegmentTest::RunTest(const FString& Parameters)
{
	PokemonCompositeMoveTests::FFixture F;
	if (!F.Init(*this)) return false;
	// Revisit the same physical fixture twice to test ownership without a second
	// navmesh/physics scenario. Each plan is freshly discovered and fully validated.
	for (int32 Segment = 0; Segment < 2; ++Segment)
	{
		F.SetFeet(FVector(0.f, 0.f, 2.15f));
		FPokemonCompositeMoveTestAccess::Plan(*F.Nav);
		const auto Candidate = FPokemonCompositeMoveTestAccess::Candidate(*F.Nav);
		TestTrue(TEXT("Each segment executable under same parent"), Candidate.IsExecutable());
		F.SetFeet(Candidate.DestinationFeetLocation);
		F.Pokemon->JumpExecutionComponent->OnJumpFinished.Broadcast(F.Parent.RequestId, true, NAME_None);
		F.AssertParent(*this);
	}
	TestEqual(TEXT("Two independent local segments"), FPokemonCompositeMoveTestAccess::Serial(*F.Nav), 2u);
	F.SetFeet(F.Parent.TargetLocation);
	TestTrue(TEXT("Final completes after both segments"), FPokemonCompositeMoveTestAccess::Complete(*F.Nav));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositeLoopTest,
	"ProjectMimikyu.Navigation.CompositeMove.FailedLocalLoopProtection", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositeLoopTest::RunTest(const FString& Parameters)
{
	PokemonCompositeMoveTests::FFixture F;
	if (!F.Init(*this, false)) return false;
	FPokemonCompositeMoveTestAccess::Plan(*F.Nav);
	const uint32 Generation = FPokemonCompositeMoveTestAccess::Generation(*F.Nav);
	const FName Failure = FPokemonCompositeMoveTestAccess::Candidate(*F.Nav).FailureReason;
	TestTrue(TEXT("Unsupported destination held"), FPokemonCompositeMoveTestAccess::Held(*F.Nav));
	for (int32 Attempt = 0; Attempt < 100; ++Attempt) FPokemonCompositeMoveTestAccess::Plan(*F.Nav);
	TestEqual(TEXT("100 identical retries perform exactly one actual search"), FPokemonCompositeMoveTestAccess::SearchCount(*F.Nav), 1u);
	TestEqual(TEXT("Identical rejection does not start another generation"), FPokemonCompositeMoveTestAccess::Generation(*F.Nav), Generation);
	TestEqual(TEXT("Original rejection retained"), FPokemonCompositeMoveTestAccess::Candidate(*F.Nav).FailureReason, Failure);
	TestEqual(TEXT("No traversal selected"), FPokemonCompositeMoveTestAccess::Serial(*F.Nav), 0u);
	TestEqual(TEXT("No launch fabricated"), F.Pokemon->LaunchCalls, 0);
	F.Nav->SuspendNavigation();
	F.Nav->ResumeNavigation();
	TestFalse(TEXT("Resume unlocks fresh planning"), FPokemonCompositeMoveTestAccess::Held(*F.Nav));
	TestTrue(TEXT("Resume advances generation"), FPokemonCompositeMoveTestAccess::Generation(*F.Nav) > Generation);
	F.AssertParent(*this);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositeReplacementTest,
	"ProjectMimikyu.Navigation.CompositeMove.RequestReplacement", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositeReplacementTest::RunTest(const FString& Parameters)
{
	PokemonCompositeMoveTests::FFixture F;
	if (!F.Init(*this)) return false;
	FPokemonCompositeMoveTestAccess::Plan(*F.Nav);
	TestTrue(TEXT("Old local state installed"), FPokemonCompositeMoveTestAccess::HasLocalState(*F.Nav));
	FPokemonCompositeMoveTestAccess::Start(*F.Nav);
	TestTrue(TEXT("Old executor in preparation"), F.Pokemon->JumpExecutionComponent->IsBusy());
	const FGuid OldId = F.Parent.RequestId;
	F.Parent.RequestId = FGuid::NewGuid();
	F.Parent.TargetLocation = FVector::ZeroVector;
	F.Nav->SetNavigationIntent(F.Parent);
	F.AssertParent(*this);
	TestFalse(TEXT("Preparation cancelled"), F.Pokemon->JumpExecutionComponent->IsBusy());
	TestFalse(TEXT("Old temporary plan cleared"), FPokemonCompositeMoveTestAccess::HasLocalState(*F.Nav));
	TestFalse(TEXT("Reentrant cancellation did not hold new request"), FPokemonCompositeMoveTestAccess::Held(*F.Nav));
	F.Pokemon->JumpExecutionComponent->OnJumpFinished.Broadcast(OldId, true, NAME_None);
	F.AssertParent(*this);
	TestEqual(TEXT("Replacement reset segment counter"), FPokemonCompositeMoveTestAccess::Serial(*F.Nav), 0u);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositeDodgeTest,
	"ProjectMimikyu.Navigation.CompositeMove.PreparationSuspendResume", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositeDodgeTest::RunTest(const FString& Parameters)
{
	PokemonCompositeMoveTests::FFixture F;
	if (!F.Init(*this)) return false;
	FPokemonCompositeMoveTestAccess::Plan(*F.Nav);
	FPokemonCompositeMoveTestAccess::Start(*F.Nav);
	TestTrue(TEXT("Preparing before suspend"), F.Pokemon->JumpExecutionComponent->IsBusy());
	F.Nav->SuspendNavigation();
	TestFalse(TEXT("Suspend cancels preparation"), F.Pokemon->JumpExecutionComponent->IsBusy());
	F.AssertParent(*this);
	F.Nav->ResumeNavigation();
	TestFalse(TEXT("Resume discards previous local assumptions"), FPokemonCompositeMoveTestAccess::HasLocalState(*F.Nav));
	FPokemonCompositeMoveTestAccess::Plan(*F.Nav);
	TestTrue(TEXT("Fresh plan executable"), FPokemonCompositeMoveTestAccess::Candidate(*F.Nav).IsExecutable());
	F.AssertParent(*this);
	TestEqual(TEXT("No launch before new preparation"), F.Pokemon->LaunchCalls, 0);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonCompositeWalkJumpWalkTest,
	"ProjectMimikyu.Navigation.CompositeMove.WalkJumpWalkOneRequest", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonCompositeWalkJumpWalkTest::RunTest(const FString& Parameters)
{
	PokemonCompositeMoveTests::FFixture F;
	if (!F.Init(*this)) return false;
	if (!F.EnableNavigation(*this)) return false;
	const FVector Start = F.Pokemon->GetCharacterMovement()->GetActorFeetLocation();
	// Exactly one player submission; production navigation owns every subsequent tick.
	F.Nav->RequestPlayerMoveToLocation(F.Parent.TargetLocation);
	F.Parent = F.Nav->GetCurrentNavigationIntent();
	if (!TestTrue(TEXT("One parent retained"), F.Nav->HasActiveNavigationRequest())) return false;
	bool bWalkedBeforeTakeoff = false;
	bool bLandedWithParent = false;
	bool bWalkedAfterLanding = false;
	FVector LandingFeet = FVector::ZeroVector;
	for (int32 Frame = 0; Frame < 1200 && F.Nav->HasActiveNavigationRequest(); ++Frame)
	{
		F.TestWorld.TickTestWorld(1.f / 60.f);
		const FVector Feet = F.Pokemon->GetCharacterMovement()->GetActorFeetLocation();
		if (F.Pokemon->LaunchCalls == 0 && Feet.X > Start.X + 30.f) bWalkedBeforeTakeoff = true;
		if (!bLandedWithParent && F.Pokemon->LaunchCalls == 1 && !F.Pokemon->JumpExecutionComponent->IsBusy()
			&& F.Pokemon->GetCharacterMovement()->IsMovingOnGround() && Feet.X > 300.f)
		{
			bLandedWithParent = F.Nav->HasActiveNavigationRequest();
			LandingFeet = Feet;
			F.AssertParent(*this);
		}
		if (bLandedWithParent && Feet.X > LandingFeet.X + 100.f) bWalkedAfterLanding = true;
		if (F.Nav->HasActiveNavigationRequest())
		{
			TestEqual(TEXT("Every active tick keeps parent ID"), F.Nav->GetCurrentNavigationIntent().RequestId, F.Parent.RequestId);
		}
	}
	TestTrue(TEXT("Walked to selected takeoff anchor"), bWalkedBeforeTakeoff);
	TestEqual(TEXT("Exactly one physical jump"), F.Pokemon->LaunchCalls, 1);
	TestTrue(TEXT("Intermediate landing retains parent"), bLandedWithParent);
	TestTrue(TEXT("Automatically walked after landing"), bWalkedAfterLanding);
	TestFalse(TEXT("Parent completes without another player command"), F.Nav->HasActiveNavigationRequest());
	TestTrue(TEXT("Original destination reached"), FVector::Dist2D(F.Pokemon->GetCharacterMovement()->GetActorFeetLocation(),
		F.Parent.TargetLocation) <= F.Parent.AcceptableRadius);
	AddInfo(FString::Printf(TEXT("WalkJumpWalk RequestId=%s Start=%s Landing=%s Final=%s Launches=%d"),
		*F.Parent.RequestId.ToString(), *Start.ToCompactString(), *LandingFeet.ToCompactString(),
		*F.Pokemon->GetCharacterMovement()->GetActorFeetLocation().ToCompactString(), F.Pokemon->LaunchCalls));
	return true;
}

#endif

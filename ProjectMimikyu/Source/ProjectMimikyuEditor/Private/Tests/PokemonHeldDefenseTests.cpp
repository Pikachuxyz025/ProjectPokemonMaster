#if WITH_DEV_AUTOMATION_TESTS

#include "Tests/PokemonCompositeMoveAutomationFixture.h"
#include "Tests/PokemonAttackAutomationFixture.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "ActorComponents/MovesetComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonFieldPresenceComponent.h"
#include "ActorComponents/PokemonIncapacitationComponent.h"
#include "ActorComponents/PokemonIntentSequenceComponent.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "HAL/IConsoleManager.h"
#include "Intent/PokemonHeldDefenseTypes.h"
#include "Misc/OutputDeviceRedirector.h"
#include "Misc/ScopedCVar.h"
#include "Misc/ScopeExit.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/StructOnScope.h"

namespace PokemonHeldDefenseTests
{
	using EState = EPokemonHeldDefenseState;

	// Observe only records emitted during defense input, with both diagnostic paths enabled.
	struct FRecoveryLogCounter : FOutputDevice
	{
		int32 Count = 0;
		void Serialize(const TCHAR* Message, ELogVerbosity::Type, const FName&) override
		{
			if (IsInGameThread() && (FCString::Strstr(Message, TEXT("[AirRecoveryTrace]"))
				|| FCString::Strstr(Message, TEXT("[AirRecoveryCompare]"))
				|| FCString::Strstr(Message, TEXT("[AirRecoveryTolerance]")))) ++Count;
		}
	};

	struct FHeldDefenseFixture : PokemonCompositeMoveTests::FFixture
	{
		FScopedCVar<int32> Prototype{TEXT("pokemon.Defense.AuthorizationPrototype"), 1};
		UPokemonIntentSequenceComponent* Intent = nullptr;
		AActor* Trainer = nullptr;
		FAutomationTestBase* Test = nullptr;

		bool Start(FAutomationTestBase& InTest)
		{
			Test = &InTest;
			if (!Test->TestTrue(TEXT("Prototype enabled for test"), UPokemonIntentSequenceComponent::IsHeldDefensePrototypeEnabled())
				|| !Init(*Test) || !EnableNavigation(*Test)) return false;
			Intent = Pokemon->GetIntentSequenceComponent();
			UClass* TrainerClass = FindObject<UClass>(nullptr, TEXT("/Script/ProjectMimikyu.TrainerCharacter"));
			if (!Test->TestNotNull(TEXT("Trainer class"), TrainerClass)) return false;
			// Spawn away from the route so the trainer's capsule cannot change the jump or ground path.
			Trainer = TestWorld.GetTestWorld()->SpawnActor<AActor>(TrainerClass, FVector(-1000, 900, 200), FRotator::ZeroRotator);
			FObjectProperty* Selected = FindFProperty<FObjectProperty>(TrainerClass, TEXT("CurrentPokemon"));
			if (!Test->TestNotNull(TEXT("Trainer"), Trainer) || !Test->TestNotNull(TEXT("Selection"), Selected)) return false;
			Selected->SetObjectPropertyValue_InContainer(Trainer, Pokemon);
			Pokemon->SetPokemonTrainer(Trainer);
			return Test->TestTrue(TEXT("Production trainer ownership"), Pokemon->IsOwnedByTrainer(Trainer));
		}

		bool Move(FVector Destination = FVector(30.f, 0.f, 2.15f))
		{
			const FGuid Id = Intent->SubmitMoveToIntent(Destination);
			return Test->TestTrue(TEXT("Running retained MoveTo"), Id.IsValid() && Intent->HasRunningMoveToAction());
		}
		bool Press(int32 Activation = 1)
		{
			FName Reason;
			return Intent->BeginHeldDefense(Trainer, Activation, 1, Reason);
		}
		bool Release(int32 Activation = 1)
		{
			return Intent->ReleaseHeldDefense(Trainer, Activation, 2, TEXT("InputReleased"));
		}
		const FPokemonHeldDefenseSession& Session() const { return Intent->GetHeldDefenseSession(); }

		bool SendInput(int32 Activation, bool bHeld)
		{
			UFunction* Rpc = Trainer->FindFunction(TEXT("ServerSetDefensiveDodgeHeld"));
			if (!Test->TestNotNull(TEXT("Authoritative trainer input RPC"), Rpc)) return false;
			// Native TrainerCharacter is private to the game module. Populate the reflected
			// RPC frame by field name so parameter padding and bool packing are engine-owned.
			FStructOnScope Frame(Rpc);
			uint8* Data = Frame.GetStructMemory();
			FObjectProperty* Actor = FindFProperty<FObjectProperty>(Rpc, TEXT("ExpectedPokemon"));
			FIntProperty* Token = FindFProperty<FIntProperty>(Rpc, TEXT("Activation"));
			FIntProperty* Revision = FindFProperty<FIntProperty>(Rpc, TEXT("Revision"));
			FBoolProperty* Held = FindFProperty<FBoolProperty>(Rpc, TEXT("bHeld"));
			FStructProperty* Direction = FindFProperty<FStructProperty>(Rpc, TEXT("DirectionTag"));
			FStructProperty* Forward = FindFProperty<FStructProperty>(Rpc, TEXT("ReferenceForward"));
			if (!Test->TestTrue(TEXT("Reflected input fields"), Actor && Token && Revision && Held && Direction && Forward)) return false;
			Actor->SetObjectPropertyValue_InContainer(Data, Pokemon);
			Token->SetPropertyValue_InContainer(Data, Activation);
			Revision->SetPropertyValue_InContainer(Data, bHeld ? 1 : 2);
			Held->SetPropertyValue_InContainer(Data, bHeld);
			*Direction->ContainerPtrToValuePtr<FGameplayTag>(Data) = FGameplayTag::RequestGameplayTag(TEXT("InputTag.Dodge.Forward"), false);
			*Forward->ContainerPtrToValuePtr<FVector>(Data) = FVector::ForwardVector;
			Trainer->ProcessEvent(Rpc, Data);
			return true;
		}
	};
}

using namespace PokemonHeldDefenseTests;

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonHeldDefensePreservesMove,
	"ProjectMimikyu.Intent.HeldDefense.GroundInputPreservesOwnership", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonHeldDefensePreservesMove::RunTest(const FString&)
{
	FHeldDefenseFixture F;
	if (!F.Start(*this) || !F.Move()) return false;
	auto* Path = CastChecked<AAIController>(F.Pokemon->GetController())->GetPathFollowingComponent();
	for (int32 Frame = 0; Frame < 30 && !Path->GetCurrentRequestId().IsValid(); ++Frame) F.TestWorld.TickTestWorld(1.f / 60.f);
	const FAIRequestID EngineMove = Path->GetCurrentRequestId();
	if (!TestTrue(TEXT("Real ground move request in progress"), EngineMove.IsValid())) return false;
	const auto Sequence = F.Intent->GetCurrentSequence();
	const auto Action = Sequence.Actions[Sequence.ActiveActionIndex];
	const auto Nav = F.Nav->GetCurrentNavigationIntent();
	const uint32 Generation = FPokemonCompositeMoveTestAccess::Generation(*F.Nav);
	const auto* Movement = F.Pokemon->GetCharacterMovement();
	const FVector Velocity = Movement->Velocity, PendingLaunch = Movement->PendingLaunchVelocity;
	const auto* Stats = F.Pokemon->GetPokemonAS();
	const float Stamina = Stats->GetStamina(), PP = Stats->GetPowerPoints();
	int32 NavResults = 0, ParentResults = 0, GASActivations = 0;
	const FDelegateHandle NavHandle = F.Nav->OnNavigationResolved.AddLambda([&](FGuid, EPokemonNavigationResolution, FName) { ++NavResults; });
	const FDelegateHandle IntentHandle = F.Intent->OnIntentResolved.AddLambda([&](const FPokemonIntentSequence&) { ++ParentResults; });
	auto* ASC = F.Pokemon->GetPokemonASC();
	const FDelegateHandle GASHandle = ASC->AbilityActivatedCallbacks.AddLambda([&](UGameplayAbility*) { ++GASActivations; });
	FScopedCVar<int32> Trace(TEXT("pokemon.Traversal.AirborneRecoveryTelemetry"), 1);
	FScopedCVar<int32> Compare(TEXT("pokemon.Traversal.AirborneRecoveryCompare"), 1);
	FRecoveryLogCounter Logs;
	GLog->AddOutputDevice(&Logs);
	ON_SCOPE_EXIT {
		GLog->RemoveOutputDevice(&Logs);
		ASC->AbilityActivatedCallbacks.Remove(GASHandle);
		F.Nav->OnNavigationResolved.Remove(NavHandle);
		F.Intent->OnIntentResolved.Remove(IntentHandle);
	};

	if (!TestTrue(TEXT("Press accepted"), F.Press())) return false;
	const auto Held = F.Session();
	TestEqual(TEXT("Authorization requested"), Held.State, EState::Requested);
	TestTrue(TEXT("Binds actual trainer and Pokemon"), Held.Pokemon == F.Pokemon && Held.Trainer == F.Trainer);
	TestEqual(TEXT("Parent binding"), Held.IntentId, Sequence.IntentId);
	TestEqual(TEXT("Action binding"), Held.ActionId, Action.ActionId);
	TestEqual(TEXT("Retained request binding"), Held.NavigationRequestId, Nav.RequestId);
	TestEqual(TEXT("Destination binding"), Held.Destination, Nav.TargetLocation);
	TestEqual(TEXT("Press activation"), Held.InputActivation, 1);
	TestEqual(TEXT("Press revision"), Held.InputRevision, 1);
	FPokemonHeldDefenseSession Service;
	TestFalse(TEXT("Prototype grants no operational service"), F.Intent->TryGetHeldDefenseServiceContext(Service));
	F.Press(); // Idempotent duplicate may replay status or report that it was already applied.
	F.Intent->RefreshHeldDefense();
	TestEqual(TEXT("Duplicate or continued hold cannot advance the session"), F.Session().ServerRevision, Held.ServerRevision);
	TestTrue(TEXT("Matching release"), F.Release());
	TestEqual(TEXT("Explicit terminal state"), F.Session().State, EState::Released);
	TestEqual(TEXT("Release revision"), F.Session().InputRevision, 2);
	TestFalse(TEXT("No active held input"), F.Session().IsHeld());
	TestTrue(TEXT("Parent still running"), F.Intent->HasRunningMoveToAction());
	TestEqual(TEXT("Same parent"), F.Intent->GetCurrentSequence().IntentId, Sequence.IntentId);
	TestEqual(TEXT("Same navigate action"), F.Intent->GetCurrentSequence().Actions[0].ActionId, Action.ActionId);
	TestEqual(TEXT("Same executor request"), F.Nav->GetCurrentNavigationIntent().RequestId, Nav.RequestId);
	TestEqual(TEXT("Same navigation destination"), F.Nav->GetCurrentNavigationIntent().TargetLocation, Nav.TargetLocation);
	TestEqual(TEXT("Same planning generation"), FPokemonCompositeMoveTestAccess::Generation(*F.Nav), Generation);
	TestTrue(TEXT("Same engine path-following request"), EngineMove == Path->GetCurrentRequestId());
	TestTrue(TEXT("No terminal navigation/parent events"), NavResults == 0 && ParentResults == 0);
	TestEqual(TEXT("No GAS activation"), GASActivations, 0);
	TestEqual(TEXT("Unspent stamina"), Stats->GetStamina(), Stamina);
	TestEqual(TEXT("Unspent PP"), Stats->GetPowerPoints(), PP);
	TestTrue(TEXT("No motion changes"), Movement->Velocity == Velocity && Movement->PendingLaunchVelocity == PendingLaunch
		&& !Movement->HasRootMotionSources() && F.Pokemon->LaunchCalls == 0 && !F.Pokemon->GetIsDodging());
	TestEqual(TEXT("No recovery diagnostic records"), Logs.Count, 0);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonHeldDefenseOwnershipChecks,
	"ProjectMimikyu.Intent.HeldDefense.EligibilityAndAuthority", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonHeldDefenseOwnershipChecks::RunTest(const FString&)
{
	FHeldDefenseFixture F;
	if (!F.Start(*this)) return false;
	TestFalse(TEXT("No MoveTo rejects press"), F.Press());
	if (!F.Move()) return false;
	TestFalse(TEXT("Rejected activation cannot become latent authorization"), F.Press());
	FName Reason;
	AActor* Stranger = F.TestWorld.GetTestWorld()->SpawnActor<AActor>();
	TestFalse(TEXT("Unrelated trainer rejected"), F.Intent->BeginHeldDefense(Stranger, 2, 1, Reason));
	const ENetRole Role = F.Pokemon->GetLocalRole();
	F.Pokemon->SetRole(ROLE_SimulatedProxy);
	TestFalse(TEXT("Simulated proxy cannot authorize"), F.Press(2));
	F.Pokemon->SetRole(Role);
	TestTrue(TEXT("Fresh owning press can bind"), F.Press(3));
	TestFalse(TEXT("Another trainer cannot release"), F.Intent->ReleaseHeldDefense(Stranger, 3, 2, TEXT("InputReleased")));
	TestTrue(TEXT("Original session survives rejected input"), F.Session().IsHeld());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonHeldDefenseInputRPC,
	"ProjectMimikyu.Intent.HeldDefense.TrainerInputOrdering", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonHeldDefenseInputRPC::RunTest(const FString&)
{
	// Local dispatch of real RPCs on authority models input ordering, including release
	// without an acknowledgement. Dedicated-server/owning-client transport needs PIE.
	FHeldDefenseFixture F;
	if (!F.Start(*this) || !F.SendInput(1, true) || !F.Move() || !F.SendInput(1, true)) return false;
	TestFalse(TEXT("Replayed press from idle cannot attach to later MoveTo"), F.Session().IsHeld());
	if (!F.SendInput(1, false) || !F.SendInput(2, true)) return false;
	if (!TestTrue(TEXT("Trainer's new press bound"), F.Session().IsHeld())) return false;
	const auto First = F.Session();
	F.SendInput(2, true);
	TestEqual(TEXT("Duplicate RPC press idempotent"), F.Session().ServerRevision, First.ServerRevision);
	F.SendInput(2, false); // Uses input identity only; caller has received no binding GUIDs.
	TestEqual(TEXT("Release before consuming acknowledgement"), F.Session().State, EState::Released);
	if (!F.Move(FVector(-200.f, 160.f, 2.15f)) || !F.SendInput(3, true)) return false;
	const auto New = F.Session();
	if (!TestTrue(TEXT("Replacement session bound to new MoveTo"), New.IsHeld() && New.IntentId != First.IntentId)) return false;
	F.SendInput(2, false);
	TestTrue(TEXT("Delayed old release leaves new authorization intact"), F.Session().IsHeld());
	TestEqual(TEXT("Delayed release cannot change replacement revision"), F.Session().ServerRevision, New.ServerRevision);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonHeldDefenseReentrant,
	"ProjectMimikyu.Intent.HeldDefense.ReentrantCompletionAndStaleEvents", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonHeldDefenseReentrant::RunTest(const FString&)
{
	FHeldDefenseFixture F;
	if (!F.Start(*this) || !F.Move() || !TestTrue(TEXT("First authorization"), F.Press())) return false;
	const auto Old = F.Session();
	bool bRetiredBeforeNotification = false, bReplacementAuthorized = false;
	const FDelegateHandle Handle = F.Intent->OnIntentResolved.AddLambda([&](const FPokemonIntentSequence& Finished)
	{
		if (Finished.IntentId != Old.IntentId) return;
		bRetiredBeforeNotification = !F.Session().IsHeld();
		bReplacementAuthorized = F.Move(FVector(-200.f, 0.f, 2.15f)) && F.Press(2);
	});
	ON_SCOPE_EXIT { F.Intent->OnIntentResolved.Remove(Handle); };
	F.SetFeet(Old.Destination);
	TestTrue(TEXT("Actual destination acceptance completes first request"), FPokemonCompositeMoveTestAccess::Complete(*F.Nav));
	TestTrue(TEXT("Session revoked before parent terminal observers"), bRetiredBeforeNotification);
	if (!TestTrue(TEXT("Listener installed and authorized new action synchronously"), bReplacementAuthorized)) return false;
	const auto New = F.Session();
	TestTrue(TEXT("Replacement identities are distinct"), New.IntentId != Old.IntentId && New.ActionId != Old.ActionId
		&& New.NavigationRequestId != Old.NavigationRequestId);
	F.Nav->OnNavigationResolved.Broadcast(Old.NavigationRequestId, EPokemonNavigationResolution::Interrupted, TEXT("LateResult"));
	F.Pokemon->JumpExecutionComponent->OnJumpFinished.Broadcast(Old.NavigationRequestId, true, NAME_None);
	F.Release(1);
	F.TestWorld.TickTestWorld(0.1f); // Allows any stale queued lifecycle work to run.
	TestTrue(TEXT("Replacement still owns authorization"), F.Session().IsHeld() && F.Session().InputActivation == 2);
	TestEqual(TEXT("Replacement retained request"), F.Nav->GetCurrentNavigationIntent().RequestId, New.NavigationRequestId);
	TestTrue(TEXT("Matching cancellation"), F.Nav->CancelNavigationRequest(New.NavigationRequestId, TEXT("AutomationCancelled")));
	TestFalse(TEXT("Matching cancellation revoked authorization"), F.Session().IsHeld());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonHeldDefenseAttack,
	"ProjectMimikyu.Intent.HeldDefense.ReservedAndCommittedAttacks", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonHeldDefenseAttack::RunTest(const FString&)
{
	FHeldDefenseFixture F;
	if (!F.Start(*this)) return false;
	GetMutableDefault<UPokemonAttackAutomationAbility>()->MoveActionTag = FGameplayTag::RequestGameplayTag(TEXT("PokemonMoves.MoveAction.Melee"));
	auto* Move = NewObject<UPokemonMoveDataAsset>(F.Pokemon);
	Move->Ability = UPokemonAttackAutomationAbility::StaticClass();
	Move->InputTag = FGameplayTag::RequestGameplayTag(TEXT("InputTag.1"));
	Move->BaseStaminaCost = 10.f;
	F.Pokemon->GetMovesetComponent()->SetupMoveset({Move});
	F.Pokemon->GetPokemonASC()->AddCharacterAbilities({Move});
	auto* Probe = NewObject<UPokemonAttackAutomationProbe>(F.Pokemon);
	F.Pokemon->AddInstanceComponent(Probe);
	Probe->RegisterComponent();
	Probe->Mode = EPokemonAttackTestMode::CommitAndHold;
	FPokemonCommandTarget Target;
	Target.TargetType = EPokemonCommandTargetType::Location;
	Target.TargetLocation = FVector(25.f, 0.f, 2.15f);
	const FGuid Attack = F.Intent->SubmitAttackIntent(0, Target);
	const auto Reserved = F.Intent->GetCurrentSequence();
	auto* Command = F.Pokemon->FindComponentByClass<UPokemonCommandComponent>();
	if (!TestTrue(TEXT("Production attack reserved for approach"), Attack.IsValid() && Reserved.AttackCommandId.IsValid()
		&& Reserved.Actions.IsValidIndex(Reserved.ActiveActionIndex) && Reserved.Actions[Reserved.ActiveActionIndex].Spec.Type == EPokemonIntentActionType::CombatApproach)) return false;
	const FGuid CommandId = Reserved.AttackCommandId;
	F.SendInput(1, true);
	TestFalse(TEXT("Reserved attack rejects held authorization"), F.Session().IsHeld());
	TestFalse(TEXT("Reservation also blocks ordinary dodge"), F.Pokemon->GetIsDodging());
	TestEqual(TEXT("Reservation survives input"), Command->GetActiveTrainerCommandId(), CommandId);
	F.SendInput(1, false);
	// Isolate input precedence from the approach solver by delivering its matching
	// ready result. The coordinator then executes the real GAS spec and commit.
	F.Nav->OnNavigationResolved.Broadcast(Reserved.Actions[Reserved.ActiveActionIndex].ExecutorRequestId,
		EPokemonNavigationResolution::Succeeded, NAME_None);
	if (!TestTrue(TEXT("Ability committed and owns C"), Probe->bCommitSucceeded && Probe->Ability
		&& Probe->Ability->IsActive() && F.Intent->IsRunningAttackExecutionForCommand(CommandId))) return false;
	F.SendInput(2, true);
	TestFalse(TEXT("Committed attack rejects held authorization"), F.Session().IsHeld());
	TestFalse(TEXT("No dodge started"), F.Pokemon->GetIsDodging());
	TestTrue(TEXT("Same committed ability is still executing"), Probe->Ability->IsActive()
		&& Command->GetActiveTrainerCommandId() == CommandId && Probe->Activations == 1);
	Probe->Ability->Finish();
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonHeldDefenseJump,
	"ProjectMimikyu.Intent.HeldDefense.CompositeJumpSuspendsWithoutChangingMotion", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FPokemonHeldDefenseJump::RunTest(const FString&)
{
	FHeldDefenseFixture F;
	if (!F.Start(*this) || !F.Move(F.Parent.TargetLocation) || !TestTrue(TEXT("Ground press accepted"), F.Press())) return false;
	auto* Executor = F.Pokemon->JumpExecutionComponent.Get();
	auto* Movement = F.Pokemon->GetCharacterMovement();
	const FVector Goal = F.Session().Destination;
	const FGuid NavId = F.Session().NavigationRequestId;
	for (int32 Frame = 0; Frame < 240 && !Executor->HasTakenOff(); ++Frame) F.TestWorld.TickTestWorld(1.f / 60.f);
	if (!TestTrue(TEXT("Real executor took off"), Executor->HasTakenOff() && Executor->GetParentRequestId() == NavId)) return false;
	const auto LaunchVelocity = Movement->Velocity;
	const bool bRVO = Movement->bUseRVOAvoidance;
	const bool bMaxAccel = Movement->bForceMaxAccel;
	TestTrue(TEXT("Real ballistic override applied"), Movement->AirControl == 0.f && Movement->FallingLateralFriction == 0.f
		&& Movement->BrakingDecelerationFalling == 0.f && Movement->BrakingFriction == 0.f && !bRVO && !bMaxAccel);
	F.Intent->RefreshHeldDefense();
	TestEqual(TEXT("Session suspended during executor ownership"), F.Session().State, EState::Suspended);
	TestEqual(TEXT("Parent request preserved across takeoff"), F.Nav->GetCurrentNavigationIntent().RequestId, NavId);
	TestTrue(TEXT("Release while suspended"), F.Release());
	TestTrue(TEXT("Release leaves physical executor, velocity and all ballistic settings intact"), Executor->HasTakenOff()
		&& Movement->Velocity == LaunchVelocity && Movement->AirControl == 0.f && Movement->FallingLateralFriction == 0.f
		&& Movement->BrakingDecelerationFalling == 0.f && Movement->BrakingFriction == 0.f
		&& Movement->bUseRVOAvoidance == bRVO && Movement->bForceMaxAccel == bMaxAccel);
	for (int32 Frame = 0; Frame < 1200 && F.Nav->HasActiveNavigationRequest(); ++Frame) F.TestWorld.TickTestWorld(1.f / 60.f);
	TestEqual(TEXT("MoveTo reached original destination after one physical jump"), F.Intent->GetCurrentSequence().State, EPokemonIntentSequenceState::Succeeded);
	TestEqual(TEXT("Single launch"), F.Pokemon->LaunchCalls, 1);
	TestTrue(TEXT("Logged goal is still the original click"), F.Intent->GetCurrentSequence().Actions[0].Spec.Destination == Goal);
	TestFalse(TEXT("Landing cannot reenable a released activation"), F.Session().IsHeld());
	return true;
}

IMPLEMENT_COMPLEX_AUTOMATION_TEST(FPokemonHeldDefenseTeardown,
	"ProjectMimikyu.Intent.HeldDefense.OwnerLifecycle", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
void FPokemonHeldDefenseTeardown::GetTests(TArray<FString>& Names, TArray<FString>& Commands) const
{
	for (const TCHAR* Name : {TEXT("Incapacitated"), TEXT("FieldRemoval"), TEXT("EndPlay")})
	{
		Names.Add(Name);
		Commands.Add(Name);
	}
}
bool FPokemonHeldDefenseTeardown::RunTest(const FString& Case)
{
	FHeldDefenseFixture F;
	if (!F.Start(*this) || !F.Move() || !TestTrue(TEXT("Active authorization at start"), F.Press())) return false;
	if (Case == TEXT("Incapacitated"))
	{
		F.Pokemon->FindComponentByClass<UPokemonIncapacitationComponent>()->ApplyKnockback(FVector(30.f, 0.f, 100.f), false);
		TestTrue(TEXT("Real incapacitation transition"), F.Pokemon->IsIncapacitated());
		F.TestWorld.TickTestWorld(0.25f);
	}
	else if (Case == TEXT("FieldRemoval"))
	{
		F.Pokemon->Return();
		TestTrue(TEXT("Return prepared field removal"), F.Pokemon->FindComponentByClass<UPokemonFieldPresenceComponent>()->IsPreparedForFieldRemoval());
		F.TestWorld.TickTestWorld(0.25f);
	}
	else
	{
		// DestroyComponent runs EndPlay synchronously. Inspect the terminal record
		// immediately, before collection, as in the existing GAS cleanup probes.
		F.Intent->DestroyComponent();
	}
	TestFalse(TEXT("Owner teardown revokes held authorization"), F.Session().IsHeld());
	TestFalse(TEXT("Delayed release cannot change a revoked owner"), F.Release());
	return true;
}

#endif

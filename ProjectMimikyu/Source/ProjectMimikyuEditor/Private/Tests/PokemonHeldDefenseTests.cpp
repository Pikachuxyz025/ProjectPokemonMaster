#if WITH_DEV_AUTOMATION_TESTS

#include "Tests/PokemonCompositeMoveAutomationFixture.h"
#include "Tests/PokemonAttackAutomationFixture.h"
#include "AbilitySystem/Abilities/PokemonDodgeGameplayAbility.h"
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
#include "ActorComponents/PokemonStaminaComponent.h"
#include "GameplayEffectTypes.h"
#include <limits>

struct FPokemonHeldDefenseStaminaTestAccess
{
	static void ConfigureDefense(UPokemonIntentSequenceComponent& Intent,
		float Rate, float ReentryFraction)
	{
		Intent.HeldDefenseStaminaPerSecond = Rate;
		Intent.HeldDefenseReentryFraction = ReentryFraction;
	}

	static void ConfigureRegen(UPokemonStaminaComponent& Stamina, float Rate, float Delay, float Interval)
	{
		if (auto* Attributes = Stamina.GetStaminaAttributesSet())
		{
			Stamina.StaminaRegenRate = Rate;
			Stamina.StaminaRegenDelay = Delay;
			Stamina.StaminaRegenTickInterval = Interval;
		}
	}

	static FGuid Lease(const UPokemonIntentSequenceComponent& Intent)
	{
		return Intent.HeldDefenseSustainedToken;
	}

	static uint64 BindingSerial(const UPokemonIntentSequenceComponent& Intent)
	{
		return Intent.HeldDefenseBindingSerial;
	}

	static bool HasObservers(const UPokemonIntentSequenceComponent& Intent)
	{
		return Intent.HeldDefenseObservationHandle.IsValid()
			|| Intent.HeldDefenseJumpTakeoffHandle.IsValid()
			|| Intent.HeldDefenseJumpFinishedHandle.IsValid()
			|| Intent.HeldDefenseObservedPokemon.IsValid();
	}
};


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
		FScopedCVar<int32> Prototype{ TEXT("pokemon.Defense.AuthorizationPrototype"), 1 };

		FScopedCVar<int32> StaminaPrototype;

		explicit FHeldDefenseFixture(int32 ChargingEnabled = 0)
			:StaminaPrototype(TEXT("pokemon.Defense.StaminaPrototype"), ChargingEnabled) {
		}

		UPokemonIntentSequenceComponent* Intent = nullptr;
		AActor* Trainer = nullptr;
		FAutomationTestBase* Test = nullptr;

		bool Start(FAutomationTestBase& InTest)
		{
			Test = &InTest;

			if (!Test->TestTrue(TEXT("Prototype enabled for test"),
				UPokemonIntentSequenceComponent::IsHeldDefensePrototypeEnabled())
				|| !Init(*Test) || !EnableNavigation(*Test)) return false;

			Intent = Pokemon->GetIntentSequenceComponent();

			UClass* TrainerClass = FindObject<UClass>(nullptr, TEXT("/Script/ProjectMimikyu.TrainerCharacter"));
			if (!Test->TestNotNull(TEXT("Trainer class"), TrainerClass)) return false;

			// Spawn away from the route so the trainer's capsule cannot change the jump or ground path.
			Trainer = TestWorld.GetTestWorld()->SpawnActor<AActor>(
				TrainerClass,
				FVector(-1000, 900, 200),
				FRotator::ZeroRotator);

			FObjectProperty* Selected = FindFProperty<FObjectProperty>(TrainerClass, TEXT("CurrentPokemon"));

			if (!Test->TestNotNull(TEXT("Trainer"), Trainer)
				|| !Test->TestNotNull(TEXT("Selection"), Selected))
				return false;

			Selected->SetObjectPropertyValue_InContainer(Trainer, Pokemon);

			Pokemon->SetPokemonTrainer(Trainer);

			auto* ASC = Pokemon->GetPokemonASC();
			auto* Stamina = Pokemon->GetStaminaComponent();

			if (!Test->TestNotNull(TEXT("Fixture ASC"), ASC)
				|| !Test->TestNotNull(TEXT("Fixture stamina component"), Stamina))
			{
				return false;
			}

			FPokemonHeldDefenseStaminaTestAccess::ConfigureRegen(*Stamina, 0.f, .25f, 0.05f);

			ASC->SetNumericAttributeBase(UPokemonBaseAttributeSet::GetMaxStaminaAttribute(), 100.f);
			ASC->SetNumericAttributeBase(UPokemonBaseAttributeSet::GetStaminaAttribute(), 100.f);

			if (!Test->TestEqual(TEXT("Fixture max stamina"), Stamina->GetMaxStamina(), 100.f)
				|| !Test->TestEqual(TEXT("Fixture current stamina"), Stamina->GetStamina(), 100.f))
			{
				return false;
			}

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

		void GrantDodge()
		{
			Pokemon->GetPokemonASC()->AddSingleAbility(UPokemonDodgeGameplayAbility::StaticClass(),
				FGameplayTag::RequestGameplayTag(TEXT("InputTag.Dodge")));
		}
		bool SendDirectionalDodge()
		{
			UFunction* Rpc = Trainer->FindFunction(TEXT("ServerCommandPokemonDodge"));
			if (!Test->TestNotNull(TEXT("Directional dodge RPC"), Rpc)) return false;
			FStructOnScope Frame(Rpc);
			auto* Tag = FindFProperty<FStructProperty>(Rpc, TEXT("DodgeDirectionTag"));
			auto* Forward = FindFProperty<FStructProperty>(Rpc, TEXT("ReferenceForward"));
			if (!Test->TestTrue(TEXT("Directional RPC params"), Tag && Forward)) return false;
			*Tag->ContainerPtrToValuePtr<FGameplayTag>(Frame.GetStructMemory()) = FGameplayTag::RequestGameplayTag(TEXT("InputTag.Dodge.Forward"));
			*Forward->ContainerPtrToValuePtr<FVector>(Frame.GetStructMemory()) = FVector::ForwardVector;
			Trainer->ProcessEvent(Rpc, Frame.GetStructMemory());
			return true;
		}

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

			if (!Test->TestTrue(TEXT("Reflected input fields"), Actor && Token && Revision && Held)) return false;

			Actor->SetObjectPropertyValue_InContainer(Data, Pokemon);
			Token->SetPropertyValue_InContainer(Data, Activation);
			Revision->SetPropertyValue_InContainer(Data, bHeld ? 1 : 2);
			Held->SetPropertyValue_InContainer(Data, bHeld);
			Trainer->ProcessEvent(Rpc, Data);
			return true;
		}
	};

	struct FResourceFixture : FHeldDefenseFixture
	{
		explicit FResourceFixture(int32 ChargingEnabled = 1)
			: FHeldDefenseFixture(ChargingEnabled) {
		}

		bool Open(FAutomationTestBase& InTest, float Initial = 100.f, float Maximum = 100.f)
		{
			if (!Start(InTest))
			{
				return false;
			}

			auto* ASC = Pokemon->GetPokemonASC();

			ASC->SetNumericAttributeBase(UPokemonBaseAttributeSet::GetMaxStaminaAttribute(), Maximum);

			SetCurrent(Initial);

			if (!InTest.TestEqual(TEXT("Fixture maximum"), Stamina()->GetMaxStamina(), Maximum)
				|| !InTest.TestEqual(TEXT("Explicit current"), Stamina()->GetStamina(), Initial))
			{
				return false;
			}

			// Keep the real ground route active through the measurement.
			Pokemon->GetCharacterMovement()->MaxWalkSpeed = 5.f;

			if (!Move())
			{
				return false;
			}

			const auto* AI = Cast<AAIController>(Pokemon->GetController());
			const auto* Path = AI ? AI->GetPathFollowingComponent() : nullptr;

			if (!InTest.TestNotNull(TEXT("Ground path follower"), Path))
			{
				return false;
			}

			for (int32 Frame = 0; Frame < 60 && !Path->GetCurrentRequestId().IsValid(); ++Frame)
			{
				Tick(1, 1.f / 60.f);
			}

			return InTest.TestTrue(TEXT("Ground path active before measurement"),
				Path->GetCurrentRequestId().IsValid()
				&& Intent->HasRunningMoveToAction()
				&& Pokemon->GetCharacterMovement()->IsMovingOnGround());
		}

		UPokemonStaminaComponent* Stamina() const
		{
			return Pokemon->GetStaminaComponent();
		}

		float Current() const
		{
			return Stamina()->GetStamina();
		}

		void SetCurrent(float Value)
		{
			Pokemon->GetPokemonASC()->SetNumericAttributeBase(
				UPokemonBaseAttributeSet::GetStaminaAttribute(), Value);
		}

		void Tick(int32 Frames,float Step)
		{
			for (int32 Frame = 0; Frame < Frames; ++Frame)
			{
				TestWorld.TickTestWorld(Step);
			}
		}

		bool StillOwns(const FPokemonHeldDefenseSession& Bound) const
		{
			if (!Intent->HasRunningMoveToAction())
			{
				return false;
			}

			const auto& Sequence = Intent->GetCurrentSequence();
			const auto& Action = Sequence.Actions[Sequence.ActiveActionIndex];
			const auto& Request = Nav->GetCurrentNavigationIntent();

			return Sequence.IntentId == Bound.IntentId
				&& Action.ActionId == Bound.ActionId
				&& Action.ExecutorRequestId == Bound.NavigationRequestId
				&& Request.RequestId == Bound.NavigationRequestId
				&& Request.TargetLocation.Equals(Bound.Destination);
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
	FHeldDefenseFixture F(1);
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
	F.GrantDodge();
	F.SendDirectionalDodge();
	TestFalse(TEXT("Directional combo cannot provide a free discrete dodge in MoveTo"), F.Pokemon->GetIsDodging());
	F.Intent->CancelIntent(F.Session().IntentId, TEXT("AutomationCancelled"));
	const float StaminaBeforeDodge = F.Pokemon->GetPokemonAS()->GetStamina();
	F.SendDirectionalDodge();
	TestTrue(TEXT("Outside MoveTo directional input executes the existing funded GAS dodge"), F.Pokemon->GetIsDodging()
		&& F.Pokemon->GetPokemonAS()->GetStamina() < StaminaBeforeDodge);
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
	if (!F.Move() || !TestFalse(TEXT("Replacing a held MoveTo revokes the matching session"), F.Session().IsHeld())) return false;
	if (!F.SendInput(4, true) || !TestTrue(TEXT("Fresh press on replacement accepted"), F.Session().IsHeld())) return false;
	const auto Replacement = F.Session();
	F.SendInput(3, false); // Release from the retired action after P4 was accepted.
	TestTrue(TEXT("New action retains its exact bound session"), F.Session().IsHeld() && F.Session().InputActivation == 4
		&& F.Session().ServerRevision == Replacement.ServerRevision && F.Session().NavigationRequestId != New.NavigationRequestId);
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
	FHeldDefenseFixture F(1);
	if (!F.Start(*this)) return false;
	auto* AbilityDefaults = GetMutableDefault<UPokemonAttackAutomationAbility>();
	const FGameplayTag OriginalMoveTag = AbilityDefaults->MoveActionTag;
	ON_SCOPE_EXIT { AbilityDefaults->MoveActionTag = OriginalMoveTag; };
	AbilityDefaults->MoveActionTag = FGameplayTag::RequestGameplayTag(TEXT("PokemonMoves.MoveAction.Melee"));
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
	F.GrantDodge();
	F.SendInput(1, true);
	F.SendDirectionalDodge();
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
	F.SendDirectionalDodge();
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
	FHeldDefenseFixture F(1);
	if (!F.Start(*this) || !F.Move(F.Parent.TargetLocation) || !TestTrue(TEXT("Ground press accepted"), F.Press())) return false;
	auto* Executor = F.Pokemon->JumpExecutionComponent.Get();
	auto* Movement = F.Pokemon->GetCharacterMovement();
	const FVector Goal = F.Session().Destination;
	const FGuid NavId = F.Session().NavigationRequestId;
	for (int32 Frame = 0; Frame < 240 && !Executor->HasTakenOff(); ++Frame) F.TestWorld.TickTestWorld(1.f / 60.f);
	if (!TestTrue(TEXT("Real executor took off"), Executor->HasTakenOff() && Executor->GetParentRequestId() == NavId)) return false;
	
	const float StaminaAtTakeoff = F.Pokemon->GetStaminaComponent()->GetStamina();

	if(!TestEqual(TEXT("Real takeoff suspends resource use"),
		F.Session().State, EState::Suspended)) return false;

	for (int32 Frame = 0; Frame < 3; ++Frame)
	{
		F.TestWorld.TickTestWorld(1.f / 120.f);
	}

	if(!TestTrue(TEXT("Sample stayed inside real jump execution"),
		Executor->HasTakenOff() && F.Session().State==EState::Suspended)) return false;

	TestEqual(TEXT("Zero stamina spent during real airbourne interval"),
		F.Pokemon->GetStaminaComponent()->GetStamina(), StaminaAtTakeoff);

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

	for (int32 Frame = 0; Frame < 1200 && F.Nav->HasActiveNavigationRequest(); ++Frame)
	{
		F.TestWorld.TickTestWorld(1.f / 60.f);
	}

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
	FHeldDefenseFixture F(1);
	if (!F.Start(*this) || !F.Move() || !TestTrue(TEXT("Active authorization at start"), F.Press())) return false;

	auto* Stamina = F.Pokemon->GetStaminaComponent();
	const FGuid Lease = FPokemonHeldDefenseStaminaTestAccess::Lease(*F.Intent);

	if (!TestTrue(TEXT("Teardown starts with a live spending lease"),
		Lease.IsValid()
		&& Stamina->IsSustainedSpending(Lease)
		&& FPokemonHeldDefenseStaminaTestAccess::HasObservers(*F.Intent)))
	{
		return false;
	}

	const float BeforeTeardown = Stamina->GetStamina();

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
		// Observe the revocation inside the synchronous EndPlay cancellation, while
		// the component is still valid. Do not send input to a destroyed UObject.
		bool bRevokedDuringEndPlay = false;
		F.Intent->OnIntentResolved.AddLambda([&](const FPokemonIntentSequence&)
		{
				bRevokedDuringEndPlay = F.Session().State == EState::Revoked
					&& !FPokemonHeldDefenseStaminaTestAccess::HasObservers(*F.Intent)
					&& !Stamina->IsSustainedSpending(Lease);
		});
		F.Intent->DestroyComponent();
		return TestTrue(TEXT("EndPlay revoked authorization before owner retirement"), bRevokedDuringEndPlay);
	}

	TestFalse(TEXT("Teardown removes defense observers"),
		FPokemonHeldDefenseStaminaTestAccess::HasObservers(*F.Intent));

	TestFalse(TEXT("Teardown retires the matching spending lease"),
		Stamina->IsSustainedSpending(Lease));

	TestEqual(TEXT("No defensive charge during teardown observation"),
		Stamina->GetStamina(), BeforeTeardown);

	TestFalse(TEXT("Owner teardown revokes held authorization"), F.Session().IsHeld());
	TestFalse(TEXT("Delayed release cannot change a revoked owner"), F.Release());

	return true;
}

IMPLEMENT_COMPLEX_AUTOMATION_TEST(FPokemonHeldDefenseStaminaCases,
	"ProjectMimikyu.Intent.HeldDefense.Stamina",
	EAutomationTestFlags::EditorContext|EAutomationTestFlags::EngineFilter)
	 
	void FPokemonHeldDefenseStaminaCases::GetTests(TArray<FString>& Names, TArray<FString>& Commands) const
{
	const TCHAR* Cases[] =
	{
		TEXT("ElapsedAndCadence"),
		TEXT("AuthorizationOnlyAndGateChange"),
		TEXT("UnsupportedMovement"),
		TEXT("ExhaustionAndRecovery"),
		TEXT("ExternalGASWriter"),
		TEXT("RevokedReleaseAndReplacement"),
		TEXT("ReleaseInsideFinalGASDebit"),
		TEXT("ZeroStamina"),
		TEXT("ZeroMaximum"),
		TEXT("InvalidConfiguration"),
		TEXT("OwnershipChange")
	};

	for (const TCHAR* Case : Cases)
	{
		Names.Add(Case);
		Commands.Add(Case);
	}
}

bool FPokemonHeldDefenseStaminaCases::RunTest(const FString& Case)
{
	using Access = FPokemonHeldDefenseStaminaTestAccess;

	if (Case == TEXT("ElapsedAndCadence"))
	{
		auto Measure = [this](int32 Frames, float Step, float& OutBalance)
			{
				FResourceFixture F;

				if (!F.Open(*this) || !TestTrue(TEXT("Ground press accepted"), F.Press()))
				{
					return false;
				}

				const auto Bound = F.Session();
				const FGuid Lease = Access::Lease(*F.Intent);

				if (!TestTrue(TEXT("Server owns sustained lease"),
					Lease.IsValid() && F.Stamina()->IsSustainedSpending(Lease)))
				{
					return false;
				}

				FScopedCVar<int32> Trace(TEXT("pokemon.Traversal.AirborneRecoveryTelemetry"), 1);
				FScopedCVar<int32> Compare(TEXT("pokemon.Traversal.AirborneRecoveryCompare"), 1);

				FRecoveryLogCounter Logs;
				GLog->AddOutputDevice(&Logs);
				ON_SCOPE_EXIT{
					GLog->RemoveOutputDevice(&Logs);
				};

				const double Start = F.TestWorld.GetTestWorld()->GetTimeSeconds();

				// There are no opponent or projectile actors in this fixture.
				for (int32 Frame = 0; Frame < Frames; ++Frame)
				{
					if (!TestTrue(TEXT("Repeated press stays on its binding"), F.Press()))
					{
						return false;
					}

					F.Intent->RefreshHeldDefense();
					F.Tick(1, Step);
				}

				const double Elapsed = F.TestWorld.GetTestWorld()->GetTimeSeconds() - Start;

				OutBalance = F.Current();

				TestTrue(TEXT("One second of server game time"),
					FMath::IsNearlyEqual(Elapsed, 1.0, 0.0001));

				TestTrue(TEXT("One debit per elapsed eligible interval"),
					FMath::IsNearlyEqual(static_cast<double>(OutBalance),
						100.0 - 10.0 * Elapsed, 0.002));

				TestTrue(TEXT("Same funded ground binding"),
					F.StillOwns(Bound)
					&& F.Session().State == EState::Requested
					&& F.Session().bLastIntervalFunded
					&& Access::Lease(*F.Intent) == Lease);

				FPokemonHeldDefenseSession Service;
				TestFalse(TEXT("Paid diagnostic interval cannot issue steering"),
					F.Intent->TryGetHeldDefenseServiceContext(Service));

				TestEqual(TEXT("No airbourne recovery records during ground billing"), Logs.Count, 0);

				TestEqual(TEXT("No launch during ground billing"), F.Pokemon->LaunchCalls, 0);
				TestFalse(TEXT("No dodge during ground billing"), F.Pokemon->GetIsDodging());

				if (!TestTrue(TEXT("Matching release accepted"), F.Release()))
				{
					return false;
				}

				const float Released = F.Current();
				F.Tick(8, 1.f / 32.f);

				TestEqual(TEXT("Release stops spending"), F.Current(), Released);
				TestFalse(TEXT("Released observer removed"), Access::HasObservers(*F.Intent));
				TestFalse(TEXT("Released lease retired"), F.Stamina()->IsSustainedSpending(Lease));
				return true;
			};

		float At32 = 0.f;
		float At64 = 0.f;

		if (!Measure(32, 1.f / 32.f, At32) || !Measure(64, 1.f / 64.f, At64))
		{
			return false;
		}

		return TestTrue(TEXT("32 Hz and 64 Hz agree"), FMath::IsNearlyEqual(At32, At64, 0.002f));
	}

	if (Case == TEXT("AuthorizationOnlyAndGateChange"))
	{
		FResourceFixture F(0);

		if (!F.Open(*this) || !TestTrue(TEXT("Authorization-only press"), F.Press()))
		{
			return false;
		}

		F.Tick(8, 1.f / 32.f);
		TestEqual(TEXT("Authorization-only balance"), F.Current(), 100.f);
		TestEqual(TEXT("Authorization retained"), F.Session().State, EState::Requested);
		TestFalse(TEXT("No paid interval"), F.Session().bLastIntervalFunded);
		TestFalse(TEXT("No lease"), Access::Lease(*F.Intent).IsValid());

		FScopedCVar<int32> EnableCharging(
			TEXT("pokemon.Defense.StaminaPrototype"), 1,
			FName(TEXT("HeldDefenseGateChangeTest")));

		F.Tick(1, 1.f / 32.f);
		TestEqual(TEXT("Changing gate retires existing press"),
			F.Session().State, EState::Revoked);
		TestEqual(TEXT("Gate change reason"), F.Session().Reason,
			FName(TEXT("StaminaPrototypeChanged")));
		TestEqual(TEXT("Gate transition has no retroactive cost"), F.Current(), 100.f);

		if (!TestTrue(TEXT("Fresh activation accepted"), F.Press(2)))
		{
			return false;
		}

		F.Tick(1, 1.f / 32.f);
		return TestTrue(TEXT("Fresh activation funds an interval"),
			F.Session().bLastIntervalFunded && F.Current() < 100.f);
	}

	if (Case == TEXT("UnsupportedMovement"))
	{
		FResourceFixture F;

		if (!F.Open(*this) || !TestTrue(TEXT("Ground press"), F.Press()))
		{
			return false;
		}

		F.Tick(1, 1.f / 32.f);
		const auto Bound = F.Session();
		const FGuid OldLease = Access::Lease(*F.Intent);
		const float BeforeFlight = F.Current();

		if (!TestTrue(TEXT("Paid before suspension"), Bound.bLastIntervalFunded))
		{
			return false;
		}

		auto* Movement = F.Pokemon->GetCharacterMovement();
		Movement->SetMovementMode(MOVE_Flying);

		TestEqual(TEXT("Flying suspends immediately"), F.Session().State, EState::Suspended);
		TestFalse(TEXT("Flying retires the spending lease"),
			F.Stamina()->IsSustainedSpending(OldLease));

		F.Tick(8, 1.f / 32.f);
		TestEqual(TEXT("No cost during unsupported movement"), F.Current(), BeforeFlight);
		TestTrue(TEXT("MoveTo survives suspension"), F.StillOwns(Bound));

		Movement->SetMovementMode(MOVE_Walking);
		F.Tick(1, 1.f / 32.f);

		return TestTrue(TEXT("Resume bills only the new ground interval"),
			F.Session().State == EState::Requested
			&& F.Session().bLastIntervalFunded
			&& FMath::IsNearlyEqual(F.Current(), BeforeFlight - 10.f / 32.f, 0.002f));
	}

	if (Case == TEXT("ExhaustionAndRecovery"))
	{
		FResourceFixture F;

		if (!F.Open(*this, 0.25f) || !F.SendInput(1, true))
		{
			return false;
		}

		const auto Bound = F.Session();
		const FGuid Lease = Access::Lease(*F.Intent);

		if (!TestTrue(TEXT("Positive initial budget acquired"),
			Bound.State == EState::Requested && Lease.IsValid()))
		{
			return false;
		}

		Access::ConfigureRegen(*F.Stamina(), 100.f, 0.25f, 0.05f);

		// Cost due is 0.3125, current balance is 0.25.
		F.Tick(1, 1.f / 32.f);

		if (!TestTrue(TEXT("Partial debit exhausts at zero"),
			F.Session().State == EState::Exhausted
			&& F.Session().IsHeld()
			&& !F.Session().HasAuthorization()
			&& !F.Session().bLastIntervalFunded
			&& F.Current() == 0.f))
		{
			return false;
		}

		TestTrue(TEXT("Exhaustion preserves live I/A/N/destination"), F.StillOwns(Bound));
		TestFalse(TEXT("Exhausted observer removed"), Access::HasObservers(*F.Intent));
		TestFalse(TEXT("Exhausted lease retired"), F.Stamina()->IsSustainedSpending(Lease));

		F.Tick(6, 1.f / 32.f);
		TestEqual(TEXT("No regeneration before 0.25-second delay"), F.Current(), 0.f);

		for (int32 Frame = 0; Frame < 48 && F.Current() < 25.f; ++Frame)
		{
			F.Tick(1, 1.f / 32.f);
		}

		if (!TestTrue(TEXT("Existing regeneration reaches recovery threshold"),
			F.Current() >= 25.f))
		{
			return false;
		}

		TestEqual(TEXT("Regeneration alone cannot rearm"),
			F.Session().State, EState::Exhausted);

		F.SendInput(2, true);
		TestEqual(TEXT("Unreleased activation still owns input"),
			F.Session().InputActivation, 1);

		F.SendInput(1, false);
		TestEqual(TEXT("Matching exhausted release"), F.Session().State, EState::Released);

		F.SetCurrent(24.f);
		F.SendInput(3, true);
		TestEqual(TEXT("Below threshold blocked"), F.Session().State, EState::Blocked);
		TestEqual(TEXT("Below threshold reason"), F.Session().Reason,
			FName(TEXT("BelowRecoveryThreshold")));

		F.SetCurrent(25.f);
		F.Intent->RefreshHeldDefense();
		TestEqual(TEXT("Crossing threshold cannot promote blocked press"),
			F.Session().State, EState::Blocked);

		F.SendInput(3, false);
		F.Pokemon->GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		F.SendInput(4, true);
		TestEqual(TEXT("Recovered press needs eligible movement"),
			F.Session().Reason, FName(TEXT("RecoveryRequiresEligiblePress")));

		F.Pokemon->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
		F.Intent->RefreshHeldDefense();
		TestEqual(TEXT("Landing cannot promote blocked press"),
			F.Session().State, EState::Blocked);

		F.SendInput(4, false);
		F.SendInput(5, true);
		F.Tick(1, 1.f / 32.f);

		return TestTrue(TEXT("Fresh eligible press at exactly 25 percent rearms"),
			F.Session().InputActivation == 5
			&& F.Session().State == EState::Requested
			&& F.Session().bLastIntervalFunded
			&& F.Current() < 25.f
			&& F.StillOwns(Bound));
	}

	if (Case == TEXT("ExternalGASWriter"))
	{
		FResourceFixture F;

		if (!F.Open(*this) || !TestTrue(TEXT("Ground press"), F.Press()))
		{
			return false;
		}

		Access::ConfigureRegen(*F.Stamina(), 20.f, 0.25f, 0.05f);
		F.SetCurrent(12.f);
		F.Tick(1, 1.f / 32.f);

		TestTrue(TEXT("Debit uses externally reduced GAS balance"),
			FMath::IsNearlyEqual(F.Current(), 12.f - 10.f / 32.f, 0.002f));

		F.SetCurrent(50.f);
		F.Tick(1, 1.f / 32.f);

		TestTrue(TEXT("Debit uses externally increased GAS balance"),
			FMath::IsNearlyEqual(F.Current(), 50.f - 10.f / 32.f, 0.002f));

		if (!TestTrue(TEXT("Release after external writes"), F.Release()))
		{
			return false;
		}

		F.Tick(4, 1.f / 32.f);
		F.SetCurrent(10.f); // Another writer restarts the existing delay.

		for (int32 Frame = 0; Frame < 6; ++Frame)
		{
			F.Stamina()->RefreshRegenerationState();
			F.Tick(1, 1.f / 32.f);
		}

		TestEqual(TEXT("Repeated refresh honors latest external decrease"),
			F.Current(), 10.f);

		for (int32 Frame = 0; Frame < 12 && F.Current() == 10.f; ++Frame)
		{
			F.Tick(1, 1.f / 32.f);
		}

		return TestTrue(TEXT("Existing regeneration resumes after latest delay"),
			F.Current() > 10.f && F.Session().State == EState::Released);
	}

	if (Case == TEXT("RevokedReleaseAndReplacement"))
	{
		FResourceFixture F;

		if (!F.Open(*this, 0.25f) || !F.SendInput(1, true))
		{
			return false;
		}

		const auto Old = F.Session();
		const uint64 OldSerial = Access::BindingSerial(*F.Intent);
		const FGuid OldLease = Access::Lease(*F.Intent);

		F.Tick(1, 1.f / 32.f);

		if (!TestEqual(TEXT("Old binding exhausted"), F.Session().State, EState::Exhausted)
			|| !F.Move(FVector(-200.f, 160.f, 2.15f)))
		{
			return false;
		}

		TestEqual(TEXT("Replacing parent revokes exhausted binding"),
			F.Session().State, EState::Revoked);

		F.SetCurrent(50.f);
		F.SendInput(2, true);
		TestEqual(TEXT("Replacement cannot bypass old release requirement"),
			F.Session().InputActivation, 1);

		F.SendInput(1, false);
		TestEqual(TEXT("Late matching release observed after tracking retired"),
			F.Session().InputRevision, 2);
		TestEqual(TEXT("Original terminal reason remains a revocation"),
			F.Session().State, EState::Revoked);

		F.SendInput(3, true);
		const auto New = F.Session();

		if (!TestTrue(TEXT("Fresh binding has new generation and identities"),
			New.State == EState::Requested
			&& Access::BindingSerial(*F.Intent) != OldSerial
			&& New.IntentId != Old.IntentId
			&& New.ActionId != Old.ActionId
			&& New.NavigationRequestId != Old.NavigationRequestId))
		{
			return false;
		}

		// Replayed input, stale executor callbacks, and an old lease release.
		F.SendInput(3, true);
		F.SendInput(1, false);
		F.Nav->OnNavigationResolved.Broadcast(
			Old.NavigationRequestId,
			EPokemonNavigationResolution::Interrupted,
			TEXT("LateOldNavigation"));

		F.Pokemon->JumpExecutionComponent->OnJumpFinished.Broadcast(
			Old.NavigationRequestId, true, NAME_None);

		F.Stamina()->EndSustainedSpending(OldLease);
		F.Tick(1, 1.f / 32.f);

		return TestTrue(TEXT("Only the replacement bills the next interval"),
			F.StillOwns(New)
			&& F.Session().InputActivation == 3
			&& F.Session().bLastIntervalFunded
			&& FMath::IsNearlyEqual(F.Current(), 50.f - 10.f / 32.f, 0.002f));
	}

	if (Case == TEXT("ReleaseInsideFinalGASDebit"))
	{
		FResourceFixture F;

		if (!F.Open(*this, 0.25f) || !TestTrue(TEXT("Ground press"), F.Press()))
		{
			return false;
		}

		auto* ASC = F.Pokemon->GetPokemonASC();
		auto& Changed = ASC->GetGameplayAttributeValueChangeDelegate(
			UPokemonBaseAttributeSet::GetStaminaAttribute());

		bool bCalled = false;
		bool bReleased = false;

		const FDelegateHandle Handle = Changed.AddLambda(
			[&](const FOnAttributeChangeData& Data)
			{
				if (!bCalled && Data.NewValue < Data.OldValue)
				{
					bCalled = true;
					bReleased = F.Release(1);
				}
			});

		ON_SCOPE_EXIT{ Changed.Remove(Handle); };

		F.Tick(1, 1.f / 32.f);

		if (!TestTrue(TEXT("GAS listener released during the final debit"),
			bCalled && bReleased
			&& F.Session().State == EState::Released
			&& F.Current() == 0.f))
		{
			return false;
		}

		F.SetCurrent(1.f);

		if (!TestTrue(TEXT("Second input binding recorded"), F.Press(2)))
		{
			return false;
		}

		return TestTrue(TEXT("Reentrant release preserves recovery requirement"),
			F.Session().State == EState::Blocked
			&& F.Session().Reason == FName(TEXT("BelowRecoveryThreshold")));
	}

	if (Case == TEXT("ZeroStamina") || Case == TEXT("ZeroMaximum"))
	{
		const bool bZeroMaximum = Case == TEXT("ZeroMaximum");
		FResourceFixture F;

		if (!F.Open(*this, 0.f, bZeroMaximum ? 0.f : 100.f)
			|| !TestTrue(TEXT("Input binding recorded"), F.Press()))
		{
			return false;
		}

		TestEqual(TEXT("Explicit resource state"), F.Session().State,
			bZeroMaximum ? EState::Blocked : EState::Exhausted);

		TestEqual(TEXT("Explicit resource reason"), F.Session().Reason,
			bZeroMaximum
			? FName(TEXT("InvalidStaminaValues"))
			: FName(TEXT("StaminaExhausted")));

		F.Tick(4, 1.f / 32.f);
		TestEqual(TEXT("Balance remains zero"), F.Current(), 0.f);
		TestFalse(TEXT("No resource observer"), Access::HasObservers(*F.Intent));
		return TestTrue(TEXT("Blocked or exhausted input can release"), F.Release());
	}

	if (Case == TEXT("InvalidConfiguration"))
	{
		FResourceFixture F;

		if (!F.Open(*this))
		{
			return false;
		}

		struct FValues
		{
			float Rate;
			float Fraction;
		};

		const FValues Invalid[] =
		{
			{ 0.f, 0.25f },
			{ -1.f, 0.25f },
			{ std::numeric_limits<float>::quiet_NaN(), 0.25f },
			{ 10.f, 0.f },
			{ 10.f, 1.1f },
			{ 10.f, std::numeric_limits<float>::infinity() }
		};

		int32 Activation = 0;

		for (const FValues& Values : Invalid)
		{
			++Activation;

			Access::ConfigureDefense(*F.Intent, Values.Rate, Values.Fraction);

			if (!TestTrue(TEXT("Invalid configuration retains release identity"),
				F.Press(Activation)))
			{
				return false;
			}

			TestEqual(TEXT("Invalid configuration blocks"), F.Session().State, EState::Blocked);
			TestEqual(TEXT("Configuration reason"), F.Session().Reason,
				FName(TEXT("InvalidStaminaConfiguration")));

			F.Tick(1, 1.f / 32.f);
			TestEqual(TEXT("Invalid configuration incurs zero cost"), F.Current(), 100.f);
			TestFalse(TEXT("Invalid configuration cannot own a lease"),
				Access::Lease(*F.Intent).IsValid());

			if (!TestTrue(TEXT("Blocked press released"), F.Release(Activation)))
			{
				return false;
			}
		}

		Access::ConfigureDefense(*F.Intent, 4.f, 0.5f);

		if (!TestTrue(TEXT("Valid authoring accepted"), F.Press(++Activation)))
		{
			return false;
		}

		F.Tick(1, 1.f / 32.f);

		return TestTrue(TEXT("Authored rate used"),
			FMath::IsNearlyEqual(F.Current(), 100.f - 4.f / 32.f, 0.002f));
	}

	if (Case == TEXT("OwnershipChange"))
	{
		FResourceFixture F;

		if (!F.Open(*this) || !TestTrue(TEXT("Original owner press"), F.Press()))
		{
			return false;
		}

		F.Tick(1, 1.f / 32.f);
		const FGuid Lease = Access::Lease(*F.Intent);
		const float AtTransfer = F.Current();

		F.Pokemon->SetPokemonTrainer(nullptr);

		TestEqual(TEXT("Owner change revokes synchronously"), F.Session().State, EState::Revoked);
		TestEqual(TEXT("Owner change reason"), F.Session().Reason,
			FName(TEXT("PokemonOwnershipChanged")));
		TestFalse(TEXT("Owner change removes observer"), Access::HasObservers(*F.Intent));
		TestFalse(TEXT("Owner change releases lease"), F.Stamina()->IsSustainedSpending(Lease));

		F.Tick(4, 1.f / 32.f);
		return TestEqual(TEXT("No old-owner spend"), F.Current(), AtTransfer);
	}

	AddError(FString::Printf(TEXT("Unknown held-defense stamina case: %s"), *Case));
	return false;
}

#endif

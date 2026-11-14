#if WITH_DEV_AUTOMATION_TESTS

#include "Components/PIENetworkComponent.h"
#include "ActorComponents/PokemonIntentSequenceComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "AI/NavigationSystemBase.h"
#include "Components/BoxComponent.h"
#include "DataAssets/PokemonInputConfig.h"
#include "Engine/GameInstance.h"
#include "Engine/NetConnection.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerController.h"
#include "InputAction.h"
#include "NavigationSystem.h"
#include "Tests/AutomationCommon.h"
#include "Tests/PokemonJumpAutomationFixture.h"
#include "UObject/UnrealType.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "ActorComponents/PokemonStaminaComponent.h"
#include "AIController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NavigationPath.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "NavMesh/RecastNavMesh.h"


namespace PokemonHeldDefenseNetwork
{
	template<typename PropertyType>
	PropertyType* RequireProperty(const UStruct* Owner, const TCHAR* Name)
	{
		PropertyType* Property = FindFProperty<PropertyType>(Owner, Name);

		checkf(Property, TEXT("Missing text property %s on %s"), Name, *GetNameSafe(Owner));
		return Property;
	}

	UClass* TrainerClass()
	{
		// The native trainer class is reflected, but it is not exported by the game module.
		return FindObject<UClass>(nullptr, TEXT("/Script/ProjectMimikyu.TrainerCharacter"));
	}

	void ConfigureClientActor(AActor* Actor)
	{
		// Replication spawns a different pawn in the client world. Give it the same
		// transient species defaults required by native BeginPlay as the server fixture.
		if (auto* Pokemon = Cast<APokemonJumpAutomationPawn>(Actor))
		{
			Pokemon->ConfigureForAutomation();
		}
		else if (Actor->GetClass() == TrainerClass())
		{
			// Native trainers normally receive a moveset input config from their
			// Blueprint. The separate base IA_Dodge binding uses its production default.
			auto* Config = NewObject<UPokemonInputConfig>(Actor);
			RequireProperty<FObjectProperty>(Actor->GetClass(), TEXT("InputConfig"))
				->SetObjectPropertyValue_InContainer(Actor, Config);
		}
	}

	void AddFloor(UWorld& World)
	{
		auto* Floor = World.SpawnActor<AActor>();
		auto* Box = NewObject<UBoxComponent>(Floor);
		Floor->SetRootComponent(Box);
		Box->SetBoxExtent(FVector(4000.f, 1000.f, 20.f));
		Box->SetCollisionObjectType(ECC_WorldStatic);
		Box->SetCollisionResponseToAllChannels(ECR_Block);
		Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Box->SetWorldLocation(FVector(0.f, 0.f, -20.f));
		Box->SetCanEverAffectNavigation(true);
		Box->RegisterComponent();
	}

	bool BuildGroundRoute(UWorld& World, APokemonJumpAutomationPawn& Pokemon, const FVector& Goal)
	{ 
		auto* System = UNavigationSystemV1::GetCurrent(&World);
		
		if (!System)
		{
			return false;
		}

		auto* Bounds  = World.SpawnActor<ANavMeshBoundsVolume>();

		if (!Bounds) 
		{
			return false;
		}

		auto* BoundsBox = NewObject<UBoxComponent>(Bounds);
		BoundsBox->SetBoxExtent(FVector(2200.f, 750.f, 350.f));
		BoundsBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		BoundsBox->SetCanEverAffectNavigation(false);
		BoundsBox->SetWorldLocation(FVector(1500.f, 0.f, 0.f));
		BoundsBox->RegisterComponent();
		Bounds->AddInstanceComponent(BoundsBox);

		auto* Data = Cast<ARecastNavMesh>(
			System->GetDefaultNavDataInstance(FNavigationSystem::DontCreate));

		if (!Data)
		{
			Data = World.SpawnActor<ARecastNavMesh>();
		}

		if (!IsValid(Data))
		{
			return false;
		}

		auto* Generation = RequireProperty<FEnumProperty>(Data->GetClass(), TEXT("RuntimeGeneration"));

		Generation->GetUnderlyingProperty()->SetIntPropertyValue(Generation->ContainerPtrToValuePtr<void>(Data),
			static_cast<uint64>(ERuntimeGenerationType::Dynamic));

		System->OnNavigationBoundsUpdated(Bounds);
		System->Build();
		Data->EnsureBuildCompletion();

		const FVector Feet = Pokemon.GetCharacterMovement()->GetActorFeetLocation();

		const auto* Path = UNavigationSystemV1::FindPathToLocationSynchronously(
			&World, Feet, Goal, &Pokemon);

		return Path && Path->IsValid() && !Path->IsPartial();
	}

	bool SendBoundInput(APawn* Trainer, ETriggerEvent Edge)
	{
		const auto* Input = Trainer ? Cast<UEnhancedInputComponent>(Trainer->InputComponent) : nullptr;
		if (!Input) return false;
		for (const auto& Binding : Input->GetActionEventBindings())
		{
			const UInputAction* Action = Binding->GetAction();
			if (Action && Action->GetPathName() == TEXT("/Game/Blueprints/Input/Actions/CommandInputs/DodgeInputs/IA_Dodge.IA_Dodge")
				&& Binding->GetTriggerEvent() == Edge)
			{
				Binding->Execute(FInputActionInstance(Action));
				return true;
			}
		}
		return false;
	}

	const FPokemonHeldDefenseSession& ReadClientAck(APawn& Trainer)
	{
		const FStructProperty* Ack = RequireProperty<FStructProperty>(Trainer.GetClass(), TEXT("LastHeldDefenseAcknowledgement"));
		return *Ack->ContainerPtrToValuePtr<FPokemonHeldDefenseSession>(&Trainer);
	}
}

NETWORK_TEST_CLASS(DefensiveInputPIE, "ProjectMimikyu.Intent.HeldDefense")
{
	struct FPeer : FBasePIENetworkComponentState
	{
		APawn* Trainer = nullptr;
		APokemonJumpAutomationPawn* Pokemon = nullptr;
		FDelegateHandle SpawnHook;
	};

	FPIENetworkComponent<FPeer> Network{ TestRunner, TestCommandBuilder, bInitializing };
	TSharedPtr<FScopedTestEnvironment> Environment;
	FGuid IntentId, ActionId, NavigationId;
	const FVector Destination{ 3000.f, 0.f, 2.f };

	int32 FirstActivation = 0;
	int32 FundedActivation = 0;
	int32 ExhaustedRevision = 0;

	BEFORE_EACH()
	{
		Environment = FScopedTestEnvironment::Get();
		Environment->SetConsoleVariableValue(TEXT("pokemon.Defense.AuthorizationPrototype"), TEXT("1"));
		Environment->SetConsoleVariableValue(TEXT("pokemon.Defense.StaminaPrototype"), TEXT("0"));

		FNetworkComponentBuilder<FPeer>().AsDedicatedServer().WithClients(1)
			.WithGameMode(AGameModeBase::StaticClass()).WithGameInstanceClass(UGameInstance::StaticClass()).Build(Network);
	}

	TEST_METHOD(OwningClientPressRelease)
	{
		using namespace PokemonHeldDefenseNetwork;
		Network.ThenClient(0, [this](FPeer& Client)
			{
				ASSERT_THAT(IsTrue(Client.World->GetNetMode() == NM_Client));
				AddFloor(*Client.World);
				Client.SpawnHook = Client.World->AddOnActorPreSpawnInitialization(
					FOnActorSpawned::FDelegate::CreateStatic(&ConfigureClientActor));
			})
			.ThenServer([this](FPeer& Server)
				{
					ASSERT_THAT(IsTrue(Server.World->GetNetMode() == NM_DedicatedServer));
					ASSERT_THAT(IsNotNull(TrainerClass()));
					AddFloor(*Server.World);
					if (!UNavigationSystemV1::GetCurrent(Server.World))
					{
						FNavigationSystem::AddNavigationSystemToWorld(*Server.World, FNavigationSystemRunMode::GameMode);
					}
					auto* PC = Server.ClientConnections[0]->PlayerController.Get();
					ASSERT_THAT(IsNotNull(PC));
					Server.Trainer = Server.World->SpawnActor<APawn>(TrainerClass(), FVector(-300.f, 0.f, 100.f), FRotator::ZeroRotator);
					ASSERT_THAT(IsNotNull(Server.Trainer));
					PC->Possess(Server.Trainer);

					FTransform Spawn(FVector(300.f, 0.f, 100.f));
					Server.Pokemon = Server.World->SpawnActorDeferred<APokemonJumpAutomationPawn>(
						APokemonJumpAutomationPawn::StaticClass(), Spawn, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
					ASSERT_THAT(IsNotNull(Server.Pokemon));
					Server.Pokemon->ConfigureForAutomation();
					Server.Pokemon->FinishSpawning(Spawn);
					Server.Pokemon->SetPokemonTrainer(Server.Trainer);
					RequireProperty<FObjectProperty>(TrainerClass(), TEXT("CurrentPokemon"))
						->SetObjectPropertyValue_InContainer(Server.Trainer, Server.Pokemon);
					Server.Trainer->ForceNetUpdate();
					// A retained MoveTo in the empty PIE map keeps the request available
					// throughout the RPC round trip, including worlds without a ground route.
					auto* Intent = Server.Pokemon->GetIntentSequenceComponent();
					IntentId = Intent->SubmitMoveToIntent(Destination);
					ASSERT_THAT(IsTrue(Intent->HasRunningMoveToAction()));
					const auto& Action = Intent->GetCurrentSequence().Actions[0];
					ActionId = Action.ActionId;
					NavigationId = Action.ExecutorRequestId;
				})
			.UntilClient(TEXT("Owning client received trainer possession and selected Pokemon"), 0, [](FPeer& Client)
				{
					auto* PC = Client.World->GetFirstPlayerController();
					Client.Trainer = PC ? PC->GetPawn() : nullptr;
					if (!Client.Trainer || Client.Trainer->GetClass() != TrainerClass() || !Client.Trainer->InputComponent) return false;
					const auto* Selection = RequireProperty<FObjectProperty>(TrainerClass(), TEXT("CurrentPokemon"));
					Client.Pokemon = Cast<APokemonJumpAutomationPawn>(Selection->GetObjectPropertyValue_InContainer(Client.Trainer));
					return Client.Pokemon && Client.Pokemon->IsOwnedByTrainer(Client.Trainer) && Client.Trainer->IsLocallyControlled();
				})
			.ThenClient(0, [this](FPeer& Client)
				{
					Client.World->RemoveOnActorPreSpawnInitialization(Client.SpawnHook);
					ASSERT_THAT(IsTrue(SendBoundInput(Client.Trainer, ETriggerEvent::Started)));
				})
			.UntilServer(TEXT("Server bound press to retained MoveTo"), [](FPeer& Server)
				{
					return Server.Pokemon->GetIntentSequenceComponent()->GetHeldDefenseSession().IsHeld();
				})
			.UntilClient(TEXT("Owning client received server IDs and input acknowledgement"), 0, [this](FPeer& Client)
				{
					const auto& Ack = ReadClientAck(*Client.Trainer);
					if (!Ack.IsHeld()) return false;
					FirstActivation = Ack.InputActivation;
					return Ack.Pokemon == Client.Pokemon && Ack.Trainer == Client.Trainer && Ack.IntentId == IntentId
						&& Ack.ActionId == ActionId && Ack.NavigationRequestId == NavigationId && Ack.Destination == Destination;
				})
			.ThenClient(0, [this](FPeer& Client)
				{
					ASSERT_THAT(IsTrue(SendBoundInput(Client.Trainer, ETriggerEvent::Completed)));
				})
			.UntilClient(TEXT("Owning client received release acknowledgement"), 0, [this](FPeer& Client)
				{
					const auto& Ack = ReadClientAck(*Client.Trainer);
					return Ack.InputActivation == FirstActivation && Ack.State == EPokemonHeldDefenseState::Released;
				})
			.ThenClient(0, [this](FPeer& Client)
				{
					// No game/network tick between these edges, so release precedes the press acknowledgement.
					ASSERT_THAT(IsTrue(SendBoundInput(Client.Trainer, ETriggerEvent::Started)));
					ASSERT_THAT(IsTrue(SendBoundInput(Client.Trainer, ETriggerEvent::Canceled)));
				})
			.UntilClient(TEXT("Owning client received the newer activation's terminal acknowledgement"), 0, [this](FPeer& Client)
				{
					const auto& Ack = ReadClientAck(*Client.Trainer);
					return Ack.InputActivation > FirstActivation && Ack.InputRevision == 2 && Ack.State == EPokemonHeldDefenseState::Released;
				})
			.ThenServer([this](FPeer& Server)
				{
					const auto* Intent = Server.Pokemon->GetIntentSequenceComponent();
					ASSERT_THAT(IsTrue(Intent->HasRunningMoveToAction()));
					const auto& Session = Intent->GetHeldDefenseSession();
					ASSERT_THAT(IsTrue(Session.InputActivation > FirstActivation && Session.State == EPokemonHeldDefenseState::Released));
					const auto& Sequence = Intent->GetCurrentSequence();
					const auto& Action = Sequence.Actions[Sequence.ActiveActionIndex];
					const auto& Request = Server.Pokemon->GetNavigationComponent()->GetCurrentNavigationIntent();
					ASSERT_THAT(IsTrue(Sequence.IntentId == IntentId && Action.ActionId == ActionId
						&& Action.ExecutorRequestId == NavigationId && Request.RequestId == NavigationId && Request.TargetLocation == Destination));
				});

		Network.ThenServer([this](FPeer& Server)
			{
				Environment->SetConsoleVariableValue(
					TEXT("pokemon.Defense.StaminaPrototype"), TEXT("1"));

				auto* Pokemon = Server.Pokemon;
				auto* Stamina = Pokemon->GetStaminaComponent();
				auto* ASC = Pokemon->GetPokemonASC();

				ASSERT_THAT(IsNotNull(Stamina));
				ASSERT_THAT(IsNotNull(ASC));

				// Keep the exhausted value stable while the two network channels converge.
				RequireProperty<FFloatProperty>(Stamina->GetClass(), TEXT("StaminaRegenRate"))
					->SetPropertyValue_InContainer(Stamina, 0.f);

				// Deliberately different from the native pawn's 100/100 defaults.
				// Only the server writes these fixture values.
				ASC->SetNumericAttributeBase(
					UPokemonBaseAttributeSet::GetMaxStaminaAttribute(), 80.f);
				ASC->SetNumericAttributeBase(
					UPokemonBaseAttributeSet::GetStaminaAttribute(), 64.f);

				Pokemon->ForceNetUpdate();

				auto* Capsule = Pokemon->GetCapsuleComponent();
				Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				Capsule->SetCollisionObjectType(ECC_Pawn);
				Capsule->SetCollisionResponseToAllChannels(ECR_Block);

				Pokemon->SetActorLocation(
					FVector(300.f, 0.f, Capsule->GetScaledCapsuleHalfHeight() + 2.15f),
					false, nullptr, ETeleportType::TeleportPhysics);

				auto* Movement = Pokemon->GetCharacterMovement();
				Movement->SetMovementMode(MOVE_Walking);
				Movement->StopMovementImmediately();

				ASSERT_THAT(IsTrue(BuildGroundRoute(*Server.World, *Pokemon, Destination)));

				auto* AI = Server.World->SpawnActor<AAIController>();
				ASSERT_THAT(IsNotNull(AI));
				AI->Possess(Pokemon);

				Movement->MaxWalkSpeed = 40.f;

				auto* Intent = Pokemon->GetIntentSequenceComponent();

				// Disable special-traversal fallback for this funded ground-route phase.
				IntentId = Intent->SubmitMoveToIntent(Destination, false);

				ASSERT_THAT(IsTrue(IntentId.IsValid() && Intent->HasRunningMoveToAction()));

				const auto& Sequence = Intent->GetCurrentSequence();
				const auto& Action = Sequence.Actions[Sequence.ActiveActionIndex];

				ActionId = Action.ActionId;
				NavigationId = Action.ExecutorRequestId;
			})
			.UntilClient(TEXT("Client GAS received server 64/80 fixture values"), 0,
				[this](FPeer& Client)
				{
					const auto* Stamina = Client.Pokemon->GetStaminaComponent();

					return Stamina
						&& FMath::IsNearlyEqual(Stamina->GetMaxStamina(), 80.f)
						&& FMath::IsNearlyEqual(Stamina->GetStamina(), 64.f);
				})
			.ThenClient(0, [this](FPeer& Client)
				{
					ASSERT_THAT(IsTrue(SendBoundInput(Client.Trainer, ETriggerEvent::Started)));
				})
			.UntilClient(TEXT("Funded acknowledgement and lower GAS balance received"), 0,
				[this](FPeer& Client)
				{
					const auto& Ack = ReadClientAck(*Client.Trainer);
					const float Current = Client.Pokemon->GetStaminaComponent()->GetStamina();

					if (Ack.Pokemon != Client.Pokemon
						|| Ack.Trainer != Client.Trainer
						|| Ack.State != EPokemonHeldDefenseState::Requested
						|| !Ack.bLastIntervalFunded
						|| Ack.InputActivation <= FirstActivation
						|| Ack.InputRevision != 1
						|| Ack.IntentId != IntentId
						|| Ack.ActionId != ActionId
						|| Ack.NavigationRequestId != NavigationId
						|| Ack.Destination != Destination
						|| Current <= 0.f
						|| Current >= 64.f)
					{
						return false;
					}

					FundedActivation = Ack.InputActivation;
					return true;
				})
			.ThenServer([this](FPeer& Server)
				{
					const auto& Session =
						Server.Pokemon->GetIntentSequenceComponent()->GetHeldDefenseSession();

					ASSERT_THAT(IsTrue(
						Session.InputActivation == FundedActivation
						&& Session.State == EPokemonHeldDefenseState::Requested
						&& Session.bLastIntervalFunded));

					// This external writer leaves a positive remainder. Held defense
					// must spend the remainder before the server can report exhaustion.
					Server.Pokemon->GetPokemonASC()->SetNumericAttributeBase(
						UPokemonBaseAttributeSet::GetStaminaAttribute(), 0.25f);

					ASSERT_THAT(IsTrue(FMath::IsNearlyEqual(
						Server.Pokemon->GetStaminaComponent()->GetStamina(), 0.25f)));
				})
			.UntilServer(TEXT("Server defense spent the final positive remainder"),
				[this](FPeer& Server)
				{
					const auto* Intent = Server.Pokemon->GetIntentSequenceComponent();
					const auto& Session = Intent->GetHeldDefenseSession();

					if (Session.InputActivation != FundedActivation
						|| Session.State != EPokemonHeldDefenseState::Exhausted
						|| Session.bLastIntervalFunded
						|| !Intent->HasRunningMoveToAction()
						|| !FMath::IsNearlyZero(
							Server.Pokemon->GetStaminaComponent()->GetStamina()))
					{
						return false;
					}

					ExhaustedRevision = Session.ServerRevision;
					return true;
				})
			.UntilClient(TEXT("Exhausted acknowledgement and replicated GAS agree"), 0,
				[this](FPeer& Client)
				{
					const auto& Ack = ReadClientAck(*Client.Trainer);
					const auto* Stamina = Client.Pokemon->GetStaminaComponent();

					return Ack.State == EPokemonHeldDefenseState::Exhausted
						&& Ack.IsHeld()
						&& !Ack.HasAuthorization()
						&& !Ack.bLastIntervalFunded
						&& Ack.InputActivation == FundedActivation
						&& Ack.InputRevision == 1
						&& Ack.ServerRevision == ExhaustedRevision
						&& Ack.Pokemon == Client.Pokemon
						&& Ack.Trainer == Client.Trainer
						&& Ack.IntentId == IntentId
						&& Ack.ActionId == ActionId
						&& Ack.NavigationRequestId == NavigationId
						&& Ack.Destination == Destination
						&& FMath::IsNearlyZero(Stamina->GetStamina())
						&& FMath::IsNearlyEqual(Stamina->GetMaxStamina(), 80.f);
				})
			.ThenClient(0, [this](FPeer& Client)
				{
					ASSERT_THAT(IsTrue(SendBoundInput(Client.Trainer, ETriggerEvent::Completed)));
				})
			.UntilClient(TEXT("Matching exhausted activation acknowledged release"), 0,
				[this](FPeer& Client)
				{
					const auto& Ack = ReadClientAck(*Client.Trainer);

					return Ack.State == EPokemonHeldDefenseState::Released
						&& Ack.InputActivation == FundedActivation
						&& Ack.InputRevision == 2
						&& Ack.ServerRevision > ExhaustedRevision
						&& Ack.IntentId == IntentId
						&& Ack.ActionId == ActionId
						&& Ack.NavigationRequestId == NavigationId
						&& FMath::IsNearlyZero(
							Client.Pokemon->GetStaminaComponent()->GetStamina());
				})
			.ThenServer([this](FPeer& Server)
				{
					const auto* Intent = Server.Pokemon->GetIntentSequenceComponent();
					const auto& Session = Intent->GetHeldDefenseSession();
					const auto& Request =
						Server.Pokemon->GetNavigationComponent()->GetCurrentNavigationIntent();

					ASSERT_THAT(IsTrue(
						Intent->HasRunningMoveToAction()
						&& Session.State == EPokemonHeldDefenseState::Released
						&& Session.InputRevision == 2
						&& Session.InputActivation == FundedActivation
						&& Session.IntentId == IntentId
						&& Session.ActionId == ActionId
						&& Request.RequestId == NavigationId
						&& Request.TargetLocation == Destination));
				});
	}
};

#endif

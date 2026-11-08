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
		Box->RegisterComponent();
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

	BEFORE_EACH()
	{
		Environment = FScopedTestEnvironment::Get();
		Environment->SetConsoleVariableValue(TEXT("pokemon.Defense.AuthorizationPrototype"), TEXT("1"));
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
	}
};

#endif

// Copyright Epic Games, Inc. All Rights Reserved.

/*
*  TO DO
* Tie an event call to TrainerController. Connecting the OverlayWidget controller to the Pokemon trainer an pairing the On PartyChanged
**/

#include "Characters/TrainerCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "AIControllers/TrainerController.h"
#include "AIControllers/PokemonAIController.h"
#include "DataAssets/PokemonDataAsset.h"

#include "ActorComponents/TargetingComponent.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "ActorComponents/TrainerQuickSlotComponent.h"
#include "ActorComponents/PokeballSummonComponent.h"
#include "ActorComponents/TrainerThrowableComponent.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonIntentSequenceComponent.h"
#include "ActorComponents/CrowdObstacleAgentComponent.h"

#include "Characters/Pokemon_Parent.h"
#include "Player/TrainerPlayerState.h"
#include "Engine/LocalPlayer.h"
#include "Engine/GameViewportClient.h"
#include "Framework/Application/SlateApplication.h"
#include "Slate/SceneViewport.h"
#include "TimerManager.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Input/PokemonInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "Net/UnrealNetwork.h"
#include "Navigation/CrowdManager.h"	
#include "Items/PokeBall.h"
#include "GameplayTags/PokemonGameplayTags.h"
#include "Debugging/PokemonDebugLibrary.h"
#include "GameplayTags/PokemonDebugTags.h"
#include <Kismet/GameplayStatics.h>


DEFINE_LOG_CATEGORY(LogTemplateCharacter);

namespace PokemonAimDiagnostics
{
	const TCHAR* ClassifySurface(const FPokemonCommandTarget& Target)
	{
		if (!Target.bHasHitResult || !Target.HitResult.bBlockingHit)
		{
			return Target.HasTargetActor() ? TEXT("NoRawHit") : TEXT("OpenSpace");
		}

		AActor* RawHitActor = Target.HitResult.GetActor();

		if (Cast<APokemon_Parent>(RawHitActor))
		{
			return TEXT("Pokemon");
		}

		const FVector Normal = Target.HitResult.ImpactNormal.GetSafeNormal();

		const float UpDot = FVector::DotProduct(Normal, FVector::UpVector);

		if (UpDot >= 0.7f)
		{
			return TEXT("GroundLike");
		}

		if (UpDot <= -0.7f)
		{
			return TEXT("CeilingLike");
		}

		return TEXT("WallLike");
	}
}

//////////////////////////////////////////////////////////////////////////
// ATrainerCharacter

ATrainerCharacter::ATrainerCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 150.0f; // The camera follows at this distance behind the character
	CameraBoom->SocketOffset = FVector(0, 50.f, 50.f);
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	InventorySystem = CreateDefaultSubobject<UInventorySystemComponent>(TEXT("Inventory System"));
	TargetingComponent = CreateDefaultSubobject<UTargetingComponent>(TEXT("Targeting Component"));
	QuickSlotComponent = CreateDefaultSubobject<UTrainerQuickSlotComponent>(TEXT("Quick Slot Component"));
	ThrowableComponent = CreateDefaultSubobject<UTrainerThrowableComponent>(TEXT("Throwable Component"));
	CrowdObstacleAgentComponent = CreateDefaultSubobject<UCrowdObstacleAgentComponent>(TEXT("Crowd Obstacle Agent Component"));

	HeldDodgeAction = TSoftObjectPtr<UInputAction>(FSoftObjectPath(TEXT("/Game/Blueprints/Input/Actions/CommandInputs/DodgeInputs/IA_Dodge.IA_Dodge")));

	bReplicates = true;
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	if (UCapsuleComponent* CapsuleComp = GetCapsuleComponent())
	{
		CapsuleComp->CanCharacterStepUpOn = ECB_No;
	}
}

void ATrainerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATrainerCharacter, CurrentPokemon);
}

void ATrainerCharacter::OnRep_CurrentPokemon()
{
	PokemonASC = nullptr;
	ClearDodgeInputs(CurrentPokemon);
	if (LastHeldDefenseAcknowledgement.Pokemon != CurrentPokemon)
	{
		LastHeldDefenseAcknowledgement = {};
	}
}

void ATrainerCharacter::ResetPokemonFieldTransition(const TCHAR* Reason)
{
	UE_LOG(LogTemp, Display, TEXT("[PokemonField] Transition reset | Previous=%d | Reason=%s"),
		static_cast<int32>(PokemonFieldTransitionState),
		Reason
	);

	PokemonFieldTransitionState = EPokemonFieldTransition::None;
}

void ATrainerCharacter::SetOverlappingItem(AItem* NewItem)
{
	OverlappingItem = NewItem;
}

void ATrainerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	InventorySystem->OwnerCharacter = this;

	if (QuickSlotComponent)
	{
		QuickSlotComponent->InitializeQuickSlots(this);
	}
}

void ATrainerCharacter::BeginPlay()
{
	Super::BeginPlay();
	UPokemonDebugLibrary::SetCategoryEnabled(this, PokemonDebugTags::Log, true);
	UPokemonDebugLibrary::PrintMessage(
		this,
		PokemonDebugTags::Log,
		TEXT("Debug system is alive."),
		EPokemonDebugOutputMode::LogAndScreen
	);

	if (IsLocallyControlled())
	{
		if (ATrainerController* TC = GetTC())
		{
			if (ULocalPlayer* LP = TC->GetLocalPlayer())
			{
				Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP);
				if (Subsystem && DefaultMappingContext)
					Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
			TrainerController->HandleGameHasStarted();
		}
	}

	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT(
				"[TrainerCollision] %s | Profile=%s | Enabled=%d | "
				"ObjectType=%d | ResponseToPawn=%d"
			),
			*GetName(),
			*Capsule->GetCollisionProfileName().ToString(),
			static_cast<int32>(Capsule->GetCollisionEnabled()),
			static_cast<int32>(Capsule->GetCollisionObjectType()),
			static_cast<int32>(
				Capsule->GetCollisionResponseToChannel(ECC_Pawn)
				)
		);
	}

}

void ATrainerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateTargetingCamera(DeltaTime);
	if (IsLocallyControlled() && DodgeInput.Revision==1)
	{
		const UGameViewportClient* Client = GetWorld()->GetGameViewport();
		const FSceneViewport* Viewport = Client ? Client->GetGameViewport() : nullptr;
		const bool bViewportFocused = Viewport && Viewport->HasFocus();
		if (bDodgeViewportHadFocus && !bViewportFocused)
		{
			ClearDodgeInputs();
		}
		bDodgeViewportHadFocus = bViewportFocused;
	}
}

void ATrainerCharacter::HandleApplicationActivationChanged(bool bActive)
{
	if (!bActive)
	{
		ClearDodgeInputs();
	}
}

void ATrainerCharacter::UnPossessed()
{
	ClearDodgeInputs();
	StopTrackingHeldDefense(TEXT("TrainerUnpossessed"));
	Super::UnPossessed();
}

void ATrainerCharacter::OnRep_Controller()
{
	Super::OnRep_Controller();
	if (!IsLocallyControlled())
	{
		ClearDodgeInputs();
		LastHeldDefenseAcknowledgement = {};
	}
}

void ATrainerCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ClearDodgeInputs();
	StopTrackingHeldDefense(TEXT("TrainerEndPlay"));
	if (ApplicationActivationHandle.IsValid() && FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().OnApplicationActivationStateChanged().Remove(ApplicationActivationHandle);
	}
	Super::EndPlay(EndPlayReason);
}

FPokemonInfo ATrainerCharacter::GetCurrentPokemonInfo()
{
	return FPokemonInfo();
}

void ATrainerCharacter::SetCurrentPokemon(APokemon_Parent* LeadPokemon)
{
	if (CurrentPokemon != LeadPokemon)
	{
		ClearDodgeInputs();
		StopTrackingHeldDefense(TEXT("PokemonChanged"));
	}
	CurrentPokemon = LeadPokemon;
	ServerSetPokemon(LeadPokemon);
}

void ATrainerCharacter::ServerSetPokemon_Implementation(APokemon_Parent* LeadPokemon)
{
	if (CurrentPokemon != LeadPokemon)
	{
		StopTrackingHeldDefense(TEXT("PokemonChanged"));
	}
	CurrentPokemon = LeadPokemon;
}

void ATrainerCharacter::ServerBroadcastTarget_Implementation(const FHitResult& CombatHitResult)
{
	OnTargetRegistered.Broadcast(CombatHitResult);
}

void ATrainerCharacter::ServerAddToCurrentParty_Implementation(AActor* AddedActor)
{
	APokemon_Parent* CaughtPokemon = Cast<APokemon_Parent>(AddedActor);
	CaughtPokemon->SetIsCaught(true);
	//APokemonAIController* PokemonController = CaughtPokemon->GetPokemonController();
	CaughtPokemon->SetPokemonTrainer(this);

}

void ATrainerCharacter::ServerRequestCatchPokemon_Implementation(FVector TraceStart, FVector TraceEnd)
{
	APokemon_Parent* TargetPokemon = nullptr;
	if (!TryGetCatchTarget(TraceStart, TraceEnd, TargetPokemon))
	{
		UE_LOG(LogTemp, Display, TEXT("No catch target found"));
		return;
	}
	HandleCatchPokemon(TargetPokemon,PokeballProjectileClass);
}

void ATrainerCharacter::ServerRequestReturnCurrentPokemon_Implementation()
{
	if(!HasAuthority())
		{
		return;
	}

	if (!IsValid(CurrentPokemon))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerRequestReturnCurrentPokemon failed: No current Pokemon to return."));
		CurrentPokemon = nullptr;
		PokemonASC = nullptr;
		return;
	}

	if (!CurrentPokemon->IsOwnedByTrainer(this))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerRequestReturnCurrentPokemon failed: Current Pokemon does not belong to this trainer."));
		return;
	}

	APokemon_Parent* PokemonToReturn = CurrentPokemon;

	if (ATrainerPlayerState* TPS = GetTPS())
	{
		TPS->PokemonReturned(PokemonToReturn);
	}

	CurrentPokemon = nullptr;
	PokemonASC = nullptr;

	PokemonToReturn->Return();
}

void ATrainerCharacter::UpdateTargetingCamera(float DeltaTime)
{
	if (!IsLocallyControlled() || !TargetingComponent || !FollowCamera)
	{
		return;
	}

	if (TargetingComponent->IsLockedOn())
	{
		UpdateLockOnCamera(DeltaTime);
	}

	UpdateAimZoom(DeltaTime);
}

void ATrainerCharacter::UpdateLockOnCamera(float DeltaTime)
{
	if (!TargetingComponent || !Controller)
	{
		return;
	}

	AActor* TargetActor = TargetingComponent->GetCurrentLockedTarget();
	if (!IsValid(TargetActor))
	{
		return;
	}

	const FVector PlayerLocation = GetActorLocation();

	FVector TargetLocation = TargetActor->GetActorLocation();
	TargetLocation.Z += LockOnFocusHeightOffset;

	const FVector FocusPoint = FMath::Lerp(PlayerLocation, TargetLocation, LockOnFocusTargetBias);
	APlayerController* PC = Cast<APlayerController>(Controller);

	if (!PC || !PC->PlayerCameraManager)
	{
		return;
	}

	const FVector CameraLocation = PC->PlayerCameraManager->GetCameraLocation();

	const FRotator DesiredRotation = (FocusPoint - CameraLocation).Rotation();

	const FRotator CurrentRotation = Controller->GetControlRotation();

	const FRotator NewRotation = FMath::RInterpTo(CurrentRotation, DesiredRotation, DeltaTime, LockOnCameraInterpSpeed);

	Controller->SetControlRotation(NewRotation);

	if (GetWorld())
	{
		DrawDebugSphere(
			GetWorld(),
			FocusPoint,
			16.f,
			12,
			FColor::Blue,
			false,
			0.f
		);
	}
}

void ATrainerCharacter::UpdateAimZoom(float DeltaTime)
{
	const bool bShouldZoom = TargetingComponent && TargetingComponent->IsInFocusAim();

	const float TargetFOV = bShouldZoom ? FreeAimZoomFOV : DefaultFOV;

	const float NewFOV = FMath::FInterpTo(FollowCamera->FieldOfView, TargetFOV, DeltaTime, AimFOVInterpSpeed);

	FollowCamera->SetFieldOfView(NewFOV);

	// Movement speed adjustment based on zoom level

	if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
		const float TargetSpeed = bShouldZoom ? AimWalkSpeed : NormalWalkSpeed;

		MoveComp->MaxWalkSpeed = FMath::FInterpTo(MoveComp->MaxWalkSpeed, TargetSpeed, DeltaTime, WalkSpeedInterpSpeed);
	}
}

void ATrainerCharacter::ServerRequestCatchPokemonWithPokeball_Implementation(APokemon_Parent* TargetPokemon, TSubclassOf<APokeBall> PokeballClass)
{
	if(!HasAuthority() || !IsValid(TargetPokemon))
	{
		return;
	}

	if (TargetPokemon->GetIsCaught())
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerRequestCatchPokemonWithPokeball failed: Target Pokemon is already caught."));
		return;
	}

	HandleCatchPokemon(TargetPokemon, PokeballClass);
}

void ATrainerCharacter::ServerThrowSelectedPokemon_Implementation(int32 SelectedPartyIndex, const FAimData& AimData)
{
	if (!HasAuthority())
	{
		return;
	}

	if (PokemonFieldTransitionState != EPokemonFieldTransition::None)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowSelectedPokemon failed: Pokemon field transition is already in progress. %d"), static_cast<int32>(PokemonFieldTransitionState));
		return;
	}

	if (IsValid(CurrentPokemon))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowSelectedPokemon failed: Current Pokemon is already out."));
		return;
	}

	ATrainerPlayerState* TPS = GetTPS();
	if (!TPS || TPS->IsCurrentPartyEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowSelectedPokemon failed: No Pokemon in party to throw."));
		return;
	}

	FPokemonInfo PokemonOut;
	if (!TPS->GetPokemonInfoAtPartyIndex(SelectedPartyIndex, PokemonOut))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowSelectedPokemon failed: Invalid party index."));
		return;
	}

	// TODO: Replace this with PokemonOut.CaptureBallType once that exist
	const EPokeballType CaptureBallType = EPokeballType::EPT_None;

	PokemonFieldTransitionState = EPokemonFieldTransition::SendingOut;

	ThrowPokeballForSummon(PokemonOut.CapturedBallClass, AimData, SelectedPartyIndex);

}

void ATrainerCharacter::ServerCommandPokemonDodge_Implementation(FGameplayTag DodgeDirectionTag, FVector ReferenceForward)
{
	if(!CurrentPokemon)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCommandPokemonDodge failed: No current Pokemon."));
		return;
	}

	if (!CurrentPokemon->IsOwnedByTrainer(this))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCommandPokemonDodge failed: Current Pokemon does not belong to this trainer."));
		return;
	}

	const UPokemonIntentSequenceComponent* Intent = CurrentPokemon->GetIntentSequenceComponent();
	if (UPokemonIntentSequenceComponent::IsHeldDefensePrototypeEnabled() && Intent && Intent->HasRunningMoveToAction())
	{
		// An old client or direct RPC must satisfy the same MoveTo admission as the new binding.
		return;
	}

	if (!CurrentPokemon->CanAct())
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCommandPokemonDodge failed: Current Pokemon cannot act."));
		return;
	}

	if (CurrentPokemon->GetIsCommandActive())
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCommandPokemonDodge failed: Current Pokemon is already executing a command."));
		return;
	}

	if (CurrentPokemon->GetIsDodging())
	{
		return;
	}
	const FPokemonGameplayTags& InputTags = FPokemonGameplayTags::Get();
	const bool bIsValidDodgeDirection = DodgeDirectionTag.MatchesTag(InputTags.InputTag_Dodge);

	if (!bIsValidDodgeDirection)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCommandPokemonDodge failed: Invalid dodge direction tag."));
		return;
	}

	ReferenceForward.Z = 0.f;

	if (!ReferenceForward.Normalize())
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCommandPokemonDodge failed: invalid reference direction."));
		return;
	}

	CurrentPokemon->Dodge(DodgeDirectionTag, ReferenceForward);
}

void ATrainerCharacter::ServerSetDefensiveDodgeHeld_Implementation(APokemon_Parent* ExpectedPokemon,
	int32 Activation, int32 Revision, bool bHeld)
{
	if (!HasAuthority() || Activation <= 0
		|| Revision != (bHeld ? 1 : 2))
	{
		return;
	}

	FPokemonHeldDefenseSession Reply;
	Reply.Pokemon = ExpectedPokemon;
	Reply.Trainer = this;
	Reply.InputActivation = Activation;
	Reply.InputRevision = Revision;
	Reply.State = EPokemonHeldDefenseState::Rejected;

	UPokemonIntentSequenceComponent* Intent = IsValid(ExpectedPokemon)
		? ExpectedPokemon->GetIntentSequenceComponent() : nullptr;

	if (!bHeld)
	{
		bool bMatchingSession = false;

		// A revoked exhaustion binding may outlive acknowledgement
		// tracking. Route release by its original actor/input identity.
		if (IsValid(Intent))
		{
			Intent->ReleaseHeldDefense(
				this,
				Activation,
				Revision,
				TEXT("InputReleased"));

			const FPokemonHeldDefenseSession& Session =
				Intent->GetHeldDefenseSession();

			if (Session.Pokemon == ExpectedPokemon
				&& Session.Trainer == this
				&& Session.InputActivation == Activation)
			{
				Reply = Session;
				bMatchingSession = true;
			}
		}

		if (!bMatchingSession)
		{
			Reply.Reason = TEXT("NoMatchingSession");
		}

		// A rejected or already terminal binding still acknowledges the
		// physical release so the owning client's local latch can clear.
		// Do not fabricate release of a binding that remains held.
		if (!bMatchingSession || !Reply.IsHeld())
		{
			Reply.InputRevision = Revision;
		}

		if (AcknowledgedPokemon.Get() == ExpectedPokemon
			&& AcknowledgedActivation == Activation
			&& (!bMatchingSession || !Reply.IsHeld()))
		{
			GetWorldTimerManager().ClearTimer(
				DefenseAcknowledgementTimer);

			AcknowledgedPokemon.Reset();
			AcknowledgedActivation = 0;
			LastAcknowledgedRevision = 0;
		}

		ClientAcknowledgeHeldDefense(Reply);
		return;
	}

	// Reliable RPCs on this trainer share one ordered channel. Consume the press even when rejected,
	// so a retry after a new MoveTo starts cannot acquire it or activate an extra standalone dodge.
	if (Activation <= LastServerDodgeActivation)
	{
		return;
	}
	LastServerDodgeActivation = Activation;

	if (AcknowledgedActivation != 0)
	{
		PollHeldDefenseAcknowledgement(AcknowledgedPokemon, AcknowledgedActivation);
	}

	if (!UPokemonIntentSequenceComponent::IsHeldDefensePrototypeEnabled())
	{
		Reply.Reason = TEXT("PrototypeDisabled");
	}
	else if (!Intent || ExpectedPokemon != CurrentPokemon || !ExpectedPokemon->IsOwnedByTrainer(this))
	{
		Reply.Reason = TEXT("PokemonOwnershipMismatch");
	}
	else if (AcknowledgedActivation != 0)
	{
		Reply.Reason = TEXT("AnotherInputHeld");
	}
	else if (ExpectedPokemon->GetIsCommandActive())
	{
		Reply.Reason = TEXT("AttackCommandActive");
	}
	else if (Intent->BeginHeldDefense(this, Activation, Revision, Reply.Reason))
	{
		Reply = Intent->GetHeldDefenseSession();

		AcknowledgedPokemon = ExpectedPokemon;
		AcknowledgedActivation = Activation;
		LastAcknowledgedRevision = Reply.ServerRevision;

		FTimerDelegate Observe = FTimerDelegate::CreateUObject(this, &ThisClass::PollHeldDefenseAcknowledgement,
			AcknowledgedPokemon, Activation);

		GetWorldTimerManager().SetTimer(DefenseAcknowledgementTimer, Observe, 0.1f, true);
	}

	ClientAcknowledgeHeldDefense(Reply);
}

void ATrainerCharacter::PollHeldDefenseAcknowledgement(TWeakObjectPtr<APokemon_Parent> ExpectedPokemon, int32 Activation)
{
	if (AcknowledgedPokemon != ExpectedPokemon || AcknowledgedActivation != Activation)
	{
		return;
	}
	
	UPokemonIntentSequenceComponent* Intent = ExpectedPokemon.IsValid() 
		? ExpectedPokemon->GetIntentSequenceComponent() : nullptr;

	if (IsValid(Intent))
	{
		// This performs lifecycle validation only; it does not debit stamina.
		// Exhausted/blocked bindings must still notice owner retirement.
		Intent->RefreshHeldDefense();

		const FPokemonHeldDefenseSession& Session =
			Intent->GetHeldDefenseSession();

		if (Session.Trainer == this
			&& Session.InputActivation == Activation
			&& Session.Pokemon == ExpectedPokemon.Get())
		{
			if (LastAcknowledgedRevision != Session.ServerRevision)
			{
				LastAcknowledgedRevision = Session.ServerRevision;
				ClientAcknowledgeHeldDefense(Session);
			}

			if (Session.IsHeld())
			{
				return;
			}
		}
	}

	GetWorldTimerManager().ClearTimer(DefenseAcknowledgementTimer);
	AcknowledgedPokemon.Reset();
	AcknowledgedActivation = 0;
	LastAcknowledgedRevision = 0;
}

void ATrainerCharacter::StopTrackingHeldDefense(FName Reason)
{
	if (!HasAuthority() || AcknowledgedActivation == 0)
	{
		return;
	}
	UPokemonIntentSequenceComponent* Intent = AcknowledgedPokemon.IsValid() ? AcknowledgedPokemon->GetIntentSequenceComponent() : nullptr;
	if (Intent)
	{
		const FPokemonHeldDefenseSession& Session = Intent->GetHeldDefenseSession();
		if (Session.Trainer == this && Session.InputActivation == AcknowledgedActivation && Session.IsHeld())
		{
			Intent->RevokeHeldDefense(Reason);
		}
	}
	PollHeldDefenseAcknowledgement(AcknowledgedPokemon, AcknowledgedActivation);
}

void ATrainerCharacter::ClientAcknowledgeHeldDefense_Implementation(const FPokemonHeldDefenseSession& Snapshot)
{
	if (DodgeInput.Activation <= 0
		|| Snapshot.Trainer != this
		|| DodgeInput.Pokemon.Get() != Snapshot.Pokemon
		|| DodgeInput.Activation != Snapshot.InputActivation
		|| DodgeInput.Revision != Snapshot.InputRevision
		|| Snapshot.ServerRevision < DodgeInput.LastServerRevision)
	{
		return;
	}
	DodgeInput.LastServerRevision = Snapshot.ServerRevision;
	 
	if(Snapshot.Pokemon==CurrentPokemon&&
		Snapshot.InputActivation >= LastHeldDefenseAcknowledgement.InputActivation)
	{
		LastHeldDefenseAcknowledgement = Snapshot;
	}

	UE_LOG(
		LogTemplateCharacter,
		Display,
		TEXT("[HeldDefenseAck] Pokemon=%s Activation=%d ")
		TEXT("InputRevision=%d ServerRevision=%d State=%s Reason=%s ")
		TEXT("Intent=%s Action=%s Request=%s ")
		TEXT("FundedLastInterval=%d ServiceActive=0"),
		*GetNameSafe(Snapshot.Pokemon),
		Snapshot.InputActivation,
		Snapshot.InputRevision,
		Snapshot.ServerRevision,
		*UEnum::GetValueAsString(Snapshot.State),
		*Snapshot.Reason.ToString(),
		*Snapshot.IntentId.ToString(),
		*Snapshot.ActionId.ToString(),
		*Snapshot.NavigationRequestId.ToString(),
		Snapshot.bLastIntervalFunded ? 1 : 0);

	// A rejected or revoked press remains latched until release.
	// Holding the button cannot authorize a replacement MoveTo.
	if (DodgeInput.Revision == 2)
	{
		DodgeInput = FDodgeInput{};
	}
}

void ATrainerCharacter::ServerTogglePokemonCombatMode_Implementation()
{
	if (!HasAuthority())
	{
		return;
	}

	if (!IsValid(CurrentPokemon))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerTogglePokemonCombatMode failed: No current Pokemon."));
		return;
	}

	if (!CurrentPokemon->IsOwnedByTrainer(this))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerTogglePokemonCombatMode failed: Current Pokemon does not belong to this trainer."));
		return;
	}

	if (!CurrentPokemon->CanAct())
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerTogglePokemonCombatMode failed: Current Pokemon cannot act."));
		return;
	}

	if (CurrentPokemon->GetIsCommandActive())
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerTogglePokemonCombatMode failed: Current Pokemon is already executing a command."));
		return;
	}

	APokemonAIController* PokemonController = CurrentPokemon->GetPokemonController();

	if (!PokemonController)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerTogglePokemonCombatMode failed: Current Pokemon does not have a valid AI Controller."));
		return;
	}

	const EPokemonState CurrentState = PokemonController->GetPokemonState();

	const FPokemonGameplayTags& StateTags = FPokemonGameplayTags::Get();

	// 
	// COMBATIVE -> PASSIVE
	//
	if (CurrentState == EPokemonState::EPS_Combative)
	{
		PokemonController->EndCombat();
		PokemonController->RestartPokemonDecisionMaking();

		UE_LOG(LogTemp, Display, TEXT("Pokemon %s has been set to PASSIVE mode."), *CurrentPokemon->GetName());
	}
	//
	// ANY NORMAL NON-COMBATIVE STATE -> COMBATIVE
	//
	PokemonController->StopPokemonDecisionMaking(TEXT("Trainer manual combat mode test"));

	PokemonController->SetPokemonState(EPokemonState::EPS_Combative);

	PokemonController->SetBlackboardDesiredCombatMode(StateTags.AI_Decision_Combat_Engage);

	UE_LOG(LogTemp, Display, TEXT("[PokemonMode] Manual mode changed | Pokemon=%s | Mode=Combative | DesiredCombatMode=%s"), *GetNameSafe(CurrentPokemon), *StateTags.AI_Decision_Combat_Engage.ToString());
}

bool ATrainerCharacter::TryGetCatchTarget(const FVector& TraceStart, const FVector& TraceEnd, APokemon_Parent*& OutPokemon) const
{
	OutPokemon = nullptr;

	FHitResult OutHit;
	BasicLineTrace(OutHit, TraceStart, TraceEnd);

	if (!OutHit.bBlockingHit)
	{
		UE_LOG(LogTemp, Display, TEXT("Line Trace did not hit anything"));
		return false;
	}

	APokemon_Parent* HitPokemon = Cast<APokemon_Parent>(OutHit.GetActor());
	if (!IsValid(HitPokemon))
	{
		UE_LOG(LogTemp, Display, TEXT("Line Trace hit something that is not a Pokemon"));
		return false;
	}

	if (HitPokemon->GetIsCaught())
	{
		UE_LOG(LogTemp, Display, TEXT("Line Trace hit a Pokemon that is already caught"));
		return false;
	}

	OutPokemon = HitPokemon;
	return true;
}

void ATrainerCharacter::HandleCatchPokemon(APokemon_Parent* CaughtPokemon, TSubclassOf<APokeBall> PokeballClass)
{
	if (!HasAuthority() || !IsValid(CaughtPokemon))
	{
		return;
	}
	
	ATrainerPlayerState* TPS = GetTPS();
	if(!TPS)
	{
		UE_LOG(LogTemp, Warning, TEXT("HandleCatchPokemon failed: Could not get TrainerPlayerState."));
		return;
	}

	// Save into party/state first
	TPS->AddToParty(CaughtPokemon, PokeballClass);

	// If this was somehow the field pokemon , make sure to clear it out and update the HUD
	if (CurrentPokemon == CaughtPokemon)
	{
		CurrentPokemon = nullptr;
	}
	HandleReturnedPokemon(CaughtPokemon);
}

void ATrainerCharacter::HandleReturnedPokemon(APokemon_Parent* ReturnedPokemon)
{
	if (!HasAuthority() || !IsValid(ReturnedPokemon))
	{
		return;
	}

	ReturnedPokemon->PrepareForFieldRemoval();
	ReturnedPokemon->Return();
}

void ATrainerCharacter::CatchPokemon()
{
	if (!IsLocallyControlled())
	{
		return;
	}

	const FVector TraceStart = GetActorLocation();
	const FVector TraceEnd = TraceStart + (FollowCamera->GetForwardVector() * CatchingDistance);
	ServerRequestCatchPokemon(TraceStart, TraceEnd);
}

void ATrainerCharacter::ShowPokemonMoveset()
{
	TrainerController->ShowCurrentPokemonMoveset();
	bAreMovesSelectable = true;
}

void ATrainerCharacter::RemovePokemonMoveset()
{
	bAreMovesSelectable = false;
	TrainerController->RemoveCurrentPokemonMoveset();
}

void ATrainerCharacter::BasicLineTrace(FHitResult& OutHit, const FVector& Start, const FVector& End) const
{
	UWorld* World = GetWorld();
	if (!World) return;
	DrawDebugLine
	(
		World,
		Start,
		End,
		FColor::Red,
		false, -1, 0,
		4
	);
	World->LineTraceSingleByChannel
	(
		OutHit,
		Start,
		End,
		ECollisionChannel::ECC_Visibility
	);
}

//////////////////////////////////////////////////////////////////////////
// Input

ATrainerController* ATrainerCharacter::GetTC()
{
	if (!TrainerController)
		TrainerController = Cast<ATrainerController>(Controller);
	return TrainerController;
}

ATrainerPlayerState* ATrainerCharacter::GetTPS()
{
	if (!TrainerPlayerState)
		TrainerPlayerState = GetPlayerState<ATrainerPlayerState>();
	return TrainerPlayerState;
}

UPokemonAbilitySystemComponent* ATrainerCharacter::GetPASC()
{
	if (!CurrentPokemon)
		return nullptr;

	if (!PokemonASC)
	{
		PokemonASC = CurrentPokemon->GetPokemonASC();
	}
	return PokemonASC;
}

void ATrainerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UPokemonInputComponent* PokemonInput = Cast<UPokemonInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		PokemonInput->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		PokemonInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		PokemonInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATrainerCharacter::Move);

		// Looking
		PokemonInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATrainerCharacter::Look);

		PokemonInput->BindAction(IA_Pickup, ETriggerEvent::Triggered, this, &ATrainerCharacter::Pickup);
		PokemonInput->BindAction(IA_ThrowPokeball, ETriggerEvent::Completed, this, &ATrainerCharacter::ThrowQuickSlotInput);
		//PokemonInput->BindAction(IA_Throw, ETriggerEvent::Completed, this, &ATrainerCharacter::CatchPokemon);
		//PokemonInput->BindAction(IA_ThrowPokeball, ETriggerEvent::Completed, this, &ATrainerCharacter::ComeOnOut);
		PokemonInput->BindAction(IA_Engage, ETriggerEvent::Completed, this, &ATrainerCharacter::TargetAndEngage);
		PokemonInput->BindAction(IA_Command, ETriggerEvent::Started, this, &ATrainerCharacter::ShowPokemonMoveset);
		PokemonInput->BindAction(IA_Command, ETriggerEvent::Completed, this, &ATrainerCharacter::RemovePokemonMoveset);
		PokemonInput->BindAction(IA_ToggleLockOn, ETriggerEvent::Completed, this, &ATrainerCharacter::Input_ToggleLockOn);
		PokemonInput->BindAction(IA_Aim, ETriggerEvent::Started, this, &ATrainerCharacter::Input_BeginFocusAim);
		PokemonInput->BindAction(IA_Aim, ETriggerEvent::Completed, this, &ATrainerCharacter::Input_EndFocusAim);
		PokemonInput->BindAction(IA_CommandMove, ETriggerEvent::Completed, this, &ATrainerCharacter::CommandPokemonMove);

		PokemonInput->BindAbilityActions(InputConfig, this, &ThisClass::SelectMove);
		PokemonInput->BindDodgeActions(InputConfig, this, &ThisClass::CommandDodge);

#if !UE_BUILD_SHIPPING && !UE_BUILD_TEST
		if (const UInputAction* Action = HeldDodgeAction.LoadSynchronous())
		{
			PokemonInput->BindAction(Action, ETriggerEvent::Started, this, &ThisClass::BeginHeldDodgeInput);
			PokemonInput->BindAction(Action,ETriggerEvent::Completed,this, &ThisClass::EndHeldDodgeInput);
			PokemonInput->BindAction(Action, ETriggerEvent::Canceled, this, &ThisClass::EndHeldDodgeInput);
		}   
#endif
		if (IA_TogglePokemonCombatMode)
		{
			PokemonInput->BindAction(IA_TogglePokemonCombatMode, ETriggerEvent::Completed, this, &ATrainerCharacter::TogglePokemonCombatMode);	
		}
	}
}

//void ATrainerCharacter::UpdateCurrentPokemonHealth()
//{
//	OnPokemonHealthUpdated.Broadcast();
//}

void ATrainerCharacter::SelectMove(int32 MoveIndex)
{
	if (!IsLocallyControlled()) return;

	if (!bAreMovesSelectable)
	{
		UE_LOG(LogTemp, Display, TEXT("Moves Not Selectable"));
		return;
	}

	if (MoveIndex == INDEX_NONE || MoveIndex < 0)
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Move Index"));
		return;
	}

	if (!CurrentPokemon)
	{
		UE_LOG(LogTemp, Display, TEXT("SelectMove failed: No current Pokemon."));
		return;
	}

	if (!CurrentPokemon->CanAct())
	{
		UE_LOG(LogTemp, Display,
			TEXT("SelectMove rejected: Current Pokemon cannot act. Pokemon=%s MoveIndex=%d"),
			*GetNameSafe(CurrentPokemon),
			MoveIndex);

		return;
	}

	UE_LOG(LogTemp, Display, TEXT("Move Selected %d"), MoveIndex);
	if (!TargetingComponent)
	{
		return;
	}
	const FAimData AimData = TargetingComponent->BuildAimData();
	ServerCallCommand(MoveIndex, AimData);
}

void ATrainerCharacter::Input_ToggleLockOn()
{
	if (TargetingComponent)
	{
		TargetingComponent->ToggleLockOn();
	}
}

void ATrainerCharacter::Input_BeginFocusAim()
{
	if (TargetingComponent)
	{
		TargetingComponent->BeginFocusAim();
	}
}

void ATrainerCharacter::Input_EndFocusAim()
{
	if(TargetingComponent)
	{
		TargetingComponent->EndFocusAim();
	}
}

void ATrainerCharacter::BeginHeldDodgeInput()
{
	if(!IsLocallyControlled()
		||!IsValid(CurrentPokemon)
		||!UPokemonIntentSequenceComponent::IsHeldDefensePrototypeEnabled()
		||DodgeInput.Revision==1
		||NextDodgeActivation==MAX_int32)
	{
		return;
	}

	DodgeInput = FDodgeInput();
	DodgeInput.Pokemon = CurrentPokemon;
	DodgeInput.Activation = ++NextDodgeActivation;
	DodgeInput.Revision = 1;

	const UGameViewportClient* Client = GetWorld()->GetGameViewport();
	const FSceneViewport* Viewport = Client ? Client->GetGameViewport() : nullptr;

	bDodgeViewportHadFocus = Viewport && Viewport->HasFocus();

	if (!ApplicationActivationHandle.IsValid() && FSlateApplication::IsInitialized())
	{
		ApplicationActivationHandle = FSlateApplication::Get()
			.OnApplicationActivationStateChanged().AddUObject(this, &ThisClass::HandleApplicationActivationChanged);
	}

	ServerSetDefensiveDodgeHeld(DodgeInput.Pokemon.Get(), DodgeInput.Activation, DodgeInput.Revision, true);
}

void ATrainerCharacter::EndHeldDodgeInput()
{
	if (DodgeInput.Revision != 1)
	{
		return;
	}

	// Record release before sending: a listen-server acknowledgment
	// can execute synchronously and clear DodgeInput
	DodgeInput.Revision = 2;
	bDodgeViewportHadFocus = false;

	if (IsLocallyControlled() && DodgeInput.Pokemon.IsValid())
	{
		ServerSetDefensiveDodgeHeld(DodgeInput.Pokemon.Get(), DodgeInput.Activation, DodgeInput.Revision, false);
	}
	else
	{
		DodgeInput = FDodgeInput();
	}
}

void ATrainerCharacter::ServerCallCommand_Implementation(int32 MoveIndex, const FAimData& AimData)
{
	if (!CurrentPokemon)
	{
		UE_LOG(LogTemp, Display, TEXT("ServerCallCommand failed: No current Pokemon."));
		return;
	}

	if (MoveIndex == INDEX_NONE || MoveIndex < 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCallCommand failed: Invalid move index."));
		return;
	}

	if (!CurrentPokemon->CanAct())
	{
		UE_LOG(LogTemp, Display,
			TEXT("ServerCallCommand rejected: Current Pokemon cannot act. Pokemon=%s MoveIndex=%d"),
			*GetNameSafe(CurrentPokemon),
			MoveIndex);

		return;
	}

	const FPokemonCommandTarget CommandTarget = CurrentPokemon->BuildCommandTargetFromAimData(AimData);

	const bool bRawHit =
		CommandTarget.bHasHitResult &&
		CommandTarget.HitResult.bBlockingHit;

	const FHitResult& RawHit =
		CommandTarget.HitResult;

	const float SemanticShift =
		bRawHit
		? FVector::Dist(
			RawHit.ImpactPoint,
			CommandTarget.TargetLocation)
		: 0.f;

	UE_LOG(LogTemp, Display, TEXT(
		"[PokemonAimCommand] Accepted | "
		"Pokemon=%s | "
		"MoveIndex=%d | "
		"AimMode=%d | "
		"TargetType=%d | "
		"TargetActor=%s | "
		"TargetPoint=%s | "
		"TargetLocation=%s | "
		"RawHit=%d | "
		"RawActor=%s | "
		"RawComponent=%s | "
		"RawImpact=%s | "
		"RawNormal=%s | "
		"Surface=%s | "
		"SemanticShift=%.2f | "
		"TraceStart=%s | "
		"TraceEnd=%s"
	),
		*GetNameSafe(CurrentPokemon),
		MoveIndex,
		static_cast<int32>(AimData.AimMode),
		static_cast<int32>(
			CommandTarget.TargetType),
		*GetNameSafe(
			CommandTarget.TargetActor),
		*CommandTarget.TargetPointTag.ToString(),
		*CommandTarget.TargetLocation.ToString(),

		bRawHit,

		*GetNameSafe(
			RawHit.GetActor()),

		*GetNameSafe(
			RawHit.GetComponent()),

		*RawHit.ImpactPoint.ToString(),
		*RawHit.ImpactNormal.ToString(),

		PokemonAimDiagnostics::ClassifySurface(
			CommandTarget),

		SemanticShift,

		*RawHit.TraceStart.ToString(),
		*RawHit.TraceEnd.ToString()
	);

	UPokemonCommandComponent* Command = CurrentPokemon->FindComponentByClass<UPokemonCommandComponent>();
	FName Rejection;
	UPokemonMoveDataAsset* Move = Command ? Command->ResolveMoveAtIndex(MoveIndex, Rejection) : nullptr;
	if (UPokemonCommandComponent::IsSupportedSequencedMove(Move))
	{
		if (UPokemonIntentSequenceComponent* Intent = CurrentPokemon->GetIntentSequenceComponent())
		{
			Intent->SubmitAttackIntent(MoveIndex, CommandTarget);
		}
		return; // Supported melee rejection must never fall through to legacy execution.
	}
	CurrentPokemon->SetCommandTarget(CommandTarget);
	CurrentPokemon->CallCommand(MoveIndex);
}

void ATrainerCharacter::CommandDodge(FGameplayTag GameplayTag)
{
	if (!IsLocallyControlled() || !IsValid(CurrentPokemon) || !InputConfig)
	{
		return;
	}

	if (!CurrentPokemon->CanAct()||CurrentPokemon->GetIsCommandActive())
	{
		return;
	}

	const FPokemonGameplayTags& InputTags = FPokemonGameplayTags::Get();
	if(!GameplayTag.MatchesTag(InputTags.InputTag_Dodge))
	{
		return;
	}

	FRotator ViewRotation = GetControlRotation();
	ViewRotation.Pitch = 0.f;
	ViewRotation.Roll = 0.f;

	ServerCommandPokemonDodge( GameplayTag, ViewRotation.Vector().GetSafeNormal2D());
}

void ATrainerCharacter::ClearDodgeInputs(APokemon_Parent* KeepPokemon)
{
	if (!KeepPokemon || DodgeInput.Pokemon.Get() != KeepPokemon)
	{
		EndHeldDodgeInput();
	}
}

void ATrainerCharacter::UpdatePokemonInfoInParty_Implementation(APokemon_Parent* AlteredPokemon)
{
	ATrainerPlayerState* PokemonTrainerState = GetPlayerState<ATrainerPlayerState>();
	check(PokemonTrainerState);

	PokemonTrainerState->UpdatePokemonInfoInParty(AlteredPokemon);
}



#pragma region Come On Out

void ATrainerCharacter::ThrowThrowableProjectile(TSubclassOf<AProjectile> ProjectileClass, const FAimData& AimData,const FPokeballThrowRequest& ThrowRequest)
{
	if (!ProjectileClass || !TargetingComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowPokeball failed: ProjectileClass or TargetingComponent is null."));

		if (ThrowRequest.UseMode == EPokeballUseMode::Summon)
		{
			ResetPokemonFieldTransition(TEXT("Summon projectile prerequisites are invalid"));
		}

		return;
	}

	const FVector SpawnLocation =GetActorLocation()+ GetActorForwardVector() * PokeballSpawnForwardOffset+ FVector::UpVector * PokeballSpawnUpOffset;

	FVector LaunchVelocity;

	const bool bHasSolution = UGameplayStatics::SuggestProjectileVelocity(
		this,
		LaunchVelocity,
		SpawnLocation,
		AimData.AimWorldLocation,
		PokeballThrowSpeed,
		false,
		PokeballCollisionRadius,
		0.f,
		ESuggestProjVelocityTraceOption::DoNotTrace
	);

	if (!bHasSolution)
	{
		LaunchVelocity = AimData.AimDirection * PokeballThrowSpeed;
	}

	const FRotator SpawnRotation = LaunchVelocity.Rotation();
	AActor* TargetActor = AimData.TargetActor.Get();

	AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);

	if (!Projectile)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowPokeball failed: Could not spawn projectile."));

		if (ThrowRequest.UseMode == EPokeballUseMode::Summon)
		{
			ResetPokemonFieldTransition(TEXT("Summon projectile spawn failed"));
		}

		return;
	}

	APokeBall* Pokeball = Cast<APokeBall>(Projectile);

	if (Pokeball)
	{
		Pokeball->SetPokeballType(ThrowRequest.PokeballType);
	}

	switch (ThrowRequest.UseMode)
	{
	case EPokeballUseMode::Capture:
	{
		if (Pokeball)
		{
			Pokeball->InitializeForCapture(this);
		}
		break;
	}

	case EPokeballUseMode::Summon:
	{
		if (!Pokeball)
		{
			UE_LOG(LogTemp, Error,TEXT("[PokemonField] Summon failed: Projectile is not an APokeBall."));

			Projectile->Destroy();
			ResetPokemonFieldTransition(TEXT("Summon projectile is not an APokeBall"));

			return;
		}

		Pokeball->InitializeForSummon(this,ThrowRequest.SummonTargetLocation,ThrowRequest.PartySlotIndex);

		UPokeballSummonComponent* SummonComponent =
			Pokeball->GetSummonComponent();

		if (!SummonComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("[PokemonField] Summon failed: Pokeball has no SummonComponent."));

			Projectile->Destroy();
			ResetPokemonFieldTransition(TEXT("Summon Pokeball has no SummonComponent"));

			return;
		}

		SummonComponent->OnPokeBallSummonLanded.AddDynamic(this,&ATrainerCharacter::HandlePokeballSummonLanded);

		break;
	}

	default:
		break;
	}

	// If Projectile has LaunchProjectile function, call it with the calculated LaunchVelocity
	Projectile->LaunchProjectile(LaunchVelocity);
}

void ATrainerCharacter::ThrowPokeballForCapture(TSubclassOf<AProjectile> ProjectileClass, const FAimData& AimData, EPokeballType PokeballType)
{
	FPokeballThrowRequest ThrowRequest;
	ThrowRequest.UseMode = EPokeballUseMode::Capture;
	ThrowRequest.PokeballType = PokeballType;
	ThrowRequest.TargetActor = AimData.TargetActor.Get();

	ThrowThrowableProjectile(ProjectileClass, AimData, ThrowRequest);
}

void ATrainerCharacter::ThrowPokeballForSummon(TSubclassOf<AProjectile> ProjectileClass, const FAimData& AimData, int32 PartySlotIndex)
{
	FPokeballThrowRequest ThrowRequest;
	ThrowRequest.UseMode = EPokeballUseMode::Summon;
	ThrowRequest.PartySlotIndex = PartySlotIndex;
	ThrowRequest.TargetActor = AimData.TargetActor.Get();
	ThrowRequest.SummonTargetLocation = AimData.AimWorldLocation;

	ThrowThrowableProjectile(ProjectileClass, AimData, ThrowRequest);
}

void ATrainerCharacter::ThrowQuickSlotInput()
{
	UE_LOG(LogTemp, Warning,
		TEXT(
			"[TrainerInput] ThrowQuickSlotInput | "
			"Frame=%llu | Time=%.3f"
		),
		GFrameCounter,
		GetWorld()
		? GetWorld()->GetTimeSeconds()
		: -1.f
	);

	if(!QuickSlotComponent)
	{
		return;
	}

	switch (QuickSlotComponent->GetCurrentSlotMode())
	{
	case ESlotType::EST_Inventory:
		ThrowSelectedInventoryItemInput();
		break;

	case ESlotType::EST_PokemonParty:
		ThrowSelectedPokemonInput();
		break;

	default:
		break;
	}
}

void ATrainerCharacter::ThrowSelectedInventoryItemInput()
{
	if (!IsLocallyControlled() || !TargetingComponent || !QuickSlotComponent)
	{
		return;
	}

	if (QuickSlotComponent->GetCurrentSlotMode() != ESlotType::EST_Inventory)
	{
		UE_LOG(LogTemp, Display, TEXT("ThrowSelectedInventoryItemInput failed: Current Quick Slot is not set to Inventory"));
		return;
	}

	if (!QuickSlotComponent->HasSelectedThrowableItem())
	{
		UE_LOG(LogTemp, Display, TEXT("ThrowSelectedInventoryItemInput failed: No throwable item in selected Quick Slot"));
		return;
	}

	const FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * PokeballSpawnForwardOffset + FVector::UpVector * PokeballSpawnUpOffset;

	FAimData AimData;
	TargetingComponent->BuildProjectileAimData
	(
		SpawnLocation,
		PokeballThrowSpeed,
		PokeballCollisionRadius,
		AimData
	);


	ServerThrowSelectedInventoryItem(QuickSlotComponent->GetSelectedThrowableItemID(), AimData);
}

void ATrainerCharacter::ThrowSelectedPokemonInput()
{
	if (!IsLocallyControlled() || !QuickSlotComponent)
	{
		return;
	}

	if (QuickSlotComponent->GetCurrentSlotMode() != ESlotType::EST_PokemonParty)
	{
		UE_LOG(LogTemp, Display, TEXT(
			"ThrowSelectedPokemonInput failed: "
			"Current Quick Slot is not set to Pokemon Party"
		)
		);

		return;
	}

	// The Pokémon Party action is a toggle.
	//
	// Active Pokémon: recall it.
	//
	// No active Pokémon: throw the selected Pokémon's ball.

	if (IsValid(CurrentPokemon))
	{
		ServerRequestReturnCurrentPokemon();
		return;
	}

	// Everything below this point belongs to SEND OUT only.

	if (!FollowCamera || !TargetingComponent)
	{
		return;
	}

	if (!QuickSlotComponent->HasSelectedPokemonInfo())
	{
		UE_LOG(LogTemp, Display, TEXT(
			"ThrowSelectedPokemonInput failed: "
			"No Pokemon in selected Quick Slot"
		)
		);
		return;
	}

	const FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * PokeballSpawnForwardOffset + FVector::UpVector * PokeballSpawnUpOffset;

	FAimData AimData;

	TargetingComponent->BuildProjectileAimData(SpawnLocation, PokeballThrowSpeed, PokeballCollisionRadius, AimData);

	ServerThrowSelectedPokemon(QuickSlotComponent->GetPartyIndex(), AimData);
}

void ATrainerCharacter::ServerThrowSelectedInventoryItem_Implementation(FName ItemID, const FAimData& AimData)
{
	if(!HasAuthority()||!InventorySystem)
	{
		return;
	}

	if (!InventorySystem->HasItem(ItemID,1))
	{
		UE_LOG(LogTemp, Warning, TEXT("[TrainerCharacter] ServerThrowSelectedItem failed: Player does not have item %s."), *ItemID.ToString());
		return;
	}

	FInventoryItemInfo* ItemInfo = InventorySystem->GetInventoryItemInfo(ItemID);

	if(!ItemInfo)
	{
		UE_LOG(LogTemp, Warning, TEXT("[TrainerCharacter] ServerThrowSelectedItem failed: Could not find item info for %s."), *ItemID.ToString());
		return;
	}

	if (!ItemInfo->bIsThrowable || !ItemInfo->ProjectileClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("[TrainerCharacter] ServerThrowSelectedItem failed: Item %s is not a throwable item."), *ItemID.ToString());
		return;
	}

	if (!InventorySystem->TryConsumeItem(ItemID, 1))
	{
		UE_LOG(LogTemp, Warning, TEXT("[TrainerCharacter] ServerThrowSelectedItem failed: Could not consume item %s."), *ItemID.ToString());
		return;
	}

	FPokeballThrowRequest ThrowRequest;
	ThrowRequest.UseMode = EPokeballUseMode::Capture;
	
	ThrowThrowableProjectile(ItemInfo->ProjectileClass, AimData, ThrowRequest);
}

void ATrainerCharacter::CommandPokemonMove()
{
	if (!IsLocallyControlled())
	{
		return;
	}

	if(!CurrentPokemon)
	{
		UE_LOG(LogTemp, Display, TEXT("CommandPokemonMove failed: No current Pokemon."));
		return;
	}

	if (!CurrentPokemon->CanAct())
	{
		UE_LOG(LogTemp, Display,
			TEXT("CommandPokemonMove rejected: Current Pokemon cannot act. Pokemon=%s"),
			*GetNameSafe(CurrentPokemon));
		return;
	}

	if (!TargetingComponent)
	{
		UE_LOG(LogTemp, Display, TEXT("CommandPokemonMove failed: TargetingComponent is null."));
		return;
	}

	// Prototype: Move Here is a free-aim command.
	if (!TargetingComponent->IsInFreeAim())
	{
		UE_LOG(LogTemp, Display, TEXT("CommandPokemonMove rejected: Move Here currently requires free aim."));
		return;
	}

	FVector RawAimLocation;

	if (!TargetingComponent->TryGetCommandMoveLocation(RawAimLocation))
	{
		UE_LOG(LogTemp, Display, TEXT("CommandPokemonMove rejected: Could not get command move location from TargetingComponent."));
		return;
	}


	// RAW targeting position.
	DrawDebugSphere(
		GetWorld(),
		RawAimLocation,
		20.f,
		12,
		FColor::Red,
		false,
		3.f,
		0,
		2.f
	);

	ServerCommandPokemonMove(RawAimLocation);
}

void ATrainerCharacter::TogglePokemonCombatMode()
{
	if (!IsLocallyControlled())
	{
		return;
	}

	if(!IsValid(CurrentPokemon))
	{
		UE_LOG(LogTemp, Display, TEXT("TogglePokemonCombatMode failed: No current Pokemon."));
		return;
	}
	ServerTogglePokemonCombatMode();
}

void ATrainerCharacter::ServerRequestSendOutPokemon_Implementation(int32 SelectedPartyIndex, FVector TraceStart, FVector TraceEnd)
{
	if (!HasAuthority())
	{
		return;
	}

	if (PokemonFieldTransitionState != EPokemonFieldTransition::None)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerRequestSendOutPokemon failed: Pokemon field transition is already in progress. %d"), static_cast<int32>(PokemonFieldTransitionState));
		return;
	}

	PokemonFieldTransitionState = EPokemonFieldTransition::SendingOut;
	HandleSendOutPokemonAtIndex(SelectedPartyIndex, TraceStart, TraceEnd);
}

void ATrainerCharacter::ServerCommandPokemonMove_Implementation(FVector RequestedLocation)
{

	if (!CurrentPokemon)
	{
		return;
	}
	if (!CurrentPokemon->CanAct())
	{
		return;
	}

	UPokemonIntentSequenceComponent* IntentSequence = CurrentPokemon->GetIntentSequenceComponent();

	if (!IntentSequence)
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT(
				"ServerCommandPokemonMove failed: "
				"Pokemon has no IntentSequenceComponent."
			)
		);

		return;
	}
	
	IntentSequence->SubmitMoveToIntent(RequestedLocation);
}

bool ATrainerCharacter::TryBuildPokemonSpawnTransform(const FVector& TraceStart, const FVector& TraceEnd, FTransform& OutSpawnTransform) const
{
	FHitResult OutHit;
	BasicLineTrace(OutHit, TraceStart, TraceEnd);

	if (!OutHit.bBlockingHit)
	{
		return false;
	}
	const FVector SpawnLocation = OutHit.ImpactPoint + FVector(0, 0, 90.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, GetActorLocation());

	OutSpawnTransform.SetLocation(SpawnLocation);
	OutSpawnTransform.SetRotation(SpawnRotation.Quaternion());

	return true;
}

void ATrainerCharacter::HandlePokeballSummonLanded(FVector LandingLocation, FVector LandingNormal, int32 PartySlotIndex)
{
	UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] HandlePokeballSummonLanded: PartySlotIndex=%d, LandingLocation=%s, LandingNormal=%s"), PartySlotIndex, *LandingLocation.ToString(), *LandingNormal.ToString());
	HandleSendOutPokemonAtLanding(PartySlotIndex, LandingLocation, LandingNormal);
}

void ATrainerCharacter::HandleSendOutPokemonAtIndex(int32 SelectedPartyIndex, const FVector& TraceStart, const FVector& TraceEnd)
{
	// Server checks if player has a Pokemon, if the Pokemon is ready, and if the spawn location is valid before spawning the Pokemon and setting it as the current active Pokemon
	
	if(!HasAuthority())
	{
		return;
	}

	if(!IsValid(CurrentPokemon))
	{
		CurrentPokemon = nullptr;
	}
	
	ATrainerPlayerState* TPS = GetTPS();
	if (!TPS || TPS->IsCurrentPartyEmpty() || CurrentPokemon)
	{
		UE_LOG(LogTemp, Display, TEXT("No Pokemon To Throw"));
		ResetPokemonFieldTransition(TEXT("Legacy send-out has no available Pokemon"));
		return;
	}

	FPokemonInfo PokemonOut;

	if (!TPS->GetPokemonInfoAtPartyIndex(SelectedPartyIndex, PokemonOut))
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Party Index"));
		ResetPokemonFieldTransition(TEXT("Legacy send-out party index is invalid"));
		return;
	}

	if (PokemonOut.PartyMode != EPartyStatus::EPS_Ready)
	{
		UE_LOG(LogTemp, Display, TEXT("Pokemon Not Ready"));
		ResetPokemonFieldTransition(TEXT("Legacy send-out Pokemon is not ready"));
		return;
	}

	FTransform SpawnTransform;

	if (!TryBuildPokemonSpawnTransform(TraceStart, TraceEnd, SpawnTransform))
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Spawn Location"));
		ResetPokemonFieldTransition(TEXT("Legacy send-out spawn location is invalid"));
		return;
	}

	if (!PokemonOut.StoredPokemonDataAsset || !PokemonOut.StoredPokemonDataAsset->StoredPokemonClass)
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Pokemon Data Asset"));
		ResetPokemonFieldTransition(TEXT("Legacy send-out Pokemon data is invalid"));
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("Create Pokemon here!"));

	APokemon_Parent* IChooseYou = GetWorld()->SpawnActorDeferred<APokemon_Parent>
		(
			PokemonOut.StoredPokemonDataAsset->StoredPokemonClass,
			SpawnTransform,
			this,
			Cast<APawn>(this),
			ESpawnActorCollisionHandlingMethod::AlwaysSpawn
		);

	if (!IChooseYou)
	{
		UE_LOG(LogTemp, Display, TEXT("Failed to spawn Pokemon"));
		ResetPokemonFieldTransition(TEXT("Legacy send-out Pokemon actor spawn failed"));
		return;
	}

	IChooseYou->SetPokemonStartup(PokemonOut);
	IChooseYou->SetPokemonTrainer(this);
	IChooseYou->FinishSpawning(SpawnTransform);

	CurrentPokemon = IChooseYou;
	PokemonASC = nullptr;

	TPS->SetPartyIndexClamped(SelectedPartyIndex);
	TPS->PokemonIsOut(IChooseYou);

	ResetPokemonFieldTransition(TEXT("Legacy send-out completed"));
}

void ATrainerCharacter::HandleSendOutPokemonAtLanding(int32 SelectedPartyIndex, const FVector& LandingLocation, const FVector& LandingNormal)
{
	if (!HasAuthority())
	{
		return;
	}

	const FVector SpawnLocation = LandingLocation + LandingNormal * 90.f;
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, GetActorLocation());

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(SpawnLocation);
	SpawnTransform.SetRotation(SpawnRotation.Quaternion());

	UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] HandleSendOutPokemonAtLanding: PartySlotIndex=%d, SpawnLocation=%s, SpawnRotation=%s"), SelectedPartyIndex, *SpawnLocation.ToString(), *SpawnRotation.ToString());
	HandleSendOutPokemonAtTransform(SelectedPartyIndex, SpawnTransform);
}

void ATrainerCharacter::HandleSendOutPokemonAtTransform(int32 SelectedPartyIndex, const FTransform& SpawnTransform)
{
	if (!HasAuthority())
	{
		return;
	}

	if (!IsValid(CurrentPokemon))
	{
		CurrentPokemon = nullptr;
	}

	ATrainerPlayerState* TPS = GetTPS();
	if (!TPS || TPS->IsCurrentPartyEmpty() || CurrentPokemon)
	{
		UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] HandleSendOutPokemonAtTransform: No Pokemon To Throw"));
		ResetPokemonFieldTransition(TEXT("Send-out has no available Pokemon"));

		return;
	}

	FPokemonInfo PokemonOut;

	if (!TPS->GetPokemonInfoAtPartyIndex(SelectedPartyIndex, PokemonOut))
	{
		UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] HandleSendOutPokemonAtTransform: Invalid Party Index"));
		ResetPokemonFieldTransition(TEXT("Send-out party index is invalid"));
		return;
	}

	if (PokemonOut.PartyMode != EPartyStatus::EPS_Ready)
	{
		UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] HandleSendOutPokemonAtTransform: Pokemon Not Ready"));
		ResetPokemonFieldTransition(TEXT("Send-out Pokemon is not ready"));
		return;
	}

	if (!PokemonOut.StoredPokemonDataAsset || !PokemonOut.StoredPokemonDataAsset->StoredPokemonClass)
	{
		UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] HandleSendOutPokemonAtTransform: Invalid Pokemon Data Asset"));
		ResetPokemonFieldTransition(TEXT("Send-out Pokemon data is invalid"));
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] HandleSendOutPokemonAtTransform: Create Pokemon here!"));

	APokemon_Parent* IChooseYou = GetWorld()->SpawnActorDeferred<APokemon_Parent>
		(
			PokemonOut.StoredPokemonDataAsset->StoredPokemonClass,
			SpawnTransform,
			this,
			Cast<APawn>(this),
			ESpawnActorCollisionHandlingMethod::AlwaysSpawn
		);

	if (!IChooseYou)
	{
		UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] HandleSendOutPokemonAtTransform: Failed to spawn Pokemon"));
		ResetPokemonFieldTransition(TEXT("Send-out Pokemon actor spawn failed"));
		return;
	}

	IChooseYou->SetPokemonStartup(PokemonOut);
	IChooseYou->SetPokemonTrainer(this);
	IChooseYou->FinishSpawning(SpawnTransform);

	CurrentPokemon = IChooseYou;
	PokemonASC = nullptr;

	TPS->SetPartyIndexClamped(SelectedPartyIndex);
	TPS->PokemonIsOut(IChooseYou);

	ResetPokemonFieldTransition(TEXT("Send-out completed"));
}

#pragma endregion


void ATrainerCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ATrainerCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (!Controller)
	{
		return;
	}

	if (TargetingComponent && TargetingComponent->IsLockedOn())
	{
		HandleLockOnLookInput(LookAxisVector);
		return;
	}

	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
}

void ATrainerCharacter::HandleLockOnLookInput(const FVector2D& LookAxisVector)
{
	constexpr float SwitchThreshold = 0.75f;

	if (LookAxisVector.X > SwitchThreshold)
	{
		TargetingComponent->SwitchTargetRight();
	}
	else if (LookAxisVector.X < -SwitchThreshold)
	{
		TargetingComponent->SwitchTargetLeft();
	}
}

void ATrainerCharacter::Pickup()
{
	if (InventorySystem&&OverlappingItem)
	{
		InventorySystem->Interact(OverlappingItem);
}
}

void ATrainerCharacter::TargetAndEngage()
{
	if (!CurrentPokemon)
		return;
	UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] TargetAndEngage: Looking for target"));
	FHitResult OutHit;
	FVector Start = GetActorLocation();
	FVector End = FollowCamera->GetComponentLocation() + (FollowCamera->GetForwardVector() * CatchingDistance);
	BasicLineTrace(OutHit, Start, End);

	if (OutHit.bBlockingHit)
	{
		UE_LOG(LogTemp, Display, TEXT("[TrainerCharacter] TargetAndEngage: Hit something"));

		APokemon_Parent* PokemonTarget = Cast<APokemon_Parent>(OutHit.GetActor());

		EngagedTarget = PokemonTarget;

		if (PokemonTarget)
		{
			GetTPS()->SetTrainerIsInCombat(PokemonTarget);
		}
		else
		{
			GetTPS()->SetTrainerIsInCombat(nullptr);
		}

		ServerBroadcastTarget(OutHit);
	}
}

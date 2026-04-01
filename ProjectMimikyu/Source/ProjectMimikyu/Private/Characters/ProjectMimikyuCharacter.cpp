// Copyright Epic Games, Inc. All Rights Reserved.

/*
*  TO DO
* Tie an event call to TrainerController. Connecting the OverlayWidget controller to the Pokemon trainer an pairing the On PartyChanged
* Rename Script To Trainer Character
**/

#include "Characters/ProjectMimikyuCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "AIControllers/TrainerController.h"
#include "DataAssets/PokemonDataAsset.h"
#include "AIControllers/PokemonAIController.h"
#include "Characters/Pokemon_Parent.h"
#include "Player/TrainerPlayerState.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Interfaces/DamageInterface.h"
#include "Components/CapsuleComponent.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Input/PokemonInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Net/UnrealNetwork.h"
#include "PokemonGameplayTags.h"
#include "Debugging/PokemonDebugLibrary.h"
#include "PokemonDebugTags.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AProjectMimikyuCharacter

AProjectMimikyuCharacter::AProjectMimikyuCharacter()
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
	CameraBoom->SocketOffset=FVector(0, 50.f, 50.f);
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	InventorySystem = CreateDefaultSubobject<UInventorySystemComponent>(TEXT("Inventory System"));
	bReplicates = true;
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AProjectMimikyuCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AProjectMimikyuCharacter, CurrentPokemon);
}

void AProjectMimikyuCharacter::OnRep_CurrentPokemon()
{
}

void AProjectMimikyuCharacter::SetOverlappingItem(AItem* NewItem)
{
	OverlappingItem = NewItem;
}

void AProjectMimikyuCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	InventorySystem->OwnerCharacter = this;

}

void AProjectMimikyuCharacter::BeginPlay()
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
}

void AProjectMimikyuCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// SelectMove();
}

FPokemonInfo AProjectMimikyuCharacter::GetCurrentPokemonInfo()
{
	return FPokemonInfo();
}

void AProjectMimikyuCharacter::SetCurrentPokemon(APokemon_Parent* LeadPokemon)
{
	CurrentPokemon = LeadPokemon;
	ServerSetPokemon(LeadPokemon);
}

void AProjectMimikyuCharacter::ServerSetPokemon_Implementation(APokemon_Parent* LeadPokemon)
{
	CurrentPokemon = LeadPokemon;
}

void AProjectMimikyuCharacter::ServerBroadcastTarget_Implementation(AActor* Target)
{
	OnTargetRegistered.Broadcast(Target);
}

void AProjectMimikyuCharacter::ServerAddToCurrentParty_Implementation(AActor* AddedActor)
{
	APokemon_Parent* CaughtPokemon = Cast<APokemon_Parent>(AddedActor);
	CaughtPokemon->bIsCaught = true;
	//APokemonAIController* PokemonController = CaughtPokemon->GetPokemonController();
	CaughtPokemon->SetPokemonTrainer(this);

}

void AProjectMimikyuCharacter::ServerRequestCatchPokemon_Implementation(FVector TraceStart, FVector TraceEnd)
{
	APokemon_Parent* TargetPokemon = nullptr;
	if (!TryGetCatchTarget(TraceStart, TraceEnd, TargetPokemon))
	{
		UE_LOG(LogTemp, Display, TEXT("No catch target found"));
		return;
	}
	HandleCatchPokemon(TargetPokemon);
}

void AProjectMimikyuCharacter::ServerRequestReturnCurrentPokemon_Implementation()
{
	if(!HasAuthority())
		{
		return;
	}

	if (!IsValid(CurrentPokemon))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerRequestReturnCurrentPokemon failed: No current Pokemon to return."));
		CurrentPokemon = nullptr;
		return;
	}

	if (CurrentPokemon->CurrentTrainer != this)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerRequestReturnCurrentPokemon failed: Current Pokemon does not belong to this trainer."));
		return;
	}


	ATrainerPlayerState* TPS = GetTPS();
	if (TPS)
	{
		//TPS->PokemonReturned(CurrentPokemon);
	}

	APokemon_Parent* PokemonToReturn = CurrentPokemon;
	CurrentPokemon = nullptr;

	PokemonToReturn->Return();
}

bool AProjectMimikyuCharacter::TryGetCatchTarget(const FVector& TraceStart, const FVector& TraceEnd, APokemon_Parent*& OutPokemon) const
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

	if (HitPokemon->bIsCaught)
	{
		UE_LOG(LogTemp, Display, TEXT("Line Trace hit a Pokemon that is already caught"));
		return false;
	}

	OutPokemon = HitPokemon;
	return true;
}

void AProjectMimikyuCharacter::HandleCatchPokemon(APokemon_Parent* CaughtPokemon)
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
	TPS->AddToParty(CaughtPokemon);

	// If this was somehow the field pokemon , make sure to clear it out and update the HUD
	if (CurrentPokemon == CaughtPokemon)
	{
		CurrentPokemon = nullptr;
	}
	HandleReturnedPokemon(CaughtPokemon);
}

void AProjectMimikyuCharacter::HandleReturnedPokemon(APokemon_Parent* ReturnedPokemon)
{
	if (!HasAuthority() || !IsValid(ReturnedPokemon))
	{
		return;
	}

	ReturnedPokemon->PrepareForFieldRemoval();
	ReturnedPokemon->Return();
}

void AProjectMimikyuCharacter::CatchPokemon()
{
	if (!IsLocallyControlled())
	{
		return;
	}

	const FVector TraceStart = GetActorLocation();
	const FVector TraceEnd = TraceStart + (FollowCamera->GetForwardVector() * CatchingDistance);
	ServerRequestCatchPokemon(TraceStart, TraceEnd);
}

void AProjectMimikyuCharacter::AddToParty(APokemon_Parent* NewPokemon)
{
	GetTPS()->AddToParty(NewPokemon);
}

void AProjectMimikyuCharacter::ShowPokemonMoveset()
{
	TrainerController->ShowCurrentPokemonMoveset();
	bAreMovesSelectable = true;
}

void AProjectMimikyuCharacter::RemovePokemonMoveset()
{
	bAreMovesSelectable = false;
	TrainerController->RemoveCurrentPokemonMoveset();
}

void AProjectMimikyuCharacter::BasicLineTrace(FHitResult& OutHit, const FVector& Start, const FVector& End) const
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

ATrainerController* AProjectMimikyuCharacter::GetTC()
{
	if (!TrainerController)
		TrainerController = Cast<ATrainerController>(Controller);
	return TrainerController;
}

ATrainerPlayerState* AProjectMimikyuCharacter::GetTPS()
{
	if (!TrainerPlayerState)
		TrainerPlayerState = GetPlayerState<ATrainerPlayerState>();
	return TrainerPlayerState;
}

UPokemonAbilitySystemComponent* AProjectMimikyuCharacter::GetPASC()
{
	if (!CurrentPokemon)
		return nullptr;

	if (!PokemonASC)
	{
		PokemonASC = CurrentPokemon->GetPokemonASC();
	}
	return PokemonASC;
}

void AProjectMimikyuCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UPokemonInputComponent* PokemonInput = Cast<UPokemonInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		PokemonInput->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		PokemonInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		PokemonInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AProjectMimikyuCharacter::Move);

		// Looking
		PokemonInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &AProjectMimikyuCharacter::Look);

		PokemonInput->BindAction(IA_Pickup, ETriggerEvent::Triggered, this, &AProjectMimikyuCharacter::Pickup);
		PokemonInput->BindAction(IA_Throw, ETriggerEvent::Completed, this, &AProjectMimikyuCharacter::CatchPokemon);
		PokemonInput->BindAction(IA_ThrowPokeball, ETriggerEvent::Completed, this, &AProjectMimikyuCharacter::ComeOnOut);
		PokemonInput->BindAction(IA_Engage, ETriggerEvent::Completed, this, &AProjectMimikyuCharacter::TargetAndEngage);
		PokemonInput->BindAction(IA_Command, ETriggerEvent::Started, this, &AProjectMimikyuCharacter::ShowPokemonMoveset);
		PokemonInput->BindAction(IA_Command, ETriggerEvent::Completed, this, &AProjectMimikyuCharacter::RemovePokemonMoveset);

		PokemonInput->BindAbilityActions(InputConfig, this, &ThisClass::SelectMove);
		PokemonInput->BindDodgeActions(InputConfig, this, &ThisClass::CommandDodge);
	}
}

//void AProjectMimikyuCharacter::UpdateCurrentPokemonHealth()
//{
//	OnPokemonHealthUpdated.Broadcast();
//}

void AProjectMimikyuCharacter::SelectMove(int32 Index)
{
	if (!IsLocallyControlled()) return;

	if (!bAreMovesSelectable)
	{
		UE_LOG(LogTemp, Display, TEXT("Moves Not Selectable"));
		return;
	}

	if (Index == INDEX_NONE || Index < 0)
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Move Index"));
		return;
	}

	if (!CurrentPokemon)
	{
		UE_LOG(LogTemp, Display, TEXT("SelectMove failed: No current Pokemon."));
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("Move Selected %d"), Index);
	ServerCallCommand(Index);
}

void AProjectMimikyuCharacter::ServerCallCommand_Implementation(int32 Index)
{
	if(!CurrentPokemon)
	{
		UE_LOG(LogTemp, Display, TEXT("ServerCallCommand failed: No current Pokemon."));
		return;
	
	}

	if (Index == INDEX_NONE || Index < 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCallCommand failed: Invalid move index."));
		return;
	}
	CurrentPokemon->CallCommand(Index);
}

void AProjectMimikyuCharacter::CommandDodge(FGameplayTag GameplayTag)
{
	if (/*bAreMovesSelectable &&*/ !CurrentPokemon->GetIsCommandActive())
	{
		FVector NewDodgeDirection = InputConfig->FindInputActionForDodgeDirection(GameplayTag);
		CurrentPokemon->Dodge(NewDodgeDirection);
	}
}

void AProjectMimikyuCharacter::UpdatePokemonInfoInParty_Implementation(APokemon_Parent* AlteredPokemon)
{
	ATrainerPlayerState* PokemonTrainerState = GetPlayerState<ATrainerPlayerState>();
	check(PokemonTrainerState);

	PokemonTrainerState->UpdatePokemonInfoInParty(AlteredPokemon);
}



#pragma region Come On Out
void AProjectMimikyuCharacter::ComeOnOut()
{
	if (!IsLocallyControlled())
		return;
	FVector Start = GetActorLocation();
	FVector End = Start + (FollowCamera->GetForwardVector() * CatchingDistance);
	ServerRequestSendOutPokemon(Start, End);
}

void AProjectMimikyuCharacter::ServerRequestSendOutPokemon_Implementation(FVector TraceStart, FVector TraceEnd)
{
	HandleSendOutPokemon(TraceStart, TraceEnd);
}

bool AProjectMimikyuCharacter::TryBuildPokemonSpawnTransform(const FVector& TraceStart, const FVector& TraceEnd, FTransform& OutSpawnTransform) const
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

void AProjectMimikyuCharacter::HandleSendOutPokemon(const FVector& TraceStart, const FVector& TraceEnd)
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
		return;
	}

	FPokemonInfo PokemonOut = TPS->GetCurrentPokemonInfo();

	if (PokemonOut.PartyMode != EPartyStatus::EPS_Ready)
	{
		UE_LOG(LogTemp, Display, TEXT("Pokemon Not Ready"));
		return;
	}

	FTransform SpawnTransform;
	if (!TryBuildPokemonSpawnTransform(TraceStart, TraceEnd, SpawnTransform))
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Spawn Location"));
		return;
	}

	if (!PokemonOut.StoredPokemonDataAsset || !PokemonOut.StoredPokemonDataAsset->StoredPokemonClass)
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Pokemon Data Asset"));
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
		return;
	}
	IChooseYou->SetPokemonStartup(PokemonOut);
	IChooseYou->SetPokemonTrainer(this);
	IChooseYou->FinishSpawning(SpawnTransform);

	CurrentPokemon = IChooseYou;
	//UPokemonDebugLibrary::SetObservedActor(this, CurrentPokemon);
	//UPokemonDebugLibrary::SetCategoryEnabled(this, PokemonDebugTags::AI, true);
	//TPS->PokemonIsOut(IChooseYou);
}

#pragma endregion


void AProjectMimikyuCharacter::Move(const FInputActionValue& Value)
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

void AProjectMimikyuCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AProjectMimikyuCharacter::Pickup()
{
	if (InventorySystem&&OverlappingItem)
	{
		InventorySystem->Interact(OverlappingItem);
}
}

void AProjectMimikyuCharacter::TargetAndEngage()
{
	if (!CurrentPokemon)
		return;
	UE_LOG(LogTemp, Display, TEXT("Looking for target"));
	FHitResult OutHit;
	FVector Start = GetActorLocation();
	FVector End = FollowCamera->GetComponentLocation() + (FollowCamera->GetForwardVector() * CatchingDistance);
	BasicLineTrace(OutHit, Start, End);

	if (OutHit.bBlockingHit)
	{
		UE_LOG(LogTemp, Display, TEXT("Hit something"));
		EngagedTarget = OutHit.GetActor();
		GetTPS()->SetTrainerIsInCombat(EngagedTarget);
		ServerBroadcastTarget(EngagedTarget);
	}
}

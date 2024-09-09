// Copyright Epic Games, Inc. All Rights Reserved.

#include "Characters/ProjectMimikyuCharacter.h"
#include "AIControllers/TrainerController.h"
#include "AIControllers/PokemonAIController.h"
#include "Characters/Pokemon_Parent.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Interfaces/DamageInterface.h"
#include "Components/CapsuleComponent.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "AIControllers/PokemonInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Net/UnrealNetwork.h"

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

	DOREPLIFETIME_CONDITION(AProjectMimikyuCharacter, CurrentPokemon, COND_OwnerOnly);
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
	// Call the base class  
	Super::BeginPlay();
	TrainerController = Cast<ATrainerController>(Controller);
	//Add Input Mapping Context
	if (!TrainerController)
		return;

	Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(TrainerController->GetLocalPlayer());
		if(Subsystem)
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		

	TrainerController->HandleGameHasStarted();
}

void AProjectMimikyuCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// SelectMove();
}

void AProjectMimikyuCharacter::SelectMove(int32 Index)
{
	if (TrainerController && bAreMovesSelectable)
	{

		//int32 i = DirectionKeyBind.Find(TrainerController->GetMoveKey());

		if (Index == INDEX_NONE || Index < 0 /*|| i>DirectionKeyBind.Num() - 1*/) return;
		if (TrainerController->IsMoveValid(Index) && !CurrentPokemon->GetIsCommandActive())
		{
			UE_LOG(LogTemp, Display, TEXT("Move Selected %d"),Index);
			ServerCallCommand(Index);
		}
		//UE_LOG(LogTemp, Display, TEXT("%s"), *SelectedPokemonMove->MoveName.ToString());

		// Pokemon Does move
		// call a bool that prevents you from calling a move while pokemon is attacking
		// pokemon's move recharges maybe we give them stamina we'll see...
	}

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

void AProjectMimikyuCharacter::ServerCallCommand_Implementation(const int32& i)
{
	CurrentPokemon->CallCommand(i);
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

void AProjectMimikyuCharacter::CatchPokemon()
{
	FHitResult OutHit;
	FVector Start = GetActorLocation();
	FVector End = FollowCamera->GetComponentLocation() + (FollowCamera->GetForwardVector() * CatchingDistance);
	BasicLineTrace(OutHit, Start, End);

	if (OutHit.bBlockingHit)
	{
		APokemon_Parent* CaughtPokemon = Cast<APokemon_Parent>(OutHit.GetActor());
		if (CaughtPokemon && !CaughtPokemon->bIsCaught)
		{
			//for (int32 i = 1; i < 7; i++)
			//{
			if (CurrentParty.Num() < 6)
			{
				CurrentParty.Add(CaughtPokemon);
				ServerAddToCurrentParty(OutHit.GetActor());
				OnPartyUpdated.Broadcast();
			}
			//else
			//{
			//	continue;
			//}
		//}
		}
	}
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

void AProjectMimikyuCharacter::BasicLineTrace(FHitResult& OutHit, FVector Start, FVector End)
{
	UWorld* World = GetWorld();
	if (!World)return;
	//const FName TraceTag("MyTraceTag");
	//World->DebugDrawTraceTag = TraceTag;
	//FCollisionQueryParams CollisionParams;
	//CollisionParams.TraceTag = TraceTag;
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
		PokemonInput->BindAction(IA_Engage, ETriggerEvent::Completed, this, &AProjectMimikyuCharacter::TargetAndEngage);
		PokemonInput->BindAction(IA_Command, ETriggerEvent::Started, this, &AProjectMimikyuCharacter::ShowPokemonMoveset);
		PokemonInput->BindAction(IA_Command, ETriggerEvent::Completed, this, &AProjectMimikyuCharacter::RemovePokemonMoveset);

		PokemonInput->BindAbilityActions(InputConfig, this, &ThisClass::SelectMove);
	}
}

void AProjectMimikyuCharacter::UpdateCurrentPokemonHealth()
{
	OnPokemonHealthUpdated.Broadcast();
}

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
		//IDamageInterface* DamageInterface = Cast<IDamageInterface>(EngagedTarget);
		//if (DamageInterface && IDamageInterface::Execute_HasFainted(EngagedTarget))
		//{
		//	UE_LOG(LogTemp, Display, TEXT("No health"));
		//	EngagedTarget = nullptr;
		//}
		//OnTargetRegistered.Broadcast(EngagedTarget);
		ServerBroadcastTarget(EngagedTarget);
	}
}

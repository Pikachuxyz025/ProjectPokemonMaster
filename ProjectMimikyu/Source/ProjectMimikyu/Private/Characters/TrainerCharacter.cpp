// Copyright Epic Games, Inc. All Rights Reserved.

/*
*  TO DO
* Tie an event call to TrainerController. Connecting the OverlayWidget controller to the Pokemon trainer an pairing the On PartyChanged
**/

#include "Characters/TrainerCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "AIControllers/TrainerController.h"
#include "DataAssets/PokemonDataAsset.h"
#include "ActorComponents/TargetingComponent.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "ActorComponents/TrainerQuickSlotComponent.h"
#include "ActorComponents/PokeballSummonComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "Player/TrainerPlayerState.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Input/PokemonInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Net/UnrealNetwork.h"
#include "Items/PokeBall.h"
#include "GameplayTags/PokemonGameplayTags.h"
#include "Debugging/PokemonDebugLibrary.h"
#include "GameplayTags/PokemonDebugTags.h"
#include <Kismet/GameplayStatics.h>


DEFINE_LOG_CATEGORY(LogTemplateCharacter);

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
	CameraBoom->SocketOffset=FVector(0, 50.f, 50.f);
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	InventorySystem = CreateDefaultSubobject<UInventorySystemComponent>(TEXT("Inventory System"));
	TargetingComponent = CreateDefaultSubobject<UTargetingComponent>(TEXT("Targeting Component"));
	QuickSlotComponent = CreateDefaultSubobject<UTrainerQuickSlotComponent>(TEXT("Quick Slot Component"));
	bReplicates = true;
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void ATrainerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATrainerCharacter, CurrentPokemon);
}

void ATrainerCharacter::OnRep_CurrentPokemon()
{
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
}

void ATrainerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateTargetingCamera(DeltaTime);
}

FPokemonInfo ATrainerCharacter::GetCurrentPokemonInfo()
{
	return FPokemonInfo();
}

void ATrainerCharacter::SetCurrentPokemon(APokemon_Parent* LeadPokemon)
{
	CurrentPokemon = LeadPokemon;
	ServerSetPokemon(LeadPokemon);
}

void ATrainerCharacter::ServerSetPokemon_Implementation(APokemon_Parent* LeadPokemon)
{
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
		return;
	}

	if (CurrentPokemon->IsOwnedByTrainer(this))
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

	ThrowPokeballForSummon(PokemonOut.CapturedBallClass, AimData, SelectedPartyIndex);

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

		PokemonInput->BindAbilityActions(InputConfig, this, &ThisClass::SelectMove);
		PokemonInput->BindDodgeActions(InputConfig, this, &ThisClass::CommandDodge);
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

void ATrainerCharacter::ServerCallCommand_Implementation(int32 MoveIndex, const FAimData& AimData)
{
	if(!CurrentPokemon)
	{
		UE_LOG(LogTemp, Display, TEXT("ServerCallCommand failed: No current Pokemon."));
		return;
	
	}

	if (MoveIndex == INDEX_NONE || MoveIndex < 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerCallCommand failed: Invalid move index."));
		return;
	}
	CurrentPokemon->CallCommand(MoveIndex);
}

void ATrainerCharacter::CommandDodge(FGameplayTag GameplayTag)
{
	if (/*bAreMovesSelectable &&*/ !CurrentPokemon->GetIsCommandActive())
	{
		FVector NewDodgeDirection = InputConfig->FindInputActionForDodgeDirection(GameplayTag);
		CurrentPokemon->Dodge(NewDodgeDirection);
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
		return;
	}

	const FVector SpawnLocation =
		GetActorLocation()
		+ GetActorForwardVector() * PokeballSpawnForwardOffset
		+ FVector::UpVector * PokeballSpawnUpOffset;

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
		return;
	}

	// If projectile is a Pokeball, initialize it for the capture component
	if (APokeBall* Pokeball = Cast<APokeBall>(Projectile))
	{
		Pokeball->SetPokeballType(ThrowRequest.PokeballType);

		switch (ThrowRequest.UseMode)
		{
		case EPokeballUseMode::Capture:
			Pokeball->InitializeForCapture(this);
			break;

		case EPokeballUseMode::Summon:
			Pokeball->InitializeForSummon(this, ThrowRequest.SummonTargetLocation,ThrowRequest.PartySlotIndex);
			if (UPokeballSummonComponent* SummonComponent = Pokeball->GetSummonComponent())
			{
				SummonComponent->OnPokeBallSummonLanded.AddDynamic(this, &ATrainerCharacter::HandlePokeballSummonLanded);
			}
			break;

		default:
			break;
		}
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
	if (!IsLocallyControlled() || !QuickSlotComponent||!FollowCamera)
	{
		return;
	}

	if (QuickSlotComponent->GetCurrentSlotMode() != ESlotType::EST_PokemonParty)
	{
		UE_LOG(LogTemp, Display, TEXT("ThrowSelectedPokemonInput failed: Current Quick Slot is not set to Pokemon Party"));
		return;
	}

	if (!QuickSlotComponent->HasSelectedPokemonInfo())
	{
		UE_LOG(LogTemp, Display, TEXT("ThrowSelectedPokemonInput failed: No Pokemon in selected Quick Slot"));
		return;
	}

	//FVector Start = GetActorLocation();
	//FVector End = Start + (FollowCamera->GetForwardVector() * CatchingDistance);

	//ServerRequestSendOutPokemon(QuickSlotComponent->GetPartyIndex(), Start, End);

	const FVector SpawnLocation = 
		GetActorLocation() + GetActorForwardVector() * PokeballSpawnForwardOffset + FVector::UpVector * PokeballSpawnUpOffset;

	FAimData AimData;
	TargetingComponent->BuildProjectileAimData
	(
		SpawnLocation,
		PokeballThrowSpeed,
		PokeballCollisionRadius,
		AimData
	);

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
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowSelectedItem failed: Player does not have item %s."), *ItemID.ToString());
		return;
	}

	FInventoryItemInfo* ItemInfo = InventorySystem->GetInventoryItemInfo(ItemID);

	if(!ItemInfo)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowSelectedItem failed: Could not find item info for %s."), *ItemID.ToString());
		return;
	}

	if (!ItemInfo->bIsThrowable || !ItemInfo->ProjectileClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowSelectedItem failed: Item %s is not a throwable item."), *ItemID.ToString());
		return;
	}

	if (!InventorySystem->TryConsumeItem(ItemID, 1))
	{
		UE_LOG(LogTemp, Warning, TEXT("ServerThrowSelectedItem failed: Could not consume item %s."), *ItemID.ToString());
		return;
	}

	FPokeballThrowRequest ThrowRequest;
	ThrowRequest.UseMode = EPokeballUseMode::Capture;
	
	ThrowThrowableProjectile(ItemInfo->ProjectileClass,AimData,ThrowRequest);
}

void ATrainerCharacter::ComeOnOut()
{
	if (!IsLocallyControlled())
		return;
	FVector Start = GetActorLocation();
	FVector End = Start + (FollowCamera->GetForwardVector() * CatchingDistance);
	ServerRequestSendOutPokemon(QuickSlotComponent->GetPartyIndex(), Start, End);
}

void ATrainerCharacter::ServerRequestSendOutPokemon_Implementation(int32 SelectedPartyIndex, FVector TraceStart, FVector TraceEnd)
{
	HandleSendOutPokemonAtIndex(SelectedPartyIndex, TraceStart, TraceEnd);
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
		return;
	}

	FPokemonInfo PokemonOut;

	if (!TPS->GetPokemonInfoAtPartyIndex(SelectedPartyIndex, PokemonOut))
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Party Index"));
		return;
	}

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

	TPS->SetPartyIndexClamped(SelectedPartyIndex);
	TPS->PokemonIsOut(IChooseYou);
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
		UE_LOG(LogTemp, Display, TEXT("No Pokemon To Throw"));
		return;
	}

	FPokemonInfo PokemonOut;

	if (!TPS->GetPokemonInfoAtPartyIndex(SelectedPartyIndex, PokemonOut))
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Party Index"));
		return;
	}

	if (PokemonOut.PartyMode != EPartyStatus::EPS_Ready)
	{
		UE_LOG(LogTemp, Display, TEXT("Pokemon Not Ready"));
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

	TPS->SetPartyIndexClamped(SelectedPartyIndex);
	TPS->PokemonIsOut(IChooseYou);
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
		ServerBroadcastTarget(OutHit);
	}
}

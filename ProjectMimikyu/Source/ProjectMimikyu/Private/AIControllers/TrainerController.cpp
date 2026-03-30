// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllers/TrainerController.h"
#include "Player/TrainerPlayerState.h"
#include "UI/TrainerOverlay.h"
#include "UI/TrainerHUD.h"
#include "Input/PokemonInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Debugging/PokemonDebugWorldSubsystem.h"
#include "PokemonDebugTags.h"
#include "Debugging/PokemonDebugLog.h"



ATrainerController::ATrainerController()
{
	bReplicates = true;
}

void ATrainerController::AddMouseCursor(UUserWidget* CurrentWidget, bool bSetUpMode)
{
	FInputModeUIOnly UIInputMode;
		UIInputMode.SetWidgetToFocus(CurrentWidget->TakeWidget());
	UIInputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	bShowMouseCursor = true;
	if(bSetUpMode)
	SetInputMode(UIInputMode);
}

void ATrainerController::RemoveMouseCursor()
{
	FInputModeGameOnly GameInputMode;
	SetInputMode(GameInputMode);
	bShowMouseCursor = false;
}

void ATrainerController::FocusNewWidget(UUserWidget* NewWidget)
{
	NewWidget->SetFocus();
}

void ATrainerController::ToggleAIDebug()
{
	if (UWorld* World = GetWorld())
	{
		if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetWorld()->GetSubsystem<UPokemonDebugWorldSubsystem>())
		{
			const bool bNowEnabled = DebugSubsystem->ToggleCategory(PokemonDebugTags::AI);
			UE_LOG(LogPokemonDebug, Log, TEXT("AI Debug %s"), bNowEnabled ? TEXT("Enabled") : TEXT("Disabled"));
		}
	}
}

void ATrainerController::ToggleCombatDebug()
{
	if (UWorld* World = GetWorld())
	{
		if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetWorld()->GetSubsystem<UPokemonDebugWorldSubsystem>())
		{
			const bool bNowEnabled = DebugSubsystem->ToggleCategory(PokemonDebugTags::Combat);
			UE_LOG(LogPokemonDebug, Log, TEXT("Combat Debug %s"), bNowEnabled ? TEXT("Enabled") : TEXT("Disabled"));
		}
	}
}

void ATrainerController::TogglePokemonDebugAll()
{
	if (UWorld* World = GetWorld())
	{
		if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetWorld()->GetSubsystem<UPokemonDebugWorldSubsystem>())
		{
			const bool bNowEnabled = DebugSubsystem->ToggleCategory(PokemonDebugTags::Debug);
			UE_LOG(LogPokemonDebug, Log, TEXT("Debug %s"), bNowEnabled ? TEXT("Enabled") : TEXT("Disabled"));
		}
	}
}

void ATrainerController::BeginPlay()
{
	Super::BeginPlay();
	Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if(Subsystem)
		Subsystem->AddMappingContext(InputMappingContext, 1);
	
}

void ATrainerController::BeginPlayingState()
{
	Super::BeginPlayingState();
	TryInitializeHUD();
}

void ATrainerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	TryInitializeHUD();
}

void ATrainerController::AcknowledgePossession(APawn* P)
{
	Super::AcknowledgePossession(P);
	TryInitializeHUD();
}

void ATrainerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UPokemonInputComponent* PokemonInput = CastChecked<UPokemonInputComponent>(InputComponent))
	{
		PokemonInput->BindAction(IA_Inventory, ETriggerEvent::Started, this, &ATrainerController::DisplayPlayerMenu);
		PokemonInput->BindAction(IA_Swap, ETriggerEvent::Started, this, &ATrainerController::SwapUIMode);
		PokemonInput->BindAction(IA_Left, ETriggerEvent::Started, this, &ATrainerController::ShiftLeft);
		PokemonInput->BindAction(IA_Right, ETriggerEvent::Started, this, &ATrainerController::ShiftRight);

		PokemonInput->BindKeySequenceActions(InputConfig, this, &ThisClass::GetKeyForSequence);
	}
}

void ATrainerController::DisplayPlayerMenu()
{
	if (!TrainerHUD)
	{
		TrainerHUD = Cast<ATrainerHUD>(GetHUD());
	}

	if (!TrainerHUD)
	{
		return;
	}

	TrainerHUD->AddPlayerInventoryMenuOverlay();
	UE_LOG(LogTemp, Display, TEXT("Menu Added"));
}

void ATrainerController::TryInitializeHUD()
{
	if (!IsLocalController())
	{
		return;
	}

	TrainerHUD = Cast<ATrainerHUD>(GetHUD());
	if (!TrainerHUD)
	{
		return;
	}

	ATrainerPlayerState* PS = GetPlayerState<ATrainerPlayerState>();
	APawn* P = GetPawn();
	if (!PS || !P)
	{
		return;
	}

	if (!TrainerHUD->TrainerOverlay)
	{
		TrainerHUD->AddTrainerOverlay();
	}
}

void ATrainerController::HandleGameHasStarted()
{
	TryInitializeHUD();
}

void ATrainerController::SwapUIMode()
{
//	if (TrainerHUD->TrainerOverlay)
//	{
//		UE_LOG(LogTemp, Display, TEXT("X"));
//		TrainerHUD->TrainerOverlay->SwapSlotModes();
//}
	SwapUIModeDelegate.Broadcast();
}

void ATrainerController::ShiftLeft()
{
	//if (TrainerHUD->TrainerOverlay)
	//{
	//	TrainerHUD->TrainerOverlay->ShiftUILeft();
	//}
	ShiftLeftDelegate.Broadcast();
}

void ATrainerController::ShiftRight()
{
	//if (TrainerHUD->TrainerOverlay)
	//{
	//	TrainerHUD->TrainerOverlay->ShiftUIRight();
	//}
	ShiftRightDelegate.Broadcast();
}

void ATrainerController::ShowCurrentPokemonMoveset()
{
	//UE_LOG(LogTemp, Display, TEXT("Pokemon Moveset"));
	//if (TrainerHUD->TrainerOverlay)
	//{
	//	TrainerHUD->TrainerOverlay->CreateMovesetUI();
	//}
	ShowMoveSetDelegate.Broadcast();
}

void ATrainerController::RemoveCurrentPokemonMoveset()
{
	//if (TrainerHUD->TrainerOverlay)
	//{
	//	TrainerHUD->TrainerOverlay->RemoveMovesetUI();
	//}
	RemoveMoveSetDelegate.Broadcast();
}


FKey ATrainerController::GetMoveKey()
{
	TArray<FKey> ActionKeys = Subsystem->QueryKeysMappedToAction(IA_MoveSelection);
	for (FKey Key : ActionKeys)
	{
		if (WasInputKeyJustPressed(Key))
		{
			return Key;
		}
	}
	return EKeys::Invalid;
}

void ATrainerController::GetKeyForSequence(EDirectionPoint KeyDirection)
{
	KeyCalledDelegate.Broadcast(KeyDirection);
}

bool ATrainerController::IsMoveValid(int32 DirectionIndex)
{
	EDirectionPoint SelectedDirection = static_cast<EDirectionPoint>(DirectionIndex);
	//UPokemonMoveDataAsset* SelectedPokemonMove = TrainerHUD->TrainerOverlay->GetMove(SelectedDirection); 
	bool IsValid = false;// SelectedPokemonMove ? true : false;
	return IsValid;
}

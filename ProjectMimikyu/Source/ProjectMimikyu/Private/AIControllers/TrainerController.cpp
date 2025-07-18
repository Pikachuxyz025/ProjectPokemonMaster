// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllers/TrainerController.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "UI/TrainerOverlay.h"
#include "UI/PlayerInventoryMenuOverlay.h"
#include "UI/TrainerHUD.h"
#include "Input/PokemonInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"



ATrainerController::ATrainerController()
{
	//bReplicates = true;
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

void ATrainerController::BeginPlay()
{
	Super::BeginPlay();
	Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if(Subsystem)
		Subsystem->AddMappingContext(InputMappingContext, 1);
	
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
	UE_LOG(LogTemp, Display, TEXT("Menu Added"));
	TrainerHUD->AddPlayerInventoryMenuOverlay();
}

void ATrainerController::HandleGameHasStarted()
{
	TrainerHUD = Cast<ATrainerHUD>(GetHUD());
	if (TrainerHUD && !TrainerHUD->TrainerOverlay)
	{
		TrainerHUD->AddTrainerOverlay();
	}
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
;
}

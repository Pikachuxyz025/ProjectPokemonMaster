// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerInventoryMenuOverlay.h"
#include "AIControllers/TrainerController.h"
#include "UI/WidgetController/PokemonWidgetController.h"
#include "Player/TrainerPlayerState.h"
#include "UI/InventoryGrid.h"
#include "UI/TrainerHUD.h"
#include "Characters/TrainerCharacter.h"

void UPlayerInventoryMenuOverlay::DisplayInventory()
{
	UPokemonWidgetController* PWC = Cast<UPokemonWidgetController>(WidgetController);

	PlayerCharacter = PlayerCharacter ? PlayerCharacter : Cast<ATrainerCharacter>(GetOwningPlayerPawn());

	PokemonPartyInfo = PWC->GetTPS()->GetCurrentPokemonParty();
	AllocatePokemonInfo();

	if (PlayerCharacter)
	{	
		UE_LOG(LogTemp, Display, TEXT("Found Player Character"));
		InventoryGrid->DisplayInventory(PlayerCharacter->GetInventorySystem());
	}
}

void UPlayerInventoryMenuOverlay::DisplayOverlay(APlayerController* PlayerController)
{
	CreateWidget<UPlayerInventoryMenuOverlay>(PlayerController);
	AddToViewport();
}

void UPlayerInventoryMenuOverlay::NativePreConstruct()
{
	Super::NativePreConstruct();
}

void UPlayerInventoryMenuOverlay::AddMouseCursor()
{
	FInputModeUIOnly UIInputMode;
	if (InventoryGrid)
	{
		UIInputMode.SetWidgetToFocus(InventoryGrid->TakeWidget());
	}
	UIInputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	CurrentController = CurrentController ? CurrentController : GetOwningPlayer();
	if (CurrentController)
	{
		CurrentController->bShowMouseCursor = true;
		CurrentController->SetInputMode(UIInputMode);
	}
}

void UPlayerInventoryMenuOverlay::RemoveMouseCursor()
{
	FInputModeGameOnly GameInputMode;
	CurrentController = CurrentController ? CurrentController : GetOwningPlayer();
	if (CurrentController)
	{
		CurrentController->SetInputMode(GameInputMode);
		CurrentController->bShowMouseCursor = false;
	}
}

FReply UPlayerInventoryMenuOverlay::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	if (InKeyEvent.GetKey() == ExitKey)
	{
		UE_LOG(LogTemp, Display, TEXT("Remove"));
		CurrentController = CurrentController ? CurrentController : GetOwningPlayer();
		if (ATrainerController* TrainerController = Cast<ATrainerController>(CurrentController))
		{
			TrainerController->RemoveMouseCursor();
		}

		if (ATrainerHUD* TrainerHUD = CurrentController ? Cast<ATrainerHUD>(CurrentController->GetHUD()) : nullptr)
		{
			TrainerHUD->RestoreGameplayHUD(this);
		}
		return FReply::Handled();
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Wrong Key"));
	}
	return Super::NativeOnPreviewKeyDown(InGeometry, InKeyEvent);
}

void UPlayerInventoryMenuOverlay::NativeDestruct()
{
	//RemoveMouseCursor();
	Super::NativeDestruct();
}

void UPlayerInventoryMenuOverlay::NativeConstruct()
{
	DisplayInventory();
	CurrentController = CurrentController ? CurrentController : GetOwningPlayer();
	ATrainerController* TrainerController = CastChecked<ATrainerController>(CurrentController);
	TrainerController->AddMouseCursor(InventoryGrid,true);
	//AddMouseCursor();

	Super::NativeConstruct();
}
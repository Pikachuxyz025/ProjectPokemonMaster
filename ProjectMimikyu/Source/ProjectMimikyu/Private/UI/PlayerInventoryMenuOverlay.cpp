// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerInventoryMenuOverlay.h"
#include "UI/InventoryGrid.h"
#include "Characters/ProjectMimikyuCharacter.h"

void UPlayerInventoryMenuOverlay::DisplayInventory()
{
	PlayerCharacter = PlayerCharacter ? PlayerCharacter : Cast<AProjectMimikyuCharacter>(GetOwningPlayerPawn());
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
	//Super::NativeOnPreviewKeyDown(InGeometry, InKeyEvent);
	if (InKeyEvent.GetKey() == ExitKey)
	{
		UE_LOG(LogTemp, Display, TEXT("Remove"));
		RemoveFromParent();
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Wrong Key"));
	}
	//Super::NativeOnKeyDown(InGeometry, InKeyEvent);
	return FReply::Handled();
}

void UPlayerInventoryMenuOverlay::NativeDestruct()
{
	RemoveMouseCursor();
	Super::NativeDestruct();
}

void UPlayerInventoryMenuOverlay::NativeConstruct()
{
	DisplayInventory();
	AddMouseCursor();

	Super::NativeConstruct();
}
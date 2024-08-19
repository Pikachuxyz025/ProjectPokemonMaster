// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerMenuOverlay.h"
#include "UI/PlayerInventoryMenuOverlay.h"

void UPlayerMenuOverlay::DisplayOverlay(APlayerController* PlayerController)
{

	InventoryMenu = CreateWidget<UPlayerInventoryMenuOverlay>(PlayerController, InventoryMenuClass);

	InventoryMenu->SetPlayerController(PlayerController);
	InventoryMenu->AddToViewport();
}






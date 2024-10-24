// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/TrainerHUD.h"
#include "UI/TrainerOverlay.h"
#include "UI/PlayerInventoryMenuOverlay.h"
#include "UI/PlayerMenuOverlay.h"
#include "UI/WidgetController/PokemonMenuWidgetController.h"

void ATrainerHUD::AddTrainerOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController)
	{
		TrainerOverlay = !TrainerOverlay ? CreateWidget<UTrainerOverlay>(PlayerController, TrainerOverlayClass):TrainerOverlay;
		TrainerOverlay->AddToViewport();

	}
}

void ATrainerHUD::AddInventoryOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController)
	{
	InventoryOverlay = !InventoryOverlay ? CreateWidget<UPlayerInventoryMenuOverlay>(PlayerController,InventoryOverlayClass) :InventoryOverlay;
	InventoryOverlay->AddToViewport();
	}
}

void ATrainerHUD::AddPlayerMenuOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController)
	{
		MenuOverlay = !MenuOverlay ? CreateWidget<UPlayerMenuOverlay>(PlayerController, MenuOverlayClass) : MenuOverlay;
		MenuOverlay->AddToViewport();
		MenuOverlay->DisplayOverlay(PlayerController);
	}
}

UPokemonMenuWidgetController* ATrainerHUD::GetPokemonMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if (!PokemonMenuWidgetController)
	{
		PokemonMenuWidgetController = NewObject<UPokemonMenuWidgetController>(this, PokemonMenuWidgetControllerClass);
		PokemonMenuWidgetController->SetWidgetControllerParams(WCParams);
		PokemonMenuWidgetController->BindCallbacksToDependencies();
	}
	return PokemonMenuWidgetController;
}

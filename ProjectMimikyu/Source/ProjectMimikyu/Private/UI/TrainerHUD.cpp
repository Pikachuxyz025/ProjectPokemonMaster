// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/TrainerHUD.h"
#include "UI/TrainerOverlay.h"
#include "Interfaces/MouseInterface.h"
#include "UI/PlayerInventoryMenuOverlay.h"
#include "UI/PlayerMenuOverlay.h"
#include "UI/WidgetController/PokemonMenuWidgetController.h"
#include "UI/WidgetController/PokemonUIInfoWidgetController.h"

void ATrainerHUD::AddTrainerOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	check(PlayerController);

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), TrainerOverlayClass);
	TrainerOverlay = Cast<UTrainerOverlay>(Widget);
	TrainerOverlay->AddToViewport();

}

/*void ATrainerHUD::AddInventoryOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController)
	{
		UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), InventoryOverlayClass);
		InventoryOverlay = Cast<UPlayerInventoryMenuOverlay>(Widget);
		InventoryOverlay->AddToViewport();
	}
}*/

void ATrainerHUD::AddPlayerInventoryMenuOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	check(PlayerController);
	if (!InventoryOverlay)
	{
		UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), InventoryOverlayClass);
		InventoryOverlay = Cast<UPlayerInventoryMenuOverlay>(Widget);
	}

	if (TrainerOverlay->IsInViewport())
	{
		SwitchOverlays(TrainerOverlay, InventoryOverlay);
		InventoryOverlay->SetReturnToWidegt(TrainerOverlay);
	}
	else	
		InventoryOverlay->AddToViewport();	
}

void ATrainerHUD::SwitchOverlays(UUserWidget* CurrentWidget, UUserWidget* NewWidget)//, bool bRemoveMouse)
{
	//if (bRemoveMouse)
	//{
	//TScriptInterface<IMouseInterface> Mouse = CurrentWidget;
	//Mouse->RemoveMouseCursor();
	//}
	CurrentWidget->RemoveFromParent();
	NewWidget->AddToViewport();
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

UPokemonUIInfoWidgetController* ATrainerHUD::GetPokemonUIInfoWidgetController(const FWidgetControllerParams& WCParams)
{
	if (!PokemonUIInfoWidgetController)
	{
		PokemonUIInfoWidgetController = NewObject<UPokemonUIInfoWidgetController>(this, PokemonUIInfoWidgetControllerClass);
		PokemonUIInfoWidgetController->SetWidgetControllerParams(WCParams);
		PokemonUIInfoWidgetController->BindCallbacksToDependencies();
	}
	return PokemonUIInfoWidgetController;
}

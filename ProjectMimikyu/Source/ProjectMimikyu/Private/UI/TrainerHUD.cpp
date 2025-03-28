// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/TrainerHUD.h"
#include "UI/TrainerOverlay.h"
#include "Interfaces/MouseInterface.h"
#include "UI/PlayerInventoryMenuOverlay.h"
#include "AbilitySystemComponent.h"
#include "UI/PlayerMenuOverlay.h"
#include "UI/PokemonUserWidget.h"
#include "Player/TrainerPlayerState.h"
#include "UI/WidgetController/PokemonMenuWidgetController.h"
#include "UI/WidgetController/TrainerOverlayWidgetController.h"

void ATrainerHUD::AddTrainerOverlay()
{
	APlayerController* PC = GetOwningPlayerController();
	ATrainerPlayerState* PS = PC->GetPlayerState<ATrainerPlayerState>();

	check(TrainerOverlayClass);
	check(TrainerOverlayWidgetControllerClass);

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), TrainerOverlayClass);
	TrainerOverlay = Cast<UPokemonUserWidget>(Widget);

	FWidgetControllerParams Params = FWidgetControllerParams(PS, PC);
	TrainerOverlay->SetWidgetController(GetTrainerOverlayWidgetController(Params));

	Widget->AddToViewport();
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
	if (PokemonMenuWidgetController && WCParams.AbilitySystemComponent->GetAvatarActor()!=PokemonMenuWidgetController->GetWidgetAvatarActor())
		PokemonMenuWidgetController = nullptr;

	if (!PokemonMenuWidgetController)
	{
		PokemonMenuWidgetController = NewObject<UPokemonMenuWidgetController>(this, PokemonMenuWidgetControllerClass);
		PokemonMenuWidgetController->SetWidgetControllerParams(WCParams);
		PokemonMenuWidgetController->BindCallbacksToDependencies();
	}
	return PokemonMenuWidgetController;
}

UTrainerOverlayWidgetController* ATrainerHUD::GetTrainerOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (TrainerOverlayWidgetController && WCParams.AbilitySystemComponent->GetAvatarActor() != TrainerOverlayWidgetController->GetWidgetAvatarActor())
		TrainerOverlayWidgetController = nullptr;

	if (!TrainerOverlayWidgetController)
	{
		TrainerOverlayWidgetController = NewObject<UTrainerOverlayWidgetController>(this, TrainerOverlayWidgetControllerClass);
		TrainerOverlayWidgetController->SetWidgetControllerParams(WCParams);
		TrainerOverlayWidgetController->BindCallbacksToDependencies();
	}
	return TrainerOverlayWidgetController;
}

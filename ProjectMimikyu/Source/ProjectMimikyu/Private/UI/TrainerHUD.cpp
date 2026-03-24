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
	if (!PC)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddTrainerOverlay failed: No Player Controller found for HUD"));
		return;
	}

	ATrainerPlayerState* PS = PC->GetPlayerState<ATrainerPlayerState>();
	if (!PS)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddTrainerOverlay failed: Player Controller does not have a valid TrainerPlayerState"));
		return;
	}

	if (TrainerOverlay)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddTrainerOverlay failed: TrainerOverlay already exists"));
		return;
	}

	if(!TrainerOverlayClass||!TrainerOverlayWidgetControllerClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddTrainerOverlay failed: TrainerOverlayClass or TrainerOverlayWidgetControllerClass is not set in the HUD"));
		return;
	}

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), TrainerOverlayClass);
	TrainerOverlay = Cast<UPokemonUserWidget>(Widget);

	if(!TrainerOverlay)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddTrainerOverlay failed: Created widget is not of type UPokemonUserWidget"));
		return;
	}

	FWidgetControllerParams Params = FWidgetControllerParams(PS, PC);
	UTrainerOverlayWidgetController* WC = GetTrainerOverlayWidgetController(Params);
	if (!WC)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddTrainerOverlay failed: WidgetController creation failed."));
		TrainerOverlay = nullptr;
		return;
	}
	TrainerOverlay->SetWidgetController(WC);

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
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddPlayerInventoryMenuOverlay failed: No Player Controller found for HUD"));
		return;
	}

	if (!InventoryOverlay)
	{
		UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), InventoryOverlayClass);
		InventoryOverlay = Cast<UPlayerInventoryMenuOverlay>(Widget);
	}

	if (!InventoryOverlay)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddPlayerInventoryMenuOverlay failed: Created widget is not of type UPlayerInventoryMenuOverlay"));
		return;
	}

	if (TrainerOverlay && TrainerOverlay->IsInViewport())
	{
		SwitchOverlays(TrainerOverlay, InventoryOverlay);
		InventoryOverlay->SetReturnToWidegt(TrainerOverlay);
	}
	else
	{
		InventoryOverlay->AddToViewport();
	}
}

void ATrainerHUD::SwitchOverlays(UUserWidget* CurrentWidget, UUserWidget* NewWidget)//, bool bRemoveMouse)
{
	if (CurrentWidget->IsA(UPokemonUserWidget::StaticClass()) &&NewWidget->IsA(UPokemonUserWidget::StaticClass()))
	{
		UPokemonUserWidget* NewPokemonWidget = Cast<UPokemonUserWidget>(NewWidget);
		UPokemonUserWidget* CurrentPokemonWidget = Cast<UPokemonUserWidget>(CurrentWidget);
		NewPokemonWidget->SetWidgetController(CurrentPokemonWidget->WidgetController);
	}

	CurrentWidget->RemoveFromParent();
	NewWidget->AddToViewport();
}



UPokemonMenuWidgetController* ATrainerHUD::GetPokemonMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if (!WCParams.PlayerState || !WCParams.PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetTrainerOverlayWidgetController failed: invalid widget controller params."));
		return nullptr;
	}

	if (!PokemonMenuWidgetController)
	{
		PokemonMenuWidgetController = NewObject<UPokemonMenuWidgetController>(this, PokemonMenuWidgetControllerClass);
	}

	PokemonMenuWidgetController->SetWidgetControllerParams(WCParams);
	PokemonMenuWidgetController->BindCallbacksToDependencies();
	return PokemonMenuWidgetController;
}

UTrainerOverlayWidgetController* ATrainerHUD::GetTrainerOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (!WCParams.PlayerState || !WCParams.PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetTrainerOverlayWidgetController failed: invalid widget controller params."));
		return nullptr;
	}

	if (!TrainerOverlayWidgetController)
	{
		TrainerOverlayWidgetController = NewObject<UTrainerOverlayWidgetController>(this, TrainerOverlayWidgetControllerClass);
	}

	TrainerOverlayWidgetController->SetWidgetControllerParams(WCParams);
	TrainerOverlayWidgetController->BindCallbacksToDependencies();
	return TrainerOverlayWidgetController;
}

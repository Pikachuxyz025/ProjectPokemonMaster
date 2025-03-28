// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TrainerHUD.generated.h"

class UPokemonMenuWidgetController;
class UPlayerInventoryMenuOverlay;
class UPlayerMenuOverlay;
class UTrainerOverlay;
class UPokemonUserWidget;
struct FWidgetControllerParams;
class UTrainerOverlayWidgetController;

UCLASS()
class PROJECTMIMIKYU_API ATrainerHUD : public AHUD
{
	GENERATED_BODY()
	
private:


	UPROPERTY(EditAnywhere, Category = "Widget Classes")
	TSubclassOf<UUserWidget> InventoryOverlayClass;

	UPROPERTY(EditAnywhere, Category = "Widget Classes")
	TSubclassOf<UPokemonUserWidget> TrainerOverlayClass;

	UPROPERTY(EditAnywhere, Category = "Widget Classes")
	TSubclassOf<UUserWidget> MenuOverlayClass;

	UPROPERTY(EditAnywhere, Category = "Widget Classes")
	TSubclassOf<UUserWidget> PokemonStatInfoOverlayClass;

	UPROPERTY()
	TObjectPtr<	UPokemonMenuWidgetController> PokemonMenuWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPokemonMenuWidgetController> PokemonMenuWidgetControllerClass;

	UPROPERTY()
	TObjectPtr<UTrainerOverlayWidgetController> TrainerOverlayWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UTrainerOverlayWidgetController> TrainerOverlayWidgetControllerClass;
public:

	void AddTrainerOverlay();
	//void AddInventoryOverlay();
	void AddPlayerInventoryMenuOverlay();

	UFUNCTION(BlueprintCallable)
	void SwitchOverlays(UUserWidget* CurrentWidget, UUserWidget* NewWidget);//,bool bRemoveMouse);
	UPROPERTY()
	 TObjectPtr<UPlayerInventoryMenuOverlay> InventoryOverlay;

	UPROPERTY()
	 TObjectPtr<UPlayerMenuOverlay> MenuOverlay;	
	
	UPROPERTY()
	 TObjectPtr<UPokemonUserWidget> TrainerOverlay;

	 UPokemonMenuWidgetController* GetPokemonMenuWidgetController(const FWidgetControllerParams& WCParams);
	 UTrainerOverlayWidgetController* GetTrainerOverlayWidgetController(const FWidgetControllerParams& WCParams);
};

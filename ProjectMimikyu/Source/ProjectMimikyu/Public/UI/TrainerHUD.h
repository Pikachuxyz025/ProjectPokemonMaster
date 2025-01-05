// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TrainerHUD.generated.h"

class UPokemonMenuWidgetController;
class UPlayerInventoryMenuOverlay;
class UPlayerMenuOverlay;
class UTrainerOverlay;
struct FWidgetControllerParams;
class UPokemonUIInfoWidgetController;

UCLASS()
class PROJECTMIMIKYU_API ATrainerHUD : public AHUD
{
	GENERATED_BODY()
	
private:


	UPROPERTY(EditAnywhere, Category = "Widget Classes")
	TSubclassOf<UUserWidget>InventoryOverlayClass;

	UPROPERTY(EditAnywhere, Category = "Widget Classes")
	TSubclassOf<UUserWidget>TrainerOverlayClass;

	UPROPERTY(EditAnywhere, Category = "Widget Classes")
	TSubclassOf<UUserWidget>MenuOverlayClass;

	UPROPERTY(EditAnywhere, Category = "Widget Classes")
	TSubclassOf<UUserWidget> PokemonStatInfoOverlayClass;

	UPROPERTY()
	TObjectPtr<	UPokemonMenuWidgetController> PokemonMenuWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPokemonMenuWidgetController>PokemonMenuWidgetControllerClass;

	UPROPERTY()
	TObjectPtr<UPokemonUIInfoWidgetController>PokemonUIInfoWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPokemonUIInfoWidgetController>PokemonUIInfoWidgetControllerClass;
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
	 TObjectPtr<UTrainerOverlay> TrainerOverlay;

	 UPokemonMenuWidgetController* GetPokemonMenuWidgetController(const FWidgetControllerParams& WCParams);
	 UPokemonUIInfoWidgetController* GetPokemonUIInfoWidgetController(const FWidgetControllerParams& WCParams);
};

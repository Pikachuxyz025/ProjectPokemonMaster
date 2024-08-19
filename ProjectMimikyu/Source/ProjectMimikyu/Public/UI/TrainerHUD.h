// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TrainerHUD.generated.h"

/**
 * 
 */
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


public:

	void AddTrainerOverlay();
	void AddInventoryOverlay();
	void AddPlayerMenuOverlay();

	UPROPERTY()
	class UPlayerInventoryMenuOverlay* InventoryOverlay;

	UPROPERTY()
	class UPlayerMenuOverlay* MenuOverlay;	
	
	UPROPERTY()
	class UTrainerOverlay* TrainerOverlay;
};

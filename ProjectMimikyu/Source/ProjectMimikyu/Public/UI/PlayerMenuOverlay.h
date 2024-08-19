// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerMenuOverlay.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UPlayerMenuOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public:

	void DisplayOverlay(APlayerController* PlayerController);

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> InventoryMenuClass;

	UPROPERTY(VisibleAnywhere)
	class UPlayerInventoryMenuOverlay* InventoryMenu;

};

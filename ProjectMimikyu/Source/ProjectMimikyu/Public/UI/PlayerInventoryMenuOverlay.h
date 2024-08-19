// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerInventoryMenuOverlay.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UPlayerInventoryMenuOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(meta = (BindWidget))
	class UInventoryGrid* InventoryGrid;

	UPROPERTY(EditAnywhere)
	class AProjectMimikyuCharacter* PlayerCharacter;

	void AddMouseCursor();
	void RemoveMouseCursor();
	UPROPERTY()
	APlayerController* CurrentController;

	void DisplayInventory();
	void DisplayOverlay(APlayerController* PlayerController);

	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;

	UPROPERTY(EditAnywhere)
	FKey ExitKey;

	virtual void NativePreConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeConstruct() override;
 FORCEINLINE	void SetPlayerController(APlayerController* PlayerController) { CurrentController = PlayerController; }
};

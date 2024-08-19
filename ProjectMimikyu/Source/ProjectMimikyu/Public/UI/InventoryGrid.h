// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryGrid.generated.h"

class UInventorySystemComponent;

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UInventoryGrid : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(meta = (BindWidget))
	class UWrapBox* BoxGrid;

	UPROPERTY(EditAnywhere)
	 UInventorySystemComponent* InventoryComponent;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> InventorySlotClass;

	void Inventory();
	void DisplayInventory(UInventorySystemComponent* NewInventorySystem);

	UFUNCTION()
	void UpdateInventory();

	virtual void NativePreConstruct() override;
};

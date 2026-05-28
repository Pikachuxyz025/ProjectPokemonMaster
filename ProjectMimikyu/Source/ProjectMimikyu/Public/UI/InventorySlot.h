// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "InventorySlot.generated.h"

class UImage;
class UTextBlock;
class USizeBox;
/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UInventorySlot : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(meta = (BindWidget))
	UImage* ItemImage;

	UPROPERTY(meta = (BindWidget))
	UImage* ArrowImage;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemQuantity;

	UPROPERTY(meta = (BindWidget))
 USizeBox* QuantityBox;

	UPROPERTY(BlueprintReadOnly)
	FInventoryDisplayInfo DisplayInfo;
	
	UPROPERTY(EditAnywhere)
	int32 ContentIndex;

	UPROPERTY(EditAnywhere)
	class UInventorySystemComponent* InventoryComponent;

	void PreCons();
	virtual void NativePreConstruct() override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)override;
	void SetupData(const FInventoryDisplayInfo& InDisplayInfo, int32 InContentIndex, UInventorySystemComponent* NewInventoryComponent);
};

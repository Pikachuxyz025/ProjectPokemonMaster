// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActorComponents/InventorySystemComponent.h"
#include "DragPreview.generated.h"

class UImage;
class UTextBlock;

UCLASS()
class PROJECTMIMIKYU_API UDragPreview : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetupPreview(const FInventoryDisplayInfo& InDisplayInfo);

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> DraggedItem;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> QuantityText;

private:
	UPROPERTY()
	FInventoryDisplayInfo DisplayInfo;

	void RefreshPreview();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/CharacterTypes.h"
#include "DragPreview.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UDragPreview : public UUserWidget
{
	GENERATED_BODY()
	
public:

	FName ItemID;

	UPROPERTY(meta=(BindWidget))
	class UImage* DraggedItem;

	UPROPERTY(EditAnywhere)
	class UDataTable* ItemDataTable;

	virtual void NativePreConstruct() override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <ActorComponents/TargetingComponent.h>
#include "CrosshairWidget.generated.h"


class UImage;
class UTexture2D;

UCLASS()
class PROJECTMIMIKYU_API UCrosshairWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Crosshair")
	void SetCrosshairSpread(float Spread);

	UFUNCTION(BlueprintCallable, Category = "Crosshair")
	void SetCrosshairColor(FLinearColor Color);

	UFUNCTION(BlueprintCallable, Category = "Crosshair")
	void SetCrosshairDisplayData(const FCrosshairDisplayData& CrosshairData);
protected:

	virtual void NativeConstruct() override;

	void InitializeCrosshairPiece(UImage* Image) const;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UImage> IMG_Center;

	UPROPERTY(meta  = (BindWidget))
	TObjectPtr<UImage> IMG_Left;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> IMG_Right;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> IMG_Top;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> IMG_Bottom;
};

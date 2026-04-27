// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/CrosshairWidget.h"
#include "Components/Image.h"
#include <Components/CanvasPanelSlot.h>

void UCrosshairWidget::SetCrosshairSpread(float Spread)
{
	if (IMG_Center) IMG_Center->SetRenderTranslation(FVector2D::ZeroVector);

	if (IMG_Left) IMG_Left->SetRenderTranslation(FVector2D(-Spread, 0.f));

	if (IMG_Right) IMG_Right->SetRenderTranslation(FVector2D(Spread, 0.f));

	if (IMG_Top) IMG_Top->SetRenderTranslation(FVector2D(0.f, -Spread));

	if (IMG_Bottom) IMG_Bottom->SetRenderTranslation(FVector2D(0.f, Spread));
}

void UCrosshairWidget::SetCrosshairColor(FLinearColor Color)
{
	if (IMG_Bottom) IMG_Bottom->SetColorAndOpacity(Color);

	if (IMG_Right) IMG_Right->SetColorAndOpacity(Color);

	if (IMG_Top) IMG_Top->SetColorAndOpacity(Color);

	if (IMG_Left) IMG_Left->SetColorAndOpacity(Color);

	if (IMG_Center) IMG_Center->SetColorAndOpacity(Color);
}

void UCrosshairWidget::SetCrosshairDisplayData(const FCrosshairDisplayData& CrosshairData)
{
	SetVisibility(CrosshairData.bVisible ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
	SetCrosshairSpread(CrosshairData.Spread);
	SetCrosshairColor(CrosshairData.Color);
}

void UCrosshairWidget::NativeConstruct()
{
	Super::NativeConstruct();
	InitializeCrosshairPiece(IMG_Center);
	InitializeCrosshairPiece(IMG_Left);
	InitializeCrosshairPiece(IMG_Right);
	InitializeCrosshairPiece(IMG_Top);
	InitializeCrosshairPiece(IMG_Bottom);
	SetCrosshairSpread(16.f);
}

void UCrosshairWidget::InitializeCrosshairPiece(UImage* Image) const
{
	if (!Image) 
	{
		return;
	}

	UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Image->Slot);
	if (!CanvasSlot)
	{
		return;
	}

	CanvasSlot->SetAnchors(FAnchors(0.5f, 0.5f));
	CanvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
	CanvasSlot->SetPosition(FVector2D::ZeroVector);
	//CanvasSlot->SetAutoSize(true);

	Image->SetRenderTranslation(FVector2D::ZeroVector);
}

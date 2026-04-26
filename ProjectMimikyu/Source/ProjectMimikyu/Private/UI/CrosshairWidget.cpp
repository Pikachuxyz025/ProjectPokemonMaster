// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/CrosshairWidget.h"
#include "Components/Image.h"

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

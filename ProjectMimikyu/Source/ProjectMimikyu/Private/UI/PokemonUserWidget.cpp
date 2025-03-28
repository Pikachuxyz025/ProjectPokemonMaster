// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PokemonUserWidget.h"
#include "Components/SizeBox.h"

void UPokemonUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}

void UPokemonUserWidget::UpdateBoxSize(USizeBox* SizeBox)
{
	SizeBox->SetWidthOverride(BoxWidth);
	SizeBox->SetHeightOverride(BoxHeight);
}

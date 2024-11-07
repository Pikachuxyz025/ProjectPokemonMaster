// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PokemonUserWidget.h"

void UPokemonUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Slate/SMainMenuWidget.h"
#define LOCTEXT_NAMESPACE "MainMenu"

/**
* The Construct function, or the creation of a widget via the SCompoundWidget on C++ seems to have a simple workflow
* You create the ChildSlot which holds the content for your widget
* All the typical items like the Overlays, Vertical Boxes, etc can be added with:
* SNew(S"Item")
* + S"Item"::Slot()
* And you continue on in a hierarchy just like you would see in the widget editor
*/

void SMainMenuWidget::Construct(const FArguments& InArgs)
{
	const FMargin ContentPadding = FMargin(500.f, 300.f);

	const FText TitleText = LOCTEXT("GameTitle", "My Pokemon Game"); //LOCTEXT acts as a string map macro which can be useful for localization
	ChildSlot
		[
			SNew(SOverlay)
				+ SOverlay::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				[
					SNew(SImage)
						.ColorAndOpacity(FColor::Black)
				]
				+ SOverlay::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(ContentPadding)
				[
					SNew(SVerticalBox)
						+ SVerticalBox::Slot()
						[
							SNew(STextBlock)
								.Text(TitleText)
						]
				]
		];
}

#undef LOCTEXT_NAMESPACE
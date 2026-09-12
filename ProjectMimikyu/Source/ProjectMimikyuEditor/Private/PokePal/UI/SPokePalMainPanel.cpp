#include "PokePal/UI/SPokePalMainPanel.h"

#include "Widgets/Layout/SBorder.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"

void SPokePalMainPanel::Construct(const FArguments& InArgs)
{
	ChildSlot
		[
			SNew(SBorder)
				.Padding(16.0f)
				[
					SNew(SVerticalBox)

						+ SVerticalBox::Slot()
						.AutoHeight()
						[
							SNew(STextBlock)
								.Text(FText::FromString(TEXT("PokéPal")))
						]

						+ SVerticalBox::Slot()
						.AutoHeight()
						.Padding(0.0f, 8.0f)
						[
							SNew(STextBlock)
								.Text(FText::FromString(
									TEXT("Project Pokémon Master Editor Assistant")))
						]

						+ SVerticalBox::Slot()
						.AutoHeight()
						[
							SNew(STextBlock)
								.Text(FText::FromString(
									TEXT("Phase 1A — Read-only editor integration")))
						]
				]
		];
}
#include "PokePal/UI/SPokePalMainPanel.h"
#include "PokePal/Subsystems/PokePalEditorSubsystem.h"
#include "Editor.h"
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

						+ SVerticalBox::Slot()
						.AutoHeight()
						.Padding(0.0f, 16.0f, 0.0f, 0.0f)
						[
							SAssignNew(SelectedActorsTextBlock, STextBlock)
								.Text(FText::FromString(TEXT("Selected Actors: None")))
						]	
				]
		];

	if (GEditor)
	{
		if (UPokePalEditorSubsystem* PokePalSubsystem =	GEditor->GetEditorSubsystem<UPokePalEditorSubsystem>())
		{
			PokePalSubsystem->OnSelectedActorsChanged().AddSP(this, &SPokePalMainPanel::HandleSelectedActorsChanged);
		}
	}

	RefreshSelectedActorsText();
}

void SPokePalMainPanel::HandleSelectedActorsChanged()
{
	RefreshSelectedActorsText();
}

void SPokePalMainPanel::RefreshSelectedActorsText()
{
	if (!SelectedActorsTextBlock.IsValid())
	{
		return;
	}

	FString SelectedActorsText = TEXT("Selected Actors: None");

	if (GEditor)
	{
		if (UPokePalEditorSubsystem* PokePalSubsystem = GEditor->GetEditorSubsystem<UPokePalEditorSubsystem>())
		{
			const TArray<FPokePalSelectedActorInfo> SelectedActors = PokePalSubsystem->GetSelectedActorInfo();

			if (!SelectedActors.IsEmpty())
			{
				SelectedActorsText = FString::Printf(TEXT("Selected Actors: %d"), SelectedActors.Num());

				for (const FPokePalSelectedActorInfo& ActorInfo : SelectedActors)
				{
					SelectedActorsText += FString::Printf(TEXT("\n\n%s\n  Object: %s\n  Class: %s"), *ActorInfo.ActorLabel, *ActorInfo.ObjectName, *ActorInfo.ClassName);
				}
			}
		}
	}

	SelectedActorsTextBlock->SetText(FText::FromString(SelectedActorsText));
}

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
							SAssignNew(EditorContextTextBlock, STextBlock)
								.Text(FText::FromString(TEXT("Editor Context: Unavailable")))
						]	
				]
		];

	if (GEditor)
	{
		if (UPokePalEditorSubsystem* PokePalSubsystem =	GEditor->GetEditorSubsystem<UPokePalEditorSubsystem>())
		{
			PokePalSubsystem->OnEditorContextChanged().AddSP(this, &SPokePalMainPanel::HandleEditorContextChanged);
		}
	}

	RefreshEditorContextText();
}

void SPokePalMainPanel::HandleEditorContextChanged()
{
	RefreshEditorContextText();
}

void SPokePalMainPanel::RefreshEditorContextText()
{
	if (!EditorContextTextBlock.IsValid())
	{
		return;
	}

	if (!GEditor)
	{
		EditorContextTextBlock->SetText(FText::FromString(TEXT("Editor Context: Unavailable")));

		return;
	}

	UPokePalEditorSubsystem* PokePalSubsystem = GEditor->GetEditorSubsystem<UPokePalEditorSubsystem>();

	if (!PokePalSubsystem)
	{
		EditorContextTextBlock->SetText(FText::FromString(TEXT("Editor Context: Unavailable")));
		return;
	}
		
	const FPokePalEditorContext Context = PokePalSubsystem->BuildEditorContext();

	FString ContextText = FString::Printf(
		TEXT(
			"Editor Context"
			"\nWorld: %s"
			"\nCurrent Level: %s"
			"\nLevel Path: %s"
			"\nSelected Actors: %d"
		),
		*Context.WorldName,
		*Context.CurrentLevelName,
		*Context.CurrentLevelPath,
		Context.SelectedActors.Num()
	);

	for (const FPokePalActorContext& ActorContext : Context.SelectedActors)
	{
		ContextText += FString::Printf(
			TEXT(
				"\n\n%s"
				"\n  Object: %s"
				"\n  Class: %s"
				"\n  Level: %s"
				"\n  Location: %s"
				"\n  Rotation: %s"
				"\n  Scale: %s"
			),
			*ActorContext.ActorLabel,
			*ActorContext.ObjectName,
			*ActorContext.ClassName,
			*ActorContext.LevelName,
			*ActorContext.Location.ToString(),
			*ActorContext.Rotation.ToString(),
			*ActorContext.Scale.ToString()
		);
	}

	EditorContextTextBlock->SetText(FText::FromString(ContextText));
}

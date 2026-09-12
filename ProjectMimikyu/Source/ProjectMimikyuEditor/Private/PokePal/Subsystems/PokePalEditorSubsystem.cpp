#include "PokePal/Subsystems/PokePalEditorSubsystem.h"
#include "Selection.h"
#include "Editor.h"
#include "Engine/Level.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Misc/PackageName.h"
#include "Subsystems/EditorActorSubsystem.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokePal, Log, All);

void UPokePalEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	EditorSelectionChangedHandle = USelection::SelectionChangedEvent.AddUObject(this, &UPokePalEditorSubsystem::HandleEditorSelectionChanged);

	MapOpenedHandle = FEditorDelegates::OnMapOpened.AddUObject(this, &UPokePalEditorSubsystem::HandleMapOpened);

	UE_LOG(LogPokePal,Log,TEXT("PokéPal Editor Subsystem initialized."));
}

void UPokePalEditorSubsystem::Deinitialize()
{
	if (EditorSelectionChangedHandle.IsValid())
	{
		USelection::SelectionChangedEvent.Remove(EditorSelectionChangedHandle);
		EditorSelectionChangedHandle.Reset();
	}


	if (MapOpenedHandle.IsValid())
	{
		FEditorDelegates::OnMapOpened.Remove(MapOpenedHandle);
		MapOpenedHandle.Reset();
	}

	UE_LOG(LogPokePal,Log,TEXT("PokéPal Editor Subsystem deinitialized."));

	Super::Deinitialize();
}

FPokePalEditorContext UPokePalEditorSubsystem::BuildEditorContext() const
{
	FPokePalEditorContext Context;

	if (!GEditor)
	{
		return Context;
	}

	// ---------------------------------------------------------
	// Editor world / level context
	// ---------------------------------------------------------

	if (UWorld* EditorWorld = GEditor->GetEditorWorldContext().World())
	{
		Context.WorldName = EditorWorld->GetName();

		if (ULevel* CurrentLevel = EditorWorld->GetCurrentLevel())
		{
			Context.CurrentLevelName = CurrentLevel->GetOutermost()->GetName();
		}
	}

	// ---------------------------------------------------------
	// Selected actor context
	// ---------------------------------------------------------

	UEditorActorSubsystem* EditorActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>();

	if(!EditorActorSubsystem)
	{
		return Context;
	}

	const TArray<AActor*> SelectedActors = EditorActorSubsystem->GetSelectedLevelActors();

	for (AActor* AActor : SelectedActors)
	{
		if (!IsValid(AActor))
		{
			continue;
		}

		FPokePalActorContext& ActorContext = Context.SelectedActors.AddDefaulted_GetRef();

		ActorContext.ActorLabel = AActor->GetActorLabel();
		ActorContext.ObjectName = AActor->GetName();
		ActorContext.ClassName = AActor->GetClass()->GetName();

		ActorContext.Location = AActor->GetActorLocation();
		ActorContext.Rotation = AActor->GetActorRotation();
		ActorContext.Scale = AActor->GetActorScale3D();

		if (ULevel* CurrentLevel = AActor->GetLevel())
		{
			const FString CurrentLevelPackageName = CurrentLevel->GetOutermost()->GetName();

			Context.CurrentLevelName =FPackageName::GetShortName(CurrentLevelPackageName);

			Context.CurrentLevelPath = CurrentLevelPackageName;
		}
	}

	return Context;
}

void UPokePalEditorSubsystem::HandleEditorSelectionChanged(UObject* NewSelection)
{
	EditorContextChangedEvent.Broadcast();
}

void UPokePalEditorSubsystem::HandleMapOpened(const FString& Filename, bool bAsTemplate)
{
	EditorContextChangedEvent.Broadcast();
}

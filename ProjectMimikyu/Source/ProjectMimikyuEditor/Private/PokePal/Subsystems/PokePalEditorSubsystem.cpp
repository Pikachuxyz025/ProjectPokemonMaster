#include "PokePal/Subsystems/PokePalEditorSubsystem.h"
#include "Selection.h"
#include "Editor.h"
#include "Subsystems/EditorActorSubsystem.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokePal, Log, All);

void UPokePalEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	EditorSelectionChangedHandle = USelection::SelectionChangedEvent.AddUObject(this, &UPokePalEditorSubsystem::HandleEditorSelectionChanged);

	UE_LOG(LogPokePal,Log,TEXT("PokéPal Editor Subsystem initialized."));
}

void UPokePalEditorSubsystem::Deinitialize()
{
	if (EditorSelectionChangedHandle.IsValid())
	{
		USelection::SelectionChangedEvent.Remove(EditorSelectionChangedHandle);
		EditorSelectionChangedHandle.Reset();
	}

	UE_LOG(LogPokePal,Log,TEXT("PokéPal Editor Subsystem deinitialized."));

	Super::Deinitialize();
}

TArray<FPokePalSelectedActorInfo>UPokePalEditorSubsystem::GetSelectedActorInfo() const
{
	TArray<FPokePalSelectedActorInfo> Result;

	if (!GEditor)
	{
		return Result;
	}

	UEditorActorSubsystem* EditorActorSubsystem =GEditor->GetEditorSubsystem<UEditorActorSubsystem>();

	if (!EditorActorSubsystem)
	{
		return Result;
	}

	const TArray<AActor*> SelectedActors =EditorActorSubsystem->GetSelectedLevelActors();

	for (AActor* Actor : SelectedActors)
	{
		if (!IsValid(Actor))
		{
			continue;
		}

		FPokePalSelectedActorInfo& ActorInfo = Result.AddDefaulted_GetRef();

		ActorInfo.ActorLabel = Actor->GetActorLabel();
		ActorInfo.ObjectName = Actor->GetName();
		ActorInfo.ClassName = Actor->GetClass()->GetName();
	}

	return Result;
}

void UPokePalEditorSubsystem::HandleEditorSelectionChanged(UObject* NewSelection)
{
	SelectedActorsChangedEvent.Broadcast();
}

#include "PokePal/Subsystems/PokePalEditorSubsystem.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokePal, Log, All);

void UPokePalEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogPokePal,Log,TEXT("PokéPal Editor Subsystem initialized."));
}

void UPokePalEditorSubsystem::Deinitialize()
{
	UE_LOG(LogPokePal,Log,TEXT("PokéPal Editor Subsystem deinitialized."));

	Super::Deinitialize();
}
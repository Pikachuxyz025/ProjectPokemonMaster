#pragma once

#include "CoreMinimal.h"

struct FPokePalActorContext
{
	FString ActorLabel;
	FString ObjectName;
	FString ClassName;

	FVector Location=FVector::ZeroVector;
	FRotator Rotation = FRotator::ZeroRotator;
	FVector Scale = FVector::OneVector;

	FString LevelName;
};

struct FPokePalEditorContext
{
	FString WorldName;
	FString CurrentLevelName;
	FString CurrentLevelPath;

	TArray<FPokePalActorContext> SelectedActors;
};

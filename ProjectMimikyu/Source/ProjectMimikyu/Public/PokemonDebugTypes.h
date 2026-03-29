#pragma once


#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PokemonDebugTypes.generated.h"

UENUM(BlueprintType)
enum class EPokemonDebugOutputMode :uint8
{
	None UMETA(DisplayName = "None"),
	Log UMETA(DisplayName = "Log"),
	OnScreen UMETA(DisplayName = "On Screen"),
	LogAndScreen UMETA(DisplayName = "Log And Screen")
};

UENUM(BlueprintType)
enum class EPokemonDebugVerbosity : uint8
{
	Basic       UMETA(DisplayName = "Basic"),
	Detailed    UMETA(DisplayName = "Detailed"),
	Verbose     UMETA(DisplayName = "Verbose")
};

USTRUCT(BlueprintType)
struct FPokemonDebugMessage
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FGameplayTag CategoryTag;

	UPROPERTY(BlueprintReadOnly)
	FString Message;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<const UObject>SourceObject = nullptr;

	UPROPERTY(BlueprintReadOnly)
	float TimeStampInSeconds = 0.f;

	UPROPERTY(BlueprintReadOnly)
	FColor Color = FColor::White;

	UPROPERTY(BlueprintReadOnly)
	EPokemonDebugVerbosity Verbosity;
};
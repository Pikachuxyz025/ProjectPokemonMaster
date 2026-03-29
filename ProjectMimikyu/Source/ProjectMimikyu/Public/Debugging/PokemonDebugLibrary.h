

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "PokemonDebugTypes.h"
#include "PokemonDebugLibrary.generated.h"

class AActor;
class UPokemonDebugWorldSubsystem;

UCLASS()
class PROJECTMIMIKYU_API UPokemonDebugLibrary:public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable,Category="Pokemon|Debug",meta=(WorldContext="WorldContextObject"))
	static void PrintMessage(
		const UObject* WorldContextObject,
		FGameplayTag CategoryTag,
		const FString& Message,
		EPokemonDebugOutputMode OutputMode = EPokemonDebugOutputMode::Log,
		FLinearColor Color = FLinearColor::White,
		float ScreenDuration = 3.f,
		EPokemonDebugVerbosity Verbosity = EPokemonDebugVerbosity::Basic
	);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Debug", meta = (WorldContext = "WorldContextObject"))
	static void DrawSphere(
		const UObject* WorldContextObject,
		FGameplayTag CategoryTag,
		FVector Center,
		float Radius,
		float Duration = 3.f,
		FLinearColor Color = FLinearColor::Green,
		int32 Segments = 12,
		float Thickness = 1.f,
		EPokemonDebugVerbosity Verbosity = EPokemonDebugVerbosity::Basic
	);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Debug", meta = (WorldContext = "WorldContextObject"))
	static void DrawLine(
		const UObject* WorldContextObject,
		FGameplayTag CategoryTag,
		FVector Start,
		FVector End,
		float Duration = 3.f,
		FLinearColor Color = FLinearColor::Yellow,
		float Thickness = 1.f,
		EPokemonDebugVerbosity Verbosity = EPokemonDebugVerbosity::Basic
	);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Debug", meta = (WorldContext = "WorldContextObject"))
	static void SetCategoryEnabled(
		const UObject* WorldContextObject,
		FGameplayTag CategoryTag,
		bool bEnabled
	);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Debug", meta = (WorldContext = "WorldContextObject"))
	static bool IsCategoryEnabled(
		const UObject* WorldContextObject,
		FGameplayTag CategoryTag
	);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Debug", meta = (WorldContext = "WorldContextObject"))
	static void SetObserverActor(
		const UObject* WorldContextObject,
		const AActor* Actor
	);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Debug", meta = (WorldContext = "WorldContextObject"))
	static void ClearObserverdActor(
		const UObject* WorldContextObject
	);

	UFUNCTION(BlueprintCallable, Category = "Pokemon|Debug", meta = (WorldContext = "WorldContextObject"))
	static void SetMaxVerbosity(
		const UObject* WorldContextObject,
		EPokemonDebugVerbosity Verbosity
	);

private:
	static UPokemonDebugWorldSubsystem* GetDebugSubsystem(const UObject* WorldContextObject);
};

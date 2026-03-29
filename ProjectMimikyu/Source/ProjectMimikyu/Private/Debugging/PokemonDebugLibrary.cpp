


#include "Debugging/PokemonDebugLibrary.h"
#include "Debugging/PokemonDebugWorldSubsystem.h"

UPokemonDebugWorldSubsystem* UPokemonDebugLibrary::GetDebugSubsystem(const UObject* WorldContextObject)
{
	if(!IsValid(WorldContextObject))
	{
		return nullptr;
	}

	if(UWorld* World=WorldContextObject->GetWorld())
	{
		return World->GetSubsystem<UPokemonDebugWorldSubsystem>();
	}

	return nullptr;
}

void UPokemonDebugLibrary::PrintMessage(const UObject* WorldContextObject, FGameplayTag CategoryTag, const FString& Message, EPokemonDebugOutputMode OutputMode, FLinearColor Color, float ScreenDuration, EPokemonDebugVerbosity Verbosity)
{
	if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(WorldContextObject))
	{
		DebugSubsystem->AddMessage(
			WorldContextObject,
			CategoryTag,
			Message,
			OutputMode,
			Color.ToFColor(true),
			ScreenDuration,
			Verbosity
		);
	}
}

void UPokemonDebugLibrary::DrawSphere(const UObject* WorldContextObject, FGameplayTag CategoryTag, FVector Center, float Radius, float Duration, FLinearColor Color, int32 Segments, float Thickness, EPokemonDebugVerbosity Verbosity)
{
	if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(WorldContextObject))
	{
		DebugSubsystem->DrawDebugSphereForCategory(
			WorldContextObject,
			CategoryTag,
			Center,
			Radius,
			Duration,
			Color.ToFColor(true),
			Segments,
			Thickness,
			Verbosity
		);
	}
}

void UPokemonDebugLibrary::DrawLine(const UObject* WorldContextObject, FGameplayTag CategoryTag, FVector Start, FVector End, float Duration, FLinearColor Color, float Thickness, EPokemonDebugVerbosity Verbosity)
{
	if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(WorldContextObject))
	{
		DebugSubsystem->DrawDebugLineForCategory(
			WorldContextObject,
			CategoryTag,
			Start,
			End,
			Duration,
			Color.ToFColor(true),
			Thickness,
			Verbosity
		);
	}
}

void UPokemonDebugLibrary::SetCategoryEnabled(const UObject* WorldContextObject, FGameplayTag CategoryTag, bool bEnabled)
{
	if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(WorldContextObject))
	{
		DebugSubsystem->SetCategoryEnabled(CategoryTag, bEnabled);
	}
}

bool UPokemonDebugLibrary::IsCategoryEnabled(const UObject* WorldContextObject, FGameplayTag CategoryTag)
{
	if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(WorldContextObject))
	{
		return DebugSubsystem->IsCategoryEnabled(CategoryTag);
	}

	return false;
}

void UPokemonDebugLibrary::SetObservedActor(const UObject* WorldContextObject, const AActor* Actor)
{
	if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(WorldContextObject))
	{
		DebugSubsystem->SetObservedActor(Actor);
	}
}

void UPokemonDebugLibrary::ClearObservedActor(const UObject* WorldContextObject)
{
	if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(WorldContextObject))
	{
		DebugSubsystem->ClearObservedActor();
	}
}

void UPokemonDebugLibrary::SetMaxVerbosity(const UObject* WorldContextObject, EPokemonDebugVerbosity Verbosity)
{
	if (UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(WorldContextObject))
	{
		DebugSubsystem->SetMaxVerbosity(Verbosity);
	}
}

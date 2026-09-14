#include "Debugging/PokemonDebugLog.h"
#include "Debugging/PokemonDebugWorldSubsystem.h"
#include "GameplayTagsManager.h"
#include "HAL/IConsoleManager.h"

namespace PokemonDebugConsole
{
	static UPokemonDebugWorldSubsystem* GetSubsystem(UWorld* World)
	{
		return World ? World->GetSubsystem<UPokemonDebugWorldSubsystem>() : nullptr;
	}

	static bool ResolveCategory(const FString& TagString, FGameplayTag& OutTag)
	{
		OutTag = UGameplayTagsManager::Get().RequestGameplayTag(FName(*TagString), false);

		return OutTag.IsValid();
	}

	static void ToggleCategory(const TArray<FString>& Args, UWorld* World)
	{
		if (Args.Num() < 1)
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("Usage: pokemon.Debug.Toggle <Debug.Category>"));
			return;
		}

		UPokemonDebugWorldSubsystem* Debug = GetSubsystem(World);

		if (!Debug)
		{
			return;
		}

		FGameplayTag Category;

		if(!ResolveCategory(Args[0],Category))
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("Unknown debug category: %s"), *Args[0]);
			return;
		}

		const bool bIsEnabled = Debug->ToggleCategory(Category);

		UE_LOG(LogPokemonDebug, Display, TEXT("Debug category %s is now %s"), *Category.ToString(), bIsEnabled ? TEXT("enabled") : TEXT("disabled"));
	}

#if !UE_BUILD_SHIPPING
	static FAutoConsoleCommandWithWorldAndArgs
		ToggleCategoryCommand(
			TEXT("pokemon.Debug.Toggle"),
			TEXT("Toggle a Pokemon debug category. "
				"Example: pokemon.Debug.Toggle Debug.Navigation.Stance"),
			FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(
				&ToggleCategory),
			ECVF_Cheat);
	#endif
}	
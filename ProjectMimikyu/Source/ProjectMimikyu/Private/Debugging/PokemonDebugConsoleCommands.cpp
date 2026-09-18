#include "Debugging/PokemonDebugLog.h"
#include "Debugging/PokemonDebugWorldSubsystem.h"
#include "GameplayTagsManager.h"
#include "HAL/IConsoleManager.h"

namespace PokemonDebugConsole
{
	static UPokemonDebugWorldSubsystem* GetDebugSubsystem(UWorld* World)
	{
		return World ? World->GetSubsystem<UPokemonDebugWorldSubsystem>() : nullptr;
	}

	static bool ResolveCategory(const FString& CategoryTagString, FGameplayTag& OutCategoryTag)
	{
		OutCategoryTag = UGameplayTagsManager::Get().RequestGameplayTag(FName(*CategoryTagString), false);

		return OutCategoryTag.IsValid();
	}

	static void ToggleCategory(const TArray<FString>& Args, UWorld* World)
	{
		if (Args.Num() < 1)
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("Usage: pokemon.Debug.Toggle <Debug.Category>"));
			return;
		}

		UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(World);

		if (!DebugSubsystem)
		{
			return;
		}

		FGameplayTag CategoryTag;

		if (!ResolveCategory(Args[0], CategoryTag))
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("Unknown Pokemon debug category: %s"), *Args[0]);
			return;
		}

		const bool bEnabled = DebugSubsystem->ToggleCategory(CategoryTag);

		UE_LOG(LogPokemonDebug, Display, TEXT("Debug category %s is now %s"), *CategoryTag.ToString(), bEnabled ? TEXT("Enabled") : TEXT("Disabled"));
	}


	static void SetCategory(const TArray<FString>& Args, UWorld* World, bool bEnabled)
	{
		if (Args.Num() < 1)
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("A debug category must be specified."));
			return;
		}

		UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(World);

		if (!DebugSubsystem)
		{
			return;
		}

		FGameplayTag CategoryTag;

		if (!ResolveCategory(Args[0], CategoryTag))
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("Unknown Pokemon debug category: %s"), *Args[0]);
			return;
		}

		DebugSubsystem->SetCategoryEnabled(CategoryTag, bEnabled);

		UE_LOG(LogPokemonDebug, Display, TEXT(
			"Debug category %s is now %s | "
			"World=%s | Subsystem=%p"
		),
			*CategoryTag.ToString(),
			bEnabled
			? TEXT("Enabled")
			: TEXT("Disabled"),
			*GetNameSafe(World),
			DebugSubsystem
		);
	}

	static void EnableCategory(const TArray<FString>& Args, UWorld* World)
	{
		SetCategory(Args, World, true);
	}

	static void DisableCategory(const TArray<FString>& Args, UWorld* World)
	{
		SetCategory(Args, World, false);
	}

	static void SetGlobalDebug(const TArray<FString>& Args, UWorld* World)
	{
		if (Args.Num() < 1)
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("Usage: pokemon.Debug.Global <0|1>"));

			return;
		}

		UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(World);

		if (!DebugSubsystem)
		{
			return;
		}

		const bool bEnabled = FCString::Atoi(*Args[0]) != 0;

		DebugSubsystem->SetGlobalDebugEnabled(bEnabled);

		UE_LOG(LogPokemonDebug, Display, TEXT("Global debug is now %s"), bEnabled ? TEXT("Enabled") : TEXT("Disabled"));
	}

	static void SetVerbosity(const TArray<FString>& Args, UWorld* World)
	{
		if (Args.Num() < 1)
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("Usage: pokemon.Debug.Verbosity <Basic|Detailed|Verbose>"));
			return;
		}

		UPokemonDebugWorldSubsystem* DebugSubsystem = GetDebugSubsystem(World);

		if (!DebugSubsystem)
		{
			return;
		}

		EPokemonDebugVerbosity Verbosity;

		if(Args[0].Equals(TEXT("Basic"), ESearchCase::IgnoreCase))
		{
			Verbosity = EPokemonDebugVerbosity::Basic;
		}
		else if(Args[0].Equals(TEXT("Detailed"), ESearchCase::IgnoreCase))
		{
			Verbosity = EPokemonDebugVerbosity::Detailed;
		}
		else if(Args[0].Equals(TEXT("Verbose"), ESearchCase::IgnoreCase))
		{
			Verbosity = EPokemonDebugVerbosity::Verbose;
		}
		else
		{
			UE_LOG(LogPokemonDebug, Warning, TEXT("Unknown verbosity level: %s"), *Args[0]);
			return;
		}

		DebugSubsystem->SetMaxVerbosity(Verbosity);

		UE_LOG(LogPokemonDebug, Display, TEXT("Verbosity is now %s"), *Args[0]);
	}

#if !UE_BUILD_SHIPPING
	static FAutoConsoleCommandWithWorldAndArgs
		GPokemonDebugToggleCategoryCommand(
			TEXT("pokemon.Debug.Toggle"),
			TEXT("Toggle a Pokemon debug category. "
				"Example: pokemon.Debug.Toggle Debug.AI"),
			FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(
				&ToggleCategory),
			ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs
		GPokemonDebugEnableCategoryCommand(
			TEXT("pokemon.Debug.Enable"),
			TEXT("Enable a Pokemon debug category. "
				"Example: pokemon.Debug.Enable Debug.AI"),
			FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(
				&EnableCategory),
			ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs
		GPokemonDebugDisableCategoryCommand(
			TEXT("pokemon.Debug.Disable"),
			TEXT("Disable a Pokemon debug category. "
				"Example: pokemon.Debug.Disable Debug.AI"),
			FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(
				&DisableCategory),
			ECVF_Cheat);

	static FAutoConsoleCommandWithWorldAndArgs
		GPokemonDebugGlobalCommand(
			TEXT("pokemon.Debug.Global"),
			TEXT("Master Pokemon debug switch. 0 = off, 1 = on."),
			FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(
				&SetGlobalDebug),
			ECVF_Cheat);
#endif

}
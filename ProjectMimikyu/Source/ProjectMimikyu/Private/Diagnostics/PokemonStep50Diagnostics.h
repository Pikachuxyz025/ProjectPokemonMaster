#pragma once

#include "CoreMinimal.h"

#if WITH_EDITOR
class UPokemonGameplayAbilities;
class UPokemonCommandComponent;
enum class EPokemonAttackExecutionOutcome : uint8;

// One-shot PIE diagnostics. No reflected properties, shipping code, or saved asset changes.
struct FStep50RegressionDiagnostics
{
	static bool BeginActivation(UPokemonGameplayAbilities* Ability);
	static void MontageStarted(UPokemonGameplayAbilities* Ability);
	static void MontageCompleted(UPokemonGameplayAbilities* Ability);
	static void CommandResolved(UPokemonCommandComponent* Command, FGuid Id,
		EPokemonAttackExecutionOutcome Outcome, FName Reason);
	static void Console(const TArray<FString>& Args, UWorld* World);

private:
	static bool Probe(TWeakObjectPtr<UPokemonGameplayAbilities> Ability, FGuid StaleId,
		TWeakObjectPtr<AActor> Target, const TCHAR* Label);
	static void ObserveStrike(FGuid Id);
};
#endif

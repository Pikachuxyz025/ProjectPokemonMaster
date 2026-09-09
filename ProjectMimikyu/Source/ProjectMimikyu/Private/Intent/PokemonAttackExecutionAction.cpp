#include "Intent/PokemonAttackExecutionAction.h"
#include "ActorComponents/PokemonCommandComponent.h"

FPokemonTrainerCommandSubmission FPokemonAttackExecutionAction::Reserve(
	UPokemonCommandComponent* Command, const FPokemonIntentActionSpec& Spec, FGuid IntentId)
{
	if (IsValid(Command)) return Command->ReserveSequencedCommand(Spec.AttackMove, Spec.CommandTarget, IntentId);
	FPokemonTrainerCommandSubmission Rejected;
	Rejected.Reason = TEXT("CommandComponentUnavailable");
	return Rejected;
}

void FPokemonAttackExecutionAction::Execute(UPokemonCommandComponent* Command, FGuid CommandId)
{
	if (IsValid(Command)) Command->ExecuteSequencedCommand(CommandId);
}

void FPokemonAttackExecutionAction::Cancel(UPokemonCommandComponent* Command, FGuid CommandId, FName Reason)
{
	if (IsValid(Command)) Command->CancelSequencedCommand(CommandId, Reason);
}

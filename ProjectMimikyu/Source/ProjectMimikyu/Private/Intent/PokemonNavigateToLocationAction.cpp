#include "Intent/PokemonNavigateToLocationAction.h"
#include "ActorComponents/PokemonNavigationComponent.h"

FPokemonNavigationSubmission FPokemonNavigateToLocationAction::Start(
	UPokemonNavigationComponent* Navigation, const FPokemonIntentActionSpec& Spec)
{
	if (IsValid(Navigation))
	{
		return Navigation->SubmitPlayerMoveToLocation(Spec.Destination, Spec.bAllowSpecialTraversal);
	}
	FPokemonNavigationSubmission Rejected;
	Rejected.Reason = TEXT("NavigationComponentUnavailable");
	return Rejected;
}

void FPokemonNavigateToLocationAction::Cancel(UPokemonNavigationComponent* Navigation, FGuid ExecutorRequestId, FName Reason)
{
	if (IsValid(Navigation) && ExecutorRequestId.IsValid())
	{
		Navigation->CancelNavigationRequest(ExecutorRequestId, Reason);
	}
}

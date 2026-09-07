#include "Navigation/PokemonJumpNavLink.h"
#include "ActorComponents/PokemonNavigationComponent.h"
#include "AIController.h"
#include "GameFramework/Pawn.h"
#include "NavLinkCustomComponent.h"
#include "NavAreas/NavArea_Null.h"

APokemonJumpNavLink::APokemonJumpNavLink()
{
	bSmartLinkIsRelevant = true;
	PointLinks.Reset();
	GetSmartLinkComp()->SetDisabledArea(UNavArea_Null::StaticClass());
}

void APokemonJumpNavLink::BeginPlay()
{
	Super::BeginPlay();
	OnSmartLinkReached.AddDynamic(this, &APokemonJumpNavLink::HandleJumpLinkReached);
}

void APokemonJumpNavLink::HandleJumpLinkReached(AActor* Agent, const FVector& Destination)
{
	if (!HasAuthority() || !Agent)
	{
		return;
	}
	if (UPokemonNavigationComponent* Navigation = Agent->FindComponentByClass<UPokemonNavigationComponent>())
	{
		Navigation->HandleJumpLinkReached(this, Destination);
		return;
	}
	// An unsupported agent must not silently walk across a jump link.
	if (const APawn* Pawn = Cast<APawn>(Agent))
	{
		if (AAIController* Controller = Cast<AAIController>(Pawn->GetController()))
		{
			Controller->StopMovement();
		}
	}
}

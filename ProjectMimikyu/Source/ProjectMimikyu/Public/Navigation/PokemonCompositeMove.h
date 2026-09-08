#pragma once

#include "CoreMinimal.h"

// Local planning inputs only. The retained FAgentNavigationRequest owns ID/destination.
struct FPokemonTraversalExitSearchSettings
{
	int32 MaxSamples = 12;
	float SampleSpacing = 75.f;
	float MaxDistance = 1200.f;
	float MaxDrop = 200.f;
	int32 FanCount = 4;
	float FanSpread = 60.f;
};

// All terms are seconds (navigation area-weighted distance / effective speed).
// A partial route has no known total cost: use its measured prefix plus a geometric
// tail estimate, explicitly marked as fallback. Never call a partial cost complete.
struct PROJECTMIMIKYU_API FPokemonCompositeMoveCost
{
	double Ground = 0.;
	double Jump = 0.;
	double Remaining = 0.;
	bool bCompleteRoute = false;
	FName RouteSource = TEXT("StraightLineFallback");

	double Total() const { return Ground + Jump + Remaining; }
	bool IsBetterThan(const FPokemonCompositeMoveCost& Other, double Tolerance) const
	{
		// Compare known routes first; an optimistic unknown tail cannot undercut one.
		return bCompleteRoute != Other.bCompleteRoute ? bCompleteRoute
			: Total() + FMath::Max(0., Tolerance) < Other.Total();
	}
};

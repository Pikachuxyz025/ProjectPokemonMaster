


#include "DataAssets/PokemonMoveAnimationSet.h"
#include "DataAssets/PokemonMoveDataAsset.h"
#include "Animation/AnimMontage.h"


UAnimMontage* UPokemonMoveAnimationSet::FindMontageForMove(const UPokemonMoveDataAsset* Move) const
{
	if (!Move)
	{
		return nullptr;
	}

	for (const FPokemonMoveMontageEntry& Entry : MoveMontages)
	{
		if (Entry.Move.Get() == Move)
		{
			return Entry.Montage.Get();
		}
	}

	return nullptr;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/PokemonInputConfig.h"

const UInputAction* UPokemonInputConfig::FindAbilityInputActionForIndex(const int32 Index, bool bLogNotFound) const
{
	for (const FPokemonInputAction& Action : AbilityInputActions)
	{
		if (Action.Index==Index)
		{
			return Action.InputAction;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find Info for Index [%d] on Input [%s]."), Index, *GetNameSafe(this));
	}
	return nullptr;
}

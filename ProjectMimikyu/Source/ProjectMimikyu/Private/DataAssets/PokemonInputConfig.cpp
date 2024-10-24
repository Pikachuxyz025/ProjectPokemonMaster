// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/PokemonInputConfig.h"
#include "PokemonGameplayTags.h"

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

const FVector UPokemonInputConfig::FindInputActionForDodgeDirection(FGameplayTag GameplayTag, bool bLogNotFound) const
{
	FPokemonGameplayTags GameplayTags = FPokemonGameplayTags::Get();

	if (GameplayTag.MatchesTagExact(GameplayTags.InputTag_Dodge_Left))
	{
		return FVector::LeftVector;
	}
	if (GameplayTag.MatchesTagExact(GameplayTags.InputTag_Dodge_Right))
	{
		return FVector::RightVector;
	}
	if (GameplayTag.MatchesTagExact(GameplayTags.InputTag_Dodge_Forward))
	{
		return FVector::ForwardVector;
	}
	if (GameplayTag.MatchesTagExact(GameplayTags.InputTag_Dodge_Backward))
	{
		return FVector::BackwardVector;
	}

	return FVector::UpVector;
}

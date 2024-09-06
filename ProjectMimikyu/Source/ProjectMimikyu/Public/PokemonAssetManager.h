// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "PokemonAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UPokemonAssetManager : public UAssetManager
{
	GENERATED_BODY()
	
public:
	static UPokemonAssetManager& Get();

protected:
	virtual void StartInitialLoading() override;
};

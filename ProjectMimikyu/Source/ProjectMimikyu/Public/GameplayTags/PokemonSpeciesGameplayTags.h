// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"

namespace PokemonSpeciesTags
{
	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species);
	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species_Placeholder);

	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species_Bulbasaur);
	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species_Charmander);
	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species_Squirtle);
	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species_Pikachu);
	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species_Rattata);
	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species_Pidgey);
	 UE_DECLARE_GAMEPLAY_TAG_EXTERN(Species_Lucario);
}

namespace PokemonSpawnStyleTags
{
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Solo);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Pair);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Family);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Pack);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Flock);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Herd);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Swarm);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Pride);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_Colony);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(SpawnStyle_StaticEncounter);
}

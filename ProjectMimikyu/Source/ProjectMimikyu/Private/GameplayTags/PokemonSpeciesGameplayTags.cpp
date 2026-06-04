// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayTags/PokemonSpeciesGameplayTags.h"

namespace PokemonSpeciesTags
{
	UE_DEFINE_GAMEPLAY_TAG(Species, "Species");
	UE_DEFINE_GAMEPLAY_TAG(Species_Placeholder, "Species.Placeholder");

	UE_DEFINE_GAMEPLAY_TAG(Species_Bulbasaur, "Species.Bulbasaur");
	UE_DEFINE_GAMEPLAY_TAG(Species_Charmander, "Species.Charmander");
	UE_DEFINE_GAMEPLAY_TAG(Species_Squirtle, "Species.Squirtle");
	UE_DEFINE_GAMEPLAY_TAG(Species_Pikachu, "Species.Pikachu");
	UE_DEFINE_GAMEPLAY_TAG(Species_Rattata, "Species.Rattata");
	UE_DEFINE_GAMEPLAY_TAG(Species_Pidgey, "Species.Pidgey");
	UE_DEFINE_GAMEPLAY_TAG(Species_Lucario, "Species.Lucario");
}

namespace PokemonSpawnStyleTags
{
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle, "SpawnStyle");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Solo, "SpawnStyle.Solo");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Pair, "SpawnStyle.Pair");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Family, "SpawnStyle.Family");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Pack, "SpawnStyle.Pack");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Flock, "SpawnStyle.Flock");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Herd, "SpawnStyle.Herd");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Swarm, "SpawnStyle.Swarm");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Pride, "SpawnStyle.Pride");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_Colony, "SpawnStyle.Colony");
	UE_DEFINE_GAMEPLAY_TAG(SpawnStyle_StaticEncounter, "SpawnStyle.StaticEncounter");
}
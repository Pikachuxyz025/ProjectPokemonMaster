// Fill out your copyright notice in the Description page of Project Settings.

#include "GameplayTags/PokemonRegionGameplayTags.h"

namespace PokemonRegionTags
{
	// Root
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region, "Region", "Root tag for world regions.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Biome, "Biome", "Root tag for biome classification.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Environment, "Environment", "Root tag for environmental features.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Habitat, "Habitat", "Root tag for creature habitat types.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Population, "Population", "Root tag for world population categories.")

	// Test Regions
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_OpenWorldTest, "Region.OpenWorldTest", "Prototype open world testing region.")

	// Region Types
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_Forest, "Region.Forest", "Forest region.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_Cave, "Region.Cave", "Cave region.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_Town, "Region.Town", "Town region.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_City, "Region.City", "City region.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_Mountain, "Region.Mountain", "Mountain region.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_Lake, "Region.Lake", "Lake region.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_Route, "Region.Route", "Route region.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Region_Dungeon, "Region.Dungeon", "Dungeon region.")

	// Biomes
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Biome_Grassland, "Biome.Grassland", "Open grassland biome.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Biome_Forest, "Biome.Forest", "Forest biome.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Biome_Wetland, "Biome.Wetland", "Wetland biome.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Biome_Mountain, "Biome.Mountain", "Mountain biome.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Biome_Cave, "Biome.Cave", "Cave biome.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Biome_Coastal, "Biome.Coastal", "Coastal biome.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Biome_Urban, "Biome.Urban", "Urban biome.")

	// Environment Features
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Environment_TallGrass, "Environment.TallGrass", "Tall grass environment feature.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Environment_Water, "Environment.Water", "Water environment feature.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Environment_CaveInterior, "Environment.CaveInterior", "Cave interior environment feature.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Environment_Road, "Environment.Road", "Road or path environment feature.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Environment_Town, "Environment.Town", "Town environment feature.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Environment_ForestCanopy, "Environment.ForestCanopy", "Forest canopy environment feature.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Environment_Ruins, "Environment.Ruins", "Ruins environment feature.")

	// Habitats
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Habitat_Ground, "Habitat.Ground", "Ground-based habitat.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Habitat_Water, "Habitat.Water", "Water-based habitat.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Habitat_Air, "Habitat.Air", "Airborne habitat.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Habitat_Cave, "Habitat.Cave", "Cave-based habitat.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Habitat_Tree, "Habitat.Tree", "Tree-based habitat.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Habitat_Urban, "Habitat.Urban", "Urban habitat.")

	// Population
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Population_WildPokemon, "Population.WildPokemon", "Wild Pokémon population.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Population_Trainer, "Population.Trainer", "Trainer population.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Population_Civilian, "Population.Civilian", "Civilian population.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Population_Ambient, "Population.Ambient", "Ambient background population.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Population_Quest, "Population.Quest", "Quest-related population.")
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Population_Unique, "Population.Unique", "Unique persistent population.")
}

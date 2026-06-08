#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PokemonCommandTypes.generated.h"

class APokemon_Parent;

UENUM(BlueprintType)
enum class EPokemonCommandTargetType : uint8
{
	None UMETA(DisplayName = "None"),

	// A valid enemy or hostile Pokémon target.
	EnemyPokemon UMETA(DisplayName = "Enemy Pokémon"),

	// A friendly Pokémon target.
	AllyPokemon UMETA(DisplayName = "Ally Pokémon"),

	// A non-Pokémon actor that can be interacted with.
	Interactable UMETA(DisplayName = "Interactable"),

	// World geometry, props, walls, floors, rocks, trees, etc.
	Environment UMETA(DisplayName = "Environment"),

	// A pure world-space point with no important actor.
	Location UMETA(DisplayName = "Location")
};

USTRUCT(BlueprintType)
struct FPokemonCommandTarget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Command")
	EPokemonCommandTargetType TargetType = EPokemonCommandTargetType::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Command")
	TObjectPtr<AActor> TargetActor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Command")
	FVector TargetLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Command")
	FVector ImpactNormal = FVector::UpVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Command")
	FGameplayTag CommandTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Command")
	bool bHasHitResult = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pokemon|Command")
	FHitResult HitResult;

public:

	bool HasTargetActor() const
	{
		return IsValid(TargetActor);
	}

	bool HasTargetLocation() const
	{
		return !TargetLocation.IsNearlyZero();
	}

	bool IsCombatTarget() const
	{
		return TargetType == EPokemonCommandTargetType::EnemyPokemon
			|| TargetType == EPokemonCommandTargetType::AllyPokemon;
	}

	bool IsWorldTarget() const
	{
		return TargetType == EPokemonCommandTargetType::Environment
			|| TargetType == EPokemonCommandTargetType::Location;
	}

	bool IsValidTarget() const
	{
		return TargetType != EPokemonCommandTargetType::None;
	}

	void Clear()
	{
		TargetType = EPokemonCommandTargetType::None;
		TargetActor = nullptr;
		TargetLocation = FVector::ZeroVector;
		ImpactNormal = FVector::UpVector;
		CommandTag = FGameplayTag();
		bHasHitResult = false;
		HitResult = FHitResult();
	}
};
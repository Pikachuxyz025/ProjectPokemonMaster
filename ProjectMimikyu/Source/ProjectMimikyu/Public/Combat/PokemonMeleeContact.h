

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PokemonMeleeContact.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonMeleeContactSettings
{
	GENERATED_BODY()

	// Unset keeps an approach request on the existing 1.0A path.
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Melee",meta =(Categories = "CombatSocket"))
	FGameplayTag SocketTag;

	// Offset in the selected socket's local space.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Melee")
	FVector LocalOffset = FVector::ZeroVector;

	// World-space centimeters, independent of mesh scale.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Melee", meta = (ClampMin = "0.0"))
	float Radius = 25.0f;
};

// A candidate based on the current pose.
// Ground and path validity are evaluated separately.
struct PROJECTMIMIKYU_API FPokemonMeleeExecutionCandidate
{
	FVector RootLocation = FVector::ZeroVector;
	FRotator Facing = FRotator::ZeroRotator;
	FVector CurrentContactCenter = FVector::ZeroVector;
	float Radius = 0.f;
};

UCLASS()
class PROJECTMIMIKYU_API UPokemonMeleeContactLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Pokemon|Combat|Melee")
	static bool ResolveMeleeContactSphere
	(
		AActor* Attacker,
		const FPokemonMeleeContactSettings& Settings,
		FVector& OutCenter,
		float& OutRadius,
		bool bDrawDebug = false
	);

	static bool BuildExecutionCandidate
	(
		AActor* Attacker,
		const FPokemonMeleeContactSettings& Settings,
		const FVector& TargetLocation,
		FPokemonMeleeExecutionCandidate& OutCandidate
	);
};

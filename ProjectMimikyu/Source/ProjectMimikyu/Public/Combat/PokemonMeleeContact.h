

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

UENUM(BlueprintType)
enum class EPokemonMeleeApproachSource :uint8
{
	None,
	AuthoredProfile,
	LiveSocketSnapshot
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonMeleeApproachProfile
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Melee")
	EPokemonMeleeApproachSource Source = EPokemonMeleeApproachSource::AuthoredProfile;

	// Name/version of this execution-geometry definition.
	// None means it has not been configured.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Melee")
	FName ProfileId = NAME_None;

	// Intended contact CENTER relative to the root where the attack begins.
	// World cm in the actor's rotation frame:
	// +X forward, +Y right, +Z up.
	// Actor/mesh scale must not be applied again.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Melee", meta = (EditCondition = "Source == EPokemonMeleeApproachSource::AuthoredProfile"))
	FVector RootSpaceContactOffset = FVector::ZeroVector;
};

// Fixed geometry for one approach request.
// Offset is in world centimeters, expressed in the actor's rotation frame.
USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonMeleeApproachSnapshot
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Melee")
	FVector RootSpaceContactOffset = FVector::ZeroVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "Melee")
	EPokemonMeleeApproachSource Source = EPokemonMeleeApproachSource::None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Melee")
	FName ProfileId = NAME_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Melee")
	float Radius = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Melee")
	bool bIsSet = false;

	bool IsValid() const
	{
		return bIsSet
			&& !ProfileId.IsNone()
			&& (Source == EPokemonMeleeApproachSource::AuthoredProfile
				|| Source == EPokemonMeleeApproachSource::LiveSocketSnapshot)
			&& !RootSpaceContactOffset.ContainsNaN()
			&& FMath::IsFinite(Radius)
			&& Radius > 0.f;
	}
};

// A candidate based on the frozen approach geometry.
// Ground and path validity are evaluated separately.
struct PROJECTMIMIKYU_API FPokemonMeleeExecutionCandidate
{
	FVector RootLocation = FVector::ZeroVector;
	FRotator Facing = FRotator::ZeroRotator;
	FVector PlannedContactCenter = FVector::ZeroVector;
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
		const FPokemonMeleeApproachSnapshot& Settings,
		const FVector& TargetLocation,
		FPokemonMeleeExecutionCandidate& OutCandidate
	);

	static bool CaptureMeleeApproachSnapshot(
		AActor* Attacker,
		const FPokemonMeleeContactSettings& Settings,
		const FPokemonMeleeApproachProfile& Profile,
		FPokemonMeleeApproachSnapshot& OutSnapshot,
		FName& OutFailureReason);


};

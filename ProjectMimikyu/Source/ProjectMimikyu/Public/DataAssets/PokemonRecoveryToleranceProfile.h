

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Navigation/PokemonRecoveryTolerance.h"
#include "PokemonRecoveryToleranceProfile.generated.h"

UCLASS(BlueprintType)
class PROJECTMIMIKYU_API UPokemonRecoveryToleranceProfile : public UDataAsset
{
	GENERATED_BODY()

public:
	// New or unfinished profiles must remain explicitly unavailable.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recovery")
	bool bConfigured = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recovery|Physical",
		meta = (ClampMin = "0.0", Units = "cm/s"))
	double BaseMaxDownwardSpeed = 0.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recovery|Physical",
		meta = (ClampMin = "0.0", Units = "cm"))
	double BaseMaxPeakDrop = 0.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recovery|Stamina|Speed",
		meta = (ClampMin = "0.0"))
	double SpeedMultiplierAtZeroStamina = 0.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recovery|Stamina|Speed",
		meta = (ClampMin = "0.0"))
	double SpeedMultiplierAtFullStamina = 0.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recovery|Stamina|Drop",
		meta = (ClampMin = "0.0"))
	double DropMultiplierAtZeroStamina = 0.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recovery|Stamina|Drop",
		meta = (ClampMin = "0.0"))
	double DropMultiplierAtFullStamina = 0.0;

	FPokemonRecoveryToleranceProfileSnapshot MakeSnapshot() const;
};

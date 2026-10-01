#pragma once

#include "CoreMinimal.h"
#include "PokemonExecutionTypes.generated.h"

/**
 * Describes which relationship to forward momentum a move permits
 * during its active execution.
 * 
 * This is an authored move capability.
 * It does NOT decide which behavior should be used for a partivular
 * attack command. Context will resolve that later.
 */
UENUM(BlueprintType)
enum class EPokemonExecutionMotionPolicy : uint8
{ 
 /**
   * Locomotion momentum must be settled before the move enters
   * its active execution.
   * 
   * Example: Force Palm
 */
 StationaryOnly UMETA(DisplayName="Stationary Only"),

 /**
  * The move may execute either from a settled state or while
  * carrying approach momentum.
  *
  * Context determines which legal execution is appropriate.
  *
  * Example: Mach Punch.
  */
	MomentumAllowed UMETA(DisplayName = "Momentum Allowed"),

	/**
	 * Momentum is intrinsic to the move's active execution.
	 * The move cannot resolve as a stationary execution.
	 *
	 * Example: Quick Attack.
	 */
	MomentumRequired UMETA(DisplayName = "Momentum Required")
};

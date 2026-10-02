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

UENUM(BlueprintType)
enum class EPokemonResolvedExecutionMotion :uint8
{
	Unresolved UMETA(DisplayName = "Unresolved"),
	Stationary UMETA(DisplayName = "Stationary"),
	Momentum UMETA(DisplayName = "Momentum")
};

UENUM(BlueprintType)
enum class EPokemonAirborneExecutionTiming :uint8
{
	/**
	 * This move has no authored airborne execution requirement.
	 */
	Disabled UMETA(DisplayName = "Disabled"),

	/**
	 * The primary execution event should occur while the attacker
	 * is still ascending, before the apex of the trajectory.
	 *
	 * Example: Mach Punch making contact during ascent.
	 */
	Ascending UMETA(DisplayName = "Ascending"),

	/**
	 * The primary execution event should occur at or near the apex
	 * of the trajectory.
	 *
	 * Example: releasing a projectile at the top of a jump.
     */
	Apex UMETA(DisplayName = "Apex")
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonAirborneExecutionProfile
{
	GENERATED_BODY()

	/**
	 * Which phase of a jump this move is capable of using
	 * for its primary execution event.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Combat|Execution|Airborne")
	EPokemonAirborneExecutionTiming Timing = EPokemonAirborneExecutionTiming::Disabled;

	/**
	 * Time, in seconds, between beginning the move's execution
	 * and the desired primary execution event.
	 *
	 * For a melee attack this can represent wind-up before contact.
	 * For a projectile it can represent wind-up before release.
	 *
	 * This is move timing, not traversal timing.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pokemon|Combat|Execution|Airborne", meta = (ClampMin = "0.0", Units = "s"))
	float ExecutionLeadTime = 0.0f;

	bool IsEnabled() const
	{
		return Timing != EPokemonAirborneExecutionTiming::Disabled;
	}
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonAttackExecutionPlan
{
	GENERATED_BODY()

	// Capability authored by the move.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Combat|Execution")
	EPokemonExecutionMotionPolicy MotionPolicy = EPokemonExecutionMotionPolicy::StationaryOnly;

	// Choice for the particular execution.
	// MomentumAllowed remains Unresolved until contextual planning chooses.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Combat|Execution")
	EPokemonResolvedExecutionMotion ResolvedMotion = EPokemonResolvedExecutionMotion::Unresolved;

	// Airborne execution capability authored by the move.
	// This is copied into the intent snapshot but is not yet
	// consumed by navigation.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pokemon|Combat|Execution|Airborne")
	FPokemonAirborneExecutionProfile AirborneExecutionProfile;

	bool IsResolved() const 
	{ 
		return ResolvedMotion != EPokemonResolvedExecutionMotion::Unresolved;
	}
};
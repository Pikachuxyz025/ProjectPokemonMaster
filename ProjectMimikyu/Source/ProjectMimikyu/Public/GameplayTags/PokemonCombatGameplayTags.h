#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Combat/PokemonImpactTypes.h"

struct PROJECTMIMIKYU_API FPokemonCombatGameplayTags
{
public:
	static const FPokemonCombatGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	/* Combat Roots */
	FGameplayTag Combat_State;
	FGameplayTag Combat_MoveStyle;
	FGameplayTag Combat_Advantage;
	FGameplayTag Combat_Approach;
	FGameplayTag Combat_Aim;
	FGameplayTag Combat_Impact;

	/* Combat State */
	FGameplayTag Combat_State_Neutral;
	FGameplayTag Combat_State_Approaching;
	FGameplayTag Combat_State_Attacking;
	FGameplayTag Combat_State_Recovering;
	FGameplayTag Combat_State_Vulnerable;
	FGameplayTag Combat_State_HitStun;
	FGameplayTag Combat_State_BlockStun;
	FGameplayTag Combat_State_Clashing;
	FGameplayTag Combat_State_Launched;
	FGameplayTag Combat_State_Airborne;
	FGameplayTag Combat_State_Grounded;
	FGameplayTag Combat_State_Braced;

	/* Combat Advantage */
	FGameplayTag Combat_Advantage_NeutralReset;
	FGameplayTag Combat_Advantage_AttackerPlus;
	FGameplayTag Combat_Advantage_AttackerMinus;
	FGameplayTag Combat_Advantage_DefenderPlus;
	FGameplayTag Combat_Advantage_ClashReset;

	/* Move Styles */
	FGameplayTag Combat_MoveStyle_Melee;
	FGameplayTag Combat_MoveStyle_Charge;
	FGameplayTag Combat_MoveStyle_Projectile;
	FGameplayTag Combat_MoveStyle_Beam;
	FGameplayTag Combat_MoveStyle_Area;
	FGameplayTag Combat_MoveStyle_Status;

	/* Approach */
	FGameplayTag Combat_Approach_GroundRush;
	FGameplayTag Combat_Approach_Leap;
	FGameplayTag Combat_Approach_AirIntercept;
	FGameplayTag Combat_Approach_DashThrough;
	FGameplayTag Combat_Approach_HoldPosition;
	FGameplayTag Combat_Approach_RepositionToVantage;
	FGameplayTag Combat_Approach_Teleport;

	/* Aim */
	FGameplayTag Combat_Aim_AutoTarget;
	FGameplayTag Combat_Aim_TrainerFacing;
	FGameplayTag Combat_Aim_CenterMass;
	FGameplayTag Combat_Aim_Head;
	FGameplayTag Combat_Aim_NearestBodyPoint;
	FGameplayTag Combat_Aim_PredictedPosition;
	FGameplayTag Combat_Aim_IncomingAttack;
	FGameplayTag Combat_Aim_GroundPoint;
	FGameplayTag Combat_Aim_WallPoint;

	/* Impact Result */
	FGameplayTag Combat_Impact_CleanHit;
	FGameplayTag Combat_Impact_HeavyHit;
	FGameplayTag Combat_Impact_GlancingHit;
	FGameplayTag Combat_Impact_Blocked;
	FGameplayTag Combat_Impact_GuardBreak;
	FGameplayTag Combat_Impact_NoSell;
	FGameplayTag Combat_Impact_BounceOff;
	FGameplayTag Combat_Impact_PushOff;
	FGameplayTag Combat_Impact_Clash;
	FGameplayTag Combat_Impact_ProjectileClash;
	FGameplayTag Combat_Impact_BeamClash;
	FGameplayTag Combat_Impact_CounterHit;
	FGameplayTag Combat_Impact_Stuffed;
	FGameplayTag Combat_Impact_Launch;
	FGameplayTag Combat_Impact_WallBounce;
	FGameplayTag Combat_Impact_GroundBounce;

	TMap<EPokemonImpactResult, FGameplayTag> ImpactResultToTag;

private:
	static FPokemonCombatGameplayTags GameplayTags;

};
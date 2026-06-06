

#pragma once

#include "NativeGameplayTags.h"

namespace PokemonAITags
{

// AI State
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(State_Passive);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(State_Alert);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(State_Combat);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(State_Fainted);

	// AI Combat Decision Modes
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Decision_Combat_Idle);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Decision_Combat_Engage);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Decision_Combat_Defensive);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Decision_Combat_Flee);

	// Navigation Intents
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Wander);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Follow);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Chase);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Approach);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Flee);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_ReturnToTrainer);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Rest);

	// Combat Navigation Intents
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Combat_Approach);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Combat_Retreat);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Combat_Circle);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Combat_Flank);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Combat_Dodge);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Combat_KeepDistance);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(NavIntent_Combat_Reposition);

	// Movement Modes / Locomotion Capabilities
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Ground);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Flying);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Hovering);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Perching);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Aggressive);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Predator);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Defensive);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Loyal);

	// Behavioral Profiles
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Behavior_Timid);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Behavior_Curious);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Behavior_Aggressive);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Behavior_Predator);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Behavior_Defensive);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Behavior_Loyal);
}

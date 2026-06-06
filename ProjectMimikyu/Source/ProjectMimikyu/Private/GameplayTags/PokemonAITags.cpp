


#include "GameplayTags/PokemonAITags.h"

namespace PokemonAITags
{
	// AI State
	UE_DEFINE_GAMEPLAY_TAG(State_Passive, "AI.State.Passive");
	UE_DEFINE_GAMEPLAY_TAG(State_Alert, "AI.State.Alert");
	UE_DEFINE_GAMEPLAY_TAG(State_Combat, "AI.State.Combat");
	UE_DEFINE_GAMEPLAY_TAG(State_Fainted, "AI.State.Fainted");

	// AI Combat Decision Modes
	UE_DEFINE_GAMEPLAY_TAG(Decision_Combat_Idle, "AI.Decision.Combat.Idle");
	UE_DEFINE_GAMEPLAY_TAG(Decision_Combat_Engage, "AI.Decision.Combat.Engage");
	UE_DEFINE_GAMEPLAY_TAG(Decision_Combat_Defensive, "AI.Decision.Combat.Defensive");
	UE_DEFINE_GAMEPLAY_TAG(Decision_Combat_Flee, "AI.Decision.Combat.Flee");

	// Navigation Intents
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Wander, "AI.NavIntent.Wander");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Follow, "AI.NavIntent.Follow");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Approach, "AI.NavIntent.Approach");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Chase, "AI.NavIntent.Chase");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Flee, "AI.NavIntent.Flee");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_ReturnToTrainer, "AI.NavIntent.ReturnToTrainer");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Rest, "AI.NavIntent.Rest");

	// Combat Navigation Intents
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Combat_Approach, "AI.NavIntent.Combat.Approach");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Combat_KeepDistance, "AI.NavIntent.Combat.KeepDistance");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Combat_Circle, "AI.NavIntent.Combat.Circle");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Combat_Flank, "AI.NavIntent.Combat.Flank");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Combat_Retreat, "AI.NavIntent.Combat.Retreat");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Combat_Dodge, "AI.NavIntent.Combat.Dodge");
	UE_DEFINE_GAMEPLAY_TAG(NavIntent_Combat_Reposition, "AI.NavIntent.Combat.Reposition");

	// Movement Modes / Locomotion Capabilities
	UE_DEFINE_GAMEPLAY_TAG(Movement_Ground, "Movement.Mode.Ground");
	UE_DEFINE_GAMEPLAY_TAG(Movement_Flying, "Movement.Mode.Flying");
	UE_DEFINE_GAMEPLAY_TAG(Movement_Swimming, "Movement.Mode.Swimming");
	UE_DEFINE_GAMEPLAY_TAG(Movement_Burrowing, "Movement.Mode.Burrowing");
	UE_DEFINE_GAMEPLAY_TAG(Movement_Leaping, "Movement.Mode.Leaping");
	UE_DEFINE_GAMEPLAY_TAG(Movement_Perching, "Movement.Mode.Perching");
	UE_DEFINE_GAMEPLAY_TAG(Movement_Hovering, "Movement.Mode.Hovering");

	// Behavior Profiles
	UE_DEFINE_GAMEPLAY_TAG(Behavior_Timid, "AI.Behavior.Timid");
	UE_DEFINE_GAMEPLAY_TAG(Behavior_Curious, "AI.Behavior.Curious");
	UE_DEFINE_GAMEPLAY_TAG(Behavior_Aggressive, "AI.Behavior.Aggressive");
	UE_DEFINE_GAMEPLAY_TAG(Behavior_Predator, "AI.Behavior.Predator");
	UE_DEFINE_GAMEPLAY_TAG(Behavior_Defensive, "AI.Behavior.Defensive");
	UE_DEFINE_GAMEPLAY_TAG(Behavior_Loyal, "AI.Behavior.Loyal");
}

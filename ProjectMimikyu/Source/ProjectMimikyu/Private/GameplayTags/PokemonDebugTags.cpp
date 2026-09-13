


#include "GameplayTags/PokemonDebugTags.h"

namespace PokemonDebugTags
{
	UE_DEFINE_GAMEPLAY_TAG(Debug, "Debug");

	UE_DEFINE_GAMEPLAY_TAG(AI, "Debug.AI");
	UE_DEFINE_GAMEPLAY_TAG(AI_Decision, "Debug.AI.Decision");
	UE_DEFINE_GAMEPLAY_TAG(AI_State, "Debug.AI.State");

	UE_DEFINE_GAMEPLAY_TAG(Combat, "Debug.Combat");
	UE_DEFINE_GAMEPLAY_TAG(Combat_Damage, "Debug.Combat.Damage");
	UE_DEFINE_GAMEPLAY_TAG(Combat_Knockback, "Debug.Combat.Knockback");
	UE_DEFINE_GAMEPLAY_TAG(Combat_Faint, "Debug.Combat.Faint");

	UE_DEFINE_GAMEPLAY_TAG(Navigation, "Debug.Navigation");
	UE_DEFINE_GAMEPLAY_TAG(Navigation_Request, "Debug.Navigation.Request");
	UE_DEFINE_GAMEPLAY_TAG(Navigation_Projection, "Debug.Navigation.Projection");
	UE_DEFINE_GAMEPLAY_TAG(Navigation_Path, "Debug.Navigation.Path");
	UE_DEFINE_GAMEPLAY_TAG(Navigation_Stance, "Debug.Navigation.Stance");
	UE_DEFINE_GAMEPLAY_TAG(Navigation_Stance_Contact, "Debug.Navigation.Stance.Contact");
	UE_DEFINE_GAMEPLAY_TAG(Navigation_Stance_Surface, "Debug.Navigation.Stance.Surface");
	UE_DEFINE_GAMEPLAY_TAG(Navigation_Traversal, "Debug.Navigation.Traversal");

	UE_DEFINE_GAMEPLAY_TAG(Ability, "Debug.Ability");
	UE_DEFINE_GAMEPLAY_TAG(Ability_Addition, "Debug.Ability.Addition");
	UE_DEFINE_GAMEPLAY_TAG(Ability_Activation, "Debug.Ability.Activation");
	UE_DEFINE_GAMEPLAY_TAG(Ability_Cooldown, "Debug.Ability.Cooldown");

	UE_DEFINE_GAMEPLAY_TAG(Targeting, "Debug.Targeting");
	UE_DEFINE_GAMEPLAY_TAG(Targeting_Trace, "Debug.Targeting.Trace");

	UE_DEFINE_GAMEPLAY_TAG(Projectile, "Debug.Projectile");
	UE_DEFINE_GAMEPLAY_TAG(Projectile_Spawn, "Debug.Projectile.Spawn");
	UE_DEFINE_GAMEPLAY_TAG(Projectile_Impact, "Debug.Projectile.Impact");

	UE_DEFINE_GAMEPLAY_TAG(Network, "Debug.Network");
	UE_DEFINE_GAMEPLAY_TAG(Network_RPC, "Debug.Network.RPC");

	UE_DEFINE_GAMEPLAY_TAG(State, "Debug.State");
	UE_DEFINE_GAMEPLAY_TAG(State_Transition, "Debug.State.Transition");

	UE_DEFINE_GAMEPLAY_TAG(Log, "Debug.Log");
}

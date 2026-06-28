#include "GameplayTags/PokemonCombatGameplayTags.h"

#include "GameplayTagsManager.h"

FPokemonCombatGameplayTags FPokemonCombatGameplayTags::GameplayTags;

void FPokemonCombatGameplayTags::InitializeNativeGameplayTags()
{
	UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

	/* Combat State */
	GameplayTags.Combat_State_Neutral = Manager.AddNativeGameplayTag(FName("Combat.State.Neutral"), FString("Pokemon is in a neutral combat state."));
	GameplayTags.Combat_State_Approaching = Manager.AddNativeGameplayTag(FName("Combat.State.Approaching"), FString("Pokemon is moving into attack position."));
	GameplayTags.Combat_State_Attacking = Manager.AddNativeGameplayTag(FName("Combat.State.Attacking"), FString("Pokemon is actively attacking."));
	GameplayTags.Combat_State_Recovering = Manager.AddNativeGameplayTag(FName("Combat.State.Recovering"), FString("Pokemon is recovering after an action."));
	GameplayTags.Combat_State_Vulnerable = Manager.AddNativeGameplayTag(FName("Combat.State.Vulnerable"), FString("Pokemon is vulnerable to punishment."));
	GameplayTags.Combat_State_HitStun = Manager.AddNativeGameplayTag(FName("Combat.State.HitStun"), FString("Pokemon is stunned from a hit."));
	GameplayTags.Combat_State_BlockStun = Manager.AddNativeGameplayTag(FName("Combat.State.BlockStun"), FString("Pokemon is stunned from blocking or bracing."));
	GameplayTags.Combat_State_Clashing = Manager.AddNativeGameplayTag(FName("Combat.State.Clashing"), FString("Pokemon is engaged in a clash."));
	GameplayTags.Combat_State_Launched = Manager.AddNativeGameplayTag(FName("Combat.State.Launched"), FString("Pokemon has been launched."));
	GameplayTags.Combat_State_Airborne = Manager.AddNativeGameplayTag(FName("Combat.State.Airborne"), FString("Pokemon is airborne."));
	GameplayTags.Combat_State_Grounded = Manager.AddNativeGameplayTag(FName("Combat.State.Grounded"), FString("Pokemon is grounded."));
	GameplayTags.Combat_State_Braced = Manager.AddNativeGameplayTag(FName("Combat.State.Braced"), FString("Pokemon is bracing against impact."));

	/* Combat Advantage */
	GameplayTags.Combat_Advantage_NeutralReset = Manager.AddNativeGameplayTag(FName("Combat.Advantage.NeutralReset"), FString("Both Pokemon return to neutral."));
	GameplayTags.Combat_Advantage_AttackerPlus = Manager.AddNativeGameplayTag(FName("Combat.Advantage.AttackerPlus"), FString("Attacker acts first after the exchange."));
	GameplayTags.Combat_Advantage_AttackerMinus = Manager.AddNativeGameplayTag(FName("Combat.Advantage.AttackerMinus"), FString("Attacker is disadvantaged after the exchange."));
	GameplayTags.Combat_Advantage_DefenderPlus = Manager.AddNativeGameplayTag(FName("Combat.Advantage.DefenderPlus"), FString("Defender acts first after the exchange."));
	GameplayTags.Combat_Advantage_ClashReset = Manager.AddNativeGameplayTag(FName("Combat.Advantage.ClashReset"), FString("Exchange resets from a clash."));

	/* Move Style */
	GameplayTags.Combat_MoveStyle_Melee = Manager.AddNativeGameplayTag(FName("Combat.MoveStyle.Melee"), FString("Melee move style."));
	GameplayTags.Combat_MoveStyle_Charge = Manager.AddNativeGameplayTag(FName("Combat.MoveStyle.Charge"), FString("Charge or ram move style."));
	GameplayTags.Combat_MoveStyle_Projectile = Manager.AddNativeGameplayTag(FName("Combat.MoveStyle.Projectile"), FString("Projectile move style."));
	GameplayTags.Combat_MoveStyle_Beam = Manager.AddNativeGameplayTag(FName("Combat.MoveStyle.Beam"), FString("Beam move style."));
	GameplayTags.Combat_MoveStyle_Area = Manager.AddNativeGameplayTag(FName("Combat.MoveStyle.Area"), FString("Area move style."));
	GameplayTags.Combat_MoveStyle_Status = Manager.AddNativeGameplayTag(FName("Combat.MoveStyle.Status"), FString("Status move style."));

	/* Approach */
	GameplayTags.Combat_Approach_GroundRush = Manager.AddNativeGameplayTag(FName("Combat.Approach.GroundRush"), FString("Approach target by rushing on the ground."));
	GameplayTags.Combat_Approach_Leap = Manager.AddNativeGameplayTag(FName("Combat.Approach.Leap"), FString("Approach target with a leap."));
	GameplayTags.Combat_Approach_AirIntercept = Manager.AddNativeGameplayTag(FName("Combat.Approach.AirIntercept"), FString("Approach by intercepting an airborne target."));
	GameplayTags.Combat_Approach_DashThrough = Manager.AddNativeGameplayTag(FName("Combat.Approach.DashThrough"), FString("Dash through the target."));
	GameplayTags.Combat_Approach_HoldPosition = Manager.AddNativeGameplayTag(FName("Combat.Approach.HoldPosition"), FString("Do not approach; hold current position."));
	GameplayTags.Combat_Approach_RepositionToVantage = Manager.AddNativeGameplayTag(FName("Combat.Approach.RepositionToVantage"), FString("Reposition to a better vantage point."));
	GameplayTags.Combat_Approach_Teleport = Manager.AddNativeGameplayTag(FName("Combat.Approach.Teleport"), FString("Teleport into position."));

	/* Aim */
	GameplayTags.Combat_Aim_AutoTarget = Manager.AddNativeGameplayTag(FName("Combat.Aim.AutoTarget"), FString("Aim automatically at the target."));
	GameplayTags.Combat_Aim_TrainerFacing = Manager.AddNativeGameplayTag(FName("Combat.Aim.TrainerFacing"), FString("Aim in the trainer's facing direction."));
	GameplayTags.Combat_Aim_CenterMass = Manager.AddNativeGameplayTag(FName("Combat.Aim.CenterMass"), FString("Aim at the target's center mass."));
	GameplayTags.Combat_Aim_Head = Manager.AddNativeGameplayTag(FName("Combat.Aim.Head"), FString("Aim at the target's head."));
	GameplayTags.Combat_Aim_NearestBodyPoint = Manager.AddNativeGameplayTag(FName("Combat.Aim.NearestBodyPoint"), FString("Aim at the nearest body point."));
	GameplayTags.Combat_Aim_PredictedPosition = Manager.AddNativeGameplayTag(FName("Combat.Aim.PredictedPosition"), FString("Aim at predicted target position."));
	GameplayTags.Combat_Aim_IncomingAttack = Manager.AddNativeGameplayTag(FName("Combat.Aim.IncomingAttack"), FString("Aim at an incoming attack."));
	GameplayTags.Combat_Aim_GroundPoint = Manager.AddNativeGameplayTag(FName("Combat.Aim.GroundPoint"), FString("Aim at a ground point."));
	GameplayTags.Combat_Aim_WallPoint = Manager.AddNativeGameplayTag(FName("Combat.Aim.WallPoint"), FString("Aim at a wall point."));

	/* Impact Result */
	GameplayTags.Combat_Impact_CleanHit = Manager.AddNativeGameplayTag(FName("Combat.Impact.CleanHit"), FString("A normal successful hit."));
	GameplayTags.Combat_Impact_HeavyHit = Manager.AddNativeGameplayTag(FName("Combat.Impact.HeavyHit"), FString("A strong successful hit."));
	GameplayTags.Combat_Impact_GlancingHit = Manager.AddNativeGameplayTag(FName("Combat.Impact.GlancingHit"), FString("A weak or partial hit."));
	GameplayTags.Combat_Impact_Blocked = Manager.AddNativeGameplayTag(FName("Combat.Impact.Blocked"), FString("Attack was blocked."));
	GameplayTags.Combat_Impact_GuardBreak = Manager.AddNativeGameplayTag(FName("Combat.Impact.GuardBreak"), FString("Attack broke through defense."));
	GameplayTags.Combat_Impact_NoSell = Manager.AddNativeGameplayTag(FName("Combat.Impact.NoSell"), FString("Defender barely reacts to impact."));
	GameplayTags.Combat_Impact_BounceOff = Manager.AddNativeGameplayTag(FName("Combat.Impact.BounceOff"), FString("Attacker bounces off defender."));
	GameplayTags.Combat_Impact_PushOff = Manager.AddNativeGameplayTag(FName("Combat.Impact.PushOff"), FString("Defender pushes attacker away."));
	GameplayTags.Combat_Impact_Clash = Manager.AddNativeGameplayTag(FName("Combat.Impact.Clash"), FString("Two attacks clash."));
	GameplayTags.Combat_Impact_ProjectileClash = Manager.AddNativeGameplayTag(FName("Combat.Impact.ProjectileClash"), FString("Projectiles clash."));
	GameplayTags.Combat_Impact_BeamClash = Manager.AddNativeGameplayTag(FName("Combat.Impact.BeamClash"), FString("Beams clash."));
	GameplayTags.Combat_Impact_CounterHit = Manager.AddNativeGameplayTag(FName("Combat.Impact.CounterHit"), FString("Defender was hit during an action."));
	GameplayTags.Combat_Impact_Stuffed = Manager.AddNativeGameplayTag(FName("Combat.Impact.Stuffed"), FString("Attack was interrupted or stuffed."));
	GameplayTags.Combat_Impact_Launch = Manager.AddNativeGameplayTag(FName("Combat.Impact.Launch"), FString("Defender was launched."));
	GameplayTags.Combat_Impact_WallBounce = Manager.AddNativeGameplayTag(FName("Combat.Impact.WallBounce"), FString("Defender bounced off a wall."));
	GameplayTags.Combat_Impact_GroundBounce = Manager.AddNativeGameplayTag(FName("Combat.Impact.GroundBounce"), FString("Defender bounced off the ground."));

	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::CleanHit, GameplayTags.Combat_Impact_CleanHit);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::HeavyHit, GameplayTags.Combat_Impact_HeavyHit);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::GlancingHit, GameplayTags.Combat_Impact_GlancingHit);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::Blocked, GameplayTags.Combat_Impact_Blocked);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::GuardBreak, GameplayTags.Combat_Impact_GuardBreak);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::NoSell, GameplayTags.Combat_Impact_NoSell);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::BounceOff, GameplayTags.Combat_Impact_BounceOff);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::PushOff, GameplayTags.Combat_Impact_PushOff);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::Clash, GameplayTags.Combat_Impact_Clash);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::ProjectileClash, GameplayTags.Combat_Impact_ProjectileClash);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::BeamClash, GameplayTags.Combat_Impact_BeamClash);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::CounterHit, GameplayTags.Combat_Impact_CounterHit);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::Stuffed, GameplayTags.Combat_Impact_Stuffed);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::Launch, GameplayTags.Combat_Impact_Launch);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::WallBounce, GameplayTags.Combat_Impact_WallBounce);
	GameplayTags.ImpactResultToTag.Add(EPokemonImpactResult::GroundBounce, GameplayTags.Combat_Impact_GroundBounce);
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "PokemonGameplayTags.h"
#include "GameplayTagsManager.h"

FPokemonGameplayTags FPokemonGameplayTags::GameplayTags;
void FPokemonGameplayTags::InitializeNativeGameplayTags()
{
#pragma region Meta Attributes
	GameplayTags.Attributes_Meta_IncomingDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.IncomingDamage"),
		FString("Incoming Damage Meta Attribute")
	);

	GameplayTags.Attributes_Meta_IncomingXP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.IncomingXP"),
		FString("Incoming XP Meta Attribute")
	);
#pragma endregion

#pragma region Stat Attributes

	GameplayTags.Attributes_Stats_MaxHP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.MaxHP"),
		FString("The max amount of damage a Pokemon can take before death")
	);

	GameplayTags.Attributes_Stats_Attack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.Attack"),
		FString("Increases Physical Damage")
	);

	GameplayTags.Attributes_Stats_SpecialAttack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.SpecialAttack"),
		FString("Increases Special Damage")
	);

	GameplayTags.Attributes_Stats_Defense = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.Defense"),
		FString("Defense against Physical Damage")
	);

	GameplayTags.Attributes_Stats_SpecialDefense = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.SpecialDefense"),
		FString("Defense Against Special Damage")
	);

	GameplayTags.Attributes_Stats_Speed = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.Speed"),
		FString("How fast is the Pokemon's mobility")
	);

	GameplayTags.Attributes_Stats_XP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.XP"),
		FString("The amount of experience the pokemon has")
	);

	GameplayTags.Attributes_Stats_FriendshipLevel = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.FriendshipLevel"),
		FString("The level of affection the pokemon has for the trainer")
	);

	GameplayTags.Attributes_Secondary_ExertionChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ExertionChance"),
		FString("The chance the pokemon has to add a unique effect to their moves as well as gain exp upon using them") 
	);

	GameplayTags.Attributes_Stats_Level = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Stats.Level"),
		FString("THe current level of the Pokemon")
	);

	GameplayTags.Attributes_Vital_HP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Vital.HP"),
		FString("Amount of damage a player can take before death")
	);

	GameplayTags.Attributes_Vital_PP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Vital.PP"),
		FString("Amount of energy the pokemon has to do their moves")
	);
#pragma endregion

#pragma region Damage Response Tags

	GameplayTags.Damage_Response_Stun = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Response.Stun"),
		FString("Pokemon will become immobilized for a second when hit")
	);

	GameplayTags.Damage_Response_Stagger = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Response.Stagger"),
		FString("Pokemon will lose balance for a second when hit")
	);

	GameplayTags.Damage_Response_HitReaction = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Response.HitReaction"),
		FString("Pokemon will take a hit react")
	);

	GameplayTags.Damage_Response_Knockback = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Response.Knockback"),
		FString("Pokemon will be blown away by the hit")
	);
#pragma endregion

#pragma region Status Effect

	GameplayTags.Damage_Status_Burned = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Burned"),
		FString("Halves Attack, Does Continuous Damage")
	);

	GameplayTags.Damage_Status_Frostbit = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Frostbit"),
		FString("Halves Defense, Does Continuous Damage")
	);

	GameplayTags.Damage_Status_Paralyzed = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Paralyzed"),
		FString("Halves Speed, Can occasionally stun")
	);

	GameplayTags.Damage_Status_Poisoned = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Poisoned"),
		FString("Does Continuous Damage, Can be amplified")
	);

	GameplayTags.Damage_Status_Sleep = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Status.Sleep"),
		FString("Pokemon becomes immobile")
	);
#pragma endregion

#pragma region Input Tags

	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.1"),
		FString("Input Tag for 1 key")
	);
	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.2"),
		FString("Input Tag for 2 key")
	);
	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.3"),
		FString("Input Tag for 3 Key")
	);

	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.4"),
		FString("Input Tag for 4 Key")
	);

	GameplayTags.InputTag_Dodge = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge"),
		FString("Input Tag for the Dodge Key")
	);

	GameplayTags.InputTag_Dodge_Left = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge.Left"),
		FString("Input Tag for Dodging Left")
	);

	GameplayTags.InputTag_Dodge_Right = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge.Right"),
		FString("Input Tag for Dodging Right")
	);

	GameplayTags.InputTag_Dodge_Forward = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge.Forward"),
		FString("Input Tag for Dodging Forward")
	);

	GameplayTags.InputTag_Dodge_Backward = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge.Backward"),
		FString("Input Tag for Dodging Backward")
	);
#pragma endregion

#pragma region Move Actions
	
	GameplayTags.PokemonMoves_MoveAction_Melee = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Melee"),
		FString("Pokemon goes to an ideal range and hits the target")
	);

	GameplayTags.PokemonMoves_MoveAction_Projectile = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Projectile"),
		FString("Pokemon fires off a projectile at target")
	);

	GameplayTags.PokemonMoves_MoveAction_Ramming = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Ramming"),
		FString("Pokemon has to run into or through the target")
	);

	GameplayTags.PokemonMoves_MoveAction_Environment = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Environment"),
		FString("Pokemon adds an effect that changes the field")
	);

	GameplayTags.PokemonMoves_MoveAction_Stats = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Stats"),
		FString("Pokemon add a stat change")
	);

	GameplayTags.PokemonMoves_MoveAction_Dodging = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveAction.Dodging"),
		FString("Pokemon opts to avoid a move or dodge")
	);
#pragma endregion

#pragma region Combat Sockets
	GameplayTags.CombatSocket_Projectile = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Projectile"),
		FString("Default Projectile Socket")
	);

	GameplayTags.CombatSocket_Melee = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Melee"),
		FString("Default Melee Combat Socket")
	);

	GameplayTags.CombatSocket_Melee_RightHand = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Melee.RightHand"),
		FString("Right Hand Combat Socket")
	);

	GameplayTags.CombatSocket_Melee_LeftHand = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Melee.LeftHand"),
		FString("Left Hand Combat Socket")
	);

	GameplayTags.CombatSocket_Melee_Tail = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Melee.Tail"),
		FString("Tail Combat Socket")
	);
#pragma endregion

#pragma region Move Types

	GameplayTags.PokemonMoves_MoveType_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveType.Physical"),
		FString("Moves that account for Attack and Defense")
	);

	GameplayTags.PokemonMoves_MoveType_Special = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveType.Special"),
		FString("Moves that account for Special Attack and Special Defense")
	);

	GameplayTags.PokemonMoves_MoveType_Status = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.MoveType.Status"),
		FString("Moves that account for stat or status changes")
	);
#pragma endregion

#pragma region Abilities Status
	GameplayTags.Abilities_Status_Eligible = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Status.Eligible"),
		FString("Eligible Ability Tag Status")
	);

	GameplayTags.Abilities_Status_Unlocked = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Status.Unlocked"),
		FString("Unlocked Ability Tag Status")
	);

	GameplayTags.Abilities_Status_Locked = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Status.Locked"),
		FString("Locked Ability Tag Status")
	);

	GameplayTags.Abilities_Status_Equipped = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Status.Equipped"),
		FString("Equipped Ability Tag Status")
	);
#pragma endregion

#pragma region Pokemon Moves
GameplayTags.Abilities_IronDefense = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.IronDefense"),
		FString("Iron Defense Ability Tag")
	);

	GameplayTags.Abilities_MachPunch = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.MachPunch"),
		FString("Mach Punch Ability Tag")
	);

	GameplayTags.Abilities_FlashCannon = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.FlashCannon"),
		FString("FlashCannon Ability Tag")
	);

	GameplayTags.Abilities_QuickAttack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.QuickAttack"),
		FString("Quick Attack Ability Tag")
	);

	GameplayTags.Abilities_Thunderbolt = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Thunderbolt"),
		FString("Thunderbolt Ability Tag")
	);

	GameplayTags.Abilities_Bite = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Bite"),
		FString("Bite Ability Tag")
	);

	GameplayTags.Abilities_AuraSphere = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.AuraSphere"),
		FString("Aura Sphere Ability Tag")
	);

	GameplayTags.Abilities_DoubleTeam = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.DoubleTeam"),
		FString("Double Team Ability Tag")
	);

	GameplayTags.Abilities_Dig = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Dig"),
		FString("Dig Ability Tag")
	);

	GameplayTags.Abilities_Nuzzle = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Nuzzle"),
		FString("Nuzzle Ability Tag")
	);

	GameplayTags.Abilities_BulletPunch = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.BulletPunch"),
		FString("Bullet Punch Ability Tag")
	);

	GameplayTags.Abilities_Earthquake = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Earthquake"),
		FString("Earthquake Ability Tag")
	);

	GameplayTags.Abilities_IronTail = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.IronTail"),
		FString("IronTail Ability Tag")
	);

	GameplayTags.Abilities_BulletSeed = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.BulletSeed"),
		FString("Bullet Seed Ability Tag")
	);

	GameplayTags.Abilities_AirCutter = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.AirCutter"),
		FString("Air Cutter Ability Tag")
	);
#pragma endregion

#pragma region Spawn Points
GameplayTags.SpawnPoint_Trees = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("SpawnPoint.Trees"),
		FString("Has tree locations as the Pokemon's spawn point")
	);

	GameplayTags.SpawnPoint_Bushes = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("SpawnPoint.Bushes"),
		FString("Has Bushes locations as the Pokemon's spawn point")
	);

	GameplayTags.SpawnPoint_ComeOnOut = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("SpawnPoint.ComeOnOut"),
		FString("Spawns from the trainer's pokeball")
	);
#pragma endregion

#pragma region Debuff
GameplayTags.Debuff_Damage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Debuff.Damage"),
		FString("Debuff Damage")
	);

	GameplayTags.Debuff_Chance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Debuff.Chance"),
		FString("Debuff Chance")
	);

	GameplayTags.Debuff_Frequency = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Debuff.Frequency"),
		FString("Debuff Frequency")
	);
#pragma endregion

#pragma region Buff
	GameplayTags.Buff_Duration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Buff.Duration"),
		FString("Buff Duration")
	);

	GameplayTags.Buff_DamageMultiplier = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Buff.DamageMultiplier"),
		FString("Buff Damage Multiplier")
	);

	GameplayTags.Buff_Chance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Buff.Chance"),
		FString("Buff Chance")
	);

	GameplayTags.Buff_Frequency = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Buff.Frequency"),
		FString("Buff Frequency")
	);

	GameplayTags.Buff_Duration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Buff.Duration"),
		FString("Buff Duration")
	);
#pragma endregion

#pragma region Cooldowns
GameplayTags.Cooldown_InputTag = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Cooldown.InputTag"),
		FString("Standard Input Cooldown Tag")
	);

	GameplayTags.Data_PowerPointCost = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Data.PowerPointCost"),
		FString("Power Point	 Cost Tag")
	);

	GameplayTags.Cooldown_InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Cooldown.InputTag.1"),
		FString("Cooldown Tag For Slot 1")
	);

	GameplayTags.Cooldown_InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Cooldown.InputTag.2"),
		FString("Cooldown Tag For Slot 2")
	);

	GameplayTags.Cooldown_InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Cooldown.InputTag.3"),
		FString("Cooldown Tag For Slot 3")
	);

	GameplayTags.Cooldown_InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Cooldown.InputTag.4"),
		FString("Cooldown Tag For Slot 4")
	);
#pragma endregion

#pragma region XP
GameplayTags.XP_Fluctuating = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("XP.Fluctuating"),
		FString("XP Gain Fluctuating Tag")
	);

	GameplayTags.XP_Slow = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("XP.Slow"),
		FString("XP Gain Slow Tag")
	);

	GameplayTags.XP_MediumSlow = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("XP.MediumSlow"),
		FString("XP Gain MediumSlow Tag")
	);

	GameplayTags.XP_Fast = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("XP.Fast"),
		FString("XP Gain Fast Tag")
	);

	GameplayTags.XP_MediumFast = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("XP.MediumFast"),
		FString("XP Gain Medium Fast Tag")
	);

	GameplayTags.XP_Erratic = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("XP.Erratic"),
		FString("XP Gain Erratic Tag")
	);
#pragma endregion

	GameplayTags.PokemonMoves_Spread = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread"),
		FString("Root tag for Pokemon Spread types")
	);

	GameplayTags.PokemonMoves_Spread_Projectile = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Projectile"),
		FString("Projectile-Based Spreads")
	);

	GameplayTags.PokemonMoves_Spread_Projectile_Single = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Projectile.Single"),
		FString("Tracks target (e.g., Aura Sphere)")
	);

	GameplayTags.PokemonMoves_Spread_Projectile_Cone = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Projectile.Cone"),
		FString("Fixed angular spread (e.g., Swift)")
	);

	GameplayTags.PokemonMoves_Spread_Projectile_Spiral = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Projectile.Spiral"),
		FString("Rotating pattern (rare, but possible for fan game)")
	);

	GameplayTags.PokemonMoves_Spread_Projectile_Burst = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Projectile.Burst"),
		FString("Fires all projectiles at once, shotgun")
	);

	GameplayTags.PokemonMoves_Spread_Projectile_Sequential = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Projectile.Sequential"),
		FString("Fires projectiles one after another")
	);

	GameplayTags.PokemonMoves_Spread_Beam = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Beam"),
		FString("Beam & Linear Attacks")
	);
	
	GameplayTags.PokemonMoves_Spread_Beam_Linear = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Beam.Linear"),
		FString("Straight line beam (Hyper Beam)")
	);

	GameplayTags.PokemonMoves_Spread_Beam_Sweep = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Beam.Sweep"),
		FString("Beam sweeps horizontally or vertically (Flamethrower)")
	);

	GameplayTags.PokemonMoves_Spread_Beam_Piercing = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Beam.Piercing"),
		FString("Beam passes through targets")
	);

	GameplayTags.PokemonMoves_Spread_Area = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Area"),
		FString("Area-Of-Effect (AOE)")
	);
	
	GameplayTags.PokemonMoves_Spread_Area_Radial = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Area.Radial"),
		FString("Circular area around user (Dazzling Gleam)")
	);

	GameplayTags.PokemonMoves_Spread_Area_Ring = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Area.Ring"),
		FString("Expanding ring wave (Water Pulse)")
	);

	GameplayTags.PokemonMoves_Spread_Area_Cone = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Area.Cone"),
		FString("AOE cone forward (Hyper Voice)")
	);

	GameplayTags.PokemonMoves_Spread_Area_Linger = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Area.Linger"),
		FString("Zone persists after activation (Lava Plume)")
	);

	GameplayTags.PokemonMoves_Spread_Environment = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Environment"),
		FString("Environment or Drop-Type Moves")
	);

	GameplayTags.PokemonMoves_Spread_Environment_Drop = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Environment.Drop"),
		FString("Objects fall from above (Rock Slide, Thunder)")
	);

	GameplayTags.PokemonMoves_Spread_Environment_Rain = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Environment.Rain"),
		FString("Continuous drop over time")
	);

	GameplayTags.PokemonMoves_Spread_Environment_TargetedDrop = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Environment.TargetedDrop"),
		FString("Drop targets specific enemy positions")
	);

	GameplayTags.PokemonMoves_Spread_Formation = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Formation"),
		FString("Formation/Summon-Based Moves")
	);

	GameplayTags.PokemonMoves_Spread_Formation_Clone = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Formation.Clone"),
		FString("Double Team, Illusion-like effects")
	);

	GameplayTags.PokemonMoves_Spread_Formation_Circle = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Formation.Circle"),
		FString("Summons in a circle around user")
	);

	GameplayTags.PokemonMoves_Spread_Formation_Line = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Formation.Line"),
		FString("Summons in a line formation")
	);

	GameplayTags.PokemonMoves_Spread_Modifier = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier"),
		FString("Hyprid Control Tags. Modifiers that change how a move behaves")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_MultiHit = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.MultiHit"),
		FString("Move hits multiple times upon contact")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_Charge = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.Charge"),
		FString("Move requires charging before execution (Solar Beam)")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_Continuous = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.Continuous"),
		FString("Move continues as long as input is held (Surf)")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_Bounce = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.Bounce"),
		FString("Move bounces between multiple targets (Thunder)")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_Tracking = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.Tracking"),
		FString("User move to follow target before or as they're firing. Motion Warping")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_Reflectable = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.Reflectable"),
		FString("Move can be reflected by abilities like Magic Coat")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_Combustable = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.Combustable"),
		FString("Projectile Separates into multiple projectiles after a certain timer")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_Homing = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.Homing"),
		FString("Projectile homes in on target after being fired")
	);

	GameplayTags.PokemonMoves_Spread_Modifier_Scatter = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("PokemonMoves.Spread.Modifier.Scatter"),
		FString("Projectile fires in a scattered direction")
	);

	GameplayTags.InputsToCooldowns.Add(GameplayTags.InputTag_1, GameplayTags.Cooldown_InputTag_1);
	GameplayTags.InputsToCooldowns.Add(GameplayTags.InputTag_2, GameplayTags.Cooldown_InputTag_2);
	GameplayTags.InputsToCooldowns.Add(GameplayTags.InputTag_3, GameplayTags.Cooldown_InputTag_3);
	GameplayTags.InputsToCooldowns.Add(GameplayTags.InputTag_4, GameplayTags.Cooldown_InputTag_4);
	GameplayTags.CooldownsToInputs.Add(GameplayTags.Cooldown_InputTag_1, GameplayTags.InputTag_1);
	GameplayTags.CooldownsToInputs.Add(GameplayTags.Cooldown_InputTag_2, GameplayTags.InputTag_2);
	GameplayTags.CooldownsToInputs.Add(GameplayTags.Cooldown_InputTag_3, GameplayTags.InputTag_3);
	GameplayTags.CooldownsToInputs.Add(GameplayTags.Cooldown_InputTag_4, GameplayTags.InputTag_4);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/ProjectileAbility.h"
#include "Characters/Pokemon_Parent.h"
#include "AIControllers/PokemonAIController.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "AbilitySystemComponent.h"
#include <AbilitySystemBlueprintLibrary.h>
#include <AbilitySystem/AbilityTasks/AT_FireProjectiles.h>

void UProjectileAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UProjectileAbility::SpawnProjectile(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag, AActor* TargetActor)
{
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if (!bIsServer) return;

	UE_LOG(LogTemp, Display, TEXT("[ProjectileAbility] SpawnProjectile: Spawning"));

	AActor* ResolvedTargetActor = TargetActor;

	if (!IsValid(ResolvedTargetActor))
	{
		if (APokemon_Parent* SourcePokemon = Cast<APokemon_Parent>(GetAvatarActorFromActorInfo()))
		{
			if (APokemonAIController* PokemonController = Cast<APokemonAIController>(SourcePokemon->GetController()))
			{
				ResolvedTargetActor = PokemonController->GetCombatTarget();
			}
		}
	}

	// 1) Build the full tag set from the struct
	const FGameplayTagContainer FullTags = ProjectileCategoryTags.GenerateFullTagContainer();

	// 2) Common Params for any mode
	FProjectileBaseParams CommonParams;
	CommonParams.ProjectileClass = ProjectileConfig.ProjectileClass;
	CommonParams.DamageEffectClass = DamageEffectClass;
	CommonParams.CategoryTags = FullTags;

	CommonParams.SourceActor = GetAvatarActorFromActorInfo();
	CommonParams.ActivationId = FMath::Rand();
	CommonParams.TargetActor = ResolvedTargetActor;
	CommonParams.InitialSpeed = ProjectileConfig.Speed;
	CommonParams.ProjectileGravityScale = ProjectileConfig.GravityScale;

	CommonParams.DamageEffectParams = MakeDamageEffectParamsFromClassDefaults(ResolvedTargetActor);
	const FVector SocketLocation = IPokemonCombatInterface::Execute_GetCombatSocketLocation(GetAvatarActorFromActorInfo(), SocketTag);
	FRotator Rotation = (ProjectileTargetLocation - SocketLocation).Rotation();

	const UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetAvatarActorFromActorInfo());
	FGameplayEffectContextHandle EffectContextHandle = SourceASC->MakeEffectContext();
	EffectContextHandle.SetAbility(this);

	FHitResult HitResult;
	HitResult.Location = ProjectileTargetLocation;
	EffectContextHandle.AddHitResult(HitResult);
	CommonParams.DamageEffectContextHandle = EffectContextHandle;

	CommonParams.SpawnLocation = SocketLocation;
	CommonParams.TargetLocation = ProjectileTargetLocation;
	CommonParams.BaseRotation = Rotation;
	CommonParams.Modifiers = ProjectileModifierSettings;

	const EProjectileEditorMode Mode = InferProjectileEditorModeFromTags(FullTags);
	UAT_FireProjectiles* FireTask = nullptr;

	switch (Mode)
	{
	case EProjectileEditorMode::Single:
	{
		FireTask = UAT_FireProjectiles::FireSingle
		(
			this,
			"FireSingle",
			CommonParams
		);
		break;
	}
	case EProjectileEditorMode::Burst:
	{
		FireTask = UAT_FireProjectiles::FireBurst
		(
			this,
			"FireBurst",
			CommonParams,
			ProjectileConfig.BurstCount,
			ProjectileConfig.BurstSpreadAngle,
			ProjectileConfig.DistanceToSphere,
			ProjectileConfig.SphereRadius
		);
		break;
	}
	case EProjectileEditorMode::Spread:
	{
		FireTask = UAT_FireProjectiles::FireBurst
		(
			this,
			"FireSpread",
			CommonParams,
			ProjectileConfig.SpreadCount,
			ProjectileConfig.SpreadAngle
		);
		break;
	}
	case EProjectileEditorMode::Sequential:
	{
		FireTask = UAT_FireProjectiles::FireSequential
		(
			this,
			"FireSequential",
			CommonParams, ProjectileConfig.NumProjectiles,
			ProjectileConfig.FireRate,
			ProjectileConfig.SpreadAngle,
			ProjectileConfig.DistanceToSphere,
			ProjectileConfig.SphereRadius
		);
		break;
	}
	case EProjectileEditorMode::Beam:
	{
		FireTask = UAT_FireProjectiles::FireBeam
		(
			this,
			"FireBeam",
			CommonParams,
			ProjectileConfig.BeamTime
		);
		break;
	}
	case EProjectileEditorMode::Drop:
	{
		CommonParams.InitialSpeed = EnvironmentDropParams.InitialSpeed;
		FireTask = UAT_FireProjectiles::FireEnvironmentDrop
		(
			this,
			"EnvironmentDrop",
			CommonParams,
			EnvironmentDropParams
		);
	}
	}

	if(FireTask)
	{
		FireTask->ReadyForActivation();
	}
	else
	{
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
	}

	UE_LOG(LogTemp, Warning,
		TEXT("[ProjectileAbility] SpawnProjectile | Ability=%s | Source=%s | InputTarget=%s | ResolvedTarget=%s | SocketTag=%s | TargetLocation=%s"),
		*GetNameSafe(this),
		*GetNameSafe(GetAvatarActorFromActorInfo()),
		*GetNameSafe(TargetActor),
		*GetNameSafe(ResolvedTargetActor),
		*SocketTag.ToString(),
		*ProjectileTargetLocation.ToString()
	);
}

#if WITH_EDITOR
void UProjectileAbility::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	static const FName NAME_CategoryTag("CategoryTag");
	static const FName NAME_ModifierTags("ModifierTags");

	if (PropertyChangedEvent.Property && (PropertyChangedEvent.Property->GetFName() == NAME_CategoryTag || PropertyChangedEvent.Property->GetFName() == NAME_ModifierTags))
	{
		const FName PropertyName = PropertyChangedEvent.Property->GetFName();
		if (PropertyName == NAME_CategoryTag || PropertyName == NAME_ModifierTags)
		{
			RefreshEditorModeToggles();
		}
	}
}

void UProjectileAbility::RefreshEditorModeToggles()
{
	const FGameplayTagContainer Full = ProjectileCategoryTags.GenerateFullTagContainer();

	EditorMode = InferProjectileEditorModeFromTags(Full);
	ProjectileConfig.DerivedMode = EditorMode;
	const FPokemonGameplayTags& PokemonGameplayTags = FPokemonGameplayTags::Get();
	// Flip the modifier "show" flages based on the tags

	ProjectileModifierSettings.bHasBounce = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_Bounce);
	ProjectileModifierSettings.bHasCombustable = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_Combustable);
	ProjectileModifierSettings.bHasMultiHit = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_MultiHit);
	ProjectileModifierSettings.bHasScatter = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_Scatter);
	ProjectileModifierSettings.bHasHoming = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_Homing);
	ProjectileModifierSettings.bHasReflectable = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_Reflectable);
	ProjectileModifierSettings.bHasTracking = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_Tracking);
	ProjectileModifierSettings.bHasContinuous = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_Continuous);
	ProjectileModifierSettings.bHasCharge = Full.HasTag(PokemonGameplayTags.Projectiles_Modifier_Charge);
}
bool UProjectileAbility::OverrideSequentialShotRotation_Implementation(const FGameplayTagContainer& ResolvedTags, const FSequentialShotParams& SequentialShotParams, FRotator& OutRotation)
{
	return false;
}
#endif

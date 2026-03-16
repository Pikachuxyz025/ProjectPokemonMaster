// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/ProjectileAbility.h"
#include "Items/ProjectileAttack.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "AbilitySystemComponent.h"
#include "Components/SphereComponent.h"
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
	UE_LOG(LogTemp, Display, TEXT("Spawning"));

	// 1) Build the full tag set from the struct
	const FGameplayTagContainer FullTags = ProjectileCategoryTags.GenerateFullTagContainer();

	// 2) Common Params for any mode
	FProjectileBaseParams CommonParams;
	CommonParams.ProjectileClass = ProjectileConfig.ProjectileClass;
	CommonParams.DamageEffectClass = DamageEffectClass;
	CommonParams.CategoryTags = FullTags;

	CommonParams.DamageEffectParams = MakeDamageEffectParamsFromClassDefaults();
	CommonParams.SourceActor = GetAvatarActorFromActorInfo();
	CommonParams.ActivationId = FMath::Rand();
	CommonParams.TargetActor = TargetActor;
	CommonParams.InitialSpeed = ProjectileConfig.Speed;
	CommonParams.ProjectileGravityScale = ProjectileConfig.GravityScale;

	const FVector SocketLocation = IPokemonCombatInterface::Execute_GetCombatSocketLocation(GetAvatarActorFromActorInfo(), SocketTag);
	FRotator Rotation = (ProjectileTargetLocation - SocketLocation).Rotation();

	//FTransform SpawnTransform;
	//SpawnTransform.SetLocation(SocketLocation);
	//SpawnTransform.SetRotation(Rotation.Quaternion());

	//AProjectileAttack* Projectile = GetWorld()->SpawnActorDeferred<AProjectileAttack>(
	//	ProjectileConfig.ProjectileClass,
	//	SpawnTransform,
	//	GetOwningActorFromActorInfo(),
	//	Cast<APawn>(GetOwningActorFromActorInfo()),
	//	ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	//Projectile->GetSphereComponent()->IgnoreActorWhenMoving(GetOwningActorFromActorInfo(), true);

	const UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetAvatarActorFromActorInfo());
	FGameplayEffectContextHandle EffectContextHandle = SourceASC->MakeEffectContext();
	EffectContextHandle.SetAbility(this);
	//EffectContextHandle.AddSourceObject(Projectile);
	//TArray<TWeakObjectPtr<AActor>> Actors;
	//Actors.Add(Projectile);
	//EffectContextHandle.AddActors(Actors);
	FHitResult HitResult;
	HitResult.Location = ProjectileTargetLocation;
	EffectContextHandle.AddHitResult(HitResult);
	CommonParams.DamageEffectContextHandle = EffectContextHandle;
	///const FGameplayEffectSpecHandle SpecHandle = SourceASC->MakeOutgoingSpec(DamageEffectClass, GetAbilityLevel(), EffectContextHandle);

//	UAT_FireProjectiles* FireTask = UAT_FireProjectiles::FireProjectiles
//	(
//this,
//		"FireProjectiles",
//		EProjectileSpreadMode::SingleShot,
//		ProjectileConfig.ProjectileClass,
//		DamageEffectClass,
//		EffectContextHandle,
//		MakeDamageEffectParamsFromClassDefaults(),
//		GetAbilityLevel(),
//		SocketLocation,
//		Rotation,
//		GetAvatarActorFromActorInfo(),
//		1,
//		0.1f,
//		ProjectileConfig.SpreadAngle,
//		0.f
//	);

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

	//FireTask->ReadyForActivation();
	//Projectile->DamageEffectSpecHandle = ;
	//Projectile->DamageEffectParams = ;
	//Projectile->FinishSpawning(SpawnTransform);
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

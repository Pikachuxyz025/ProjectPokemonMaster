// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/AT_FireProjectiles.h"
#include "Items/ProjectileAttack.h"
#include "Components/SphereComponent.h"
#include "Interfaces/PokemonCombatInterface.h"
#include <AbilitySystemBlueprintLibrary.h>
#include "AbilitySystemComponent.h"
#include <Kismet/KismetMathLibrary.h>
#include <AbilitySystem/Abilities/ProjectileAbility.h>
#include <AbilitySystem/PokemonProjectileTagLibrary.h>


UAT_FireProjectiles* UAT_FireProjectiles::InitializeTask(UAT_FireProjectiles* Task, const FProjectileBaseParams& Common)
{
	Task->ProjectileClass = Common.ProjectileClass;
	Task->DamageEffectClass = Common.DamageEffectClass;
	Task->CategoryTags = Common.CategoryTags;
	Task->SpawnLocation = Common.SpawnLocation;
	Task->BaseRotation = Common.BaseRotation;
	Task->DamageEffectContextHandle = Common.DamageEffectContextHandle;
	Task->DamageEffectParams = Common.DamageEffectParams;
	Task->SourceActor = Common.SourceActor;

	return Task;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireSingle(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FProjectileBaseParams& Common)
{
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);
	InitializeTask(MyObj, Common);
	MyObj->SpreadMode = EProjectileSpreadMode::SingleShot;

	return MyObj;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireSequential(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FProjectileBaseParams& Common, int32 NumProjectiles, float TimeBetweenShots, float SpreadAngle, float DistanceToSphere, float SphereRadius)
{
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);
	InitializeTask(MyObj, Common);
	MyObj->SpreadMode = EProjectileSpreadMode::Sequential;
	MyObj->NumOfProjectiles = NumProjectiles;
	MyObj->FireRate = TimeBetweenShots;
	MyObj->Spread = SpreadAngle;
	MyObj->DistanceToSphere = DistanceToSphere;
	MyObj->SphereRadius = SphereRadius;

	return MyObj;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireBurst(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FProjectileBaseParams& Common, int32 NumProjectiles, float SpreadAngle, float DistanceToSphere, float SphereRadius)
{
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);
	InitializeTask(MyObj, Common);

	MyObj->SpreadMode = EProjectileSpreadMode::Burst;
	MyObj->NumOfProjectiles = NumProjectiles;
	MyObj->Spread = SpreadAngle;
	MyObj->DistanceToSphere = DistanceToSphere;
	MyObj->SphereRadius = SphereRadius;

	return MyObj;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireEnvironmentDrop(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FProjectileBaseParams& Common, const FEnvironmentDropParams& EnvDropParams)
{
	return nullptr;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireEnvironmentErupt(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FProjectileBaseParams& Common, const FEnvironmentDropParams& EnvDropParams)
{
	return nullptr;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireBeam(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FProjectileBaseParams& Common, float BeamDuration)
{
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);
	InitializeTask(MyObj, Common);
	MyObj->SpreadMode = EProjectileSpreadMode::Beam;
	MyObj->BeamTime = BeamDuration;

	return MyObj;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireProjectiles(UGameplayAbility* OwningAbility, FName TaskInstanceName, EProjectileSpreadMode SpreadMode, TSubclassOf<AProjectileAttack> ProjectileClass, TSubclassOf<UGameplayEffect> DamageEffectClass, FGameplayEffectContextHandle DamageEffectContextHandle, FDamageEffectParams DamageEffectParams, FGameplayTagContainer CategoryTags, FVector SpawnLocation, FRotator BaseRotation, AActor* SourceActor, int32 NumberOfProjectiles, float TimeBetweenShots, float SpreadAngle, float BeamDuration)
{
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);

	MyObj->SpreadMode = SpreadMode;
	MyObj->ProjectileClass = ProjectileClass;
	MyObj->DamageEffectClass = DamageEffectClass;
	MyObj->CategoryTags = CategoryTags;
	MyObj->SpawnLocation = SpawnLocation;
	MyObj->BaseRotation = BaseRotation;
	MyObj->NumOfProjectiles = NumberOfProjectiles;
	MyObj->FireRate = TimeBetweenShots;
	MyObj->Spread = SpreadAngle;
	MyObj->BeamTime = BeamDuration;
	MyObj->DamageEffectContextHandle = DamageEffectContextHandle;
	MyObj->DamageEffectParams = DamageEffectParams;
	MyObj->SourceActor = SourceActor;
	return MyObj;
}

void UAT_FireProjectiles::Activate()
{
	Super::Activate();

	switch (SpreadMode)
	{
	case EProjectileSpreadMode::SingleShot:
		HandleSingleShotBP();
		break;
	case EProjectileSpreadMode::Burst:
		HandleBurstBP();
		break;
	case EProjectileSpreadMode::Spread:
		HandleSpreadBP();
		break;
	case EProjectileSpreadMode::Sequential:
		HandleSequentialBP();
		break;
	case EProjectileSpreadMode::Beam:
		HandleBeamBP();
		break;
	case EProjectileSpreadMode::Drop:
		HandleEnvironmentalDropBP();
		break;
	case EProjectileSpreadMode::Erupt:
		HandleEnvironmentalEruptBP();
		break;

	default:
		break;
	}
}


void UAT_FireProjectiles::FireOneProjectile(const FRotator& NewRotation)
{
	if (!ProjectileClass||!SourceActor) return;

	const UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(SourceActor);

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(SpawnLocation);
	SpawnTransform.SetRotation(NewRotation.Quaternion());

	AProjectileAttack* Projectile = GetWorld()->SpawnActorDeferred<AProjectileAttack>(
		ProjectileClass,
		SpawnTransform,
		SourceActor,
		Cast<APawn>(SourceActor),
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	Projectile->GetSphereComponent()->IgnoreActorWhenMoving(SourceActor, true);
	DamageEffectContextHandle.AddSourceObject(Projectile);
	TArray<TWeakObjectPtr<AActor>> Actors;
	Actors.Add(Projectile);
	DamageEffectContextHandle.AddActors(Actors);

	const FGameplayEffectSpecHandle SpecHandle = SourceASC->MakeOutgoingSpec(DamageEffectClass, Ability->GetAbilityLevel(), DamageEffectContextHandle);

	Projectile->DamageEffectSpecHandle = SpecHandle;
	Projectile->DamageEffectParams = DamageEffectParams;
	Projectile->FinishSpawning(SpawnTransform);
}

void UAT_FireProjectiles::FireSequentialShot(int32 ShotIndex)
{
	FSequentialShotParams Params;
	Params.BaseRotation = BaseRotation;
	Params.StartLocation = SpawnLocation;
	Params.TargetLocation = TargetLocation;
	Params.ShotIndex = ShotIndex;
	Params.TotalShots = NumOfProjectiles;
	Params.DistanceToSphere = DistanceToSphere;
	Params.SphereRadius = SphereRadius;
	Params.SpreadAngleDeg = Spread;

	FRotator FinalRotation;
	bool bHandled = false;

	if(Ability)
	{
		// Need the proper tag container
		bHandled = CastChecked<UProjectileAbility>(Ability)->OverrideSequentialShotRotation(CategoryTags, Params, FinalRotation);
	}

	if(!bHandled)
	{
		// Need the proper tag container
		FinalRotation = UPokemonProjectileTagLibrary::ComputeSequentialShotRotation(CategoryTags, Params);
	}

	FireOneProjectile(FinalRotation);

}

void UAT_FireProjectiles::HandleSequentialTick()
{
	if (bCancelled) { EndTask(); return; }

	FireSequentialShot(ProjectilesFired);
	++ProjectilesFired;

	if (ProjectilesFired < NumOfProjectiles)
	{
		GetWorld()->GetTimerManager().SetTimer
		(
			SequentialTimerHandle,
			this,
			&UAT_FireProjectiles::HandleSequentialTick,
			FireRate,
			false
		);
	}
	else
	{
		EndTask();
	}
}

void UAT_FireProjectiles::HandleSingleShotBP_Implementation()
{
	FireOneProjectile(BaseRotation);
	EndTask();
}

void UAT_FireProjectiles::HandleBurstBP_Implementation()
{
	for (int32 i = 0; i < NumOfProjectiles; i++)
	{
		float AngleOffset = (i - NumOfProjectiles / 2) * Spread;
		FRotator NewRotation = BaseRotation;
		NewRotation.Yaw += AngleOffset;
		FireOneProjectile(NewRotation);
	}
	EndTask();
}

void UAT_FireProjectiles::HandleSpreadBP_Implementation()
{
	for (int32 i = 0; i < NumOfProjectiles; i++)
	{
		float AngleOffset = (i - NumOfProjectiles / 2) * Spread;
		FRotator NewRotation = BaseRotation;
		NewRotation.Yaw += AngleOffset;
		FireOneProjectile(NewRotation);
	}
	EndTask();
}

void UAT_FireProjectiles::HandleSequentialBP_Implementation()
{
	ProjectilesFired = 0;


	// If FireRate is 0 or less, fire all projectiles immediately
	if (FireRate <= 0.f)
	{
		for (ProjectilesFired = 0; ProjectilesFired < NumOfProjectiles; ++ProjectilesFired)
		{
			FireSequentialShot(ProjectilesFired);
		}
		EndTask();
		return;
	}

	// Kick of Timed Loop
	FireSequentialShot(ProjectilesFired);
	++ProjectilesFired;

	if(ProjectilesFired<NumOfProjectiles)
	{
		GetWorld()->GetTimerManager().SetTimer
		(
			SequentialTimerHandle,
			this,
			&UAT_FireProjectiles::HandleSequentialTick,
			FireRate,
			false
		);
	}
	else
	{
		EndTask();
	}

}

void UAT_FireProjectiles::HandleBeamBP_Implementation()
{
	FTimerHandle BeamTimerHandle;
	GetWorld()->GetTimerManager().SetTimer
	(
		BeamTimerHandle,
		[this]()
		{
			EndTask();
		},
		BeamTime,
		false
	);
}

void UAT_FireProjectiles::HandleEnvironmentalDropBP_Implementation()
{
}

void UAT_FireProjectiles::HandleEnvironmentalEruptBP_Implementation()
{
}

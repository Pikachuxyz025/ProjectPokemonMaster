// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/AT_FireProjectiles.h"
#include "Items/ProjectileAttack.h"
#include "Components/SphereComponent.h"
#include "Interfaces/PokemonCombatInterface.h"
#include <AbilitySystemBlueprintLibrary.h>
#include "AbilitySystemComponent.h"
#include <Kismet/KismetMathLibrary.h>



UAT_FireProjectiles* UAT_FireProjectiles::FireProjectiles(UGameplayAbility* OwningAbility, FName TaskInstanceName, EProjectileSpreadMode SpreadMode, TSubclassOf<AProjectileAttack> ProjectileClass, TSubclassOf<UGameplayEffect> DamageEffectClass, FGameplayEffectContextHandle DamageEffectContextHandle, FDamageEffectParams DamageEffectParams, int32 AbilityLevel, FVector SpawnLocation, FRotator BaseRotation, AActor* SourceActor, int32 NumberOfProjectiles, float TimeBetweenShots, float SpreadAngle, float BeamDuration)
{
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);

	MyObj->SpreadMode = SpreadMode;
	MyObj->ProjectileClass = ProjectileClass;
	MyObj->DamageEffectClass = DamageEffectClass;
	MyObj->AbilityLevel = AbilityLevel;
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

	const FGameplayEffectSpecHandle SpecHandle = SourceASC->MakeOutgoingSpec(DamageEffectClass, AbilityLevel, DamageEffectContextHandle);

	Projectile->DamageEffectSpecHandle = SpecHandle;
	Projectile->DamageEffectParams = DamageEffectParams;
	Projectile->FinishSpawning(SpawnTransform);
}

void UAT_FireProjectiles::FireSequentialShot(int32 ShotIndex)
{
}

void UAT_FireProjectiles::HandleSequentialTick()
{
}

FRotator UAT_FireProjectiles::GetRandomScatterRotation(const FVector& StartLocation, const FVector& EndLocation, float DistanceToSphere, float SphereRadius)
{
	const FVector ToEndNormalized = (EndLocation - StartLocation).GetSafeNormal();
	const FVector SphereCenter = StartLocation + ToEndNormalized * DistanceToSphere;

	const FVector RandPointInSphereVector = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
	const FVector EndLoc = SphereCenter + RandPointInSphereVector;
	return (EndLoc - StartLocation).Rotation();
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

	ProjectilesFired=0;

	// If FireRate is 0 or less, fire all projectiles immediately
	if(FireRate<=0.f)
	{
		for(ProjectilesFired=0;ProjectilesFired<NumOfProjectiles;++ProjectilesFired)
		{
			FireSequentialShot(ProjectilesFired);
		}
		EndTask();
		return;
	}

	// Kick of Timed Loop
	FireSequentialShot(ProjectilesFired);
	++ProjectilesFired;

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

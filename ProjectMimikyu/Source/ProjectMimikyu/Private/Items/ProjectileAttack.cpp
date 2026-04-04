// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/ProjectileAttack.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include <Kismet/GameplayStatics.h>
#include <AbilitySystemBlueprintLibrary.h>
#include "AbilitySystemComponent.h"
#include <AbilitySystem/PokemonAbilitySystemLibrary.h>

AProjectileAttack::AProjectileAttack()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>("Projectile Mesh");
	ProjectileMesh->SetupAttachment(RootComponent);

	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->ProjectileGravityScale = 0.f; // Likey will be overriden by ability settings
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->Bounciness = 0.f;

}

#if( WITH_EDITOR)
void AProjectileAttack::PostEditChangeProperty(FPropertyChangedEvent& Event)
{
	Super::PostEditChangeProperty(Event);
	//FName PropertyName = Event.Property ? Event.Property->GetFName() : NAME_None;
	//if (!ProjectileMovementComponent) return;

	//if (PropertyName == GET_MEMBER_NAME_CHECKED(AProjectileAttack, InitialSpeed))
	//{

	//	ProjectileMovementComponent->InitialSpeed = InitialSpeed;
	//	ProjectileMovementComponent->MaxSpeed = InitialSpeed;


	//}
	//if (PropertyName == GET_MEMBER_NAME_CHECKED(AProjectileAttack, ProjectileGravity))
	//{
	//	i
	//}
}
#endif

void AProjectileAttack::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//Super::OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
	UE_LOG(LogTemp, Display, TEXT("Projectile hit: %s"), *UKismetSystemLibrary::GetDisplayName(OtherActor));
	//if (HasAuthority())
	//{
	//	if (UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OtherActor))
	//	{
	//		TargetASC->ApplyGameplayEffectSpecToSelf(*DamageEffectSpecHandle.Data.Get());

	//	}
	//	Destroy();
	//}

	if (HasAuthority())
	{
		if (UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OtherActor))
		{
			const FVector DeathImpulse = GetActorForwardVector() * DamageEffectParams.DeathImpulseMagnitude;

			DamageEffectParams.DeathImpulse = DeathImpulse;
			const bool bKnockback = FMath::RandRange(1, 100) < DamageEffectParams.KnockbackChance;
			if (bKnockback)
			{
				const FVector KnockbackDirectionOffset = GetActorForwardVector().RotateAngleAxis(45.f, GetActorRightVector());
				const FVector KnockbackForce = KnockbackDirectionOffset * DamageEffectParams.KnockbackForceMagnitude;
				DamageEffectParams.KnockbackForce = KnockbackForce;
			}
			DamageEffectParams.TargetAbilitySystemComponent = TargetASC;
			UPokemonAbilitySystemLibrary::ApplyDamageEffect(DamageEffectParams);
		}
		Destroy();
	}
}

void AProjectileAttack::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
}

void AProjectileAttack::OnProjectileOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnProjectileOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void AProjectileAttack::RetargetTick()
{
	if (!ProjectileMovementComponent || !HomingTarget)
	{
		ProjectileMovementComponent->bIsHomingProjectile = false;
		GetWorldTimerManager().ClearTimer(RetargetTimerHandle);
		return;
	}

	if (HomingLockRange > 0.f)
	{
		const float DistSq = FVector::DistSquared(GetActorLocation(), HomingTarget->GetActorLocation());
		if (DistSq > FMath::Square(HomingLockRange))
		{
			ProjectileMovementComponent->bIsHomingProjectile = false;
			GetWorldTimerManager().ClearTimer(RetargetTimerHandle);
			return;
		}
	}

	if(ProjectileMovementComponent->HomingTargetComponent != HomingTarget->GetRootComponent())
	{
		ProjectileMovementComponent->HomingTargetComponent = HomingTarget->GetRootComponent();
	}
}

void AProjectileAttack::TryApplyDamage(AActor* OtherActor, const FHitResult& Hit)
{
}

void AProjectileAttack::SetInitialVelocity(const FVector& NewVelocity)
{
	if (ProjectileMovementComponent)
	{
		ProjectileMovementComponent->Velocity = NewVelocity;
		ProjectileMovementComponent->UpdateComponentVelocity();
	}
}

void AProjectileAttack::SetInitialSpeed(const float InitialSpeed)
{
	if (ProjectileMovementComponent)
	{
		ProjectileMovementComponent->InitialSpeed = InitialSpeed;
		ProjectileMovementComponent->MaxSpeed = InitialSpeed;
	}
}

void AProjectileAttack::SetProjectileGravity(float GravityScale)
{
	if (ProjectileMovementComponent && GravityScale > 0)
	{
		ProjectileMovementComponent->ProjectileGravityScale = GravityScale;
	}
}

void AProjectileAttack::EnableHoming(AActor* TargetActor, FProjectileHomingParams HomingParams)
{
	HomingTarget = TargetActor;
	if (!ProjectileMovementComponent) return;

	HomingLockRange = HomingParams.HomingLockRange;
	RetargetInterval = HomingParams.RetargetInterval;

	bool bIsHoming = IsValid(HomingTarget);

	ProjectileMovementComponent->bIsHomingProjectile = bIsHoming;
	ProjectileMovementComponent->HomingAccelerationMagnitude = HomingParams.HomingAccelerationMagnitude;

	if (bIsHoming)
	{
		ProjectileMovementComponent->HomingTargetComponent = HomingTarget->GetRootComponent();
	}

	if (RetargetInterval > 0.f)
	{
		GetWorldTimerManager().ClearTimer(RetargetTimerHandle);
		GetWorldTimerManager().SetTimer(RetargetTimerHandle, this, &AProjectileAttack::RetargetTick, RetargetInterval, true);
	}
}

void AProjectileAttack::EnableReflect(FProjectileReflectParams ReflectParams)
{
}

void AProjectileAttack::EnableBounce(FProjectileBounceParams BounceParams)
{
}

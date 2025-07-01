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
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->InitialSpeed = InitialSpeed;
	ProjectileMovementComponent->MaxSpeed = InitialSpeed;
	ProjectileMovementComponent->ProjectileGravityScale = ProjectileGravity;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>("Projectile Mesh");
	ProjectileMesh->SetupAttachment(RootComponent);
}

#if( WITH_EDITOR)
void AProjectileAttack::PostEditChangeProperty(FPropertyChangedEvent& Event)
{
	Super::PostEditChangeProperty(Event);
	FName PropertyName = Event.Property ? Event.Property->GetFName() : NAME_None;
	if (!ProjectileMovementComponent) return;

	if (PropertyName == GET_MEMBER_NAME_CHECKED(AProjectileAttack, InitialSpeed))
	{

		ProjectileMovementComponent->InitialSpeed = InitialSpeed;
		ProjectileMovementComponent->MaxSpeed = InitialSpeed;


	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(AProjectileAttack, ProjectileGravity))
	{
		ProjectileMovementComponent->ProjectileGravityScale = ProjectileGravity;
	}
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

void AProjectileAttack::OnProjectileOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnProjectileOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

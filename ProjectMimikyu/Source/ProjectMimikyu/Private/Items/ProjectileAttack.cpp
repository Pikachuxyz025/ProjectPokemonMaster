// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/ProjectileAttack.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include <Kismet/GameplayStatics.h>

AProjectileAttack::AProjectileAttack()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->InitialSpeed = InitialSpeed;
	ProjectileMovementComponent->MaxSpeed = InitialSpeed;
	ProjectileMovementComponent->ProjectileGravityScale = ProjectileGravity;
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
	Super::OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
}

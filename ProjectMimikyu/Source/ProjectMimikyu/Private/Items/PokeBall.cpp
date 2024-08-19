// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/PokeBall.h"
#include "GameFramework/ProjectileMovementComponent.h"

APokeBall::APokeBall()
{
	ProjectileMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Pokeball Mesh"));
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
}

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

void UProjectileAbility::SpawnProjectile(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag)
{
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if (!bIsServer) return;
	UE_LOG(LogTemp, Display, TEXT("Spawning"));



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

	//FireTask->ReadyForActivation();
	//Projectile->DamageEffectSpecHandle = ;
	//Projectile->DamageEffectParams = ;
	//Projectile->FinishSpawning(SpawnTransform);
}

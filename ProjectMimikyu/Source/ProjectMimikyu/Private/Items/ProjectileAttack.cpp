// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/ProjectileAttack.h"
#include "GameplayTags/PokemonGameplayTags.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include <Kismet/GameplayStatics.h>
#include <AbilitySystemBlueprintLibrary.h>
#include "AbilitySystemComponent.h"
#include <AbilitySystem/PokemonAbilitySystemLibrary.h>
#include "ActorComponents/PokemonImpactResolverComponent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "GameplayTags/PokemonCombatGameplayTags.h"

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
	if (!OtherActor || OtherActor == this)
	{
		return;
	}

	if (OtherActor == GetOwner() || OtherActor == GetInstigator())
	{
		UE_LOG(LogTemp, Display, TEXT("Projectile ignored owner/instigator: %s"), *GetNameSafe(OtherActor));
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("Projectile hit: %s"), *UKismetSystemLibrary::GetDisplayName(OtherActor));

	if (HasAuthority())
	{
		TryApplyDamage(OtherActor, Hit);
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
	if (!IsValid(OtherActor))
	{
		return;
	}

	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OtherActor);

	if (!TargetASC)
	{
		return;
	}

	DamageEffectParams.TargetAbilitySystemComponent = TargetASC;

	UAbilitySystemComponent* SourceASC = DamageEffectParams.SourceAbilitySystemComponent;
	AActor* SourceActor = SourceASC ? SourceASC->GetAvatarActor() : GetOwner();

	if (!IsValid(SourceActor))
	{
		SourceActor = GetOwner();
	}

	FVector ProjectileDirection = GetActorForwardVector();

	if (ProjectileMovementComponent && !ProjectileMovementComponent->Velocity.IsNearlyZero())
	{
		ProjectileDirection = ProjectileMovementComponent->Velocity.GetSafeNormal();
	}

	if (ProjectileDirection.IsNearlyZero())
	{
		ProjectileDirection = GetActorForwardVector();
	}

	DamageEffectParams.DeathImpulse = ProjectileDirection * DamageEffectParams.DeathImpulseMagnitude;

	UPokemonImpactResolverComponent* DefenderResolver = OtherActor->FindComponentByClass<UPokemonImpactResolverComponent>();

	if (DefenderResolver && SourceASC)
	{
		const UPokemonBaseAttributeSet* SourceAttributeSet = SourceASC->GetSet<UPokemonBaseAttributeSet>();
		const UPokemonBaseAttributeSet* TargetAttributeSet = TargetASC->GetSet<UPokemonBaseAttributeSet>();

		const FPokemonGameplayTags& GameplayTags = FPokemonGameplayTags::Get();

		const FGameplayTag EffectiveMoveTypeTag =
			MoveTypeTag.IsValid() ? MoveTypeTag : DamageEffectParams.MoveTypeTag;

		float SourceOffenseStat = 0.f;
		float TargetDefenseStat = 0.f;

		if (SourceAttributeSet && TargetAttributeSet)
		{
			if (EffectiveMoveTypeTag.MatchesTagExact(GameplayTags.PokemonMoves_MoveType_Special))
			{
				SourceOffenseStat = SourceAttributeSet->GetSpecialAttack();
				TargetDefenseStat = TargetAttributeSet->GetSpecialDefense();
			}
			else
			{
				// Default to physical for Physical or unset.
				SourceOffenseStat = SourceAttributeSet->GetAttack();
				TargetDefenseStat = TargetAttributeSet->GetDefense();
			}
		}

		const float SourceSpeed = SourceAttributeSet ? SourceAttributeSet->GetSpeed() : 0.f;

		FPokemonMoveContactContext ContactContext;
		ContactContext.AttackingActor = SourceActor;
		ContactContext.DefendingActor = OtherActor;

		ContactContext.MoveActionTag = MoveActionTag;
		ContactContext.MoveStyleTag = FPokemonCombatGameplayTags::Get().Combat_MoveStyle_Projectile;
		ContactContext.MoveTypeTag = EffectiveMoveTypeTag;
		ContactContext.DamageResponseTag = DamageResponseTag;

		const FVector ProjectileContactPoint = Hit.bBlockingHit
			? FVector(Hit.ImpactPoint)
			: OtherActor->GetActorLocation();

		ContactContext.ContactPoint = ProjectileContactPoint;
		ContactContext.AttackDirection = ProjectileDirection;
		ContactContext.ImpactForce = ImpactForce + SourceOffenseStat;
		ContactContext.KnockbackForce = DamageEffectParams.KnockbackForceMagnitude;

		const float ProjectileSpeed = ProjectileMovementComponent ? ProjectileMovementComponent->Velocity.Size() : GetVelocity().Size();

		ContactContext.AttackerSpeed = FMath::Max(ProjectileSpeed, SourceSpeed);

		// Temporary until Pokemon weight/size data is wired in
		ContactContext.AttackerWeight = 1.f;
		ContactContext.DefenderWeight = 1.f;

		ContactContext.DefenderDefense = TargetDefenseStat;
		ContactContext.DefenderPoise = TargetDefenseStat * .25f;

		ContactContext.bWasCounterHit = false;
		ContactContext.bDefenderBraced = false;

		// Hold off on flying/airborne pokemon structure for now
		ContactContext.bDefenderAirborne = false;
		ContactContext.bAttackerAirborne = false;

		FPokemonImpactResolution ImpactResolution = DefenderResolver->ResolveImpact(ContactContext);

		ImpactResolution.AttackerImpulse *= AppliedImpulseScale;
		ImpactResolution.DefenderImpulse *= AppliedImpulseScale;

		DefenderResolver->ApplyImpactResolution(ContactContext, ImpactResolution);

		if (!ImpactResolution.bApplyDamage)
		{
			DamageEffectParams.BasedDamage = 0.f;
		}
		else
		{
			DamageEffectParams.BasedDamage *= ImpactResolution.DamageMultiplier;
		}

		DamageEffectParams.KnockbackForce = ImpactResolution.DefenderImpulse;

		UE_LOG(LogTemp, Display,
			TEXT("[ProjectileAttack] [ProjectileImpactParams] Projectile=%s Source=%s Target=%s Result=%s DamageAfter=%.2f Knockback=%s Direction=%s"),
			*GetNameSafe(this),
			*GetNameSafe(SourceActor),
			*GetNameSafe(OtherActor),
			*StaticEnum<EPokemonImpactResult>()->GetNameStringByValue(static_cast<int64>(ImpactResolution.ImpactResult)),
			DamageEffectParams.BasedDamage,
			*DamageEffectParams.KnockbackForce.ToString(),
			*ProjectileDirection.ToString()
		);
	}
	else
	{
		// Fallback for non-Pokemon targets or targets without an impact resolver.
		const bool bKnockback = FMath::RandRange(1, 100) < DamageEffectParams.KnockbackChance;
		if (bKnockback)
		{
			DamageEffectParams.KnockbackForce =
				ProjectileDirection * DamageEffectParams.KnockbackForceMagnitude;
		}
	}

	UPokemonAbilitySystemLibrary::ApplyDamageEffect(DamageEffectParams);
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

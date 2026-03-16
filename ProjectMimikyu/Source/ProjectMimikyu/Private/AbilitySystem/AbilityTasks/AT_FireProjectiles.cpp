// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/AT_FireProjectiles.h"
#include "Items/ProjectileAttack.h"
#include "Components/SphereComponent.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include <AbilitySystemBlueprintLibrary.h>
#include "AbilitySystemComponent.h"
#include <Kismet/KismetMathLibrary.h>
#include "EQS/Subsystems/ThreatFieldSubsystem.h"
#include <AbilitySystem/Abilities/ProjectileAbility.h>
#include <AbilitySystem/PokemonProjectileTagLibrary.h>
#include <EnvironmentQuery/EnvQueryManager.h>
#include <NavigationSystem.h>


UAT_FireProjectiles* UAT_FireProjectiles::InitializeTask(UAT_FireProjectiles* Task, const FProjectileBaseParams& Common)
{
	//Task->ProjectileClass = Common.ProjectileClass;
	//Task->DamageEffectClass = Common.DamageEffectClass;
	//Task->CategoryTags = Common.CategoryTags;
	//Task->SpawnLocation = Common.SpawnLocation;
	//Task->BaseRotation = Common.BaseRotation;
	//Task->DamageEffectContextHandle = Common.DamageEffectContextHandle;
	//Task->DamageEffectParams = Common.DamageEffectParams;
	//Task->SourceActor = Common.SourceActor;
	//Task->TargetLocation = Common.TargetLocation;
	//Task->ActivationId = Common.ActivationId;
	//Task->Modifiers = Common.Modifiers;
	//Task->TargetActor = Common.TargetActor;
	//Task->InitialSpeed = Common.InitialSpeed;
	Task->CommonParams = Common;
	return Task;
}

void UAT_FireProjectiles::SetParam(UEnvQueryInstanceBlueprintWrapper* Wrapper, const TCHAR* Name, float Value)
{
	if (Wrapper)
	{
		Wrapper->SetNamedParam(Name, Value);
	}
}

void UAT_FireProjectiles::SpawnTelegraph(const FVector& Location, float Radius)
{
	// Example: Spawn a warning ring decal at the given location and radius.
	// You can replace this with your own VFX logic.
#if WITH_EDITOR
							// Editor-only: Draw debug sphere for visualization
	DrawDebugSphere(GetWorld(), Location, Radius, 32, FColor::Yellow, false, 2.0f);
#else
							// TODO: Implement actual telegraph VFX spawning here (e.g., Niagara, Decal, etc.)
#endif
}

void UAT_FireProjectiles::OnEQSFinished(UEnvQueryInstanceBlueprintWrapper* Wrapper, EEnvQueryStatus::Type QueryStatus)
{
	if (QueryStatus != EEnvQueryStatus::Success) { EndTask(); return; }

	// 1) Pull + cache all landing points
	TArray<FVector> AllPoints;
	Wrapper->GetQueryResultsAsLocations(AllPoints);
	if (AllPoints.Num() == 0) { EndTask(); return; }

	// Respect NumProjectiles
	if (EnvDropParams.NumProjectiles > 0 && AllPoints.Num() > EnvDropParams.NumProjectiles)
	{
		AllPoints.SetNum(EnvDropParams.NumProjectiles,/*bAllowShrinking*/false);
	}
	EnvDropParams.CachedLandingPoints = AllPoints;


	// 2) For Each Wave, ask the Tag Library how many to take and fire them
	// Slice into waves (round Robin)
	const int32 Waves = FMath::Max(1, EnvDropParams.NumWaves);
	WavePoints.SetNum(Waves);
	const float WaveIntervals = FMath::Max(0.f, EnvDropParams.TimeBetweenWaves);

	for (int32 i = 0; i < AllPoints.Num(); ++i)
	{
		WavePoints[i % Waves].Add(AllPoints[i]);
	}

	ScheduledWaves.SetNum(Waves);

	const double Now = GetWorld()->GetTimeSeconds();
	for (int32 w = 0; w < Waves; ++w)
	{
		ScheduledWaves[w].Reserve(WavePoints[w].Num());

		for (const FVector& RawImpact : WavePoints[w])
		{
			FVector Impact = RawImpact;

			// Optional Clamp to NavMesh
			if (EnvDropParams.bClampToNavMesh)
			{
				Impact = ProjectToNavMesh(Impact);
			}
			else
			{
				Impact.Z = TraceToGroundZ(Impact, Impact.Z);
			}

			// Spawn location & (Optional) initial velocity via your tag library
			FTransform SpawnTransform;
			FVector InitialVelocity = FVector::ZeroVector;
			UPokemonProjectileTagLibrary::ComputeDropSpawn(EnvDropParams, Impact, SpawnTransform, InitialVelocity);

			// Travel time (constant-speed drop for now)
			double TravelTime = 0.0f;
			if (EnvDropParams.InitialSpeed > 0.f)
			{
				const float Dist = FVector::Dist(Impact, SpawnTransform.GetLocation());
				TravelTime = Dist / FMath::Max(1.f, EnvDropParams.InitialSpeed);
			}
		
			// 3a) Create FThreatEntry for scheduling and AI Visibility
			const double TelegraphAt = Now;
			const double ETA = TelegraphAt + TravelTime + EnvDropParams.WarningTime;
			const double ExpiresAt = ETA; // linger a bit after impact

			FThreatEntry NewEntry;
			NewEntry.OwnerASC = OwnerASC;
			NewEntry.Location = Impact;
			NewEntry.Instigator = CommonParams.SourceActor;
			NewEntry.ActivationId = CommonParams.ActivationId;
			NewEntry.ImpactRadius = EnvDropParams.ImpactAOERadius;
			NewEntry.TelegraphAt = TelegraphAt;
			NewEntry.ETA = ETA;
			NewEntry.ExpiresAt = ExpiresAt;

			ScheduledWaves[w].Add(NewEntry);

			// 3b) Publish to the subsystem so AI can query it
			// UThreatFieldSubsystem::RegisterThreat(ASC, Id, Loc, Radius, TelegraphAt, ETA, EndAt, Instigator)
			ThreatSubsystem->RegisterThreat(OwnerASC.Get(), CommonParams.ActivationId,
				NewEntry.Location, NewEntry.ImpactRadius, NewEntry.TelegraphAt,
				NewEntry.ETA, NewEntry.ExpiresAt, CommonParams.SourceActor); // publishes into its TMultiMap<ActivationId,FThreatEntry> bucket
            // (The subsystem will automatically prune expired entries in Tick.) :contentReference[oaicite:5]{index=5}
		}
	}

	// 4) Schedule Waves Start
	ScheduleWave(0);

	for (int32 i = 1; i < Waves; ++i)
	{
		GetWorld()->GetTimerManager().SetTimer(
			WaveTimerHandle,
			FTimerDelegate::CreateWeakLambda(this, [this, i]()
				{
					if ((!this || bCancelled)) return;
					ScheduleWave(i);
					if (i==ScheduledWaves.Num()-1)
					{
						// We’ll EndTask() after the last impact timer fires; or do it here if you prefer.
						//EndTask();
					}}),
			WaveIntervals * i,
			false);
	}

	if (Waves == 1)
	{
		// Single wave started; we’ll EndTask() after its last impact executes.
		//EndTask();
	}
}

float UAT_FireProjectiles::TraceToGroundZ(const FVector& XY, float FallBackZ) const
{
	const float StartZ = XY.Z + 5000.f;
	const float EndZ = XY.Z - 5000.f;

	FHitResult Hit;
	FCollisionQueryParams Params(SCENE_QUERY_STAT(TraceToGroundZ), false, CommonParams.SourceActor);

	if(GetWorld()->LineTraceSingleByChannel(Hit, FVector(XY.X, XY.Y, StartZ), FVector(XY.X, XY.Y, EndZ), ECC_Visibility, Params))
	{
		return Hit.ImpactPoint.Z;
	}
	return FallBackZ;
}

FVector UAT_FireProjectiles::ProjectToNavMesh(const FVector& InLocation) const
{
	const UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSys) return InLocation;

	FNavLocation OutLocation;
	if (NavSys->ProjectPointToNavigation(InLocation, OutLocation, FVector(200.f, 200.f, 1000.f)))
	{
		return OutLocation.Location;
	}
	return InLocation;
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
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);
	InitializeTask(MyObj, Common);

	MyObj->SpreadMode = EProjectileSpreadMode::Drop;
	MyObj->EnvDropParams = EnvDropParams;
	return MyObj;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireEnvironmentErupt(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FProjectileBaseParams& Common, const FEnvironmentDropParams& EnvDropParams)
{
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);
	InitializeTask(MyObj, Common);
	MyObj->bIsEruptMode = true;
	MyObj->SpreadMode = EProjectileSpreadMode::Erupt;
	MyObj->EnvDropParams = EnvDropParams;

	return MyObj;
}

UAT_FireProjectiles* UAT_FireProjectiles::FireBeam(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FProjectileBaseParams& Common, float BeamDuration)
{
	UAT_FireProjectiles* MyObj = NewAbilityTask<UAT_FireProjectiles>(OwningAbility, TaskInstanceName);
	InitializeTask(MyObj, Common);
	MyObj->SpreadMode = EProjectileSpreadMode::Beam;
	MyObj->BeamTime = BeamDuration;

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
	auto ProjectileClass = CommonParams.ProjectileClass;
	auto SourceActor = CommonParams.SourceActor;

	if (!ProjectileClass||!SourceActor) return;

	const UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(SourceActor);

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(CommonParams.SpawnLocation);
	SpawnTransform.SetRotation(NewRotation.Quaternion());

	AProjectileAttack* Projectile = GetWorld()->SpawnActorDeferred<AProjectileAttack>(
		ProjectileClass,
		SpawnTransform,
		SourceActor,
		Cast<APawn>(SourceActor),
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	SpawnProjectile(Projectile, SourceASC, SpawnTransform);
}

void UAT_FireProjectiles::SpawnProjectile(AProjectileAttack* Projectile, const UAbilitySystemComponent* SourceASC, FTransform& SpawnTransform)
{
	Projectile->GetSphereComponent()->IgnoreActorWhenMoving(CommonParams.SourceActor, true);
	auto DamageEffectContextHandle = CommonParams.DamageEffectContextHandle;

	DamageEffectContextHandle.AddSourceObject(Projectile);
	TArray<TWeakObjectPtr<AActor>> Actors;
	Actors.Add(Projectile);
	DamageEffectContextHandle.AddActors(Actors);

	const FGameplayEffectSpecHandle SpecHandle = SourceASC->MakeOutgoingSpec(CommonParams.DamageEffectClass, Ability->GetAbilityLevel(), DamageEffectContextHandle);
	
	Projectile->SetInitialSpeed(CommonParams.InitialSpeed);
	Projectile->SetProjectileGravity(CommonParams.ProjectileGravityScale);

	// Modifiers that effect the settings of the projectile directly
	auto Modifiers = CommonParams.Modifiers;
	if (Modifiers.bHasHoming) 
	{
		Projectile->EnableHoming(CommonParams.TargetActor, Modifiers.HomingParams);
	}
	if (Modifiers.bHasBounce) 
	{
		Projectile->EnableBounce(Modifiers.BounceParams);
	}
	if(Modifiers.bHasReflectable){}
	if(Modifiers.bHasMultiHit){}
	if(Modifiers.bHasCombustable){}

	Projectile->DamageEffectSpecHandle = SpecHandle;
	Projectile->DamageEffectParams = CommonParams.DamageEffectParams;
	Projectile->FinishSpawning(SpawnTransform);
}

void UAT_FireProjectiles::FireSequentialShot(int32 ShotIndex)
{
	FSequentialShotParams Params;
	Params.BaseRotation = CommonParams.BaseRotation;
	Params.StartLocation = CommonParams.SpawnLocation;
	Params.TargetLocation = CommonParams.TargetLocation;
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
		bHandled = CastChecked<UProjectileAbility>(Ability)->OverrideSequentialShotRotation(CommonParams.CategoryTags, Params, FinalRotation);
	}

	if(!bHandled)
	{
		// Need the proper tag container
		FinalRotation = UPokemonProjectileTagLibrary::ComputeSequentialShotRotation(CommonParams.CategoryTags, Params);
	}

	FireOneProjectile(FinalRotation);

}

void UAT_FireProjectiles::ScheduleWave(int32 WaveIndex)
{
	if (!ScheduledWaves.IsValidIndex(WaveIndex) || !OwnerASC.IsValid() || !ThreatSubsystem) return;

	// Decide how many to emit from this wave (allow tags to modify)
	int32 PointsThisWave = ScheduledWaves[WaveIndex].Num();
	{
		// Allow TagLibrary to modify count if you want
		FEnvironmentDropParams TempParams = EnvDropParams;
		TempParams.CachedLandingPoints.Reset(PointsThisWave);
		for(const FThreatEntry& Entry: ScheduledWaves[WaveIndex])
		{
			TempParams.CachedLandingPoints.Add(Entry.Location);
		}
		UPokemonProjectileTagLibrary::ComputeLandingPoints(CommonParams.CategoryTags, TempParams, WaveIndex, PointsThisWave);
		PointsThisWave = FMath::Clamp(PointsThisWave, 0, ScheduledWaves[WaveIndex].Num());
	}

	const double Now = GetWorld()->GetTimeSeconds();

	for (int32 i = 0; i < PointsThisWave; ++i)
	{
		const FThreatEntry& ThreatEntry = ScheduledWaves[WaveIndex][i];

		//Telegraph VFX (client-side warnign ring, etc) can be spawned here using ThreatEntry.Location and ThreatEntry.ImpactRadius
		SpawnTelegraph(ThreatEntry.Location, ThreatEntry.ImpactRadius);

		// Timer to execute the impact at ETA
		const float Delay = FMath::Max(0.f, float(ThreatEntry.ETA - Now));
		FTimerHandle ImpactTimerHandle;
		GetWorld()->GetTimerManager().SetTimer
		(
			ImpactTimerHandle,
			FTimerDelegate::CreateWeakLambda(this, [this, WaveIndex, i]()
				{
					if ((!this || bCancelled)) return;
					ReleaseSingleDropImpact(ScheduledWaves[WaveIndex][i]);
				}),
			Delay,
			false
		);
	}
}

void UAT_FireProjectiles::ReleaseSingleDropImpact(const FThreatEntry& ThreatEntry)
{
	auto ProjectileClass = CommonParams.ProjectileClass;
	auto SourceActor = CommonParams.SourceActor;
	if (!ProjectileClass || !SourceActor) return;

	const UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(SourceActor);
	if (!SourceASC) return;

	// Recompute spawn transform for robustness (or cache alongside the threat entry if you prefer)
	FTransform SpawnTransform;
	FVector InitialVelocity = FVector::ZeroVector;
	UPokemonProjectileTagLibrary::ComputeDropSpawn(EnvDropParams, ThreatEntry.Location, SpawnTransform, InitialVelocity);

	AProjectileAttack* NewProjectile = GetWorld()->SpawnActorDeferred<AProjectileAttack>(
		ProjectileClass,
		SpawnTransform,
		SourceActor,
		Cast<APawn>(SourceActor),
		ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);


	if (!NewProjectile) return;

	SpawnProjectile(NewProjectile, SourceASC, SpawnTransform);
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
	FireOneProjectile(CommonParams.BaseRotation);
	EndTask();
}

void UAT_FireProjectiles::HandleBurstBP_Implementation()
{
	for (int32 i = 0; i < NumOfProjectiles; i++)
	{
		float AngleOffset = (i - NumOfProjectiles / 2) * Spread;
		FRotator NewRotation = CommonParams.BaseRotation;
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
		FRotator NewRotation = CommonParams.BaseRotation;
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
	auto SourceActor = CommonParams.SourceActor;

	if (!SourceActor || !CommonParams.DamageEffectClass) { EndTask(); return; }

	const UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(SourceActor);
	if(!SourceActor) { EndTask(); return; }

	const FGameplayEffectSpecHandle SpecHandle = SourceASC->MakeOutgoingSpec(CommonParams.DamageEffectClass, Ability->GetAbilityLevel(), CommonParams.DamageEffectContextHandle);

	const float BeamRange = 2500.f;
	const float TickRate = .03f;
	const bool bPiercing = true;

	const double BeamEndTime = GetWorld()->GetTimeSeconds() + FMath::Max(0.f, BeamTime);

	GetWorld()->GetTimerManager().SetTimer
	(
		BeamTimerHandle,
		FTimerDelegate::CreateWeakLambda(this, [this, SpecHandle, BeamRange, bPiercing, BeamEndTime]()
			{
				if (!this || bCancelled) { EndTask(); return; }
				if (GetWorld()->GetTimeSeconds() >= BeamEndTime) { EndTask(); return; }

				const FVector Start = CommonParams.SpawnLocation;
				const FVector Dir = CommonParams.BaseRotation.Vector();
				const FVector End = Start + Dir * BeamRange;

				// (Optional) Debug / VFX

				// Trace + apply Damage
				FCollisionQueryParams Params;
				Params.AddIgnoredActor(CommonParams.SourceActor);
				TArray<FHitResult> Hits;

				if (bPiercing)
				{
					GetWorld()->LineTraceMultiByChannel(Hits, Start, End, ECC_Visibility, Params);
				}
				else
				{
					FHitResult Hit;
					if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
					{
						Hits.Add(Hit);
					}
				}

				for (const FHitResult& Hit : Hits)
				{
					if (AActor* Other = Hit.GetActor())
					{
						if (UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Other))
						{
							FDamageEffectParams DamageParams = CommonParams.DamageEffectParams;
							DamageParams.TargetAbilitySystemComponent = TargetASC;
							UPokemonAbilitySystemLibrary::ApplyDamageEffect(DamageParams);
						}
					}
				}
			}),
		TickRate,
		true
	);
}

void UAT_FireProjectiles::HandleEnvironmentalDropBP_Implementation()
{
	auto SourceActor = CommonParams.SourceActor;
	auto ActivationId = CommonParams.ActivationId;

	UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(SourceActor);
	if (!SourceASC) return;
	OwnerASC = SourceASC;
	ThreatSubsystem = SourceASC->GetWorld()->GetSubsystem<UThreatFieldSubsystem>();
	if (!ThreatSubsystem) return;

	ThreatSubsystem->RegisterAreaCenter(SourceASC, ActivationId, CommonParams.TargetLocation, EnvDropParams.AreaRadius);

	UEnvQueryInstanceBlueprintWrapper* Wrapper = UEnvQueryManager::RunEQSQuery(
		GetWorld(),
		EnvDropParams.DropPatternQuery,
		SourceActor,
		EEnvQueryRunMode::AllMatching,
		UEnvQueryInstanceBlueprintWrapper::StaticClass());

	if(Wrapper)
	{
		// Core
		SetParam(Wrapper, TEXT("ActivationId"), float(ActivationId));
		SetParam(Wrapper, TEXT("AreaRadius"), EnvDropParams.AreaRadius);
		SetParam(Wrapper, TEXT("LandingPattern"), float(int32(EnvDropParams.LandingPattern)));

		// Pattern knobs driven from your struct (use if your generator reads them)
		SetParam(Wrapper, TEXT("RingPointCount"), float(EnvDropParams.NumProjectiles));
		SetParam(Wrapper, TEXT("ScatterCount"), float(EnvDropParams.NumProjectiles));
		// Optional, if you later add: PatternYawDeg / MinSeparation / GridX / GridY / CellSize

		// Behavior (the task will read from EnvDropParams, these are here in case you drive generator/tests)
		SetParam(Wrapper, TEXT("Waves"), float(EnvDropParams.NumWaves));
		SetParam(Wrapper, TEXT("WaveInterval"), EnvDropParams.TimeBetweenWaves);
		SetParam(Wrapper, TEXT("WarnTime"), EnvDropParams.WarningTime);

		// Finish -> our handler
		Wrapper->GetOnQueryFinishedEvent().AddDynamic(this, &UAT_FireProjectiles::OnEQSFinished);
		return; // wait for callback
	}

	EndTask();
}


void UAT_FireProjectiles::HandleEnvironmentalEruptBP_Implementation()
{
}

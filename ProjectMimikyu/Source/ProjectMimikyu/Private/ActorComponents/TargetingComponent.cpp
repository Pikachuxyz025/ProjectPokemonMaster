// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/TargetingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Interfaces/TargetableInterface.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "Actors/LockOnReticleActor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UI/TrainerHUD.h"

// Sets default values for this component's properties
UTargetingComponent::UTargetingComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTargetingComponent::BeginPlay()
{
	Super::BeginPlay();
	UpdateAimMode();
}

void UTargetingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateFreeAimTrace();
	UpdateLockOnState(DeltaTime);
	UpdateAimMode();
	UpdateCrosshair(DeltaTime);
}


void UTargetingComponent::SetAimContext(EAimContext NewContext)
{
	CurrentAimContext = NewContext;
}

void UTargetingComponent::ToggleLockOn()
{
	if (IsLockedOn())
	{
		ClearLockOn();
		return;
	}

	TryLockOnToBestTarget();
}

bool UTargetingComponent::TryLockOnToBestTarget()
{
	AActor* BestTarget = FindBestLockOnTarget();
	if (!IsValid(BestTarget))
	{
		return false;
	}

	CurrentLockedTarget = BestTarget;
	CurrentLockInvalidTime = 0.f;
	UpdateAimMode();

	if(GetWorld())
	{
		if (!CurrentLockOnReticle.IsValid())
		{
			CurrentLockOnReticle = GetWorld()->SpawnActor<ALockOnReticleActor>(LockOnReticleActorClass);
		}
		ALockOnReticleActor* ReticleActor = CurrentLockOnReticle.Get();
		if(ReticleActor)
		{
			ReticleActor->LockOnTarget(BestTarget);
			if(ATrainerHUD* TrainerHUD=GetTrainerHUD())
			{
				TrainerHUD->RemoveCrosshairWidget();
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("LockOnReticleActor is not valid after spawning."));
		}
	}
	// TODO: Add Log with custom debugging system
	return true;
}

void UTargetingComponent::ClearLockOn()
{
	if(CurrentLockedTarget.IsValid())
	{
		// TODO: Add Log with custom debugging system
	}

	CurrentLockedTarget = nullptr;
	CurrentLockInvalidTime = 0.f;
	UpdateAimMode();
	
	if (ATrainerHUD* TrainerHUD = GetTrainerHUD())
	{
		TrainerHUD->RestoreCrosshairWidget();
	}
	if (!CurrentLockOnReticle.IsValid())
	{
		return;
	}
	ALockOnReticleActor* ReticleActor = CurrentLockOnReticle.Get();
	ReticleActor->UnlockTarget();
}

void UTargetingComponent::SwitchTargetLeft()
{
	AActor* NewTarget = FindSwitchTarget(false);
	if (IsValid(NewTarget))
	{
		CurrentLockedTarget = NewTarget;
		CurrentLockInvalidTime = 0.f;

		if (!CurrentLockOnReticle.IsValid())
		{
			return;
		}
		ALockOnReticleActor* ReticleActor = CurrentLockOnReticle.Get();
		ReticleActor->LockOnTarget(NewTarget);
	}
}

void UTargetingComponent::SwitchTargetRight()
{
	AActor* NewTarget = FindSwitchTarget(true);
	if (IsValid(NewTarget))
	{
		CurrentLockedTarget = NewTarget;
		CurrentLockInvalidTime = 0.f;

		if (!CurrentLockOnReticle.IsValid())
		{
			return;
		}
		ALockOnReticleActor* ReticleActor = CurrentLockOnReticle.Get();
		ReticleActor->LockOnTarget(NewTarget);
	}
}

void UTargetingComponent::BeginFocusAim()
{
	bFocusAimHeld = true;
}

void UTargetingComponent::EndFocusAim()
{
	bFocusAimHeld = false;
}

FAimData UTargetingComponent::BuildAimData() const
{
	FAimData AimData;
	AimData.AimMode = CurrentAimMode;
	AimData.AimContext = CurrentAimContext;
	AimData.AimContext = CurrentAimContext;
	AimData.AimWorldLocation = CachedAimLocation;
	AimData.AimDirection = CachedAimDirection;


	switch (CurrentAimMode)
	{
	case EPokemonAimMode::LockOn:
	{
		AimData.TargetActor = CurrentLockedTarget;
		AimData.AimWorldLocation = GetTargetAimPoint(CurrentLockedTarget.Get());
		AimData.AimDirection = (AimData.AimWorldLocation - GetOwner()->GetActorLocation()).GetSafeNormal();
		AimData.bHasValidTarget = true;
		AimData.bUsingAimAssist = false;
		return AimData;
	}

	case EPokemonAimMode::FreeAim:
	{
		AActor* CrosshairTarget = nullptr;
		FVector CrosshairAimLocation = CachedAimLocation;

		if (TryGetDirectCrosshairTarget(CrosshairTarget, CrosshairAimLocation))
		{
			AimData.TargetActor = CrosshairTarget;
			AimData.AimWorldLocation = CrosshairAimLocation;
			AimData.AimDirection = (CrosshairAimLocation - GetOwner()->GetActorLocation()).GetSafeNormal();
			AimData.bHasValidTarget = true;
			AimData.bUsingAimAssist = false;

			return AimData;
		}
		AimData.bHasValidTarget = false;
		AimData.bUsingAimAssist = false;
		return AimData;
	}
	default:
		break;
	}

	AActor* AimAssistTarget = nullptr;
	FVector AssistedAimLocation = FVector::ZeroVector;
	if (TryGetAimAssistTarget(AimAssistTarget, AssistedAimLocation))
	{
		AimData.TargetActor = AimAssistTarget;
		AimData.AimWorldLocation = AssistedAimLocation;
		AimData.AimDirection = (AssistedAimLocation - GetOwner()->GetActorLocation()).GetSafeNormal();
		AimData.bHasValidTarget = true;
		AimData.bUsingAimAssist = true;
		return AimData;
	}

	AimData.bHasValidTarget = false;
	AimData.bUsingAimAssist = false;
	return AimData;
}

bool UTargetingComponent::BuildProjectileAimData(const FVector& ProjectileSpawnLocation, float MaxProjectileSpeed, float ProjectileRadius, FAimData& OutAimData) const
{
	OutAimData = BuildAimData();

	FVector TossVelocity;
	const float OverrideGravityZ = 0.f; // uses the default gravity if left at 0

	const bool bHasSolution = UGameplayStatics::SuggestProjectileVelocity(
		this,
		TossVelocity,
		ProjectileSpawnLocation,
		OutAimData.AimWorldLocation,
		MaxProjectileSpeed,
		false, // bHighArc
		ProjectileRadius, // OverrideRadius
		OverrideGravityZ,
		ESuggestProjVelocityTraceOption::DoNotTrace
	);

	if (bHasSolution)
	{
		OutAimData.bHasProjectileSolution = true;
		OutAimData.ProjectileLaunchVelocity = TossVelocity;
		OutAimData.ProjectileLaunchSpeed = TossVelocity.Size();
		OutAimData.bProjectileAtMaxSpeed = false;
		return true;
	}

	FVector ViewLocation;
	FRotator ViewRotation;

	if(GetViewPoint(ViewLocation, ViewRotation))
	{
		OutAimData.bHasProjectileSolution = false;
		OutAimData.ProjectileLaunchVelocity = ViewRotation.Vector()*MaxProjectileSpeed;
		OutAimData.ProjectileLaunchSpeed = MaxProjectileSpeed;
		OutAimData.bProjectileAtMaxSpeed = true;
	}

	return false;
}

bool UTargetingComponent::IsLockTargetStillValid(AActor* Target) const
{
	if (!IsValid(Target))
	{
		return false;
	}

	if (!IsActorTargetable(Target, EPokemonAimMode::LockOn))
	{
		return false;
	}

	const float DistanceToTargetSquared =
		FVector::DistSquared(GetOwner()->GetActorLocation(), Target->GetActorLocation());

	if (DistanceToTargetSquared > FMath::Square(MaxLockOnDistance))
	{
		return false;
	}

	if (Target->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()))
	{
		if (ITargetableInterface::Execute_IsTargetObscured(Target))
		{
			return false;
		}
	}

	if (!HasLineOfSightToTarget(Target))
	{
		return false;
	}

	return true;
}

bool UTargetingComponent::TryGetAimAssistTarget(AActor*& OutTarget, FVector& OutAimLocation) const
{
	OutTarget = nullptr;
	OutAimLocation = CachedAimLocation;

	if(!bEnableAimAssist)
	{
		return false;
	}

	FVector ViewLocation;
	FRotator ViewRotation;
	if (!GetViewPoint(ViewLocation, ViewRotation))
	{
		return false;
	}

	const FVector ViewForward = ViewRotation.Vector();

	TArray<AActor*> CandidateTargets;
	GatherTargetCandidates(CandidateTargets,EPokemonAimMode::FreeAim);

	float BestScore = -FLT_MAX;
	AActor* BestTarget = nullptr;
	FVector BestTargetPoint = FVector::ZeroVector;

	for (AActor* Candidate : CandidateTargets)
	{
		if (!IsValid(Candidate))
		{
			continue;
		}

		const FVector TargetPoint = GetTargetAimPoint(Candidate);
		const FVector ToTarget = (TargetPoint - ViewLocation).GetSafeNormal();

		const float DotToTarget = FVector::DotProduct(ViewForward, ToTarget);
		if(DotToTarget<AimAssistConeDotThreshold)
			{
			continue;
		}

		const float DistanceToTargetSquared = FVector::DistSquared(ViewLocation, TargetPoint);
		if (DistanceToTargetSquared > FMath::Square(AimAssistMaxDistance))
		{
			continue;
		}

		if (!HasLineOfSightToTarget(Candidate))
		{
			continue;
		}
		const float DistanceScore = 1.f - FMath::Clamp(FMath::Sqrt(DistanceToTargetSquared) / AimAssistMaxDistance,0.f,1.f);

		const float Score = (DotToTarget * 0.7f) + (DistanceScore * .3f); // what are the 0.7f and 0.3f for? It adds up to 1. Is the DotToTarget suppose to account for 70% of the score while the DistanceScore accounts for 30%?
		if (Score > BestScore)
		{
			BestScore = Score;
			BestTarget = Candidate;
			BestTargetPoint = TargetPoint;
		}
	}

	if (!IsValid(BestTarget))
	{
		return false;
	}

	OutTarget = BestTarget;
	OutAimLocation = BestTargetPoint;

	return true;
}

bool UTargetingComponent::TryGetDirectCrosshairTarget(AActor*& OutTarget, FVector& OutAimLocation) const
{
	OutTarget = nullptr;
	OutAimLocation = CachedAimLocation;

	FHitResult Hit;
	if (!PerformAimTrace(Hit))
	{
		return false;
	}

	AActor* HitActor = Hit.GetActor();

	if (!IsValid(HitActor))
	{
		return false;
	}

	if (!IsActorTargetable(HitActor, EPokemonAimMode::FreeAim))
	{
		return false;
	}

	OutTarget = HitActor;
	OutAimLocation = Hit.ImpactPoint;

	return true;
}

void UTargetingComponent::UpdateAimMode()
{
	CurrentAimMode = CurrentLockedTarget.IsValid()
		? EPokemonAimMode::LockOn
		: EPokemonAimMode::FreeAim;
}

void UTargetingComponent::UpdateFreeAimTrace()
{
	FHitResult Hit;
	if (PerformAimTrace(Hit))
	{
		CachedAimLocation = Hit.ImpactPoint;
	}
	else
	{
		FVector ViewLocation;
		FRotator ViewRotation;
		if (GetViewPoint(ViewLocation, ViewRotation))
		{
			CachedAimLocation = ViewLocation + (ViewRotation.Vector() * FreeAimTraceDistance);
		}
	}

	FVector OwnerLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
	CachedAimDirection = (CachedAimLocation - OwnerLocation).GetSafeNormal();
}

void UTargetingComponent::UpdateLockOnState(float DeltaTime)
{
	if (!CurrentLockedTarget.IsValid())
	{
		CurrentLockInvalidTime = 0.f;
		return;
	}
	if (IsLockTargetStillValid(CurrentLockedTarget.Get()))
	{
		CurrentLockInvalidTime = 0.f;
		return;
	}

	CurrentLockInvalidTime += DeltaTime;
	if (CurrentLockInvalidTime >= LockOnBreakGracePeriod)
	{
		// TODO: Add Log with custom debugging system
		ClearLockOn();
	}
}

void UTargetingComponent::UpdateCrosshair(float DeltaTime)
{
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (!OwnerCharacter)
	{
		return;
	}

	UCharacterMovementComponent* MoveComp = OwnerCharacter->GetCharacterMovement();
	if (!MoveComp)
	{
		return;
	}

	// Velocity Factor
	const float MaxSpeed = OwnerCharacter->bIsCrouched ? MoveComp->MaxWalkSpeedCrouched : MoveComp->MaxWalkSpeed;

	const float CurrentSpeed = OwnerCharacter->GetVelocity().Size();

	CrosshairVelocityFactor = FMath::GetMappedRangeValueClamped(
		FVector2D(0.f, MaxSpeed),
		FVector2D(0.f, CrosshairMaxVelocitySpread),
		CurrentSpeed
	);

	// In-Air Factor
	if (MoveComp->IsFalling())
	{
		CrosshairInAirFactor = FMath::FInterpTo(
			CrosshairInAirFactor,
			CrosshairInAirSpreadAmount,
			DeltaTime,
			2.25f
		);
	}
	else
	{
		CrosshairInAirFactor = FMath::FInterpTo(
			CrosshairInAirFactor,
			0.f,
			DeltaTime,
			30.f
		);
	}

	// Aim Factor
	if (IsInFocusAim() || IsLockedOn())
	{
		CrosshairAimFactor = FMath::FInterpTo(
			CrosshairAimFactor,
			CrosshairAimReductionAmount,
			DeltaTime,
			30.f
		);

	}
	else
	{
		CrosshairAimFactor = FMath::FInterpTo(
			CrosshairAimFactor,
			0.f,
			DeltaTime,
			30.f
		);
	}

	// Target Factor
	const FAimData AimData = BuildAimData();

	const float TargetFactor = AimData.bHasValidTarget ? CrosshairTargetReductionAmount : 0.f;
	CrosshairTargetFactor = FMath::FInterpTo(
		CrosshairTargetFactor,
		TargetFactor,
		DeltaTime,
		20.f
	);

	CurrentCrosshairSpread =
		CrosshairBaseSpread
		+ CrosshairVelocityFactor
		+ CrosshairInAirFactor
		- CrosshairAimFactor
		- CrosshairTargetFactor;
	CurrentCrosshairSpread = FMath::Max(CurrentCrosshairSpread, 4.f);

	// Update Crosshair Display Data and update hud
	CrosshairDisplayData.Spread = CurrentCrosshairSpread;
	CrosshairDisplayData.Color = AimData.bHasValidTarget ? FLinearColor::Red: FLinearColor::White;
	CrosshairDisplayData.bVisible = true;
	CrosshairDisplayData.bHasTarget = AimData.bHasValidTarget;
	CrosshairDisplayData.AimMode = CurrentAimMode;
	CrosshairDisplayData.AimContext = CurrentAimContext;

	if(ATrainerHUD* TrainerHUD = GetTrainerHUD())
	{
		TrainerHUD->UpdateCrosshairDisplay(CrosshairDisplayData);
	}
}

bool UTargetingComponent::GetViewPoint(FVector& OutLocation, FRotator& OutRotation) const
{
	if (!GetOwner())
	{
		return false;
	}

	if (const APawn* OwnerPawn = Cast<APawn>(GetOwner()))
	{
		if (APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController()))
		{
			PC->GetPlayerViewPoint(OutLocation, OutRotation);
			return true;
		}
	}
	OutLocation = GetOwner()->GetActorLocation();
	OutRotation = GetOwner()->GetActorRotation();
	return true;
}

bool UTargetingComponent::PerformAimTrace(FHitResult& OutHit) const
{
	if (!GetWorld())
	{
		return false;
	}

	APlayerController* PC = nullptr;
	if (const APawn* OwnerPawn = Cast<APawn>(GetOwner()))
	{
		PC = Cast<APlayerController>(OwnerPawn->GetController());
	}

	if (!PC)
	{
		return false;
	}

	FVector2D ViewportSize;
	if (!GEngine || !GEngine->GameViewport)
	{
		return false;
	}

	GEngine->GameViewport->GetViewportSize(ViewportSize);

	const FVector2D CrosshairScreenLocation(ViewportSize.X * 0.5f, ViewportSize.Y * 0.5f);

	FVector CrosshairWorldLocation;
	FVector CrosshairWorldDirection;

	const bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(PC, CrosshairScreenLocation, CrosshairWorldLocation, CrosshairWorldDirection);

		if (!bScreenToWorld)
		{
			return false;
		}

	FVector Start = CrosshairWorldLocation;
	if (GetOwner())
	{
		const float DistanceToOwner = FVector::Distance(GetOwner()->GetActorLocation(), Start);
		Start += CrosshairWorldDirection * (DistanceToOwner + 100.f);
	}

	const FVector End = Start + (CrosshairWorldDirection * FreeAimTraceDistance);

	FCollisionQueryParams Params(SCENE_QUERY_STAT(TargetingAimTrace), false, GetOwner());

	const bool bHit = GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, AimTraceChannel, Params);

	if (!bHit)
	{
		OutHit.ImpactPoint = End;
	}
	//UE_LOG(LogTemp, Warning,
		//TEXT("[AimTrace] Start=(%.1f %.1f %.1f) End=(%.1f %.1f %.1f) Hit=%d Actor=%s Impact=(%.1f %.1f %.1f)"),
		//Start.X, Start.Y, Start.Z,
		//End.X, End.Y, End.Z,
		//bHit,
		//*GetNameSafe(OutHit.GetActor()),
		//OutHit.ImpactPoint.X, OutHit.ImpactPoint.Y, OutHit.ImpactPoint.Z
	//);
	// Draw line from owner character to crosshair hit location for debugging
	DrawDebugLine(GetWorld(), GetOwner()->GetActorLocation(), OutHit.ImpactPoint, FColor::Blue, false, 1.f, 0, 1.f);
	DrawDebugSphere(GetWorld(), OutHit.ImpactPoint, 10.f, 12, FColor::Blue
		, false, 1.f);
	return true;
}

void UTargetingComponent::GatherTargetCandidates(TArray<AActor*>& OutCandidates, EPokemonAimMode QueryAimMode) const
{
	OutCandidates.Reset();

	if(!GetWorld()||!GetOwner())
	{
		return;
	}

	TArray<AActor*> AllActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), AllActors);

	const FVector OwnerLocation = GetOwner()->GetActorLocation();
	const float MaxSearchDistanceSquared = FMath::Square(FMath::Max(LockOnSearchRadius, TargetSwitchSearchRadius));

	for (AActor* Actor : AllActors)
	{
		if(!IsValid(Actor)||Actor==GetOwner())
		{
			continue;
		}

		if(!IsActorTargetable(Actor,QueryAimMode))
		{
			continue;
		}

		if(!IsActorHostileOrRelevant(Actor))
		{
			continue;
		}

		const float DistanceSquared = FVector::DistSquared(OwnerLocation, Actor->GetActorLocation());
		if(DistanceSquared>MaxSearchDistanceSquared)
		{
			continue;
		}

		OutCandidates.Add(Actor);
	}
}

AActor* UTargetingComponent::FindBestLockOnTarget() const
{
	TArray<AActor*> Candidates;
	GatherTargetCandidates(Candidates,EPokemonAimMode::LockOn);

	float BestScore = -FLT_MAX;
	AActor* BestTarget = nullptr;

	for (AActor* Candidate : Candidates)
	{
		const float Score = ScoreTargetForLockOn(Candidate);
		if (Score > BestScore)
		{
			BestScore = Score;
			BestTarget = Candidate;
		}
	}
	return BestTarget;
}

AActor* UTargetingComponent::FindSwitchTarget(bool bSwitchRight) const
{
	if (!CurrentLockedTarget.IsValid())
	{
		return nullptr;
	}

	FVector ViewLocation;
	FRotator ViewRotation;

	if (!GetViewPoint(ViewLocation, ViewRotation))
	{
		return nullptr;
	}

	const FVector ViewRight = FRotationMatrix(ViewRotation).GetUnitAxis(EAxis::Y);
	const FVector CurrentTargetPoint = GetTargetAimPoint(CurrentLockedTarget.Get());

	TArray<AActor*> Candidates;
	GatherTargetCandidates(Candidates, EPokemonAimMode::LockOn);

	float BestScore = -FLT_MAX;
	AActor* BestTarget = nullptr;

	for (AActor* Candidate : Candidates)
	{
		if (!IsValid(Candidate) || Candidate == CurrentLockedTarget.Get())
		{
			continue;
		}

		if (!HasLineOfSightToTarget(Candidate))
		{
			continue;
		}


		const FVector CandidatePoint = GetTargetAimPoint(Candidate);
		const FVector OffsetFromCurrentTarget = CandidatePoint - CurrentTargetPoint;
		const float SideDot = FVector::DotProduct(ViewRight, OffsetFromCurrentTarget);

		if (bSwitchRight && SideDot < 0.f)
		{
			continue;
		}
		if (!bSwitchRight && SideDot > 0.f)
		{
			continue;
		}

		const float Score = ScoreTargetForLockOn(Candidate);
		if (Score > BestScore)
		{
			BestScore = Score;
			BestTarget = Candidate;
		}
	}
	return BestTarget;
}

float UTargetingComponent::ScoreTargetForLockOn(AActor* Candidate) const
{
	if (!IsValid(Candidate) || !GetOwner())
	{
		return -FLT_MAX;
	}

	FVector ViewLocation;
	FRotator ViewRotation;

	if(!GetViewPoint(ViewLocation, ViewRotation))
	{
		return -FLT_MAX;
	}

	if (!HasLineOfSightToTarget(Candidate))
	{
		return -FLT_MAX;
	}

	const FVector CandidatePoint = GetTargetAimPoint(Candidate);
	const FVector ToTarget = (CandidatePoint - ViewLocation).GetSafeNormal();
	const FVector ViewForward = ViewRotation.Vector();

	const float DotScore = FVector::DotProduct(ViewForward, ToTarget);
	if (DotScore <= 0.f)
	{
		return -FLT_MAX;
}

	const float Distance = FVector::Distance(GetOwner()->GetActorLocation(),Candidate->GetActorLocation());
	if(Distance>MaxLockOnDistance)
		{
		return -FLT_MAX;
	}

	const float DistanceScore = 1.f - FMath::Clamp(Distance / MaxLockOnDistance, 0.f, 1.f);

	float PriorityScore = 0.f;
	if (Candidate->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()))
	{
		PriorityScore = ITargetableInterface::Execute_GetTargetPriorityScore(Candidate);
	}

	return (DotScore * LockScoreAlignmentWeight) + (DistanceScore * LockScoreDistanceWeight) + PriorityScore;
}

bool UTargetingComponent::HasLineOfSightToTarget(AActor* Target) const
{
	if (!IsValid(Target) || !GetWorld())
	{
		return false;
	}

	FVector ViewLocation;
	FRotator ViewRotation;
	if (!GetViewPoint(ViewLocation, ViewRotation))
	{
		return false;
	}

	const FVector TargetPoint = GetTargetAimPoint(Target);

	FHitResult Hit;
	FCollisionQueryParams Params(SCENE_QUERY_STAT(TargetingLOS), false, GetOwner());

	const bool bHit = GetWorld()->LineTraceSingleByChannel(
		Hit,
		ViewLocation,
		TargetPoint,
		ECC_Visibility,
		Params
	);

	if (!bHit)
	{
		return true;
	}

	AActor* HitActor = Hit.GetActor();

	if (HitActor == Target || HitActor->IsAttachedTo(Target))
	{
		return true;
	}
	return false;
}

FVector UTargetingComponent::GetTargetAimPoint(AActor* Target) const
{
	if(!IsValid(Target))
	{
		return FVector::ZeroVector;
	}

	if (Target->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()))
	{
		return ITargetableInterface::Execute_GetTargetAimPoint(Target);
	}
	return Target->GetActorLocation();
}

bool UTargetingComponent::IsActorTargetable(AActor* Target, EPokemonAimMode QueryAimMode) const
{
	if (!IsValid(Target))
	{
		return false;
	}

	if (!Target->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()))
	{
		return false;
	}

	if (!ITargetableInterface::Execute_IsTargetable(Target))
	{
		return false;
	}

	if (ITargetableInterface::Execute_IsFaintedForTargeting(Target))
	{
		return false;
	}

	if (ITargetableInterface::Execute_IsTargetHidden(Target))
	{
		return false;
	}

	switch (QueryAimMode)
	{
	case EPokemonAimMode::LockOn:
		return ITargetableInterface::Execute_CanBeLockOnTargeted(Target, CurrentAimContext);
	case EPokemonAimMode::FreeAim:
		return ITargetableInterface::Execute_CanBeFreeAimTargeted(Target, CurrentAimContext);
	default:
		// For general searches, allow either style if that actor is targetable
		return true;
	}
}

bool UTargetingComponent::IsActorHostileOrRelevant(AActor* Target) const
{
	if (!IsValid(Target)||!GetOwner())
	{
		return false;
	}

	if (!Target->GetClass()->ImplementsInterface(UTargetableInterface::StaticClass()))
	{
		return false;
	}

	switch (CurrentAimContext)
	{
		case EAimContext::Combat:
		return ITargetableInterface::Execute_IsHostileToActor(Target, GetOwner());
		
		case EAimContext::Capture:
			return ITargetableInterface::Execute_IsCatchableTarget(Target);

		case EAimContext::Interaction:
			return ITargetableInterface::Execute_IsInteractableTarget(Target);

		case EAimContext::CommandMove:
			// for now, treated like combat
			return ITargetableInterface::Execute_IsHostileToActor(Target, GetOwner());

			default:
				return false;
	}
}

ATrainerHUD* UTargetingComponent::GetTrainerHUD()
{
	if (OwnerTrainerHUD)
		return OwnerTrainerHUD;

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (!OwnerPawn)
	{
		return nullptr;
	}
	if (APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController()))
	{
		if (OwnerTrainerHUD = Cast<ATrainerHUD>(PC->GetHUD()))
		{
			return OwnerTrainerHUD;
		}
	}
	return nullptr;
}

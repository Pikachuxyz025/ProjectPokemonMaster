// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "ActorComponents/PokemonImpactResolverComponent.h"
#include "ActorComponents/PokemonCommandComponent.h"
#include "ActorComponents/PokemonStaminaComponent.h"
#include "ActorComponents/MovesetComponent.h"
#include "ActorComponents/PokemonLandingOrientationComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"

#include "Engine/World.h"

#include "TimerManager.h"

#include "DataAssets/PokemonMoveDataAsset.h"
#include "Characters/Pokemon_Parent.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/AbilityTasks/AT_TickTask.h"
#include "AbilitySystemBlueprintLibrary.h"

FDamageEffectParams UPokemonDamageGameplayAbilities::MakeDamageEffectParamsFromClassDefaults(AActor* TargetActor) const
{
	FDamageEffectParams Params;

	AActor* SourceAvatar = GetAvatarActorFromActorInfo();
	UAbilitySystemComponent* SourceASC = GetAbilitySystemComponentFromActorInfo();
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);

	Params.WorldContextObject = SourceAvatar;
	Params.DamageGameplayEffectClass = DamageEffectClass;
	Params.SourceAbilitySystemComponent = SourceASC;
	Params.TargetAbilitySystemComponent = TargetASC;
	Params.BasedDamage = Damage;
	Params.AbilityLevel = GetAbilityLevel();
	Params.MoveTypeTag = MoveTypeTag;
	Params.DebuffChance = DebuffChance;
	Params.DebuffFrequency = DebuffFrequency;
	Params.DebuffDuration = DebuffDuration;
	Params.DebuffDamage = DebuffDamage;
	Params.DeathImpulseMagnitude = DeathImpulseMagnitude;
	Params.KnockbackForceMagnitude = KnockbackForceMagnitude;
	Params.KnockbackChance = KnockbackChance;

	if (!IsValid(SourceAvatar))
	{
		UE_LOG(LogTemp, Error, TEXT("[PokemonDamageGameplayAbilities] MakeDamageEffectParams failed: SourceAvatar is invalid on %s."), *GetNameSafe(this));
		return Params;
	}

	if (!SourceASC)
	{
		UE_LOG(LogTemp, Error, TEXT("[PokemonDamageGameplayAbilities] MakeDamageEffectParams failed: SourceASC is null on %s."), *GetNameSafe(this));
		return Params;
	}

	if (!IsValid(TargetActor))
	{
		UE_LOG(LogTemp, Error, TEXT("[PokemonDamageGameplayAbilities] MakeDamageEffectParams failed: TargetActor is invalid on %s."), *GetNameSafe(this));
		return Params;
	}

	if (!TargetASC)
	{
		UE_LOG(LogTemp, Error, TEXT("[PokemonDamageGameplayAbilities] MakeDamageEffectParams failed: TargetASC is null. Target=%s"), *GetNameSafe(TargetActor));
		return Params;
	}

	if (!DamageEffectClass)
	{
		UE_LOG(LogTemp, Error, TEXT("[PokemonDamageGameplayAbilities] MakeDamageEffectParams failed: DamageEffectClass is null on %s."), *GetNameSafe(this));
		return Params;
	}

	FRotator Rotation = (TargetActor->GetActorLocation() - SourceAvatar->GetActorLocation()).Rotation();
	Rotation.Pitch = 45.f;

	const FVector ToTarget = Rotation.Vector();

	Params.DeathImpulse = ToTarget * DeathImpulseMagnitude;
	Params.KnockbackForce = ToTarget * KnockbackForceMagnitude;

	TScriptInterface<IPokemonCombatInterface> TargetPokemon = TargetActor;
	if (TargetPokemon)
	{
		Params.TypeMultiplier = TargetPokemon->GetTypeMatchup(MoveElementalType);
	}

	return Params;
}

void UPokemonDamageGameplayAbilities::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	StopAirborneWhiffRecovery();

	Super::EndAbility(Handle,
		ActorInfo,
		ActivationInfo,
		bReplicateEndAbility,
		bWasCancelled);
}


bool UPokemonDamageGameplayAbilities::BeginAirborneWhiffRecovery()
{
	APokemon_Parent* Pokemon = GetAvatarPokemon();

	if (!Pokemon || !Pokemon->HasAuthority() || !IsActive()||bAirborneRecoveryActive)
	{
		return false;
	}

	const FGuid CommandId = GetSequencedCommandId();

	UPokemonCommandComponent* Command =Pokemon->GetCommandComponent();

	UCharacterMovementComponent* Movement =Pokemon->GetCharacterMovement();

	if (!Command || !Movement ||!Movement->IsFalling() ||
		!Command->IsSequencedCommand(CommandId) ||
		LastReportedWhiffCommandId != CommandId ||
		!bLastWhiffRecoverable)
	{
		return false;
	}

	UWorld* World = Pokemon->GetWorld();
	if (!World)
	{
		return false;
	}

	RecoveryPokemon = Pokemon;
	RecoveryCommandId = CommandId;

	LockedRecoveryYaw = Pokemon->GetActorRotation().Yaw;

	bSavedControllerYaw = Pokemon->bUseControllerRotationYaw;
	bSavedOrientToMovement = Movement->bOrientRotationToMovement;
	bSavedControllerDesiredRotation = Movement->bUseControllerDesiredRotation;

	Pokemon->bUseControllerRotationYaw = false;
	Movement->bOrientRotationToMovement = false;
	Movement->bUseControllerDesiredRotation = false; 

	bOrientationUnlocked = false;
	bAirborneRecoveryActive = true;

	RecoveryElapsedTime = 0.f;

	AirborneRecoveryTickTask =
		UAT_TickTask::CreateTickTaskNode(
			this,
			TEXT("AirborneWhiffRecovery"));

	if (!AirborneRecoveryTickTask)
	{
		StopAirborneWhiffRecovery();
		return false;
	}

	UPokemonLandingOrientationComponent* Landing = Pokemon->GetLandingOrientationComponent();

	if (!Landing || !Landing->ArmWhiffFacing(CommandId, Command->GetCommandTarget()))
	{
		StopAirborneWhiffRecovery();
		return false;
	}

	AirborneRecoveryTickTask->OnTick.AddDynamic(this, &ThisClass::TickAirborneWhiffRecovery);

	AirborneRecoveryTickTask->ReadyForActivation();

	UE_LOG(LogTemp, Display,
		TEXT("[AirborneRecovery] Start | CommandId=%s | Yaw=%.1f"),
		*CommandId.ToString(),
		LockedRecoveryYaw);

	return true;
}

bool UPokemonDamageGameplayAbilities::ConfirmAirborneMissAtActiveWindowEnd()
{
	APokemon_Parent* Pokemon = GetAvatarPokemon();

	if (!Pokemon || !Pokemon->HasAuthority() || !IsActive())
	{
		return false;
	}

	UPokemonCommandComponent* Command = Pokemon->GetCommandComponent();

	const FGuid CommandId = GetSequencedCommandId();

	if (!Command || !Command->IsSequencedCommand(CommandId)
		|| Command->HasSequencedContact(CommandId) || LastReportedWhiffCommandId == CommandId)
	{
		return false;
	}

	UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement();

	if (!Movement || !Movement->IsFalling())
	{
		return false;
	}

	// At this point, the Blueprint must have completed
	// the entire attack contact window
	LastReportedWhiffCommandId = CommandId;

	// Prototype floor prediction.
	// This is advisory; actual OnLanded remains authoritative.

	const FVector Start = Movement->GetActorFeetLocation() + FVector(0.f, 0.f, 5.f);

	const FVector End = Start - FVector(0.f, 0.f, 2500.f);

	FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(PokemonAirborneMissLanding), false);

	QueryParams.AddIgnoredActor(Pokemon);

	FHitResult GroundHit;

	const bool bTraceHit = Pokemon->GetWorld()->LineTraceSingleByChannel(GroundHit, Start, End, ECC_Visibility, QueryParams);

	const bool bGroundFound = bTraceHit && Movement->IsWalkable(GroundHit);

	float EstimatedTimeToLand = -01.f;

	if (bGroundFound)
	{
		const float Height = FMath::Max(0.f, Movement->GetActorFeetLocation().Z - GroundHit.ImpactPoint.Z);

		const float VerticalVelocity = Movement->Velocity.Z;

		const float Gravity = FMath::Max(1.f, -Movement->GetGravityZ());

		// Height = Vz * t -0.5 * g * t^2
		// Solve for the future landing time t.

		EstimatedTimeToLand = (VerticalVelocity
			+ FMath::Sqrt(FMath::Square(VerticalVelocity)
				+ 2.f * Gravity * Height)) / Gravity; // t = (Vz + sqrt(Vz^2 + 2 * g * h)) / g
	}

	const float MinimumUsefulRecoveryTime = 0.1f;

	const float TimeUntilOrientationAllowed = PrototypeOrientationWindowDelay + MinimumUsefulRecoveryTime;

	const bool bMayEnterAirborneRecovery = bCanRecoverMidair
		&& (!bGroundFound || EstimatedTimeToLand > TimeUntilOrientationAllowed);

	bLastWhiffRecoverable = bMayEnterAirborneRecovery;

	UE_LOG(LogTemp, Display, TEXT(
		"[AirborneMiss] "
		"CommandId=%s | "
		"Pokemon=%s | "
		"CanRecoverMidair=%d | "
		"GroundFound=%d | "
		"EstimatedLanding=%.3f | "
		"RecoveryFeasible=%d | "
		"Velocity=%s"
	),
		*CommandId.ToString(),
		*GetNameSafe(Pokemon),
		static_cast<int32>(bCanRecoverMidair),
		static_cast<int32>(bGroundFound),
		EstimatedTimeToLand,
		static_cast<int32>(bMayEnterAirborneRecovery),
		*Movement->Velocity.ToCompactString()
	);

	OnAirborneWhiffConfirmed(bMayEnterAirborneRecovery, bGroundFound, EstimatedTimeToLand);

	return true;
}

float UPokemonDamageGameplayAbilities::GetPrimaryExecutionLeadTimeForPlanning() const
{
	if (bUseFallbackMoveTimingForExecutionLeadTime)
	{
		return FMath::Max(0.f,MoveTimingSequence.AnticipationDuration);
	}

	return FMath::Max(0.f,AirborneExecutionProfile.ExecutionLeadTime);
}

FPokemonAirborneExecutionProfile UPokemonDamageGameplayAbilities::ResolveAirborneExecutionProfileForPlanning() const
{
	FPokemonAirborneExecutionProfile ResolvedProfile = AirborneExecutionProfile;

	if (!ResolvedProfile.IsEnabled())
	{
		return ResolvedProfile;
	}

	ResolvedProfile.ExecutionLeadTime = GetPrimaryExecutionLeadTimeForPlanning();

	return ResolvedProfile;
}


FDamageEffectParams UPokemonDamageGameplayAbilities::ResolveImpactAndModifyDamageParams(AActor* TargetActor, FDamageEffectParams DamageEffectParams, FPokemonImpactResolution& OutImpactResolution)
{
	AActor* Attacker = GetAvatarActorFromActorInfo();

	if (!Attacker || !TargetActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("ResolveImpactAndModifyDamageParams failed: missing attacker or target."));
		return DamageEffectParams;
	}

	UPokemonImpactResolverComponent* DefenderResolver =
		TargetActor->FindComponentByClass<UPokemonImpactResolverComponent>();

	if (!DefenderResolver)
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("ResolveImpactAndModifyDamageParams failed: %s has no PokemonImpactResolverComponent."),
			*GetNameSafe(TargetActor)
		);

		return DamageEffectParams;
	}

	const UPokemonBaseAttributeSet* SourceAttributeSet = nullptr;
	const UPokemonBaseAttributeSet* TargetAttributeSet = nullptr;

	if (DamageEffectParams.SourceAbilitySystemComponent)
	{
		SourceAttributeSet = DamageEffectParams.SourceAbilitySystemComponent->GetSet<UPokemonBaseAttributeSet>();
	}

	if (DamageEffectParams.TargetAbilitySystemComponent)
	{
		TargetAttributeSet = DamageEffectParams.TargetAbilitySystemComponent->GetSet<UPokemonBaseAttributeSet>();
	}

	const FPokemonGameplayTags& GameplayTags = FPokemonGameplayTags::Get();

	const FGameplayTag EffectiveMoveTypeTag = MoveTypeTag.IsValid() ? MoveTypeTag : DamageEffectParams.MoveTypeTag;

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

	FVector AttackDirection = TargetActor->GetActorLocation() - Attacker->GetActorLocation();

	if (AttackDirection.IsNearlyZero())
	{
		AttackDirection = Attacker->GetActorForwardVector();
	}

	AttackDirection = AttackDirection.GetSafeNormal();

	UE_LOG(LogTemp, Display,
		TEXT("[ImpactParams] Move=%s SourceAttack=%.2f SourceSpeed=%.2f TargetDefense=%.2f ImpactForce=%.2f DamageBefore=%.2f"),
		*GetNameSafe(this),
		SourceOffenseStat,
		SourceSpeed,
		TargetDefenseStat,
		ImpactForce,
		DamageEffectParams.BasedDamage
	);

	FPokemonMoveContactContext ContactContext;
	ContactContext.AttackingActor = Attacker;
	ContactContext.DefendingActor = TargetActor;

	ContactContext.MoveActionTag = MoveActionTag;
	ContactContext.MoveTypeTag = MoveTypeTag;
	ContactContext.DamageResponseTag = DamageResponseTag;

	ContactContext.ContactPoint = TargetActor->GetActorLocation();
	ContactContext.AttackDirection = AttackDirection;

	ContactContext.Damage = DamageEffectParams.BasedDamage;
	ContactContext.ImpactForce = ImpactForce;
	ContactContext.KnockbackForce = KnockbackForceMagnitude;

	ContactContext.AttackerSpeed = FMath::Max(Attacker->GetVelocity().Size(), SourceSpeed);

	// Temporary until we add size/weight data from PokemonDataAsset.
	ContactContext.AttackerWeight = 1.f;
	ContactContext.DefenderWeight = 1.f;

	// First stat-driven pass.
	ContactContext.ImpactForce = ImpactForce + SourceOffenseStat;
	ContactContext.DefenderDefense = TargetDefenseStat;

	// Temporary poise formula.
	// Later this should become its own stat or data-driven value.
	ContactContext.DefenderPoise = TargetDefenseStat * 0.25f;

	ContactContext.bWasCounterHit = false;
	ContactContext.bDefenderBraced = false
		;
	ContactContext.bDefenderAirborne = false;
	
	const ACharacter* AttackingCharacter = Cast<ACharacter>(Attacker);

	const UCharacterMovementComponent* AttackerMovement = AttackingCharacter 
		? AttackingCharacter->GetCharacterMovement() : nullptr;

	ContactContext.bAttackerAirborne = AttackerMovement && AttackerMovement->IsFalling();

	OutImpactResolution = DefenderResolver->ResolveImpact(ContactContext);
	// Real direct contact has been resolved. Latch before ApplyImpactResolution's
	// public callbacks can synchronously end the ability; damage/recovery still proceed normally.
	if (MoveActionTag.MatchesTagExact(GameplayTags.PokemonMoves_MoveAction_Melee)
		&& OutImpactResolution.ImpactResult != EPokemonImpactResult::None)
	{
		if (UPokemonCommandComponent* Command = Attacker->FindComponentByClass<UPokemonCommandComponent>())
		{
			Command->NotifySequencedContact(this, GetSequencedCommandId());
		}
	}

	OutImpactResolution.AttackerImpulse *= AppliedImpulseScale;
	OutImpactResolution.DefenderImpulse *= AppliedImpulseScale;

	DefenderResolver->ApplyImpactResolution(ContactContext, OutImpactResolution);

	if (!OutImpactResolution.bApplyDamage)
	{
		DamageEffectParams.BasedDamage = 0.f;
	}
	else
	{
		DamageEffectParams.BasedDamage *= OutImpactResolution.DamageMultiplier;
	}

	DamageEffectParams.KnockbackForce = OutImpactResolution.DefenderImpulse;
	

	UE_LOG(LogTemp, Display,
		TEXT("[ImpactParams] Result=%s DamageMultiplier=%.2f DamageAfter=%.2f Knockback=%s"),
		*StaticEnum<EPokemonImpactResult>()->GetNameStringByValue(static_cast<int64>(OutImpactResolution.ImpactResult)),
		OutImpactResolution.DamageMultiplier,
		DamageEffectParams.BasedDamage,
		*DamageEffectParams.KnockbackForce.ToString()
	);

	return DamageEffectParams;
}

TArray<EDirectionPoint> UPokemonDamageGameplayAbilities::GetKeySequenceFromTag(const FGameplayTag& AbilityTag, bool bLogNotFound) const
{
	for (const FPokemonInputInfo Info : UpgradeList)
	{
		if (Info.PokemonUpgradeTag.MatchesTagExact(AbilityTag))
		{
			return Info.KeyDirectionSequence;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find info for AbilityTag [%s] on Gameplay Ability [%s]"), *AbilityTag.ToString(), *GetNameSafe(this));
	}
	return TArray<EDirectionPoint>();
}

void UPokemonDamageGameplayAbilities::ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	if (!ActorInfo || !ActorInfo->AvatarActor.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("ApplyCost failed: ActorInfo or AvatarActor is null for [%s]."), *GetNameSafe(this));
		return;
	}

	APokemon_Parent* Pokemon = Cast<APokemon_Parent>(ActorInfo->AvatarActor.Get());

	if (!Pokemon || !Pokemon->HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("ApplyCost failed: Pokemon is null or does not have authority for [%s]."), *GetNameSafe(this));
		return;
	}

	UPokemonMoveDataAsset* MoveData = Cast<UPokemonMoveDataAsset>(GetSourceObject(Handle, ActorInfo));

	if (!MoveData)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonPP] ApplyCost failed: SourceObject is not a PokemonMoveDataAsset | Ability=%s"), *GetNameSafe(this));
		return;
	}

	UPokemonStaminaComponent* StaminaComponent =Pokemon->GetStaminaComponent();

	if (!StaminaComponent)
	{
		UE_LOG(LogTemp, Error, TEXT(
			"[PokemonStamina] ApplyCost failed: "
			"StaminaComponent missing | Pokemon=%s | Move=%s"
		),
			*GetNameSafe(Pokemon),
			*MoveData->MoveName.ToString()
		);

		return;
	}

	UMovesetComponent* MovesetComponent = Pokemon->GetMovesetComponent();

	if (!MovesetComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("ApplyCost failed: MovesetComponent is null for [%s]."), *GetNameSafe(this));
		return;
	}

	if (!MovesetComponent->ConsumePowerPoint(MoveData))
	{
		UE_LOG(LogTemp, Warning, TEXT(
			"[PokemonPP] ApplyCost failed | "
			"Pokemon=%s | Move=%s"
		),
			*GetNameSafe(Pokemon),
			*MoveData->MoveName.ToString()
		);
	}

	const float StaminaCost = FMath::Max(0.f, MoveData->BaseStaminaCost);

	if (!StaminaComponent->TrySpendStamina(StaminaCost))
	{
		UE_LOG(LogTemp,Error,TEXT(
				"[PokemonStamina] Unexpected spend failure after "
				"CheckCost | Pokemon=%s | Move=%s | Cost=%.1f"
			),
			*GetNameSafe(Pokemon),
			*MoveData->MoveName.ToString(),
			StaminaCost
		);

		return;
	}	
}

void UPokemonDamageGameplayAbilities::ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	UGameplayEffect* CooldownGE = GetCooldownGameplayEffect();
	static const FGameplayTag CooldownRootTag = FPokemonGameplayTags::Get().Cooldown_InputTag;

	if (const FGameplayAbilitySpec* Spec = GetCurrentAbilitySpec())
	{
		for (const FGameplayTag& Tag : Spec->GetDynamicSpecSourceTags())
		{
			if (Tag.MatchesTag(CooldownRootTag))
			{
				CooldownTag = Tag;
				break;
			}
		}
	}

	if (CooldownGE)
	{
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CooldownGE->GetClass(), GetAbilityLevel());
		SpecHandle.Data.Get()->SetSetByCallerMagnitude(CooldownRootTag, CooldownTime);
		SpecHandle.Data.Get()->DynamicGrantedTags.AddTag(CooldownTag);
		ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, SpecHandle);
	}
}

bool UPokemonDamageGameplayAbilities::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	return true;
}

bool UPokemonDamageGameplayAbilities::CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!ActorInfo || !ActorInfo->AbilitySystemComponent.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDamageGameplayAbilities] CheckCost failed: ActorInfo or AbilitySystemComponent is null on [%s]."), *GetNameSafe(this));
		return false;
	}

	const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(ActorInfo->AvatarActor.Get());

	if (!Pokemon)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDamageGameplayAbilities] CheckCost failed: AvatarActor is not a Pokemon_Parent on [%s]."), *GetNameSafe(this));
		return false;
	}

	const UPokemonMoveDataAsset* MoveData = Cast<UPokemonMoveDataAsset>(GetSourceObject(Handle, ActorInfo));

	if (!MoveData)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDamageGameplayAbilities] CheckCost failed: MoveData is null on [%s]."), *GetNameSafe(this));
		return false;
	}

	const UMovesetComponent* MovesetComponent = Pokemon->GetMovesetComponent();
	if (!MovesetComponent	)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDamageGameplayAbilities] CheckCost failed: MovesetComponent is null on [%s]."), *GetNameSafe(this));
		return false;
	}

	if (!MovesetComponent->CanUseMove(MoveData))
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDamageGameplayAbilities] CheckCost failed: MovesetComponent cannot use move [%s] on [%s]."), *GetNameSafe(MoveData), *GetNameSafe(this));
		return false;
	}
	
	const UPokemonStaminaComponent* StaminaComponent = Pokemon->GetStaminaComponent();
	if (!StaminaComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDamageGameplayAbilities] CheckCost failed: StaminaComponent is null on [%s]."), *GetNameSafe(this));
		return false;
	}

	const float StaminaCost = FMath::Max(0.f, MoveData->BaseStaminaCost);

	if (!StaminaComponent->CanSpendStamina(StaminaCost))
	{
		UE_LOG(LogTemp, Display, TEXT(
			"[PokemonStamina] Move rejected: insufficient stamina | "
			"Pokemon=%s | Move=%s | Required=%.1f | Current=%.1f"
		),
			*GetNameSafe(Pokemon),
			*MoveData->MoveName.ToString(),
			StaminaCost,
			StaminaComponent->GetStamina()
		);
		return false;
	}

	return true;
}

void UPokemonDamageGameplayAbilities::TickAirborneWhiffRecovery(float DeltaTime)
{
	RecoveryElapsedTime += FMath::Max(0.f, DeltaTime);

	const float Elapsed = RecoveryElapsedTime;

	APokemon_Parent* Pokemon = RecoveryPokemon.Get();

	if (!bAirborneRecoveryActive || !Pokemon || !IsActive())
	{
		StopAirborneWhiffRecovery();
		return;
	}

	UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement();

	UPokemonCommandComponent* Command = Pokemon->GetCommandComponent();

	if (!Movement || !Command ||
		!Command->IsSequencedCommand(RecoveryCommandId))
	{
		StopAirborneWhiffRecovery();
		return;
	}

    UWorld* World = Pokemon->GetWorld();
    if (!World)
    {
        StopAirborneWhiffRecovery();
        return;
    }

	if(!Movement->IsFalling())
	{
		FinishAirborneWhiffRecovery(TEXT("LandedEarly"));
		return;
	}

	FRotator Rotation = Pokemon->GetActorRotation();

	if (Elapsed < PrototypeOrientationWindowDelay)
	{
		Rotation.Yaw = LockedRecoveryYaw;
		Pokemon->SetActorRotation(Rotation);
		return;
	}

	if (!bOrientationUnlocked)
	{
		bOrientationUnlocked = true;

		UE_LOG(LogTemp, Display,
			TEXT("[AirborneRecovery] OrientationUnlocked | CommandId=%s"),
			*RecoveryCommandId.ToString());
	}

	FVector TargetLocation;

	if (Command->ResolveCurrentCommandTargetLocation(TargetLocation))
	{
		FVector ToTarget = TargetLocation - Pokemon->GetActorLocation();

		ToTarget.Z = 0.f;

		if (!ToTarget.IsNearlyZero())
		{
			const float DesiredYaw=ToTarget.Rotation().Yaw;
			const float PreviousYaw = Rotation.Yaw;

			Rotation.Yaw = FMath::FixedTurn(
				PreviousYaw,
				DesiredYaw,
				PrototypeYawTurnSpeed * DeltaTime
			);

			Pokemon->SetActorRotation(Rotation);

			UE_LOG(LogTemp, Display,
				TEXT("[AirborneRecoveryTurn] Current=%.1f | Target=%.1f | New=%.1f | Velocity=%s"),
				PreviousYaw,
				DesiredYaw,
				Rotation.Yaw,
				*Movement->Velocity.ToCompactString());
		}
	}

	const float TotalDuration = FMath::Max(PrototypeOrientationWindowDelay,
		PrototypeAirborneRecoveryDuration);
	
	if (Elapsed >= TotalDuration)
	{
		FinishAirborneWhiffRecovery(TEXT("Completed"));
	}
}

void UPokemonDamageGameplayAbilities::StopAirborneWhiffRecovery(bool bKeepLandingIntent)
{
	/**
	* When bKeepLandingIntent is false, cancel the matching command's pending landing-facing intention before resetting RecoveryCommandId. 
	* This covers cancellation, failed task initialization, and invalidated command ownership.
	*/

	APokemon_Parent* Pokemon = RecoveryPokemon.Get();


	if (!bKeepLandingIntent && RecoveryPokemon.IsValid() && RecoveryCommandId.IsValid())
	{
		if (Pokemon)
		{
			if (auto* Landing = Pokemon->GetLandingOrientationComponent())
			{
				Landing->CancelLandingFacing(RecoveryCommandId);
			}
		}
	}

	if (AirborneRecoveryTickTask)
	{
		AirborneRecoveryTickTask->EndTask();
		AirborneRecoveryTickTask = nullptr;
	}
	if (bAirborneRecoveryActive)
	{
		if (Pokemon)
		{
			if (UCharacterMovementComponent* Movement = Pokemon->GetCharacterMovement())
			{
				Pokemon->bUseControllerRotationYaw = bSavedControllerYaw;

				Movement->bOrientRotationToMovement = bSavedOrientToMovement;

				Movement->bUseControllerDesiredRotation = bSavedControllerDesiredRotation;
			}
		}
	}

	bAirborneRecoveryActive = false;
	bOrientationUnlocked = false;
	bLastWhiffRecoverable = false;
	RecoveryElapsedTime = 0.f;

	RecoveryCommandId.Invalidate();
	RecoveryPokemon.Reset();
}

void UPokemonDamageGameplayAbilities::FinishAirborneWhiffRecovery(FName Reason)
{
	if (!bAirborneRecoveryActive)
	{
		return;
	}

	const FGuid FinishedCommandId = RecoveryCommandId;
	APokemon_Parent* Pokemon = RecoveryPokemon.Get();
	
	StopAirborneWhiffRecovery(true);

	if (Pokemon)
	{
		if(auto* Landing=Pokemon->GetLandingOrientationComponent())
		{
			Landing->ReleaseAfterAirborneRecovery(FinishedCommandId);
		}
	}

	UE_LOG(LogTemp, Display,
		TEXT("[AirborneRecovery] Finished | CommandId=%s | Reason=%s"),
		*FinishedCommandId.ToString(),
		*Reason.ToString());

	if (IsActive())
	{
		EndSequencedExecution(FinishedCommandId, false);
	}
}

bool UPokemonDamageGameplayAbilities::CommitPokemonMove()
{
	UE_LOG(LogTemp,Warning,TEXT("[PokemonPP] CommitPokemonMove ENTERED | Ability=%s | Authority=%d"),
		*GetNameSafe(this),
		GetAvatarActorFromActorInfo()
		? GetAvatarActorFromActorInfo()->HasAuthority()
		: false
	);

	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	if (!ASC)
	{
		UE_LOG(LogTemp, Warning, TEXT("CommitPokemonMove failed: ASC is null on [%s]."), *GetNameSafe(this));
		RecordSequencedActivationFailure(TEXT("CommitAbilitySystemUnavailable"));
		return false;
	}

	const FGameplayAbilityActorInfo* ActorInfo = CurrentActorInfo;
	if (!ActorInfo)
	{
		UE_LOG(LogTemp, Warning, TEXT("CommitPokemonMove failed: ActorInfo is null on [%s]."), *GetNameSafe(this));
		RecordSequencedActivationFailure(TEXT("CommitActorInfoUnavailable"));
		return false;
	}

	// 1) Cooldown Check
	const FGameplayTag CurrentCooldownTag = GetCooldownTag();
	if (CurrentCooldownTag.IsValid() && ASC->HasMatchingGameplayTag(CurrentCooldownTag))
	{
		UE_LOG(LogTemp, Display, TEXT("CommitPokemonMove blocked: [%s] is on cooldown with tag [%s]."), *CurrentCooldownTag.ToString(), *GetNameSafe(this));
		RecordSequencedActivationFailure(TEXT("CommitMoveOnCooldown"));
		return false;
	}

	// 2) PP check
	if (!CheckCost(CurrentSpecHandle, ActorInfo, nullptr))
	{
		UE_LOG(LogTemp, Display,
			TEXT("CommitPokemonMove blocked: CheckCost failed for [%s]."),
			*GetNameSafe(this));

		RecordSequencedActivationFailure(TEXT("CommitCostRejected"));
		return false;
	}

	// 3) Apply cost + cooldown manually
	ApplyCost(CurrentSpecHandle, ActorInfo, CurrentActivationInfo);
	ApplyCooldown(CurrentSpecHandle, ActorInfo, CurrentActivationInfo);

	UE_LOG(LogTemp, Display, TEXT("CommitPokemonMove success: [%s]"), *GetNameSafe(this));
	return true;
}

FGameplayTag UPokemonDamageGameplayAbilities::GetCooldownTag() const
{
	static const FGameplayTag CooldownRootTag = FPokemonGameplayTags::Get().Cooldown_InputTag;
	FGameplayTag CurrentCooldownGameplayTag;
	if (const FGameplayAbilitySpec* Spec = GetCurrentAbilitySpec())
	{
		for (const FGameplayTag& Tag : Spec->GetDynamicSpecSourceTags())
		{
			if (Tag.MatchesTag(CooldownRootTag))
			{
				CurrentCooldownGameplayTag = Tag;
				break;
			}
		}
	}

	return CurrentCooldownGameplayTag;
}




#include "AbilitySystem/Abilities/PokemonDodgeGameplayAbility.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Characters/Pokemon_Parent.h"
#include "GameFramework/RootMotionSource.h"


UPokemonDodgeGameplayAbility::UPokemonDodgeGameplayAbility()
{
	/*
	 * Dodges will happen frequently, and each Pokemon only needs
	 * one reusable instance of this ability.
	 */
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	/*
	 * The Trainer currently sends the dodge request to the server,
	 * and the Pokemon is AI/server authoritative.
	 */
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;

	/*
	 * Root motion owns the lifetime of the dodge.
	 *
	 * The montage is cosmetic/animation timing; completing the
	 * montage should not independently terminate movement.
	 */
	bEndAbilityWhenMontageEnds = false;

	/*
	 * This is movement, not one of our attacking/recovery-state
	 * abilities.
	 */
	bUseAbilityCombatStateLock = false;
	bApplyRecoveryStateOnEnd = false;
}

bool UPokemonDodgeGameplayAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	if (!ActorInfo || !ActorInfo->AvatarActor.IsValid())
	{
		return false;
	}

	const APokemon_Parent* Pokemon = Cast<APokemon_Parent>(ActorInfo->AvatarActor.Get());

	if (!Pokemon)
	{
		return false;
	}

	if (DodgeDuration <= KINDA_SMALL_NUMBER)
	{
		return false;
	}

	/*
     * The command component stores the requested world-space
	 * direction before asking GAS to activate this ability.
	 */
	FVector DodgeDirection = Pokemon->GetDodgeDirection();
	DodgeDirection.Z = 0.f;


	if (DodgeDirection.IsNearlyZero())
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDodgeGameplayAbility] CanActivateAbility failed: DodgeDirection is zero on [%s]."), *GetNameSafe(this));
		return false;
	}

	return true;
}

void UPokemonDodgeGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	APokemon_Parent* Pokemon = ActorInfo ? Cast<APokemon_Parent>(ActorInfo->AvatarActor.Get()) : nullptr;

	if (!Pokemon)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	FVector DodgeDirection = Pokemon->GetDodgeDirection();

	/*
	 * Phase 2A is specifically a horizontal ground/combat dodge.
     *
     * Jump / aerial dodges can later deliberately introduce
     * vertical motion instead of inheriting it accidentally here.
     */

	DodgeDirection.Z = 0.f;

	if (!DodgeDirection.Normalize())
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDodgeGameplayAbility] ActivateAbility failed: DodgeDirection is zero on [%s]."), *GetNameSafe(this));
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	const float DodgeStrength = ResolveDodgeStrength(Pokemon);

	if(DodgeStrength<=KINDA_SMALL_NUMBER||DodgeDuration<=KINDA_SMALL_NUMBER)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDodgeGameplayAbility] ActivateAbility failed: DodgeStrength or DodgeDuration is zero on [%s]."), *GetNameSafe(this));
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	/*
     * IMPORTANT:
     *
     * This lets GAS apply the Cost Gameplay Effect and Cooldown
     * Gameplay Effect when we introduce stamina/cooldowns.
     *
     * Right now, with no cost assigned, this simply succeeds.
     */

	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDodgeGameplayAbility] ActivateAbility failed: CommitAbility failed on [%s]."), *GetNameSafe(this));
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	/*
     * Run the shared Pokemon ability setup:
     * montage, ability events, ability windows, etc.
     */
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	const ERootMotionFinishVelocityMode FinishMode = bStopOnFinish ? ERootMotionFinishVelocityMode::SetVelocity : ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;

	if (UCharacterMovementComponent* MoveComp = Pokemon->GetCharacterMovement())
	{
		bSavedOrientRotationToMovement = MoveComp->bOrientRotationToMovement;
		bSavedOrientRotationToMovement = MoveComp->bUseControllerDesiredRotation;
		bSavedUseControllerRotationYaw = Pokemon->bUseControllerRotationYaw;
		bSavedRotationSettings = true;

		// Remove residual navigation movement so the root-motion direction begins cleanly
		MoveComp->StopMovementImmediately();
		MoveComp->bOrientRotationToMovement = false;
		MoveComp->bUseControllerDesiredRotation = false;
		Pokemon->bUseControllerRotationYaw = false;
	}

	UAbilityTask_ApplyRootMotionConstantForce* DodgeTask = UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(
		this,
		FName("PokemonDodge"),
		DodgeDirection ,
		DodgeStrength,
		DodgeDuration,
		// Non-additive:
		// this dodge controls horizontal movement.
		false,
	DodgeStrengthCurve,
		FinishMode,
		// Used when FinishMode = SetVelocity
		FVector::ZeroVector,
		//Only relevant for ClampVelocity
		0.f,
		bEnableGravityDuringDodge
	);

	if (!DodgeTask)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PokemonDodgeGameplayAbility] ActivateAbility failed: DodgeTask is null on [%s]."), *GetNameSafe(this));
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	DodgeTask->OnFinish.AddDynamic(this, &UPokemonDodgeGameplayAbility::HandleDodgeFinished);

	DodgeTask->ReadyForActivation();

	UE_LOG(LogTemp, Display, TEXT("[PokemonDodgeGameplayAbility] ActivateAbility succeeded: DodgeTask started on [%s]. | Pokemon=%s | Direction=(%.2f %.2f %.2f) | Strength=%.1f | Duration=%.2f"), *GetNameSafe(this), *GetNameSafe(Pokemon), DodgeDirection.X, DodgeDirection.Y, DodgeDirection.Z, DodgeStrength, DodgeDuration);
}

float UPokemonDodgeGameplayAbility::ResolveDodgeStrength(APokemon_Parent* Pokemon) const
{
	float ResolvedStrength = BaseDodgeStrength;
	
	if (bUseDodgeForceAttribute && Pokemon)
	{
		if(UPokemonBaseAttributeSet* PAS = Pokemon->GetPokemonAS())
		{
			const float AttributeDodgeForce = PAS->GetDodgeForce();

			/*
		     * DodgeForce exists already, but if its startup GE
		     * currently leaves it at zero we can still prototype
		     * using BaseDodgeStrength.
		     */
			if (AttributeDodgeForce > KINDA_SMALL_NUMBER)
			{
				ResolvedStrength = AttributeDodgeForce;
			}
		}
	}
	return FMath::Max(0.f, ResolvedStrength * DodgeStrengthMultiplier);
}

void UPokemonDodgeGameplayAbility::HandleDodgeFinished()
{
	if (!IsActive())
		return;
	UE_LOG(LogTemp, Display, TEXT("[PokemonDodgeGameplayAbility] HandleDodgeFinished called on [%s]."), *GetNameSafe(this));
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UPokemonDodgeGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	APokemon_Parent* Pokemon = GetAvatarPokemon();

	const bool bShouldEndDodgeState = Pokemon&& Pokemon->GetIsDodging();

	/*
     * End the GAS ability first so OnDodgeEnd observers see the
     * dodge ability as genuinely inactive.
     */
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (Pokemon && bSavedRotationSettings)
	{
		if (UCharacterMovementComponent* MoveComp = Pokemon->GetCharacterMovement())
		{
			MoveComp->bOrientRotationToMovement = bSavedOrientRotationToMovement;
			MoveComp->bUseControllerDesiredRotation = bSavedUseControllerRotationYaw;
		}	
		Pokemon->bUseControllerRotationYaw = bSavedUseControllerRotationYaw;

		bSavedRotationSettings = false;
	}

	if(bShouldEndDodgeState)
	{
		Pokemon->EndDodge();
	}

	UE_LOG(LogTemp, Display, TEXT("[PokemonDodgeGameplayAbility] EndAbility called on [%s]. | Pokemon=%s | bWasCancelled=%s"), *GetNameSafe(this), *GetNameSafe(Pokemon), bWasCancelled ? TEXT("true") : TEXT("false"));
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/PokemonDamageGameplayAbilities.h"
#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"

FDamageEffectParams UPokemonDamageGameplayAbilities::MakeDamageEffectParamsFromClassDefaults(AActor* TargetActor) const
{
	FDamageEffectParams Params;
	Params.WorldContextObject = GetAvatarActorFromActorInfo();
	Params.DamageGameplayEffectClass = DamageEffectClass;
	Params.SourceAbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	Params.TargetAbilitySystemComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	Params.BasedDamage = Damage;
	Params.AbilityLevel = GetAbilityLevel();
	Params.DamageType = MoveTypeTag;
	Params.DebuffChance = DebuffChance;
	Params.DebuffFrequency = DebuffFrequency;
	Params.DebuffDuration = DebuffDuration;
	Params.DebuffDamage = DebuffDamage;
	Params.DeathImpulseMagnitude = DeathImpulseMagnitude;
	Params.KnockbackForceMagnitude = KnockbackForceMagnitude;
	Params.KnockbackChance = KnockbackChance;

	if (IsValid(TargetActor))
	{
		FRotator Rotation = (TargetActor->GetActorLocation() - GetAvatarActorFromActorInfo()->GetActorLocation()).Rotation();
		Rotation.Pitch = 45.f;
		const FVector ToTarget = Rotation.Vector();
		Params.DeathImpulse = ToTarget * DeathImpulseMagnitude;
		Params.KnockbackForce = ToTarget * KnockbackForceMagnitude;

		TScriptInterface<IPokemonCombatInterface> TargetPokemon = TargetActor;
		if (TargetPokemon)
		{
			Params.TypeMultiplier = UPokemonAbilitySystemLibrary::GetTypeMatchup(GetAvatarActorFromActorInfo(), MoveElementalType, TargetPokemon->GetPokemonElementalTypes());
		}
	}

	return Params;
}

void UPokemonDamageGameplayAbilities::CauseDamage(AActor* TargetActor)
{
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	if (!TargetASC) return;
	FGameplayEffectSpecHandle DamageSpecHandle = MakeOutgoingGameplayEffectSpec(DamageEffectClass, 1.f);
	GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(*DamageSpecHandle.Data.Get(), TargetASC);
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
	UE_LOG(LogTemp, Warning, TEXT("ApplyCost CALLED on %s"), *GetName());
	//Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
	if (!CostGameplayEffectClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("ApplyCost failed: CostGameplayEffectClass is null for [%s]."), *GetNameSafe(this));
		return;
	}
	FGameplayTag CostTag = FPokemonGameplayTags::Get().Data_PowerPointCost;

	UE_LOG(LogTemp, Warning, TEXT("ApplyCost START on %s"), *GetNameSafe(this));
	FGameplayEffectSpecHandle CostSpecHandle = MakeOutgoingGameplayEffectSpec(CostGameplayEffectClass, GetAbilityLevel());

	UE_LOG(LogTemp, Warning, TEXT("ApplyCost AFTER MakeOutgoingGameplayEffectSpec on %s"), *GetNameSafe(this));
	if (!CostSpecHandle.IsValid() || !CostSpecHandle.Data.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("ApplyCost failed: Invalid cost spec for [%s]."), *GetNameSafe(this));
		return;
	}


	CostSpecHandle.Data->SetSetByCallerMagnitude(CostTag, -PowerPointCost);
	UE_LOG(LogTemp, Warning, TEXT("ApplyCost AFTER SetSetByCallerMagnitude on %s"), *GetNameSafe(this));
	ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, CostSpecHandle);
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
	/*	UAbilitySystemComponent* const AbilitySystemComponent = ActorInfo->AbilitySystemComponent.Get();
	const FGameplayAbilitySpec* Spec = AbilitySystemComponent->FindAbilitySpecFromHandle(Handle);

	static const FGameplayTag CooldownRootTag = FPokemonGameplayTags::Get().Cooldown_InputTag;
	FGameplayTag CurrentCooldownGameplayTag;

	for (const FGameplayTag& Tag : Spec->DynamicAbilityTags)
	{
		if (Tag.MatchesTag(CooldownRootTag))
		{
			CurrentCooldownGameplayTag = Tag;
			break;
		}
	}

	UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
	if (!ASC) return false;

	if (ASC->HasMatchingGameplayTag(CurrentCooldownGameplayTag))
	{
		if (OptionalRelevantTags)
		{
			OptionalRelevantTags->AddTag(CurrentCooldownGameplayTag);
		}
		return false;
	}*/
	return true;
}

bool UPokemonDamageGameplayAbilities::CommitPokemonMove()
{
	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	if (!ASC)
	{
		UE_LOG(LogTemp, Warning, TEXT("CommitPokemonMove failed: ASC is null on [%s]."), *GetNameSafe(this));
		return false;
	}

	const FGameplayAbilityActorInfo* ActorInfo = CurrentActorInfo;
	if (!ActorInfo)
	{
		UE_LOG(LogTemp, Warning, TEXT("CommitPokemonMove failed: ActorInfo is null on [%s]."), *GetNameSafe(this));
		return false;
	}

	// 1) Cooldown Check
	const FGameplayTag CurrentCooldownTag = GetCooldownTag();
	if (CurrentCooldownTag.IsValid() && ASC->HasMatchingGameplayTag(CurrentCooldownTag))
	{
		UE_LOG(LogTemp, Display, TEXT("CommitPokemonMove blocked: [%s] is on cooldown with tag [%s]."), *CurrentCooldownTag.ToString(), *GetNameSafe(this));
		return false;
	}

	// 2) PP check
	const UPokemonBaseAttributeSet* PAS = ASC->GetSet<UPokemonBaseAttributeSet>();
	if (!PAS)
	{
		UE_LOG(LogTemp, Warning, TEXT("CommitPokemonMove failed: PAS is null on [%s]."), *GetNameSafe(this));
		return false;
	}

	const float CurrentPowerPoints = PAS->GetPowerPoints();
	if (CurrentPowerPoints < PowerPointCost)
	{
		UE_LOG(LogTemp, Display, TEXT("CommitPokemonMove blocked: Not enough PP (%.1f/%.1f) for [%s]."), CurrentPowerPoints, PowerPointCost, *GetNameSafe(this));
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
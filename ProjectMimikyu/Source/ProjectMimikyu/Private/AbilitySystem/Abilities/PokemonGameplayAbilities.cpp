// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/PokemonGameplayAbilities.h"
#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"

FDamageEffectParams UPokemonGameplayAbilities::MakeDamageEffectParamsFromClassDefaults(AActor* TargetActor) const
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

void UPokemonGameplayAbilities::CauseDamage(AActor* TargetActor)
{
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	if (!TargetASC) return;
	FGameplayEffectSpecHandle DamageSpecHandle = MakeOutgoingGameplayEffectSpec(DamageEffectClass, 1.f);
	GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(*DamageSpecHandle.Data.Get(), TargetASC);
}

TArray<EDirectionPoint> UPokemonGameplayAbilities::GetKeySequenceFromTag(const FGameplayTag& AbilityTag, bool bLogNotFound) const
{
	for (const FPokemonInputInfo Info : UpgradeList)
	{
		if(Info.PokemonUpgradeTag.MatchesTagExact(AbilityTag))
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

void UPokemonGameplayAbilities::ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	//Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
	//if (!CostGameplayEffectClass)
	//{
		//UE_LOG(LogTemp, Error, TEXT("CostGameplayEffectClass is null! Cannot apply cost."));
		//return;
	//}
	FGameplayTag CostTag = FPokemonGameplayTags::Get().Data_PowerPointCost;
	FGameplayEffectSpecHandle CostSpecHandle = MakeOutgoingGameplayEffectSpec(CostGameplayEffectClass, GetAbilityLevel());
	CostSpecHandle.Data->SetSetByCallerMagnitude(CostTag, -PowerPointCost);
	float* FoundMagnitude = CostSpecHandle.Data->SetByCallerTagMagnitudes.Find(CostTag);


	if (CostSpecHandle.IsValid() && FoundMagnitude)
	{
		UE_LOG(LogTemp, Display, TEXT("Found the Magnitude! Applying cost. Is this before or after the error?"));
		ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, CostSpecHandle);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Found Magnitude is null! Cannot apply cost."));
	}
}

void UPokemonGameplayAbilities::ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	UGameplayEffect* CooldownGE = GetCooldownGameplayEffect();
	static const FGameplayTag CooldownRootTag = FPokemonGameplayTags::Get().Cooldown_InputTag;

	if (const FGameplayAbilitySpec* Spec = GetCurrentAbilitySpec())
	{
		for (const FGameplayTag& Tag : Spec->DynamicAbilityTags)
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

bool UPokemonGameplayAbilities::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
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

FGameplayTag UPokemonGameplayAbilities::GetCooldownTag()
{
	static const FGameplayTag CooldownRootTag = FPokemonGameplayTags::Get().Cooldown_InputTag;
	FGameplayTag CurrentCooldownGameplayTag;
	if (const FGameplayAbilitySpec* Spec = GetCurrentAbilitySpec())
	{
		for (const FGameplayTag& Tag : Spec->DynamicAbilityTags)
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

// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "GameplayEffectExtension.h"
#include "Interfaces/PokemonCombatInterface.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"
#include <AbilitySystemBlueprintLibrary.h>
#include "PokemonGameplayTags.h"

UPokemonBaseAttributeSet::UPokemonBaseAttributeSet()
{
	const FPokemonGameplayTags GameplayTags = FPokemonGameplayTags::Get();

	TagsToAttributes.Add(GameplayTags.Attributes_Stats_Attack, GetAttackAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Stats_SpecialAttack, GetSpecialAttackAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Stats_Defense, GetDefenseAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Stats_SpecialDefense, GetSpecialDefenseAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Stats_Speed, GetSpeedAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Stats_MaxHP, GetMaxHealthAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Stats_XP, GetXPAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Stats_Level, GetCurrentLevelAttribute);

	TagsToAttributes.Add(GameplayTags.Attributes_Vital_HP, GetHealthAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Vital_PP, GetPowerPointsAttribute);
}

void UPokemonBaseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, SpecialAttack, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, SpecialDefense, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, Defense, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, Attack, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, Speed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, DodgeForce, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, XP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, CurrentLevel , COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, PowerPoints , COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, MaxPowerPoints , COND_None, REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, ExertionChance , COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPokemonBaseAttributeSet, FriendshipLevel , COND_None, REPNOTIFY_Always);
}

void UPokemonBaseAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0, GetMaxHealth());
	}

	if (Attribute == GetPowerPointsAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0, GetMaxPowerPoints());
	}

	if (Attribute == GetCurrentLevelAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0, 100);
	}
}

void UPokemonBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	// Source = causer of the effect, Target = target of the effect (owner of this AS)
	FEffectProperties Props;
	SetEffectProperties(Data, Props);
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0, GetMaxHealth()));
		UE_LOG(LogTemp, Warning, TEXT("Changed Health on %s. Health %f"), *Props.TargetAvatarActor->GetName(), GetHealth());
	}

	if (Data.EvaluatedData.Attribute == GetCurrentLevelAttribute())
	{
		SetCurrentLevel(FMath::Clamp(GetCurrentLevel(), 0, 100));	
		UE_LOG(LogTemp, Warning, TEXT("Changed Level on %s. Level %f"), *Props.TargetAvatarActor->GetName(), GetCurrentLevel());
	}

	if (Data.EvaluatedData.Attribute == GetPowerPointsAttribute())
	{
		//GetHealthAttribute().
		SetPowerPoints(FMath::Clamp(GetPowerPoints(), 0, GetMaxPowerPoints()));
		UE_LOG(LogTemp, Warning, TEXT("Changed PowerPoints on %s. Power Points %f"), *Props.TargetAvatarActor->GetName(), GetPowerPoints());
	}

	if (Data.EvaluatedData.Attribute == GetIncomingDamageAttribute())
	{
		HandleIncomingDamage(Props);
	}
}

void UPokemonBaseAttributeSet::HandleIncomingDamage(FEffectProperties& Props)
{
	const float LocalIncomingDamage = GetIncomingDamage();
	SetIncomingDamage(0.f);
	if (LocalIncomingDamage > 0)
	{
		const float NewHealth = GetHealth() - LocalIncomingDamage;
		SetHealth(FMath::Clamp(NewHealth, 0.f, GetMaxHealth()));
		UE_LOG(LogTemp, Warning, TEXT("Damaged Health on %s. Health %f"), *Props.TargetAvatarActor->GetName(), GetHealth());


		const bool bFatal = NewHealth <= 0.f;
		if (bFatal)
		{
			TScriptInterface<IPokemonCombatInterface> TargetCombatInteface = Props.TargetAvatarActor;
			TScriptInterface<IPokemonCombatInterface> SourceCombatInteface = Props.SourceAvatarActor;
			if (TargetCombatInteface)
			{
				TargetCombatInteface->Fainted(UPokemonAbilitySystemLibrary::GetDeathImpulse(Props.EffectContext));
			}
			if (SourceCombatInteface)
			{
				SourceCombatInteface->DisengageFromCombat();
			}
		}
		else
		{
			const FVector& KnockbackForce = UPokemonAbilitySystemLibrary::GetKnockbackForce(Props.EffectContext);
			Props.TargetCharacter->LaunchCharacter(KnockbackForce, true, true);
		}
	}
}

void UPokemonBaseAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Health, OldHealth);
}

void UPokemonBaseAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, MaxHealth, OldMaxHealth);
}

void UPokemonBaseAttributeSet::OnRep_PowerPoints(const FGameplayAttributeData& OldPowerPoints) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, PowerPoints, OldPowerPoints);
}

void UPokemonBaseAttributeSet::OnRep_MaxPowerPoints(const FGameplayAttributeData & OldMaxPowerPoints) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, MaxPowerPoints, OldMaxPowerPoints);
}

void UPokemonBaseAttributeSet::OnRep_Speed(const FGameplayAttributeData& OldSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Speed, OldSpeed);
}

void UPokemonBaseAttributeSet::OnRep_XP(const FGameplayAttributeData& OldXP) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, XP, OldXP);
}

void UPokemonBaseAttributeSet::OnRep_CurrentLevel(const FGameplayAttributeData& OldCurrentLevel) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, CurrentLevel, OldCurrentLevel);
}

void UPokemonBaseAttributeSet::OnRep_SpecialAttack(const FGameplayAttributeData& OldSpecialAttack) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, SpecialAttack, OldSpecialAttack);
}

void UPokemonBaseAttributeSet::OnRep_FriendshipLevel(const FGameplayAttributeData& OldFriendshipLevel) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, FriendshipLevel, OldFriendshipLevel);
}

void UPokemonBaseAttributeSet::OnRep_ExertionChance(const FGameplayAttributeData & OldExertionChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, ExertionChance, OldExertionChance);
}

void UPokemonBaseAttributeSet::OnRep_SpecialDefense(const FGameplayAttributeData& OldSpecialDefense) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, SpecialDefense, OldSpecialDefense);
}

void UPokemonBaseAttributeSet::OnRep_Attack(const FGameplayAttributeData& OldAttack) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Attack, OldAttack);
}

void UPokemonBaseAttributeSet::OnRep_Defense(const FGameplayAttributeData& OldDefense) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Defense, OldDefense);
}

void UPokemonBaseAttributeSet::OnRep_DodgeForce(const FGameplayAttributeData& OldDodgeForce) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, DodgeForce, OldDodgeForce);
}

void UPokemonBaseAttributeSet::SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props)
{
	Props.EffectContext = Data.EffectSpec.GetContext();
	Props.SourceASC = Props.EffectContext.GetOriginalInstigatorAbilitySystemComponent();


	if (IsValid(Props.SourceASC) && Props.SourceASC->AbilityActorInfo.IsValid() && Props.SourceASC->AbilityActorInfo->AvatarActor.IsValid())
	{
		Props.SourceAvatarActor = Props.SourceASC->AbilityActorInfo->AvatarActor.Get();
		Props.SourceController = Props.SourceASC->AbilityActorInfo->PlayerController.Get();

		if (!Props.SourceController && Props.SourceAvatarActor)
		{
			if (const APawn* Pawn = Cast<APawn>(Props.SourceAvatarActor))
			{
				Props.SourceController = Pawn->GetController();
			}
		}
		if (Props.SourceController)
		{
			Props.SourceCharacter = Cast<ACharacter>(Props.SourceController->GetPawn());

		}
	}
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		Props.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		Props.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		Props.TargetCharacter = Cast<ACharacter>(Props.TargetAvatarActor);

		Props.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Props.TargetAvatarActor);
	}
}

void UPokemonBaseAttributeSet::HandleIncomingXP(const FEffectProperties& Props)
{
	const float LocalIncomingXP = GetIncomingXP();
	SetIncomingXP(0.f);
	UE_LOG(LogTemp, Display, TEXT("Incoming XP: %f"), LocalIncomingXP);

	if (GetCurrentLevel() == 100.f) return;

	const float NewXP = GetXP() + LocalIncomingXP;

	TScriptInterface<IPokemonCombatInterface> SourcePokemon = Props.SourceCharacter;

	bool bCheckingLevelUp = true;
	int32 NewLevel = GetCurrentLevel();
	while (bCheckingLevelUp)
	{
		if (NewXP >= SourcePokemon->GetExperienceNeededAtLevel(NewLevel))
		{
			++NewLevel;
		}
		else
		{
			bCheckingLevelUp = false;
		}
	}
	if (NewLevel > GetCurrentLevel())
	{
		SetPokemonLevel(Props.SourceCharacter, NewLevel);
	}
	SetPokemonXP(Props.SourceCharacter, NewXP);
}

void UPokemonBaseAttributeSet::SendXPEvent(const FEffectProperties& Props)
{
	TScriptInterface<IPokemonCombatInterface> TargetPokemon = Props.TargetCharacter;
	FGameplayTag IncomingXPTag = FPokemonGameplayTags::Get().Attributes_Meta_IncomingXP;
	FGameplayEventData Payload;
	Payload.EventTag = IncomingXPTag;
	Payload.EventMagnitude = (float)TargetPokemon->GetXPBaseReward();

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(Props.SourceCharacter, IncomingXPTag, Payload);
}

void UPokemonBaseAttributeSet::SetPokemonXP(ACharacter* AlteredPokemon, float NewXP)
{
	TScriptInterface<IPokemonCombatInterface> SourcePokemon = AlteredPokemon;
	SourcePokemon->AdjustXP(int32(NewXP));	
	SetXP(NewXP);
}

void UPokemonBaseAttributeSet::SetPokemonLevel(ACharacter * AlteredPokemon, float NewLevel)
{
	TScriptInterface<IPokemonCombatInterface> SourcePokemon = AlteredPokemon;
	SourcePokemon->AdjustXP(int32(NewLevel));
	SetCurrentLevel(NewLevel);
	SourcePokemon->ReinitializeDefaultAttributes();
}


TMap<FGameplayAttribute, float> UPokemonBaseAttributeSet::GetAttributeValues()
{
	for (auto Pair : TagsToAttributes)
	{
		const FGameplayAttribute Attribute = Pair.Value();
		AttributeValues.Add(Attribute, Attribute.GetNumericValue(this));
	}
	return AttributeValues;
}


TMap<FGameplayTag, float> UPokemonBaseAttributeSet::GetAttributeTagValues()
{
	TMap<FGameplayTag, float> AttributeTagValues;
	for (auto Pair : TagsToAttributes)
	{
		AttributeTagValues.Add(Pair.Key, Pair.Value().GetNumericValue(this));
	}
	return AttributeTagValues;
}
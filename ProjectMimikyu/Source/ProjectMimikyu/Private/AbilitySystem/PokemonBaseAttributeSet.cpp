// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonBaseAttributeSet.h"
#include "GameplayEffectExtension.h"
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

	TagsToAttributes.Add(GameplayTags.Attributes_Vital_HP, GetHealthAttribute);
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
}

void UPokemonBaseAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0, GetMaxHealth());
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

		const FVector KnockbackForcer = (Props.TargetCharacter->GetActorLocation() - Props.SourceCharacter->GetActorLocation()).GetSafeNormal() * 1000.f;
		Props.TargetCharacter->LaunchCharacter(KnockbackForcer, true, true);
		/*const bool bFatal = NewHealth <= 0.f;
		if (bFatal)
		{
		TScriptInterface<ICombatInterface> CombatInteface = Props.TargetAvatarActor;
		if (CombatInteface)
		{
		CombatInteface->Die();
		}
		}
		else
		{
		FGameplayTagContainer TagContainer;
		TagContainer.AddTag(FAuraGameplayTags::Get().Effects_HitReact);
		Props.TargetASC->TryActivateAbilitiesByTag(TagContainer);
		}

		ShowFloatingText(Props, LocalIncomingDamage);*/
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

void UPokemonBaseAttributeSet::OnRep_Speed(const FGameplayAttributeData& OldSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, Speed, OldSpeed);
}

void UPokemonBaseAttributeSet::OnRep_SpecialAttack(const FGameplayAttributeData& OldSpecialAttack) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPokemonBaseAttributeSet, SpecialAttack, OldSpecialAttack);
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

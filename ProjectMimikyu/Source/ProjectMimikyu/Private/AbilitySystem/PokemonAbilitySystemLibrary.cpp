// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonAbilitySystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameModes/ProjectMimikyuGameMode.h"
#include "PokemonGameplayTags.h"
#include "Characters/Pokemon_Parent.h"
#include "UI/WidgetController/PokemonWidgetController.h"
#include "UI/WidgetController/PokemonMenuWidgetController.h"
#include "AbilitySystem/PokemonAbilitySystemComponent.h"
#include "Player/TrainerPlayerState.h"
#include "PokemonAbilityTypes.h"
#include "UI/TrainerHUD.h"
#include <AbilitySystemBlueprintLibrary.h>

void UPokemonAbilitySystemLibrary::ActivateAbilityByTag(const UObject* WorldContextObject, UPokemonAbilitySystemComponent* ASC, FGameplayTag AbilityTag)
{
	ASC->ActivateAbilityByTag(AbilityTag);
}

UPokemonMenuWidgetController* UPokemonAbilitySystemLibrary::GetPokemonMenuWidgetController(AActor* ObjectActor)
{
	if (TObjectPtr<APokemon_Parent> Pokemon = Cast<APokemon_Parent>(ObjectActor))
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(ObjectActor, 0);
		ATrainerPlayerState* PS = PC->GetPlayerState<ATrainerPlayerState>();
		ATrainerHUD* TrainerHUD = CastChecked<ATrainerHUD>(PC->GetHUD());

		UAbilitySystemComponent* PASC = Pokemon->GetAbilitySystemComponent();
		UAttributeSet* PAS = Pokemon->GetAttributeSet();

		const FWidgetControllerParams WidgetControllerParams(PS,PC, PASC, PAS);
		UPokemonMenuWidgetController* WC = TrainerHUD->GetPokemonMenuWidgetController(WidgetControllerParams);
		//WC->SetStatInfo(Pokemon->GetPokemonStatInfo());
		return WC;
	}
	else
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(ObjectActor, 0);
		ATrainerPlayerState* PS = PC->GetPlayerState<ATrainerPlayerState>();
		ATrainerHUD* TrainerHUD = CastChecked<ATrainerHUD>(PC->GetHUD());

		const FWidgetControllerParams WidgetControllerParams(PS, PC);
		UPokemonMenuWidgetController* WC = TrainerHUD->GetPokemonMenuWidgetController(WidgetControllerParams);
		return WC;
	}
	return nullptr;
}

UTrainerOverlayWidgetController* UPokemonAbilitySystemLibrary::GetTrainerOverlayWidgetController(AActor* ObjectActor)
{
	if (TObjectPtr<APokemon_Parent> Pokemon = Cast<APokemon_Parent>(ObjectActor))
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(ObjectActor, 0);
		ATrainerPlayerState* PS = PC->GetPlayerState<ATrainerPlayerState>();
		ATrainerHUD* TrainerHUD = CastChecked<ATrainerHUD>(PC->GetHUD());

		UAbilitySystemComponent* PASC = Pokemon->GetAbilitySystemComponent();
		UAttributeSet* PAS = Pokemon->GetAttributeSet();
		const FWidgetControllerParams WidgetControllerParams(PS, PC, PASC, PAS);
		return TrainerHUD->GetTrainerOverlayWidgetController(WidgetControllerParams);
	}
	return nullptr;
}

FGameplayEffectContextHandle UPokemonAbilitySystemLibrary::ApplyDamageEffect(const FDamageEffectParams& DamageEffectParams)
{
	const FPokemonGameplayTags GameplayTags = FPokemonGameplayTags::Get();
	const AActor* SourceAvatarActor = DamageEffectParams.SourceAbilitySystemComponent->GetAvatarActor();

	FGameplayEffectContextHandle EffectContextHandle = DamageEffectParams.SourceAbilitySystemComponent->MakeEffectContext();
	EffectContextHandle.AddSourceObject(SourceAvatarActor);

    // Set KnockbackForce and Death Impluse
	SetDeathImpulse(EffectContextHandle, DamageEffectParams.DeathImpulse);
	SetKnockbackForce(EffectContextHandle, DamageEffectParams.KnockbackForce);
	SetTypeMultiplier(EffectContextHandle, DamageEffectParams.TypeMultiplier);
	SetDamageType(EffectContextHandle, DamageEffectParams.DamageType);

	FGameplayEffectSpecHandle EffectSpecHandle = DamageEffectParams.SourceAbilitySystemComponent->MakeOutgoingSpec(DamageEffectParams.DamageGameplayEffectClass, DamageEffectParams.AbilityLevel, EffectContextHandle);

	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(EffectSpecHandle, DamageEffectParams.DamageType, DamageEffectParams.BasedDamage);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(EffectSpecHandle, GameplayTags.Debuff_Chance, DamageEffectParams.DebuffChance);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(EffectSpecHandle, GameplayTags.Debuff_Frequency, DamageEffectParams.DebuffFrequency);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(EffectSpecHandle, GameplayTags.Debuff_Damage, DamageEffectParams.DebuffDamage);
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(EffectSpecHandle, GameplayTags.Debuff_Duration, DamageEffectParams.DebuffDuration);

	DamageEffectParams.TargetAbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data);

	return EffectContextHandle;
}

float UPokemonAbilitySystemLibrary::GetTypeMatchup(const UObject* WorldContextObject, EElementalType AttackingType, const FPokemonTypeInfo& TargetPokemonTypes)
{
	 AProjectMimikyuGameMode* PokemonGameMode = Cast<AProjectMimikyuGameMode>(UGameplayStatics::GetGameMode(WorldContextObject));
	if(!PokemonGameMode) return 0.0f;

	return PokemonGameMode->TypeChartDamageMultiplier(AttackingType, TargetPokemonTypes);
}

float UPokemonAbilitySystemLibrary::GetSavedTypeMatchup(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		return PokemonContext->GetTypeMultiplier();
	}
	return 0.0f;
}

bool UPokemonAbilitySystemLibrary::IsBlockedHit(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		return PokemonContext->IsBlockedHit();
	}
	return false;
}

bool UPokemonAbilitySystemLibrary::IsCriticalHit(const FGameplayEffectContextHandle& EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		return PokemonContext->IsCriticalHit();
	}
	return false;
}

bool UPokemonAbilitySystemLibrary::IsSuccessfulDebuff(const FGameplayEffectContextHandle & EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		return PokemonContext->IsSuccessfulDebuff();
	}
	return false;
}

float UPokemonAbilitySystemLibrary::GetDebuffDamage(const FGameplayEffectContextHandle & EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		return PokemonContext->GetDebuffDamage();
	}
	return 0.0f;
}

float UPokemonAbilitySystemLibrary::GetDebuffDuration(const FGameplayEffectContextHandle & EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		return PokemonContext->GetDebuffDuration();
	}
	return 0.0f;
}

float UPokemonAbilitySystemLibrary::GetDebuffFrequency(const FGameplayEffectContextHandle & EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		return PokemonContext->GetDebuffFrequency();
	}
	return 0.0f;
}

FVector UPokemonAbilitySystemLibrary::GetDeathImpulse(const FGameplayEffectContextHandle & EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		if (!PokemonContext->GetDeathImpulse().IsZero())
		{
			return PokemonContext->GetDeathImpulse();
		}
	}
	return FVector::ZeroVector;
}

FVector UPokemonAbilitySystemLibrary::GetKnockbackForce(const FGameplayEffectContextHandle & EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		if (!PokemonContext->GetKnockbackForce().IsZero())
		{
			return PokemonContext->GetKnockbackForce();
		}
	}
	return FVector::ZeroVector;
}

FGameplayTag UPokemonAbilitySystemLibrary::GetDamageType(const FGameplayEffectContextHandle & EffectContextHandle)
{
	if (const FPokemonGameplayEffectContext* PokemonContext = static_cast<const FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		if (PokemonContext->GetDamageType().IsValid())
		{
			return *PokemonContext->GetDamageType();
		}
	}
	return FGameplayTag();
}

void UPokemonAbilitySystemLibrary::SetIsBlockedHit(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, bool bInIsBlockedHit)
{
	if ( FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetIsBlockedHit(bInIsBlockedHit);
	}
}

void UPokemonAbilitySystemLibrary::SetIsCriticalHit(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, bool bInIsCriticalHit)
{
	if (FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetIsCriticalHit(bInIsCriticalHit);
	}
}

void UPokemonAbilitySystemLibrary::SetIsSuccessfulDebuff(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, bool bInIsSuccessfulDebuff)
{
	if ( FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetIsSuccessfulDebuff(bInIsSuccessfulDebuff);
	}
}

void UPokemonAbilitySystemLibrary::SetDebuffDamage(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, float InDebuffDamage)
{
	if (FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetDebuffDamage(InDebuffDamage);
	}
}

void UPokemonAbilitySystemLibrary::SetDebuffDuration(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, float InDebuffDuration)
{
	if (FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetDebuffDuration(InDebuffDuration);
	}
}

void UPokemonAbilitySystemLibrary::SetDebuffFrequency(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, float InDebuffFrequency)
{
	if (FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetDebuffFrequency(InDebuffFrequency);
	}
}

void UPokemonAbilitySystemLibrary::SetDeathImpulse(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, const FVector & InDeathImpulse)
{
	if (FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetDeathImpulse(InDeathImpulse);
	}
}

void UPokemonAbilitySystemLibrary::SetKnockbackForce(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, const FVector & InKnockback)
{
	if ( FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetKnockbackForce(InKnockback);
	}
}

void UPokemonAbilitySystemLibrary::SetDamageType(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, const FGameplayTag & InDamageType)
{
	if (FPokemonGameplayEffectContext* PokemonContext = static_cast<FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		const TSharedPtr<FGameplayTag> DamageType = MakeShared<FGameplayTag>(InDamageType);
		PokemonContext->SetDamageType(DamageType);
	}
}

void UPokemonAbilitySystemLibrary::SetTypeMultiplier(UPARAM(ref)FGameplayEffectContextHandle & EffectContextHandle, float InTypeMultiplier)
{
	if (FPokemonGameplayEffectContext* PokemonContext = static_cast< FPokemonGameplayEffectContext*>(EffectContextHandle.Get()))
	{
		PokemonContext->SetTypeMultiplier(InTypeMultiplier);
	}
}

//FPokemonGameplayEffectContext* UPokemonAbilitySystemLibrary::GetPokemonContext(FGameplayEffectContextHandle& EffectContextHandle)
//{
//	if (!PokemonContext)
//		PokemonContext = static_cast<FPokemonGameplayEffectContext*>(EffectContextHandle.Get());
//	return PokemonContext;
//}



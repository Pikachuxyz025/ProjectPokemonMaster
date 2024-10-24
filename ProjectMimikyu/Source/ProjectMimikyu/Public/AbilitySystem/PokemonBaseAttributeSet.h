// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "PokemonBaseAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

USTRUCT(BlueprintType)
struct FEffectProperties
{
	GENERATED_BODY()

	FEffectProperties() {}

	FGameplayEffectContextHandle EffectContext;


	UPROPERTY()
	AActor* SourceAvatarActor = nullptr;

	UPROPERTY()
	AController* SourceController = nullptr;

	UPROPERTY()
	ACharacter* SourceCharacter = nullptr;

	UPROPERTY()
	UAbilitySystemComponent* SourceASC = nullptr;

	UPROPERTY()
	AActor* TargetAvatarActor = nullptr;

	UPROPERTY()
	AController* TargetController = nullptr;

	UPROPERTY()
	ACharacter* TargetCharacter = nullptr;

	UPROPERTY()
	UAbilitySystemComponent* TargetASC = nullptr;
};

template<class T>
using TStaticFuncPtr = typename TBaseStaticDelegateInstance<T, FDefaultDelegateUserPolicy>::FFuncPtr;

UCLASS()
class PROJECTMIMIKYU_API UPokemonBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UPokemonBaseAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue);
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data);

	TMap<FGameplayTag, TStaticFuncPtr<FGameplayAttribute()>> TagsToAttributes;

	void HandleIncomingDamage(FEffectProperties& Props);

#pragma region Primary Stat Attributes

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Vital Stat Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Vital Stat Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_SpecialDefense, Category = "Vital Stat Attributes")
	FGameplayAttributeData SpecialDefense;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, SpecialDefense);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_SpecialAttack, Category = "Vital Stat Attributes")
	FGameplayAttributeData SpecialAttack;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, SpecialAttack);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Attack, Category = "Vital Stat Attributes")
	FGameplayAttributeData Attack;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, Attack);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Defense, Category = "Vital Stat Attributes")
	FGameplayAttributeData Defense;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, Defense);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Speed, Category = "Vital Stat Attributes")
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, Speed);

#pragma endregion

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DodgeForce, Category = "Vital Stat Attributes")
	FGameplayAttributeData DodgeForce;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, DodgeForce);

#pragma region Meta Attributes

	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData IncomingDamage;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, IncomingDamage);

	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData KnockbackForce;
	ATTRIBUTE_ACCESSORS(UPokemonBaseAttributeSet, KnockbackForce);

#pragma endregion

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	UFUNCTION()
	void OnRep_Speed(const FGameplayAttributeData& OldSpeed) const;

	UFUNCTION()
	void OnRep_SpecialDefense(const FGameplayAttributeData& OldSpecialDefense) const;

	UFUNCTION()
	void OnRep_SpecialAttack(const FGameplayAttributeData& Old_SpecialAttack) const;

	UFUNCTION()
	void OnRep_Attack(const FGameplayAttributeData& OldAttack) const;

	UFUNCTION()
	void OnRep_Defense(const FGameplayAttributeData& OldDefense) const;

	UFUNCTION()
	void OnRep_DodgeForce(const FGameplayAttributeData& OldDodgeForce) const;
private:
	void SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props);
};

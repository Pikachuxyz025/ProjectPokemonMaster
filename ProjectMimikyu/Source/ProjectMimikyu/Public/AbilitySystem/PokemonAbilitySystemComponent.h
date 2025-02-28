// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "PokemonAbilitySystemComponent.generated.h"

class UPokemonGameplayAbilities;
class UPokemonMoveDataAsset;

DECLARE_MULTICAST_DELEGATE_OneParam(FEffectAssetTag, const FGameplayTagContainer& /*AssetTags*/);

UCLASS()
class PROJECTMIMIKYU_API UPokemonAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	void AbilityActorInfoSet();
	FEffectAssetTag EffectAssetTag;

	void AddCharacterAbilities(TArray<UPokemonMoveDataAsset*> CurrentPokemonMoves);
	void AddSingleAbility(TSubclassOf<UPokemonGameplayAbilities> NewAbility, FGameplayTag AbilityInputTag);

	UFUNCTION(BlueprintCallable)
	void ActivateAbilityByTag(const FGameplayTag& InputTag);
	int32 GetPokemonLevel() const;
	int32 GetXP() const;
protected:

	void EffectApplied(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle);
};

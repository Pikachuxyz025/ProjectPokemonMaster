// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Characters/CharacterTypes.h"
#include "PokemonStatInfoDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPokemonStatInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag StatTag = FGameplayTag();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText StatName = FText();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText StatDescription = FText();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EStatsType StatType = EStatsType::EST_None;

	UPROPERTY( BlueprintReadOnly)
	float StatValue = 0.f;

	UPROPERTY(BlueprintReadOnly)
	int32 StatBaseValue = 0.f;

	UPROPERTY(BlueprintReadOnly)
	int32 EffortLevelValue = 0;
};

class UPokemonBaseAttributeSet;
struct FGameplayAttribute;

UCLASS()
class PROJECTMIMIKYU_API UPokemonStatInfoDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	FPokemonStatInfo FindStatInfoForTag(const FGameplayTag& StatTag, bool bLogNotFound = false) const;

	void AddToEffortValueInfo(const FGameplayTag& StatTag, bool bLogNotFound = false);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FPokemonStatInfo> StatInformation;

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr <UPokemonBaseAttributeSet> PokemonAttributes;

	void SetAttributeInfo(const FGameplayTag& AttributeTag, const FGameplayAttribute& Attribute);
public:

	void SetPokemonAttribute(UPokemonBaseAttributeSet* NewPokemonAttribute);

};

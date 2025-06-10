// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PokemonGameplayTags.h"
#include "Characters/CharacterTypes.h"
#include "PokemonDataAsset.generated.h"

class UTexture2D;
class UPokemonMoveDataAsset;

USTRUCT(BlueprintType)
struct FPokemonMovesetList
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 LevelLearned = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TObjectPtr<UPokemonMoveDataAsset>> PokemonMovesLearntAtLevel;
};

USTRUCT(BlueprintType)
struct FPokemonStatInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag StatTag = FGameplayTag();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText StatName = FText();

	UPROPERTY(BlueprintReadOnly)
	float StatValue = 0.f;

	UPROPERTY(BlueprintReadOnly)
	int32 StatBaseValue = 0;

	UPROPERTY(BlueprintReadOnly)
	int32 EffortLevelValue = 0;
};

UCLASS()
class PROJECTMIMIKYU_API UPokemonDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	TSubclassOf<APokemon_Parent> StoredPokemonClass;

	UPROPERTY(EditAnywhere)
	FText Name;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	USkeletalMesh* Model;

	UPROPERTY(EditAnywhere)
	UTexture2D* SpriteImage;

	UPROPERTY(EditAnywhere, Category = "Stats")
	TMap<FGameplayTag, int32> TagsToBaseStats;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	TMap<FGameplayTag, FText> TagsToNames =
	{
{ FPokemonGameplayTags::Get().Attributes_Stats_Attack,FText::FromString("Attack") },
{ FPokemonGameplayTags::Get().Attributes_Stats_SpecialAttack,FText::FromString("Special Attack") },
{ FPokemonGameplayTags::Get().Attributes_Stats_SpecialDefense,FText::FromString("Special Defense") },
{ FPokemonGameplayTags::Get().Attributes_Stats_Defense,FText::FromString("Defense") },
{ FPokemonGameplayTags::Get().Attributes_Stats_Speed,FText::FromString("Speed") },
{ FPokemonGameplayTags::Get().Attributes_Stats_MaxHP,FText::FromString("HP") },
{ FPokemonGameplayTags::Get().Attributes_Vital_HP,FText::FromString("HP") }
	};

	UPROPERTY(EditAnywhere, Category = "Stats")
	EElementalType FirstType = EElementalType::EET_None;

	UPROPERTY(EditAnywhere, Category = "Stats")
	EElementalType SecondType = EElementalType::EET_None;

	UPROPERTY(EditAnywhere, Category = "Moves")
	TArray<FPokemonMovesetList> PokemonMoveInfo;

	int32 GetStatFromTag(const FGameplayTag& StatTag);
	FText GetNameFromTag(const FGameplayTag& StatTag);
	UPokemonMoveDataAsset* FindPokemonMoveForLevel(int32 CurrentLevel);
	UFUNCTION(BlueprintCallable)
	FPokemonStatInfo CreateStatInfo(const FGameplayTag StatTag, const float PokemonStatValue);
};

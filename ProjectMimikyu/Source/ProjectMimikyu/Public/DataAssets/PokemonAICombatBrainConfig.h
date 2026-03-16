// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PokemonGameplayTags.h"
#include "PokemonAICombatBrainConfig.generated.h"

UENUM(BlueprintType)
enum class ETargetRule :uint8
{
	ERT_None UMETA(DisplayName = "None"),
	ERT_Nearest UMETA(DisplayName = "Nearest"),
	ERT_LowestHP UMETA(DisplayName = "Lowest HP"),
	ERT_HighestThreatToMe UMETA(DisplayName = "Highest Threat To Me"),
	ERT_FocusTrainerTarget UMETA(DisplayName = "Focus Trainer Target"),
	ERT_RandomWeighted UMETA(DisplayName = "Random Weighted")
};

UCLASS()
class PROJECTMIMIKYU_API UPokemonAICombatBrainConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cadence/Difficulty")
	float ThinkIntervalMin = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cadence/Difficulty")
	float ThinkIntervalMax = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cadence/Difficulty")
	float ReactionDelayMin = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cadence/Difficulty")
	float ReactionDelayMax = 0.75f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cadence/Difficulty")
	float CommitTimeMin = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cadence/Difficulty")
	float CommitTimeMax = 1.5f;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Accuracy")
	float AimErrorDegrees = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Accuracy")
	float TargetPredictionError = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Accuracy")
	float RangeSlack = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Risk/Style") // 0..1 , where 0 is very passive and 1 is very aggressive
	float Aggression = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Risk/Style")
	float RiskToTolerance = 0.5f; // 0..1, where 0 means the AI will always choose the safest option, and 1 means the AI will always choose the most risky option

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Risk/Style")
	float DodgeFrequency = 0.5f; // 0..1, where 0 means the AI will never dodge, and 1 means the AI will always attempt to dodge when possible

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Risk/Style")
	float DodgeMinCooldown = 1.f;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting")
	ETargetRule TargetRule = ETargetRule::ERT_Nearest;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Preferred Spacing")
	float PreferredDistanceToTargetMin = 500.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Preferred Spacing")
	float PreferredDistanceToTargetMax = 1000.f;

	// Move scoring weights (tag based)
	UPROPERTY(EditAnywhere, Category = "MoveScoring", meta = (Categories = "Abilities"))
	TMap<FGameplayTag, float> MoveTagWeights;

	UPROPERTY(EditAnywhere, Category = "MoveScoring", meta = (Categories = "PokemonMoves.MoveType"))
	TMap<FGameplayTag, float> MoveCategroyWeights;

	UPROPERTY(EditAnywhere, Category = "MoveScoring", meta = (Categories = "PokemonMoves.MoveType"))
	TMap<FGameplayTag, float> StatusPreference;
};

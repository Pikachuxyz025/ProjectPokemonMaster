// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "PokemonAbilityTypes.h"
#include "Characters/CharacterTypes.h"
#include "PokemonGameplayTags.h"
#include "PokemonGameplayAbilities.generated.h"

USTRUCT(BlueprintType)
struct FPokemonInputInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, meta = (Categories = "Abilities"))
	FGameplayTag PokemonUpgradeTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<EDirectionPoint> KeyDirectionSequence;
};

USTRUCT(BlueprintType)
struct FMoveTiming
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float CommandDelay = .75f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnticipationDuration = .5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActiveDuration = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RecoveryDuration = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DodgeWindowStart = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DodgeWindowEnd = 0.f;
};

UCLASS()
class PROJECTMIMIKYU_API UPokemonGameplayAbilities : public UGameplayAbility
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameplayTag InputTag;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FMoveTiming MoveTimingSequence;
};

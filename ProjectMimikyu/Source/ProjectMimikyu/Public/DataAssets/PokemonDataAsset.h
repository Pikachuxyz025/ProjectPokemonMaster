// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Characters/CharacterTypes.h"
#include "PokemonDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UPokemonDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FText Name;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	USkeletalMesh* Model;

	UPROPERTY(EditAnywhere)
	class UTexture2D* SpriteImage;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 BaseHealthPoints = 0;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 BaseAttack = 0;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 BaseDefense = 0;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 BaseSpecialAttack = 0;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 BaseSpecialDefense = 0;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 BaseSpeed = 0;

	UPROPERTY(EditAnywhere, Category = "Stats")
	EElementalType FirstType = EElementalType::EET_None;

	UPROPERTY(EditAnywhere, Category = "Stats")
	EElementalType SecondType = EElementalType::EET_None;
};

// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Characters/CharacterTypes.h"
#include "GameplayTagContainer.h"
#include "PokemonProjectileTagLibrary.generated.h"

class UTagCategoryDataAsset;

UCLASS()
class PROJECTMIMIKYU_API UPokemonProjectileTagLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "TagCategory", meta = (DefaultToSelf = "WorldContextObject"))
	static void ResolveTagContainer(const UObject* WorldContextObject, const FGameplayTagContainer& TagContainer, TArray<FGameplayTag>& OutTags);

	UFUNCTION(BlueprintCallable, Category = "TagCategory", meta = (DefaultToSelf = "WorldContextObject"))
	static FGameplayTag GetBestTagForCategory(const UObject* WorldContextObject, const FGameplayTagContainer& TagContainer, const FName& CategoryName);

	UFUNCTION(BlueprintCallable, Category = "TagCategory", meta = (DefaultToSelf = "WorldContextObject"))
	static FName GetFunctionNameForCategory(const UObject* WorldContextObject, const FGameplayTag& Tag);

	UFUNCTION(BlueprintCallable, Category = "MoveHelper")
	static FRotator ComputeSequentialShotRotation(const FGameplayTagContainer& ResolvedTags, const FSequentialShotParams& SequentialShotParams);

	UFUNCTION(BlueprintCallable, Category = "MoveHelper")
	static FRotator GetScatterSphereRotation(const FVector& StartLocation, const FVector& TargetLocation, float DistanceToSphere, float SphereRadius);

	UFUNCTION(BlueprintCallable, Category = "MoveHelper")
	static void ComputeLandingPoints(const FGameplayTagContainer& ResolvedTags, FEnvironmentDropParams& DropParams, int32 WaveIndex, int32& OutPointsForThisWave);

	UFUNCTION(BlueprintCallable, Category = "MoveHelper")
	static void ComputeDropSpawn(const FEnvironmentDropParams& DropParams, const FVector& LandingPoint, FTransform& OutSpawnTM, FVector& OutInitialVelocity);
};

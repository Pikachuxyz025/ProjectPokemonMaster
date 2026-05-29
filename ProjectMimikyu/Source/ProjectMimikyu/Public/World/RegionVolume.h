// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "RegionVolume.generated.h"


class UBoxComponent;
class URegionPopulationData;
/**
 * ARegionVolume
 *
 * Placed in the world to define a gameplay region.
 *
 * Early prototype responsibilities:
 * - Define Region/Biome/Environment tags.
 * - Optionally reference region population data.
 * - Detect player entry/exit.
 * - Print debug info.
 *
 * Later responsibilities:
 * - Notify UWorldPopulationSubsystem.
 * - Drive spawn rules, despawn rules, region reputation, and persistence.
 */

UCLASS()
class PROJECTMIMIKYU_API ARegionVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	ARegionVolume();

protected:
	virtual void BeginPlay() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	UFUNCTION()
	void OnRegionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnRegionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	bool IsValidRegionActor(AActor* Actor) const;

	void PrintEnterDebug(AActor* EnteringActor) const;
	void PrintExitDebug(AActor* ExitingActor) const;
	void ValidateRegionData() const;

	FString BuildTagContainerString(const FGameplayTagContainer& TagContainer)const;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UBoxComponent> RegionBounds;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Region",meta = (Categories = "Region"))
	FGameplayTag RegionTag;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Region",meta = (Categories = "Biome"))
	FGameplayTagContainer BiomeTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Region",meta = (Categories = "Environment"))
	FGameplayTagContainer EnvironmentTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Region")
	TObjectPtr<URegionPopulationData> RegionPopulationData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Debug")
	bool bDebugRegionOverlap = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Debug")
	float DebugMessageDuration = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Debug")
	FColor DebugEnterColor = FColor::Green;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Debug")
	FColor DebugExitColor = FColor::Orange;

public:
	UFUNCTION(BlueprintPure, Category = "Region")
	FGameplayTag GetRegionTag() const { return RegionTag; }

	UFUNCTION(BlueprintPure, Category = "Region")
	const FGameplayTagContainer& GetBiomeTags() const { return BiomeTags; }

	UFUNCTION(BlueprintPure, Category = "Region")
	const FGameplayTagContainer& GetEnvironmentTags() const { return EnvironmentTags; }

	UFUNCTION(BlueprintPure, Category = "Region")
	URegionPopulationData* GetRegionPopulationData() const { return RegionPopulationData; }
};

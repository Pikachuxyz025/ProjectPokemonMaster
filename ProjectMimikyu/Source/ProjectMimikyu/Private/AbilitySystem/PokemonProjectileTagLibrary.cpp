// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/PokemonProjectileTagLibrary.h"
#include <Kismet/GameplayStatics.h>
#include <GameModes/ProjectMimikyuGameMode.h>
#include "DataAssets/TagCategoryDataAsset.h"
#include <Kismet/KismetMathLibrary.h>


// Gives you an ordered list of tags based on category & priority -> Ability Task uses this to determine execution flow.
void UPokemonProjectileTagLibrary::ResolveTagContainer(const UObject* WorldContextObject, const FGameplayTagContainer& TagContainer, TArray<FGameplayTag>& OutTags)
{
	AProjectMimikyuGameMode* PokemonGameMode = Cast<AProjectMimikyuGameMode>(UGameplayStatics::GetGameMode(WorldContextObject));
	if (!PokemonGameMode) return;

	UTagCategoryDataAsset* TagCategoryDataAsset = PokemonGameMode->GetTagCategoryData();
	if (!TagCategoryDataAsset) return;

	OutTags.Empty();

	// Iterate over each category in the TagCategoryDataAsset
	for (const FTagCategoryMap& Category : TagCategoryDataAsset->Categories)
	{
		FGameplayTag BestTag;
		int32 BestPriority = -9999;

		// Check each tag in the category to see if it's in the provided TagContainer
		for (const FGameplayTag& Tag : Category.Tags)
		{
			if(TagContainer.HasTagExact(Tag))
			{
				const int32* TagPriority = Category.TagPriorities.Find(Tag);
				int32 CurrentPriority = TagPriority ? *TagPriority : 0;
				if (CurrentPriority > BestPriority)
				{
					BestPriority = CurrentPriority;
					BestTag = Tag;
				}
			}
		}

		if(BestTag.IsValid())
		{
			OutTags.Add(BestTag);
		}
	}
}

// Quick lookup if you only care about one category(e.g., "Projectile Pattern").
FGameplayTag UPokemonProjectileTagLibrary::GetBestTagForCategory(const UObject* WorldContextObject, const FGameplayTagContainer& TagContainer, const FName& CategoryName)
{
	AProjectMimikyuGameMode* PokemonGameMode = Cast<AProjectMimikyuGameMode>(UGameplayStatics::GetGameMode(WorldContextObject));
	if (!PokemonGameMode) return FGameplayTag();

	UTagCategoryDataAsset* TagCategoryDataAsset = PokemonGameMode->GetTagCategoryData();
	if (!TagCategoryDataAsset) return FGameplayTag();

	for (const FTagCategoryMap& Category : TagCategoryDataAsset->Categories)
	{
		if (Category.CategoryName != CategoryName) continue;

		FGameplayTag BestTag;
		int32 BestPriority = -9999;

		for(const FGameplayTag& Tag : Category.Tags)
		{
			if(TagContainer.HasTagExact(Tag))
			{
				const int32* TagPriority = Category.TagPriorities.Find(Tag);
				int32 CurrentPriority = TagPriority ? *TagPriority : 0;
				if(CurrentPriority > BestPriority)
				{
					BestPriority = CurrentPriority;
					BestTag = Tag;
				}
			}
		}
		return BestTag;
	}
	return FGameplayTag();
}

// Allows you to dynamically bind function overrides in Blueprints or C++
FName UPokemonProjectileTagLibrary::GetFunctionNameForCategory(const UObject* WorldContextObject, const FGameplayTag& Tag)
{
	AProjectMimikyuGameMode* PokemonGameMode = Cast<AProjectMimikyuGameMode>(UGameplayStatics::GetGameMode(WorldContextObject));
	if (!PokemonGameMode) return NAME_None;

	UTagCategoryDataAsset* TagCategoryDataAsset = PokemonGameMode->GetTagCategoryData();
	if (!TagCategoryDataAsset) return NAME_None;

	for (const FTagCategoryMap& Category : TagCategoryDataAsset->Categories)
	{
		if (const FName* FunctionName = Category.TagToFunctionName.Find(Tag))
		{
			return *FunctionName;
		}
	}
	return NAME_None;
}

FRotator UPokemonProjectileTagLibrary::ComputeSequentialShotRotation(const FGameplayTagContainer& ResolvedTags, const FSequentialShotParams& SequentialShotParams)
{
	FPokemonGameplayTags GameplayTags = FPokemonGameplayTags::Get();
	static const FGameplayTag ScatterTag = GameplayTags.PokemonMoves_Spread_Modifier_Scatter;
	static const FGameplayTag ConeTag = GameplayTags.PokemonMoves_Spread_Projectile_Cone;

	if(ResolvedTags.HasTagExact(ScatterTag))
	{
		return GetScatterSphereRotation(SequentialShotParams.StartLocation, SequentialShotParams.TargetLocation, SequentialShotParams.DistanceToSphere, SequentialShotParams.SphereRadius);
	}

	 if(ResolvedTags.HasTagExact(ConeTag))
	{
		// Calculate spread angle based on total shots
		// Calculation may need adjusting, please note
		float SpreadAngleDeg = SequentialShotParams.TotalShots > 1 ?  SequentialShotParams.SpreadAngleDeg * (SequentialShotParams.TotalShots - 1) : 0.f;
		float AngleStep = SequentialShotParams.TotalShots > 1 ? SpreadAngleDeg / (SequentialShotParams.TotalShots - 1) : 0.f;
		float StartAngle = -SpreadAngleDeg / 2.f;
		float CurrentAngle = StartAngle + AngleStep * SequentialShotParams.ShotIndex;
		FRotator SpreadRotation = SequentialShotParams.BaseRotation;
		SpreadRotation.Yaw += CurrentAngle;
		return SpreadRotation;
	}
	return SequentialShotParams.BaseRotation;
}

FRotator UPokemonProjectileTagLibrary::GetScatterSphereRotation(const FVector& StartLocation, const FVector& TargetLocation, float DistanceToSphere, float SphereRadius)
{
	const FVector ToEndNormalized = (TargetLocation - StartLocation).GetSafeNormal();
	const FVector SphereCenter = StartLocation + ToEndNormalized * DistanceToSphere;

	const FVector RandPointInSphereVector = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
	const FVector EndLoc = SphereCenter + RandPointInSphereVector;
	return (EndLoc - StartLocation).Rotation();
}

void UPokemonProjectileTagLibrary::ComputeLandingPoints(const FGameplayTagContainer& ResolvedTags, FEnvironmentDropParams& DropParams, int32 WaveIndex, int32& OutPointsForThisWave)
{
}

void UPokemonProjectileTagLibrary::ComputeDropSpawn(const FEnvironmentDropParams& DropParams, const FVector& LandingPoint, FTransform& OutSpawnTM, FVector& OutInitialVelocity)
{
}


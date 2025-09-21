// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Characters/CharacterTypes.h"
#include "EnvQueryGenerator_ImpactPattern.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UEnvQueryGenerator_ImpactPattern : public UEnvQueryGenerator
{
	GENERATED_BODY()
	
public:

	UEnvQueryGenerator_ImpactPattern();

	UPROPERTY(EditDefaultsOnly, Category = "Context")
	TSubclassOf<UEnvQueryContext> CenterContext;

	UPROPERTY(EditDefaultsOnly, Category = "Pattern")
	EEnvironmentLandingPattern Pattern = EEnvironmentLandingPattern::EELP_Circle;

	// Allow task to override via Named Param "LandingPattern" (float -> int -> enum)
	UPROPERTY(EditDefaultsOnly, Category = "Pattern")
	bool bAllowNamedPatternOverride = true;

	UPROPERTY(EditDefaultsOnly, Category = "Pattern")
	bool bUsedAreaRadiusNamedParam = true;

	UPROPERTY(EditDefaultsOnly, Category = "Pattern", meta = (EditCondition = "!bUsedAreaRadiusNamedParam"))
	float DefaultAreaRadius = 800.f;

	UPROPERTY(EditDefaultsOnly, Category = "Ring", meta = (ClampMin = "1"))
	int32 RingPointCount = 16;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ring", meta = (ClampMin = "0"))
	float RingJitter = 0.f;

	UPROPERTY(EditDefaultsOnly, Category = "Scatter", meta = (ClampMin = "1"))
	int32 ScatterCount = 16;

	UPROPERTY(EditDefaultsOnly, Category = "Scatter", meta = (ClampMin = "0"))
	float MinSeparation = 0.f;

	UPROPERTY(EditDefaultsOnly, Category = "Grid", meta = (ClampMin = "1"))
	int32 GridX = 4;

	UPROPERTY(EditDefaultsOnly, Category = "Grid", meta = (ClampMin = "1"))
	int32 GridY = 4;

	UPROPERTY(EditDefaultsOnly, Category = "Grid", meta = (ClampMin = "1"))
	float CellSize = 200.f;

	UPROPERTY(EditDefaultsOnly, Category = "Pattern")
	float PatternYawDeg = 0.f;

	virtual void GenerateItems(FEnvQueryInstance& QueryInstance) const override;

#if WITH_EDITOR
	virtual FText GetDescriptionTitle() const override;
	virtual FText GetDescriptionDetails() const override;
#endif


	static int32  GetNamedParamIntOr(const FEnvQueryInstance& Instance, FName Name, int32 Default);
private:

	static float GetNamedParamOr(const FEnvQueryInstance& Instance, FName Name, float Default);


	// pattern implementations (same bodies you already have)
	void Gen_Ring(const FVector& Center, float Radius, TArray<FVector>& Out) const;
	void Gen_RandomScatter(const FVector& Center, float Radius, TArray<FVector>& Out) const;
	void Gen_Grid(const FVector& Center, float Radius, TArray<FVector>& Out) const;

	bool AcceptWithMinSeparation(const TArray<FVector>& Chosen, const FVector& Candidate, float MinSepSq)const;
};

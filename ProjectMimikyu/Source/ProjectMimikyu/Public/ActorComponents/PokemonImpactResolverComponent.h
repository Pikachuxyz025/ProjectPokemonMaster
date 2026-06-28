

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Combat/PokemonImpactTypes.h"
#include "PokemonImpactResolverComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FPokemonImpactResolvedSignature,
	FPokemonMoveContactContext, ContactContext,
	FPokemonImpactResolution, ImpactResolution
);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UPokemonImpactResolverComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPokemonImpactResolverComponent();

UFUNCTION(BlueprintCallable,Category = "Combat|Impact")
FPokemonImpactResolution ResolveImpact(const FPokemonMoveContactContext & ContactContext) const;

UFUNCTION(BlueprintCallable, Category = "Combat|Impact")
FPokemonImpactResolution ResolveAndApplyImpact(const FPokemonMoveContactContext& ContactContext);

UFUNCTION(BlueprintCallable, Category = "Combat|Impact")
void ApplyImpactResolution(const FPokemonMoveContactContext& ContactContext, const FPokemonImpactResolution& ImpactResolution);

UPROPERTY(BlueprintAssignable, Category = "Combat|Impact")
FPokemonImpactResolvedSignature OnImpactResolved;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Scoring")
	float SpeedToImpactScale = 0.01f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Scoring")
	float WeightToImpactScale = 10.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Scoring")
	float KnockbackToImpactScale = 0.01f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Scoring")
	float WeightToResistanceScale = 10.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Scoring")
	float BracedResistanceBonus = 35.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Thresholds")
	float ClashWindow = 10.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Thresholds")
	float CleanHitThreshold = 10.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Thresholds")
	float HeavyHitThreshold = 40.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Thresholds")
	float LaunchThreshold = 75.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Thresholds")
	float BounceOffThreshold = -15.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat|Impact|Thresholds")
	float NoSellThreshold = -50.f;

private:
	float CalculateImpactScore(const FPokemonMoveContactContext& ContactContext) const;
	float CalculateResistanceScore(const FPokemonMoveContactContext& ContactContext) const;

	void ConfigureResolutionForResult(
		FPokemonImpactResolution& OutResolution,
		const FPokemonMoveContactContext& ContactContext,
		EPokemonImpactResult Result,
		float ScoreDelta
	) const;
};

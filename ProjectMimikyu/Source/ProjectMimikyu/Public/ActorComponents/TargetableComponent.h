

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "TargetableComponent.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FPokemonTargetPointDefinition
{
	GENERATED_BODY()

    // Stable gameplay identity:
	// Target.Point.Head, Target.Point.Torso, etc.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Point",meta = (Categories = "Target.Point"))
	FGameplayTag PointTag;

	// Can be either a socket or a skeletal bone.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Point")
	FName SocketOrBoneName;

	// Offset relative to the socket or bone transform.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Point")
	FVector LocalOffset = FVector::ZeroVector;

	// Raw player aim must be reasonably close to this point. <= 0 means unrestricted.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Point")
	float SelectionRadius = 150.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Point")
	bool bEnabled = true;
};

USTRUCT(BlueprintType)
struct FResolvedPokemonTargetPoint
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FGameplayTag PointTag;

	UPROPERTY(BlueprintReadOnly)
	FName SocketOrBoneName = NAME_None;

	UPROPERTY(BlueprintReadOnly)
	FVector WorldLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly)
	bool bResolved = false;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMIMIKYU_API UTargetableComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UTargetableComponent();

	UFUNCTION(BlueprintCallable, Category = "Targeting|Points")
	bool ResolveNearestTargetPoint(const FVector& RawAimLocation, FResolvedPokemonTargetPoint& OutResolvedPoint) const;

	UFUNCTION(BlueprintPure, Category = "Targeting|Points")
	bool GetTargetPointWorldLocation(const FGameplayTag& PointTag, FVector& OutWorldLocation) const;

	UFUNCTION(BlueprintCallable, Category = "Targeting|Points|Debug")
	void DebugDrawTargetPoints(float Duration = 5.f) const;
protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Points")
	TArray<FPokemonTargetPointDefinition> TargetPoints;

	UPROPERTY(Transient)
	TObjectPtr<USkeletalMeshComponent> TargetMesh = nullptr;

public:	

	bool ResolveDefinitionLocation(const FPokemonTargetPointDefinition& Definition, FVector& OutWorldLocation) const;
};

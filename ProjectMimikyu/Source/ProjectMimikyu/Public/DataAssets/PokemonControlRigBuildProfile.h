
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PokemonControlRigBuildProfile.generated.h"

USTRUCT(BlueprintType)
struct FPokemonControlDefinition
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ControlName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName SourceBone;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ParentControl;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ShapeName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector ShapeScale = FVector(1.0f);
};

USTRUCT(BlueprintType)
struct FPokemonControlRigFKMapping
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ParentBone;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Bone;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ParentControl;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Control;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bPropagateToChildren = true;
};

UCLASS(BlueprintType)
class UPokemonControlRigBuildProfile : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FPokemonControlDefinition> Controls;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FPokemonControlRigFKMapping> FKMappings;
};

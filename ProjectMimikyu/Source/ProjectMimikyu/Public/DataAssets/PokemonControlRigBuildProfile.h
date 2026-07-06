
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PokemonControlRigBuildProfile.generated.h"

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonControlDefinition
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ControlName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName BoneName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ParentControl;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ParentBoneOverride;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ShapeName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector ShapeScale = FVector(1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCreateControl = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bDriveBoneWithFK = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bPropagateToChildren = true;
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonControlRigFKMapping
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
class PROJECTMIMIKYU_API UPokemonControlRigBuildProfile : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Control Rig|Controls")
    TArray<FPokemonControlDefinition> Controls;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control Rig|Generated")
    TArray<FPokemonControlRigFKMapping> GeneratedFKMappings;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Control Rig|Overrides")
    TArray<FPokemonControlRigFKMapping> FKMappingOverrides;
};

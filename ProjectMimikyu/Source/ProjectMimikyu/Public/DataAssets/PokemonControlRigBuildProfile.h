#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PokemonControlRigBuildProfile.generated.h"

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonControlDefinition
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
    FName ControlName = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
    FName BoneName = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
    FName ParentControl = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control")
    FName ParentBoneOverride = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape")
    FName ShapeName = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape")
    FVector ShapeScale = FVector(1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape")
    FTransform ShapeOffset = FTransform::Identity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape")
    FLinearColor ShapeColor = FLinearColor::White;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Build")
    bool bCreateControl = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Build")
    bool bDriveBoneWithFK = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Build")
    bool bPropagateToChildren = true;
};

USTRUCT(BlueprintType)
struct PROJECTMIMIKYU_API FPokemonControlRigFKMapping
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FK")
    FName ParentBone = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FK")
    FName Bone = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FK")
    FName ParentControl = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FK")
    FName Control = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FK")
    bool bPropagateToChildren = true;
};

UCLASS(BlueprintType)
class PROJECTMIMIKYU_API UPokemonControlRigBuildProfile : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Control Rig|Skeleton Source")
    TObjectPtr<USkeletalMesh> SourceSkeletalMesh = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Control Rig|Skeleton Source")
    TObjectPtr<USkeleton> SourceSkeleton = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control Rig|Generation", meta = (GetOptions = "GetAvailableBoneNameOptions"))
    FName ControlRootBone = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control Rig|Generation")
    FName GlobalControlName = TEXT("CTRL_Global");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control Rig|Generation")
    FString ControlNamePrefix = TEXT("CTRL_");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control Rig|Generation")
    bool bPreserveShapeSettingsWhenGeneratingFromSkeleton = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control Rig|Generation")
    TArray<FString> IgnoreBoneNameContains;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Control Rig|Generation", meta = (GetOptions = "GetAvailableBoneNameOptions"))
    TArray<FName> ExactIgnoredBones;

    UFUNCTION()
    TArray<FString> GetAvailableBoneNameOptions() const;

    UFUNCTION(CallInEditor, BlueprintCallable, Category = "Control Rig Build")
    void GenerateControlsFromSkeleton();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Control Rig|Controls")
    TArray<FPokemonControlDefinition> Controls;

    // Generated from Controls. You inspect this, but you should not author it manually.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control Rig|Generated")
    TArray<FPokemonControlRigFKMapping> GeneratedFKMappings;

    // Manual special cases. These get appended after generated mappings.
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Control Rig|Overrides")
    TArray<FPokemonControlRigFKMapping> FKMappingOverrides;

    UFUNCTION(CallInEditor, BlueprintCallable, Category = "Control Rig Build")
    void GenerateFKMappingsFromControls();

    UFUNCTION(CallInEditor, BlueprintCallable, Category = "Control Rig Build")
    void ClearGeneratedFKMappings();
};
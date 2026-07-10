

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "Animation/AnimSequence.h"
#include "EmotionProfileDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPokemonEmotionPose
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FGameplayTag EmotionTag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UAnimSequence> PoseAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FVector2D IrisOffset=FVector2D::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float JawOpenAmount = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float EyeSquintAmount = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float HeadPitch = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float HeadYaw = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float BodyLean = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float BlendTime = 0.15f;
};

UCLASS(BlueprintType)
class PROJECTMIMIKYU_API UEmotionProfileDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<FPokemonEmotionPose> Emotions;
};

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PokemonPresentationProfile.generated.h"

class USkeleton;
class UAnimSequence;
class UPokemonAnimInstance;

UCLASS(BlueprintType)
class PROJECTMIMIKYU_API UPokemonPresentationProfile : public UDataAsset
{
	GENERATED_BODY()

public:
	// A profile describes one visual rig revision, not all members of a species.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Compatibility")
	TObjectPtr<USkeleton> ExpectedSkeleton = nullptr;

	// Select an Animation Blueprint derived from UPokemonAnimInstance.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Compatibility")
	TSubclassOf<UPokemonAnimInstance> AnimationClass;

	// None disables head tracking for a character without a suitable head bone.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Head")
	FName HeadBone = NAME_None;

	// Direction in the head bone's LOCAL frame that points through the face.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Head")
	FVector HeadAimAxisLS = FVector::ForwardVector;

	// Neutral forward/up frame relative to the skeletal mesh COMPONENT.
	// It is independent of the current head rotation, so limits cannot accumulate.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Head")
	FRotator LookFrameCS = FRotator::ZeroRotator;

	// The head will not track targets that are farther behind than this angle.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Head",
		meta = (ClampMin = "0.0", ClampMax = "85.0", Units = "deg"))
	float MaxYaw = 45.f;

	// The head will not track targets that are farther above/below than this angle.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Head",
		meta = (ClampMin = "0.0", ClampMax = "85.0", Units = "deg"))
	float MaxPitch = 25.f;

    // Targets farther behind than this fade head tracking out.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Head",
        meta = (ClampMin = "90.0", ClampMax = "170.0", Units = "deg"))
    float LoseTargetYaw = 110.f;

	// Determine how quickly the head rotates to track the target. Higher values are faster.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Head",
        meta = (ClampMin = "0.1"))
    float InterpSpeed = 8.f;

    // Conservative first policy; authored animation curves can refine this later.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ownership")
    bool bSuppressDuringAttacks = true;

    // Optional semantic aim point used by the existing targeting interface.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Targeting")
    FName AimSocket = NAME_None;

    // Actor-local offset, used only if AimSocket cannot be resolved.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Targeting")
    FVector FallbackAimOffset = FVector::ZeroVector;

    // This first facial adapter uses a non-additive bone animation.
    // Null disables blinking. Future morph/material adapters can use the same
    // request/timing interface without reproducing this skeleton's eyelids.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Blink")
    TObjectPtr<UAnimSequence> BlinkSequence = nullptr;

    // Name of a BLEND MASK stored on ExpectedSkeleton.
    // The AnimBP adapter must select this same mask in its blend node.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Blink")
    FName BlinkMaskName = NAME_None;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Blink",
        meta = (ClampMin = "0.1", Units = "s"))
    float BlinkIntervalMin = 2.f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Blink",
        meta = (ClampMin = "0.1", Units = "s"))
    float BlinkIntervalMax = 5.f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Blink",
        meta = (ClampMin = "0.0", Units = "s"))
    float BlinkEdgeBlendSeconds = 0.03f;
};
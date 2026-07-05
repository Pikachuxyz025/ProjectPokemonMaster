#pragma once

#include "CoreMinimal.h"
#include "AnimationModifier.h"
#include "PMMakeAnimationInPlaceModifier.generated.h"

UCLASS(DisplayName = "PM Make Animation In Place")
class PROJECTMIMIKYUEDITOR_API UPMMakeAnimationInPlaceModifier : public UAnimationModifier
{
	GENERATED_BODY()

public:
	virtual void OnApply_Implementation(UAnimSequence* AnimationSequence) override;
	virtual void OnRevert_Implementation(UAnimSequence* AnimationSequence) override;

protected:
	// For Lucario, this appears to be "origin".
	UPROPERTY(EditAnywhere, Category = "Make In Place")
	FName RootBoneName = TEXT("origin");

	// These are root bone local translation axes, not necessarily Unreal world axes.
	// Toggle these depending on which axis the imported animation travels on.
	UPROPERTY(EditAnywhere, Category = "Make In Place")
	bool bRemoveXTranslation = true;

	UPROPERTY(EditAnywhere, Category = "Make In Place")
	bool bRemoveYTranslation = true;

	UPROPERTY(EditAnywhere, Category = "Make In Place")
	bool bRemoveZTranslation = false;

	UPROPERTY(EditAnywhere, Category = "Make In Place|Debug")
	bool bLogAvailableBoneTracks = true;

	// Usually true. Keeps the root at its first-frame offset instead of forcing it to 0,0,0.
	UPROPERTY(EditAnywhere, Category = "Make In Place")
	bool bKeepFirstFrameOffset = true;
};
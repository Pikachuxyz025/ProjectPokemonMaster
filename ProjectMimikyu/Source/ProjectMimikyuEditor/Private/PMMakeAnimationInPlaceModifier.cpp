#include "PMMakeAnimationInPlaceModifier.h"

#include "Animation/AnimData/IAnimationDataController.h"
#include "Animation/AnimSequence.h"
#include "AnimationBlueprintLibrary.h"

#define LOCTEXT_NAMESPACE "PMMakeAnimationInPlaceModifier"

void UPMMakeAnimationInPlaceModifier::OnApply_Implementation(UAnimSequence* AnimationSequence)
{
	if (!AnimationSequence)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PMMakeAnimationInPlaceModifier] Apply failed: AnimationSequence is null."));
		return;
	}

	if (RootBoneName.IsNone())
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PMMakeAnimationInPlaceModifier] Apply failed for %s: RootBoneName is None."),
			*GetNameSafe(AnimationSequence));

		return;
	}

	TArray<FName> AnimationTrackNames;
	UAnimationBlueprintLibrary::GetAnimationTrackNames(AnimationSequence, AnimationTrackNames);

	UE_LOG(LogTemp, Warning,
		TEXT("[PMMakeAnimationInPlaceModifier] Asset=%s | PlayLength=%.3f | NumFrames=%d | BPTrackCount=%d"),
		*GetNameSafe(AnimationSequence),
		AnimationSequence->GetPlayLength(),
		AnimationSequence->GetNumberOfSampledKeys(),
		AnimationTrackNames.Num());

	UE_LOG(LogTemp, Warning,
		TEXT("[PMMakeAnimationInPlaceModifier] Position-key candidates for %s:"),
		*GetNameSafe(AnimationSequence));

	for (const FName& TrackName : AnimationTrackNames)
	{
		TArray<FVector> TestPositionKeys;
		TArray<FQuat> TestRotationKeys;
		TArray<FVector> TestScaleKeys;

		UAnimationBlueprintLibrary::GetRawTrackData(
			AnimationSequence,
			TrackName,
			TestPositionKeys,
			TestRotationKeys,
			TestScaleKeys
		);

		if (TestPositionKeys.Num() == 0)
		{
			continue;
		}

		const FVector FirstPosition = TestPositionKeys[0];
		const FVector LastPosition = TestPositionKeys.Last();
		const FVector Delta = LastPosition - FirstPosition;

		UE_LOG(LogTemp, Warning,
			TEXT("    Track=%s | PosKeys=%d | First=%s | Last=%s | Delta=%s | DeltaSize=%.3f"),
			*TrackName.ToString(),
			TestPositionKeys.Num(),
			*FirstPosition.ToString(),
			*LastPosition.ToString(),
			*Delta.ToString(),
			Delta.Size());
	}

	TArray<FVector> PositionKeys;
	TArray<FQuat> RotationKeys;
	TArray<FVector> ScaleKeys;

	UAnimationBlueprintLibrary::GetRawTrackData(
		AnimationSequence,
		RootBoneName,
		PositionKeys,
		RotationKeys,
		ScaleKeys
	);

	const int32 NumKeys = AnimationSequence->GetNumberOfSampledKeys();

	if (PositionKeys.Num() == 0)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PMMakeAnimationInPlaceModifier] Track '%s' has no position keys. Creating constant position keys."),
			*RootBoneName.ToString());

		PositionKeys.Reserve(NumKeys);

		for (int32 KeyIndex = 0; KeyIndex < NumKeys; ++KeyIndex)
		{
			PositionKeys.Add(FVector::ZeroVector);
		}
	}

	const FVector FirstRootLocation = PositionKeys[0];

	for (FVector& PositionKey : PositionKeys)
	{
		if (bRemoveXTranslation)
		{
			PositionKey.X = bKeepFirstFrameOffset ? FirstRootLocation.X : 0.0;
		}

		if (bRemoveYTranslation)
		{
			PositionKey.Y = bKeepFirstFrameOffset ? FirstRootLocation.Y : 0.0;
		}

		if (bRemoveZTranslation)
		{
			PositionKey.Z = bKeepFirstFrameOffset ? FirstRootLocation.Z : 0.0;
		}
	}

	// Convert double-precision UE vectors/quats to raw animation track key types.
	TArray<FVector3f> PositionKeys3f;
	TArray<FQuat4f> RotationKeys4f;
	TArray<FVector3f> ScaleKeys3f;

	PositionKeys3f.Reserve(PositionKeys.Num());
	RotationKeys4f.Reserve(RotationKeys.Num());
	ScaleKeys3f.Reserve(ScaleKeys.Num());

	for (const FVector& PositionKey : PositionKeys)
	{
		PositionKeys3f.Add(FVector3f(PositionKey));
	}

	for (const FQuat& RotationKey : RotationKeys)
	{
		RotationKeys4f.Add(FQuat4f(RotationKey));
	}

	for (const FVector& ScaleKey : ScaleKeys)
	{
		ScaleKeys3f.Add(FVector3f(ScaleKey));
	}

	IAnimationDataController& Controller = AnimationSequence->GetController();

	Controller.OpenBracket(
		LOCTEXT("PMMakeAnimationInPlace", "PM Make Animation In Place"),
		true
	);

	Controller.SetBoneTrackKeys(
		RootBoneName,
		PositionKeys3f,
		RotationKeys4f,
		ScaleKeys3f
	);

	Controller.CloseBracket(true);

	AnimationSequence->MarkPackageDirty();

	UE_LOG(LogTemp, Warning,
		TEXT("[PMMakeAnimationInPlaceModifier] Applied to %s | Track=%s | PosKeys=%d | RotKeys=%d | ScaleKeys=%d | RemoveX=%s RemoveY=%s RemoveZ=%s KeepFirstOffset=%s"),
		*GetNameSafe(AnimationSequence),
		*RootBoneName.ToString(),
		PositionKeys.Num(),
		RotationKeys.Num(),
		ScaleKeys.Num(),
		bRemoveXTranslation ? TEXT("True") : TEXT("False"),
		bRemoveYTranslation ? TEXT("True") : TEXT("False"),
		bRemoveZTranslation ? TEXT("True") : TEXT("False"),
		bKeepFirstFrameOffset ? TEXT("True") : TEXT("False"));
}

void UPMMakeAnimationInPlaceModifier::OnRevert_Implementation(UAnimSequence* AnimationSequence)
{
	UE_LOG(LogTemp, Warning,
		TEXT("[PMMakeAnimationInPlaceModifier] Revert requested for %s. This modifier does not restore original keys. Use a duplicate or reimport the source animation."),
		*GetNameSafe(AnimationSequence));
}

#undef LOCTEXT_NAMESPACE
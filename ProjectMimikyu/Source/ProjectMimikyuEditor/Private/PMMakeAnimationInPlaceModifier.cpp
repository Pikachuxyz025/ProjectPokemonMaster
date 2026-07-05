#include "PMMakeAnimationInPlaceModifier.h"

#include "Animation/AnimData/IAnimationDataController.h"
#include "Animation/AnimData/IAnimationDataModel.h"
#include "Animation/AnimSequence.h"

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

	const IAnimationDataModel* DataModel = AnimationSequence->GetDataModel();

	UE_LOG(LogTemp, Warning,
		TEXT("[PMMakeAnimationInPlaceModifier] Asset=%s | PlayLength=%.3f | NumFrames=%d | NumBoneTracks=%d"),
		*GetNameSafe(AnimationSequence),
		AnimationSequence->GetPlayLength(),
		AnimationSequence->GetNumberOfSampledKeys(),
		DataModel ? DataModel->GetBoneAnimationTracks().Num() : -1);

	if (!DataModel)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PMMakeAnimationInPlaceModifier] Apply failed for %s: DataModel is null."),
			*GetNameSafe(AnimationSequence));

		return;
	}

	const FBoneAnimationTrack* RootBoneTrack = nullptr;

	for (const FBoneAnimationTrack& BoneTrack : DataModel->GetBoneAnimationTracks())
	{
		if (BoneTrack.Name == RootBoneName)
		{
			RootBoneTrack = &BoneTrack;
			break;
		}
	}

	if (!RootBoneTrack)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PMMakeAnimationInPlaceModifier] Apply failed for %s: Could not find bone track '%s'."),
			*GetNameSafe(AnimationSequence),
			*RootBoneName.ToString());

		if (bLogAvailableBoneTracks)
		{
			const TArray<FBoneAnimationTrack>& BoneTracks = DataModel->GetBoneAnimationTracks();

			UE_LOG(LogTemp, Warning,
				TEXT("[PMMakeAnimationInPlaceModifier] Available animated bone tracks for %s | Count=%d:"),
				*GetNameSafe(AnimationSequence),
				BoneTracks.Num());

			for (const FBoneAnimationTrack& BoneTrack : BoneTracks)
			{
				UE_LOG(LogTemp, Warning,
					TEXT("    TrackName=%s | PosKeys=%d | RotKeys=%d | ScaleKeys=%d"),
					*BoneTrack.Name.ToString(),
					BoneTrack.InternalTrackData.PosKeys.Num(),
					BoneTrack.InternalTrackData.RotKeys.Num(),
					BoneTrack.InternalTrackData.ScaleKeys.Num());
			}
		}

		return;
	}

	FRawAnimSequenceTrack NewRootTrack = RootBoneTrack->InternalTrackData;

	if (NewRootTrack.PosKeys.Num() == 0)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[PMMakeAnimationInPlaceModifier] Apply failed for %s: Root bone '%s' has no position keys."),
			*GetNameSafe(AnimationSequence),
			*RootBoneName.ToString());

		return;
	}

	const FVector3f FirstRootLocation = NewRootTrack.PosKeys[0];

	for (FVector3f& PositionKey : NewRootTrack.PosKeys)
	{
		if (bRemoveXTranslation)
		{
			PositionKey.X = bKeepFirstFrameOffset ? FirstRootLocation.X : 0.f;
		}

		if (bRemoveYTranslation)
		{
			PositionKey.Y = bKeepFirstFrameOffset ? FirstRootLocation.Y : 0.f;
		}

		if (bRemoveZTranslation)
		{
			PositionKey.Z = bKeepFirstFrameOffset ? FirstRootLocation.Z : 0.f;
		}
	}

	IAnimationDataController& Controller = AnimationSequence->GetController();

	Controller.OpenBracket(
		LOCTEXT("PMMakeAnimationInPlace", "PM Make Animation In Place"),
		true
	);

	Controller.SetBoneTrackKeys(
		RootBoneName,
		NewRootTrack.PosKeys,
		NewRootTrack.RotKeys,
		NewRootTrack.ScaleKeys
	);

	Controller.CloseBracket(true);

	AnimationSequence->MarkPackageDirty();

	UE_LOG(LogTemp, Display,
		TEXT("[PMMakeAnimationInPlaceModifier] Applied to %s | RootBone=%s | Keys=%d | RemoveX=%s RemoveY=%s RemoveZ=%s KeepFirstOffset=%s"),
		*GetNameSafe(AnimationSequence),
		*RootBoneName.ToString(),
		NewRootTrack.PosKeys.Num(),
		bRemoveXTranslation ? TEXT("True") : TEXT("False"),
		bRemoveYTranslation ? TEXT("True") : TEXT("False"),
		bRemoveZTranslation ? TEXT("True") : TEXT("False"),
		bKeepFirstFrameOffset ? TEXT("True") : TEXT("False"));
}

void UPMMakeAnimationInPlaceModifier::OnRevert_Implementation(UAnimSequence* AnimationSequence)
{
	UE_LOG(LogTemp, Warning,
		TEXT("[PMMakeAnimationInPlaceModifier] Revert requested for %s. This modifier does not restore original keys. Use source control, a duplicate, or reimport the source animation."),
		*GetNameSafe(AnimationSequence));
}

#undef LOCTEXT_NAMESPACE
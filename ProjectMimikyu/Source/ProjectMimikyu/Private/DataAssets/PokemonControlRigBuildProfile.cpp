#include "DataAssets/PokemonControlRigBuildProfile.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokemonControlRigBuildProfile, Log, All);

#include "DataAssets/PokemonControlRigBuildProfile.h"

#include "Animation/Skeleton.h"
#include "Engine/SkeletalMesh.h"
#include "ReferenceSkeleton.h"

static bool DoesBoneNameMatchAnyContainsRule(const FName BoneName, const TArray<FString>& ContainsRules)
{
    const FString BoneNameString = BoneName.ToString();

    for (const FString& Rule : ContainsRules)
    {
        if (Rule.IsEmpty())
        {
            continue;
        }

        if (BoneNameString.Contains(Rule))
        {
            return true;
        }
    }

    return false;
}

static void CopyShapeSettings(
    const FPokemonControlDefinition& Source,
    FPokemonControlDefinition& Target)
{
    Target.ShapeName = Source.ShapeName;
    Target.ShapeScale = Source.ShapeScale;
    Target.ShapeOffset = Source.ShapeOffset;
    Target.ShapeColor = Source.ShapeColor;
}

static bool IsExactIgnoredBone(const FName BoneName, const TArray<FName>& ExactIgnoredBones)
{
    return ExactIgnoredBones.Contains(BoneName);
}

static bool ShouldIgnoreBoneForControlGeneration(const FName BoneName, const TArray<FString>& IgnoreBoneNameContainsRules, const TArray<FName>& ExactIgnoredBones)
{
    return DoesBoneNameMatchAnyContainsRule(BoneName, IgnoreBoneNameContainsRules)
        || IsExactIgnoredBone(BoneName, ExactIgnoredBones);
}

static FString MakeControlNameBodyFromBoneName(const FName BoneName)
{
	FString BoneString = BoneName.ToString();

    TArray<FString> Parts;
	BoneString.ParseIntoArray(Parts, TEXT("_"), true);

    FString Result;

    for(const FString& Part:Parts)
  {
        if (Part.IsEmpty())
        {
            continue;
        }

		if (!Result.IsEmpty())
		{
			Result += TEXT("_");
		}

        // Keep numeric parts like 01 unchanged.
		if (Part.IsNumeric())
		{
			Result += Part;
		}
		else
		{
			FString CleanPart = Part.ToLower();
			CleanPart[0] = FChar::ToUpper(CleanPart[0]);
			Result += CleanPart;
		}
    }
	return Result;
}

static FName MakeControlNameFromBoneName(const FName BoneName, const FString& Prefix)
{
    return FName(*(Prefix + MakeControlNameBodyFromBoneName(BoneName)));
}

static const FReferenceSkeleton* GetReferenceSkeletonFromProfile(
    const UPokemonControlRigBuildProfile* Profile)
{
    if (!Profile)
    {
        return nullptr;
    }

    if (Profile->SourceSkeletalMesh)
    {
        return &Profile->SourceSkeletalMesh->GetRefSkeleton();
    }

    if (Profile->SourceSkeleton)
    {
        return &Profile->SourceSkeleton->GetReferenceSkeleton();
    }

    return nullptr;
}

TArray<FString> UPokemonControlRigBuildProfile::GetAvailableBoneNameOptions() const
{
    TArray<FString> Options;

    const FReferenceSkeleton* RefSkeleton = GetReferenceSkeletonFromProfile(this);
    if (!RefSkeleton)
    {
        return Options;
    }

    for (int32 BoneIndex = 0; BoneIndex < RefSkeleton->GetNum(); ++BoneIndex)
    {
        Options.Add(RefSkeleton->GetBoneName(BoneIndex).ToString());
    }

    return Options;
}

void UPokemonControlRigBuildProfile::GenerateControlsFromSkeleton()
{
    const FReferenceSkeleton* RefSkeleton = GetReferenceSkeletonFromProfile(this);

    if (!RefSkeleton)
    {
        UE_LOG(LogPokemonControlRigBuildProfile, Warning,
            TEXT("[PokemonControlRigBuildProfile] GenerateControlsFromSkeleton failed: Cannot generate controls: No valid reference skeleton found."));
        return;
    }

    if (ControlNamePrefix.IsEmpty())
    {
        UE_LOG(LogPokemonControlRigBuildProfile, Warning,
            TEXT("[PokemonControlRigBuildProfile] GenerateControlsFromSkeleton failed: ControlNamePrefix is empty."));
        return;
    }

    int32 RootBoneIndex = INDEX_NONE;

    if (!ControlRootBone.IsNone())
    {
        RootBoneIndex = RefSkeleton->FindBoneIndex(ControlRootBone);
    }

    if (RootBoneIndex == INDEX_NONE)
    {
        RootBoneIndex = 0;
        ControlRootBone = RefSkeleton->GetBoneName(RootBoneIndex);

        UE_LOG(LogPokemonControlRigBuildProfile, Warning,
            TEXT("[PokemonControlRigBuildProfile] ControlRootBone was not set or invalid. Defaulting to root bone: %s"),
            *ControlRootBone.ToString());
    }

    Modify();

    TMap<FName, FPokemonControlDefinition> ExistingControlsByControlName;
    TMap<FName, FPokemonControlDefinition> ExistingControlsByBoneName;

    if (bPreserveShapeSettingsWhenGeneratingFromSkeleton)
    {
        for (const FPokemonControlDefinition& ExistingControl : Controls)
        {
            if (!ExistingControl.ControlName.IsNone())
            {
                ExistingControlsByControlName.Add(ExistingControl.ControlName, ExistingControl);
            }

            if (!ExistingControl.BoneName.IsNone())
            {
                ExistingControlsByBoneName.Add(ExistingControl.BoneName, ExistingControl);
            }
        }
    }

    Controls.Reset();

    const FName RootBoneName = RefSkeleton->GetBoneName(RootBoneIndex);

    // Global control represents the root bone visually, but does not drive it through normal relative FK.
    {
        FPokemonControlDefinition GlobalControl;
        GlobalControl.ControlName = GlobalControlName.IsNone() ? FName(TEXT("CTRL_Global")) : GlobalControlName;

        GlobalControl.BoneName = RootBoneName;
        GlobalControl.ParentControl = NAME_None;
        GlobalControl.ParentBoneOverride = NAME_None;
        GlobalControl.ShapeName = FName(TEXT("Hexagon_Thick"));
        GlobalControl.ShapeScale = FVector(0.2f, 0.2f, 0.6f);
        GlobalControl.ShapeColor = FLinearColor(1.0f, 0.05f, 0.0f, 1.0f);
        GlobalControl.bCreateControl = true;
        GlobalControl.bDriveBoneWithFK = false;
        GlobalControl.bPropagateToChildren = true;

        if (bPreserveShapeSettingsWhenGeneratingFromSkeleton)
        {
            if (const FPokemonControlDefinition* ExistingByControl =
                ExistingControlsByControlName.Find(GlobalControl.ControlName))
            {
                CopyShapeSettings(*ExistingByControl, GlobalControl);
            }
            else if (const FPokemonControlDefinition* ExistingByBone =
                ExistingControlsByBoneName.Find(GlobalControl.BoneName))
            {
                CopyShapeSettings(*ExistingByBone, GlobalControl);
            }
        }

        Controls.Add(GlobalControl);
    }

    TMap<FName, FName> BoneToControlName;
    BoneToControlName.Add(RootBoneName, GlobalControlName.IsNone() ? FName(TEXT("CTRL_Global")) : GlobalControlName);

    int32 AddedControlCount = 1;
    int32 SkippedBoneCount = 0;

    for (int32 BoneIndex = RootBoneIndex + 1; BoneIndex < RefSkeleton->GetNum(); ++BoneIndex)
    {
        const FName BoneName = RefSkeleton->GetBoneName(BoneIndex);

        // Only generate for descendants of the selected root bone.
		bool bIsDescendant = false;

		int32 ParentWalkIndex = RefSkeleton->GetParentIndex(BoneIndex);
		while (ParentWalkIndex != INDEX_NONE)
		{
			if (ParentWalkIndex == RootBoneIndex)
			{
				bIsDescendant = true;
				break;
			}
			ParentWalkIndex = RefSkeleton->GetParentIndex(ParentWalkIndex);
		}

		if (!bIsDescendant)
		{
			continue;
		}

        if (ShouldIgnoreBoneForControlGeneration(BoneName, IgnoreBoneNameContains, ExactIgnoredBones))
        {
            ++SkippedBoneCount;
            continue;
        }

        const FName ControlName = MakeControlNameFromBoneName(BoneName, ControlNamePrefix);

        int32 ParentBoneIndex = RefSkeleton->GetParentIndex(BoneIndex);
        FName ParentBoneForMapping = NAME_None;
        FName ParentControlForMapping = NAME_None;

        // Walk upward until we find the closest non-ignored ancestor that has a control.
        while (ParentBoneIndex != INDEX_NONE)
        {
            const FName CandidateParentBone = RefSkeleton->GetBoneName(ParentBoneIndex);

            if (BoneToControlName.Contains(CandidateParentBone))
            {
                ParentBoneForMapping = CandidateParentBone;
                ParentControlForMapping = BoneToControlName[CandidateParentBone];
                break;
            }

            ParentBoneIndex = RefSkeleton->GetParentIndex(ParentBoneIndex);
        }

        if (ParentBoneForMapping.IsNone() || ParentControlForMapping.IsNone())
        {
            UE_LOG(LogPokemonControlRigBuildProfile, Warning,
                TEXT("Skipping bone '%s': could not find valid parent control."),
                *BoneName.ToString());

            ++SkippedBoneCount;
            continue;
        }

        FPokemonControlDefinition NewControl;
        NewControl.ControlName = ControlName;
        NewControl.BoneName = BoneName;
        NewControl.ParentControl = ParentControlForMapping;
        NewControl.ParentBoneOverride = ParentBoneForMapping;

        NewControl.ShapeName = FName(TEXT("Circle_Thin"));
        NewControl.ShapeScale = FVector(0.1f, 0.1f, 0.1f);
        NewControl.ShapeOffset = FTransform::Identity;
        NewControl.ShapeColor = FLinearColor(1.0f, 0.65f, 0.0f, 1.0f);

        NewControl.bCreateControl = true;
        NewControl.bDriveBoneWithFK = true;
        NewControl.bPropagateToChildren = true;

        if (bPreserveShapeSettingsWhenGeneratingFromSkeleton)
        {
            if (const FPokemonControlDefinition* ExistingByControl =
                ExistingControlsByControlName.Find(NewControl.ControlName))
            {
                CopyShapeSettings(*ExistingByControl, NewControl);
            }
            else if (const FPokemonControlDefinition* ExistingByBone =
                ExistingControlsByBoneName.Find(NewControl.BoneName))
            {
                CopyShapeSettings(*ExistingByBone, NewControl);
            }
        }

        Controls.Add(NewControl);
        BoneToControlName.Add(BoneName, ControlName);

        ++AddedControlCount;
    }

    GenerateFKMappingsFromControls();

    UE_LOG(LogPokemonControlRigBuildProfile, Log,
        TEXT("Generated %d controls from skeleton for '%s'. Skipped %d bones."),
        AddedControlCount,
        *GetName(),
        SkippedBoneCount);

    MarkPackageDirty();
}

static bool IsValidFKMapping(const FPokemonControlRigFKMapping& Mapping)
{
    return !Mapping.ParentBone.IsNone()
        && !Mapping.Bone.IsNone()
        && !Mapping.ParentControl.IsNone()
        && !Mapping.Control.IsNone();
}

void UPokemonControlRigBuildProfile::GenerateFKMappingsFromControls()
{
    Modify();

    GeneratedFKMappings.Reset();

    for (const FPokemonControlDefinition& ControlDef : Controls)
    {
        if (!ControlDef.bDriveBoneWithFK)
        {
            continue;
        }

        if (ControlDef.ControlName.IsNone())
        {
            UE_LOG(LogPokemonControlRigBuildProfile, Warning,
                TEXT("Skipping FK mapping: ControlName is None."));
            continue;
        }

        if (ControlDef.BoneName.IsNone())
        {
            UE_LOG(LogPokemonControlRigBuildProfile, Warning,
                TEXT("Skipping FK mapping for control '%s': BoneName is None."),
                *ControlDef.ControlName.ToString());
            continue;
        }

        if (ControlDef.ParentControl.IsNone())
        {
            UE_LOG(LogPokemonControlRigBuildProfile, Warning,
                TEXT("Skipping FK mapping for control '%s': ParentControl is None."),
                *ControlDef.ControlName.ToString());
            continue;
        }

        if (ControlDef.ParentBoneOverride.IsNone())
        {
            UE_LOG(LogPokemonControlRigBuildProfile, Warning,
                TEXT("Skipping FK mapping for control '%s': ParentBoneOverride is None."),
                *ControlDef.ControlName.ToString());
            continue;
        }

        FPokemonControlRigFKMapping NewMapping;
        NewMapping.ParentBone = ControlDef.ParentBoneOverride;
        NewMapping.Bone = ControlDef.BoneName;
        NewMapping.ParentControl = ControlDef.ParentControl;
        NewMapping.Control = ControlDef.ControlName;
        NewMapping.bPropagateToChildren = ControlDef.bPropagateToChildren;

        GeneratedFKMappings.Add(NewMapping);
    }

    for (const FPokemonControlRigFKMapping& OverrideMapping : FKMappingOverrides)
    {
        if (!IsValidFKMapping(OverrideMapping))
        {
            UE_LOG(LogPokemonControlRigBuildProfile, Warning,
                TEXT("Skipping invalid FK mapping override."));
            continue;
        }

        GeneratedFKMappings.Add(OverrideMapping);
    }

    UE_LOG(LogPokemonControlRigBuildProfile, Log,
        TEXT("Generated %d FK mappings for '%s'."),
        GeneratedFKMappings.Num(),
        *GetName());

    MarkPackageDirty();
}

void UPokemonControlRigBuildProfile::ClearGeneratedFKMappings()
{
    Modify(); 

    GeneratedFKMappings.Reset();

    UE_LOG(LogPokemonControlRigBuildProfile, Log,
        TEXT("Cleared generated FK mappings for '%s'."),
        *GetName());

    MarkPackageDirty();
}
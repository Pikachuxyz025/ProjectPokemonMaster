using UnrealBuildTool;

public class ProjectMimikyuEditor : ModuleRules
{
    public ProjectMimikyuEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "ProjectMimikyu",

			// Needed because PMMakeAnimationInPlaceModifier.h includes AnimationModifier.h
			"AnimationModifiers",
            "AnimationBlueprintLibrary"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "UnrealEd"
        });
    }
}
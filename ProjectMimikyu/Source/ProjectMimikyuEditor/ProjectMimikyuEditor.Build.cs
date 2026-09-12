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
            "UnrealEd",
            "EditorSubsystem",

            // PokePal native editor UI
            "Slate",
            "SlateCore",

            // Native jump automation fixtures initialize GAS without content assets.
            "GameplayAbilities",
            "AIModule",
            "NavigationSystem",
            "GameplayTags",
            "GameplayTasks",
            "GameplayBehaviorsModule"
        });
    }
}

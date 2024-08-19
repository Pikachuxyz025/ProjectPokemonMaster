// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using UnrealBuildTool.Rules;

public class ProjectMimikyu : ModuleRules
{
	public ProjectMimikyu(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Niagara", "EnhancedInput", "GeometryCollectionEngine", "UMG", "AIModule", "GameplayTasks","GameplayAbilities","GameplayTags", "AnimGraphRuntime","NavigationSystem"});
	}
}

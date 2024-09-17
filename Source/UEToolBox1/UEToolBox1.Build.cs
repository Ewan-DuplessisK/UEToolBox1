// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEToolBox1 : ModuleRules
{
	public UEToolBox1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

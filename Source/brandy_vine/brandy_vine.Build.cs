// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class brandy_vine : ModuleRules
{
	public brandy_vine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

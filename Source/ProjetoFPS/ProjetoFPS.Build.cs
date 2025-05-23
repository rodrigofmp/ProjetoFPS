// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjetoFPS : ModuleRules
{
	public ProjetoFPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

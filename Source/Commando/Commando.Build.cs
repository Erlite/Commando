// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Commando : ModuleRules
{
	public Commando(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		bUseUnity = false;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"StructUtils",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
			}
		);
	}
}

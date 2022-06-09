// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BatteryConnectinGame : ModuleRules
{
	public BatteryConnectinGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

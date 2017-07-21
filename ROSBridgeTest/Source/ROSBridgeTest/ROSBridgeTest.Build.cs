// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class ROSBridgeTest : ModuleRules
{
	public ROSBridgeTest(TargetInfo Target)// : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[] { "ROSBridgeTest/Public", "ROSBridgePlugin/Public", "ROSBridgePlugin/Classes" });

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ROSBridgePlugin", "Json", "JsonUtilities" });

        PrivateDependencyModuleNames.AddRange(new string[] { "ROSBridgePlugin" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

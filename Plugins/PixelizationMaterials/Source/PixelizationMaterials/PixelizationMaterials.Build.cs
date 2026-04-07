using System.IO;
using UnrealBuildTool;

public class PixelizationMaterials : ModuleRules
{
	public PixelizationMaterials(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
			new string[] {
			}
		);

		PrivateIncludePaths.AddRange(
			new string[] {
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
			}
		);

        // 👇 DesktopPlatform tylko dla edytora
        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.Add("DesktopPlatform");
        }

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);
	}
}
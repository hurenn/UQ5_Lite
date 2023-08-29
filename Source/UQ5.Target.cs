

using UnrealBuildTool;
using System.Collections.Generic;

public class UQ5Target : TargetRules
{
	public UQ5Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "UQ5" } );
	}
}

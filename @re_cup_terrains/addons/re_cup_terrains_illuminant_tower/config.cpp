#define _ARMA_

class CfgPatches
{
	class re_cup_terrains_illuminant_tower
	{
		name = "RE: CUP Terrains Illuminant Tower";
		author = "amartyn, axeman";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};

class Cfg3DEN
{
	class EventHandlers
	{
		class real_illuminant_tower
		{
			OnTerrainNew = "[] execVM '\re_cup_terrains_illuminant_tower\init.sqf'";
			OnMissionPreviewEnd = "[] execVM '\re_cup_terrains_illuminant_tower\init.sqf'";
			OnMissionLoad = "[] execVM '\re_cup_terrains_illuminant_tower\init.sqf'";
		};
	};
};
class CfgFunctions
{
	class real
	{
		class illuminant_tower_lights
		{
			class illuminant_tower_init
			{
				postInit = 1;
				file = "\re_cup_terrains_illuminant_tower\init.sqf";
				description = "lights illuminant towers at Chernarus at night";
			};
		};
	};
};
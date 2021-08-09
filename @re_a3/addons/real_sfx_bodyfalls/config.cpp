#define _ARMA_

class CfgPatches
{
	class real_sfx_bodyfalls
	{
		name = "Real Effects Body Fall Sounds";
		author = "MisterGoodson, amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};
class CfgFunctions
{
	class real
	{
		class sfx_bodyfalls
		{
			class sfx_bodyfalls_init
			{
				postInit = 1;
				file = "\real_sfx_bodyfalls\init.sqf";
				description = "Body fall sounds";
			};
		};
	};
};
class CfgSounds
{
	class real_bodyfall_concrete_1
	{
		name = "real_bodyfall_concrete_1";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_concrete_2
	{
		name = "real_bodyfall_concrete_2";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_concrete_3
	{
		name = "real_bodyfall_concrete_3";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_concrete_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_grass_1
	{
		name = "real_bodyfall_grass_1";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_grass_2
	{
		name = "real_bodyfall_grass_2";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_grass_3
	{
		name = "real_bodyfall_grass_3";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_grass_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_drygrass_1
	{
		name = "real_bodyfall_drygrass_1";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_drygrass_2
	{
		name = "real_bodyfall_drygrass_2";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_drygrass_3
	{
		name = "real_bodyfall_drygrass_3";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_drygrass_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_sand_1
	{
		name = "real_bodyfall_sand_1";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_sand_2
	{
		name = "real_bodyfall_sand_2";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_sand_3
	{
		name = "real_bodyfall_sand_3";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_sand_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_gravel_1
	{
		name = "real_bodyfall_gravel_1";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_gravel_2
	{
		name = "real_bodyfall_gravel_2";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_gravel_3
	{
		name = "real_bodyfall_gravel_3";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_gravel_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_metal_1
	{
		name = "real_bodyfall_metal_1";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_metal_2
	{
		name = "real_bodyfall_metal_2";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_metal_3
	{
		name = "real_bodyfall_metal_3";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_metal_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_water_1
	{
		name = "real_bodyfall_water_1";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_water_2
	{
		name = "real_bodyfall_water_2";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_water_3
	{
		name = "real_bodyfall_water_3";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_water_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_wood_1
	{
		name = "real_bodyfall_wood_1";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_wood_2
	{
		name = "real_bodyfall_wood_2";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_wood_3
	{
		name = "real_bodyfall_wood_3";
		sound[] = {"A3\sounds_f\characters\movements\bodyfalls\bodyfall_wood_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_virtual_1
	{
		name = "real_bodyfall_virtual_1";
		sound[] = {"A3\sounds_f_bootcamp\Characters\Movements\BodyFalls\bodyfall_virtual_1",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_virtual_2
	{
		name = "real_bodyfall_virtual_2";
		sound[] = {"A3\sounds_f_bootcamp\Characters\Movements\BodyFalls\bodyfall_virtual_2",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
	class real_bodyfall_virtual_3
	{
		name = "real_bodyfall_virtual_3";
		sound[] = {"A3\sounds_f_bootcamp\Characters\Movements\BodyFalls\bodyfall_virtual_3",1,"0.9 + random 0.2",150};
		titles[] = {};
	};
};
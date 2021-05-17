#define _ARMA_

class CfgPatches
{
	class real_sfx_inventory_sounds
	{
		name = "Real Effects UI Sounds";
		author = "Patrician, amartyn";
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
		class real_sfx_inventory_sounds
		{
			class inventory_sounds_function
			{
				file = "\real_sfx_inventory_sounds\invsounds.sqf";
				preInit = 1;
				postInit = 1;
				preStart = 1;
				recompile = 1;
				ext = ".sqf";
				headerType = -1;
			};
		};
	};
};

class CfgSounds
{
	class real_bagopen
	{
		name = "Open Inventory";
		sound[] = {"\real_sfx_inventory_sounds\sounds\bagopen.ogg",1,1};
		titles[] = {0,""};
	};
	class real_bagclose
	{
		name = "Close Inventory";
		sound[] = {"\real_sfx_inventory_sounds\sounds\bagclose.ogg",1,1};
		titles[] = {0,""};
	};
	class real_pickup
	{
		name = "Pick Up Item";
		sound[] = {"\real_sfx_inventory_sounds\sounds\pickup.ogg",1,1};
		titles[] = {0,""};
	};
	class real_drop
	{
		name = "Drop Item";
		sound[] = {"\real_sfx_inventory_sounds\sounds\drop.ogg",1,1};
		titles[] = {0,""};
	};
};
#define _ARMA_

class CfgPatches
{
	class real_armor
	{
		name = "Real Armor";
		author = "Olds, Bakerman, amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Data_F"};
	};
};
class CfgFunctions
{
	class real
	{
		tag = "real";
		class real_armor
		{
			file = "real_armor\functions";
			class hitPart{};
			class init
			{
				preInit = 1;
			};
		};
	};
};

class DefaultEventHandlers
{
	hitpart = "_this call real_fnc_hitPart;";
};
#define _ARMA_

class CfgPatches
{
	class real_camosystem
	{
		name = "Real Camouflage System";
		author = "amartyn";
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
		class camosystem
		{
			class camosystem_init
			{
				postInit = 1;
				file = "\real_camosystem\init.sqf";
				description = "camouflage system";
			};
		};
	};
};
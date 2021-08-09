#define _ARMA_

class CfgPatches
{
	class real_fix_3rd_person_view
	{
		name = "Real 3rd Person View Fix";
		author = "amartyn";
		version = 1;
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_UI_F","A3_Characters_F"};
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		extCameraPosition[] = {0.43,-0.15,-1.35};
	};
};
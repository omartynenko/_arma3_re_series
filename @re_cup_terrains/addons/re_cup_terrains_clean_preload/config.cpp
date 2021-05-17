#define _ARMA_

class CfgPatches
{
	class re_cup_terrains_clean_preload
	{
		name = "RE: CUP Terrains Clean Preload";
        author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		delete A1Always;
		delete CA;
		delete CA_BAF;
    };
};
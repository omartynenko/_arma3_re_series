#define _ARMA_

class CfgPatches
{
	class re_rhsusf_clean_preload
	{
		name = "RE: RHS USF Clean Preload";
        author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhsusf_main"};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		delete RHS_USAF;
    };
};
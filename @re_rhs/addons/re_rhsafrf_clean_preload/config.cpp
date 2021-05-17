#define _ARMA_

class CfgPatches
{
	class re_rhsafrf_clean_preload
	{
		name = "RE: RHS AFRF Clean Preload";
        author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhs_main"};
	};
};
class CfgAddons
{
    class PreloadAddons
    {
        delete RHS_AFRF;
    };
};
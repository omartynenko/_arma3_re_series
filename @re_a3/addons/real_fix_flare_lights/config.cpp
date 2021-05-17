#define _ARMA_

class CfgPatches
{
	class real_fix_flare_lights
	{
		name = "Real Flare Lights Fix";
        author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class CfgAmmo
{
    class FlareCore;
    class FlareBase: FlareCore
	{
        timeToLive = 80;
        brightness = 200;
        intensity  = 1000000;
    };
    class F_40mm_White: FlareBase
	{
        timeToLive = 40;
        brightness = 125;
        intensity  = 1000000;
    };
    class Flare_82mm_AMOS_White: FlareCore
	{
        timeToLive = 30;
        brightness = 200;
        intensity  = 1000000;
    };
};
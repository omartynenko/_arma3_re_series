#define _ARMA_

class CfgPatches
{
	class real_fix_grenade_deflection
	{
		name = "Real Grenade Deflection Fix";
		author = "amartyn, Freghar";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class CfgAmmo
{
	class Default;
	class Grenade: Default
	{
		deflecting = 3;
		deflectionSlowDown = 0.3;
	};
	class GrenadeHand: Grenade{};
	class mini_Grenade: GrenadeHand
	{
		deflecting = 3;
	};
	class SmokeShell: GrenadeHand
	{
		//simulation = "shotSmokeX";
		deflecting = 3;
		deflectionSlowDown = 0.2;
	};
	class G_40mm_Smoke: SmokeShell
	{
		deflecting = 30;
		deflectionSlowDown = 0.5;
		simulation = "shotSmoke";
	};
};
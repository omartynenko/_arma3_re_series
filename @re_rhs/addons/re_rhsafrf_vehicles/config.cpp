#define _ARMA_

class CfgPatches
{
	class re_rhsafrf_vehicles
	{
		name = "RE: RHS AFRF Vehicles Fix";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhs_c_bmd","rhs_c_bmp"};
	};
};
class CfgVehicles
{
    class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
            };
        };
    };
    class rhs_bmd_base: Tank_F
	{
        class Turrets;
    };
    class rhs_bmd1_base: rhs_bmd_base
	{
        class Turrets: Turrets
		{
            class CommanderOptics1;
        };
    };
    class rhs_bmd1k: rhs_bmd1_base
	{
        class Turrets: Turrets
		{
            class CommanderOptics1: CommanderOptics1
			{
				dontCreateAI = 0;
				primaryObserver = 1;
			};
        };
    };
    class rhs_bmd2_base: rhs_bmd_base
	{
        class Turrets: Turrets
		{
            class CommanderOptics1;
        };
    };
    class rhs_bmd2: rhs_bmd2_base
	{
        class Turrets: Turrets
		{
            class CommanderOptics1: CommanderOptics1{};
        };
    };
    class rhs_bmd2k: rhs_bmd2
	{
        class Turrets: Turrets
		{
            class CommanderOptics1: CommanderOptics1
			{
				dontCreateAI = 0;
				primaryObserver = 1;
			};
        };
    };
    class rhs_bmp1tank_base: Tank_F
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };
    class rhs_bmp_base: rhs_bmp1tank_base
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets{};
            };
        };
    };
    class rhs_bmp1_vdv: rhs_bmp_base{};
    class rhs_bmp1k_vdv: rhs_bmp1_vdv
	{
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
                        dontCreateAI = 0;
						gunnerDoor = "hatchC";
						gunnerName = "$STR_POSITION_COMMANDER";
						body = "RHS_BMP1_com_coppula_BMP2";
						gun = "RHS_BMP1_OU3_BMP2";
						gunnerOutForceOptics = 0;
						gunnerForceoptics = 1;
						weapons[] = {};
						magazines[] = {};
						animationSourceHatch = "HatchCommander_BMP2";
						animationSourceBody = "obsturret";
						animationSourceGun = "obsGun";
						memoryPointGunnerOptics = "commanderview";
						memoryPointGunnerOutOptics = "commander_out_view";
						proxyType = "CPCommander";
						proxyIndex = 1;
						lockWhenDriverOut = 0;
						primaryGunner = 0;
						primaryObserver = 1;
						hasCommander = 1;
						viewGunnerInExternal = 1;
						LodOpticsIn = 0;
						LodOpticsOut = 0;
						gunBeg = "Mgun_end";
						gunEnd = "Mgun_start";
						isPersonTurret = 1;
						gunnerAction = "RHS_passenger_inside_6";
						gunnerInAction = "rhs_bmp2_commanderIn";
						personTurretAction = "RHS_passenger_inside_6";
						stabilizedInAxes = 3;
						selectionFireAnim = "";
						minElev = -4;
						maxElev = 60;
						initElev = 0;
						minTurn = -135;
						maxTurn = 135;
						initTurn = 0;
						gunnerOutOpticsModel = "";
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpku2b.p3d";
						turretInfoType = "RHS_RscWeaponBMP2_TKN3_FCS";
						class OpticsIn
						{
							class DAY
							{
								hitpoint = "HitComSight";
								camPos = "view_tkn3";
								initAngleX = 0;
								minAngleX = -110;
								maxAngleX = 110;
								initAngleY = 0;
								minAngleY = -110;
								maxAngleY = 110;
								opticsZoomMin = 0.14;
								opticsZoomMax = 0.14;
								distanceZoomMin = 200;
								distanceZoomMax = 2000;
								opticsDisplayName = "TKN3";
								initFov = 0.14;
								minFov = 0.14;
								maxFov = 0.14;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3";
							};
							class NIGHT: DAY
							{
								opticsDisplayName = "NIGHT";
								initFov = 0.166667;
								minFov = 0.166667;
								maxFov = 0.166667;
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
								visionMode[] = {"NVG"};
							};
						};
						soundServo[] = {};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						startEngine = 0;
						canUseScanners = 0;
						allowTabLock = 0;
						class Hitpoints{};
					};
				};
			};
        };
    };
};
#define _ARMA_

class CfgPatches
{
	class real_fix_weapons
	{
		name = "Real Weapons Fix";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","A3_Weapons_F_Enoch"};
	};
};

class CfgAmmo
{
	class RocketCore;
	class RocketBase : RocketCore
	{
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.316228,1.5,900};
		whistleDist = 24;
	};
	class R_PG7_F: RocketBase
	{
		airLock = 1;
		allowAgainstInfantry = 1;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		whistleDist = 24;
	};
	class R_PG32V_F: RocketBase
	{
		airLock = 1;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		whistleDist = 24;
	};
	class M_SPG9_HEAT: RocketBase
	{
		airLock = 1;
		allowAgainstInfantry = 1;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		whistleDist = 24;
	};
	class MissileCore;
	class MissileBase: MissileCore
	{
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",6,1.5,400};
		whistleDist = 24;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 5Rnd_127x108_Mag: CA_Magazine
	{
		mass = 10;
	};
	class 10Rnd_338_Mag: CA_Magazine
	{
		mass = 10;
	};
	class 10Rnd_127x54_Mag : CA_Magazine
	{
		mass = 12;
	};
	class 150Rnd_93x64_Mag : CA_Magazine
	{
		mass = 64;
	};
	class 10Rnd_93x64_DMR_05_Mag : 150Rnd_93x64_Mag
	{
		mass = 10;
	};
	class 130Rnd_338_Mag : CA_Magazine
	{
		mass = 58;
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		mass = 17;
	};

};
class CfgWeapons
{
	class Default
	{
		fireLightDuration = 0.003;
	};
	class Rifle_Base_F;
	class UGL_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GL_3GL_F: UGL_F
		{
			discreteDistanceInitIndex = 2;
		};
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 79;
		};
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72;
		};
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 119;
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 81;
		};
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
	};
	class arifle_katiba_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class EGLM: UGL_F
		{
			discreteDistanceInitIndex = 2;
		};
	};
	class arifle_Katiba_F: arifle_katiba_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 81;
		};
	};
	class arifle_Katiba_GL_F: arifle_katiba_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 111;
		};
	};
	class arifle_Katiba_C_F: arifle_katiba_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 73;
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class EGLM: UGL_F
		{
			discreteDistanceInitIndex = 2;
		};
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72;
		};
	};
	class arifle_TRG21_GL_F: arifle_TRG21_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 102;
		};
	};
	class arifle_TRG20_F: Tavor_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class EGLM: UGL_F
		{
			discreteDistanceInitIndex = 2;
		};
	};
	class arifle_Mk20_F: mk20_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
		};
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 74;
		};
	};
	class arifle_Mk20_GL_F: mk20_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
	};
	class arifle_AK12_base_F;
	class arifle_AK12_GL_base_F: arifle_AK12_base_F
	{
		class EGLM: UGL_F
		{
			discreteDistanceInitIndex = 2;
		};
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 13;
		};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
		};
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 24;
		};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 21;
		};
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
		};
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 112;
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_LRR_F: LRR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 290;
		};
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_GM6_F: GM6_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 253;
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_01_F: DMR_01_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_02_F: DMR_02_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 130;
		};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_03_F: DMR_03_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
		};
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_04_F: DMR_04_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 154;
		};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_05_blk_F: DMR_05_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
		};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 92;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 163;
		};
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 218;
		};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 240;
		};
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_Titan_base: Launcher_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
		};
	};
	class launch_Titan_short_base: launch_Titan_base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 88;
		};
	};
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
		};
	};
	class launch_NLAW_F: Launcher_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 275;
		};
	};
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class acc_flashlight: ItemCore
	{
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				color[] = {600,750,900};
				ambient[] = {10,7.5,5};
				position = "flash dir";
				direction = "flash";
				size = 1;
				innerAngle = 25;
				outerAngle = 40;
				coneFadeCoef = 2;
				intensity = 100;
				useFlare = 1;
				dayLight = 1;
				FlareSize = 0.7;
				flareMaxDistance = 250;
				onlyInNvg = 0;
				scale[] = {0};
				class Attenuation
				{
					start = 15;
					constant = 100;
					linear = 70;
					quadratic = 15;
					hardLimitStart = 130;
					hardLimitEnd = 160;
				};
			};
		};
	};
};
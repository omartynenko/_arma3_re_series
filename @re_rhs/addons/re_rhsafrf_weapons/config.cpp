#define _ARMA_

class CfgPatches
{
	class re_rhsafrf_weapons
	{
		name = "RE: RHS AFRF Weapons Fix";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhs_c_weapons","rhs_c_heavyweapons","real_slots_to_rails"};
	};
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		rhs_acc_rakursPM = 1;
		rhs_acc_dh520x56 = 1;
		rhs_acc_ekp8_18 = 1;
		rhs_acc_ekp8_18b = 1;
		rhs_acc_ekp8_18c = 1;
		rhs_acc_ekp8_18d = 1;
		rhs_acc_1p87 = 1;
		rhs_acc_okp7_picatinny = 1;
	};
};
class PointerSlot;
class PointerSlot_Rail: PointerSlot
{
	class compatibleItems
	{
		rhs_acc_2dpZenit_ris = 1;
		rhs_acc_perst1ik_ris = 1;
		rhs_acc_perst3 = 1;
	};
};
class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot
{
	class compatibleItems
	{
		rhs_acc_harris_swivel = 1;
	};
};

class SlotInfo;
class rhs_russian_svd_scopes_slot: SlotInfo
{
	class compatibleItems
	{
		rhs_acc_1p29 = 1;
		rhs_acc_1p29_pkp = 1;
		rhs_acc_1p29_asval = 1;
		rhs_acc_1p29_3d = 1;
		rhs_acc_1p29_pkp_3d = 1;
		rhs_acc_1p29_asval_3d = 1;
		rhs_acc_1p63 = 1;
		rhs_acc_1p78 = 1;
		rhs_acc_1p78_3d = 1;
		rhs_acc_pkas = 1;
		rhs_acc_pkas_pkp = 1;
		rhs_acc_pkas_asval = 1;
		rhs_acc_ekp1 = 1;
		rhs_acc_ekp1b = 1;
		rhs_acc_ekp1c = 1;
		rhs_acc_ekp1d = 1;
		rhs_acc_ekp8_02 = 1;
		rhs_acc_ekp8_02b = 1;
		rhs_acc_ekp8_02c = 1;
		rhs_acc_ekp8_02d = 1;
		rhs_acc_pso1m2 = 1;
		rhs_acc_pso1m2_ads = 1;
		rhs_acc_pso1m2_ads_night = 1;
		rhs_acc_pso1m2_ak = 1;
		rhs_acc_pso1m2_pkp = 1;
		rhs_acc_pso1m2_asval = 1;
		rhs_acc_pso1m2_ironsight = 1;
		rhs_acc_pso1m2_ak_ironsight = 1;
		rhs_acc_pso1m2_pkp_ironsight = 1;
		rhs_acc_pso1m2_asval_ironsight = 1;
		rhs_acc_pso1m21 = 1;
		rhs_acc_pso1m21_ads = 1;
		rhs_acc_pso1m21_ads_night = 1;
		rhs_acc_pso1m21_ak = 1;
		rhs_acc_pso1m21_svd = 1;
		rhs_acc_pso1m21_pkp = 1;
		rhs_acc_pso1m21_ironsight = 1;
		rhs_acc_pso1m21_ak_ironsight = 1;
		rhs_acc_pso1m21_pkp_ironsight = 1;
		rhs_acc_pso1m21_svd_ironsight = 1;
		rhs_acc_pgo7v = 1;
		rhs_acc_pgo7v_ak = 1;
		rhs_acc_pgo7v_asval = 1;
		rhs_acc_pgo7v_pkp = 1;
		rhs_acc_pgo7v2 = 1;
		rhs_acc_pgo7v2_ak = 1;
		rhs_acc_pgo7v2_asval = 1;
		rhs_acc_pgo7v2_pkp = 1;
		rhs_acc_pgo7v3 = 1;
		rhs_acc_pgo7v3_ak = 1;
		rhs_acc_pgo7v3_asval = 1;
		rhs_acc_pgo7v3_pkp = 1;
		rhs_acc_1pn93_1 = 1;
		rhs_acc_1pn93_2 = 1;
		rhs_acc_nita = 1;
		rhs_acc_nita_3d = 1;
		rhs_acc_1pn34 = 1;
		rhs_acc_okp7_dovetail = 1;
	};
};

class CfgGesturesMale
{
	class Default;
	class States
	{
		class RHS_GestureReloadRPG7: Default
		{
			file = "rhsafrf\addons\rhs_c_weapons\anims\RPG7reload.rtm";
			looped = 0;
			speed = 0.3;
			mask = "launcher";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	class rhs_mag_bm_base: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_bk_base: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_of_base: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_3UOF17_22: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_3UOF19_22: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_9m41_20: VehicleMagazine
	{
		scope = 1;
	};
	class 32Rnd_155mm_Mo_shells;
	class rhs_mag_HE_2a33: 32Rnd_155mm_Mo_shells
	{
		scope = 1;
	};
	class rhs_mag_of462: 32Rnd_155mm_Mo_shells
	{
		scope = 1;
	};
	class rhs_mag_3vo18_10: 32Rnd_155mm_Mo_shells
	{
		scope = 1;
	};
	class rhs_mag_9m112_6: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_9m128_6: rhs_mag_9m112_6
	{
		scope = 1;
	};
	class rhs_mag_9m113: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_9m117_3: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_9m119_6: rhs_mag_9m112_6
	{
		scope = 1;
	};
	class rhs_mag_9m119rx_6: rhs_mag_9m119_6
	{
		scope = 1;
	};
	class rhs_mag_9m119m_6: rhs_mag_9m112_6
	{
		scope = 1;
	};
	class rhs_mag_9m133_2: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_3m7_12: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_9M115: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_mi24_empty: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_40Rnd_122mm_rockets: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_bm21_base;
	class rhs_mag_m21of_1: rhs_mag_bm21_base
	{
		scope = 1;
	};
	class rhs_mag_pg15v_24: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_og15v_16: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_AZP23_250: VehicleMagazine
	{
		scope = 1;
	};
	class rhs_mag_762x54mm_100: VehicleMagazine
	{
		scope = 1;
		picture = "";
	};
	class rhs_mag_127x108mm_50: VehicleMagazine
	{
		scope = 1;
	};
};
class CfgWeapons
{
	class rhs_weap_ak74m;
	class rhs_weap_asval: rhs_weap_ak74m
	{
		class WeaponSlotsInfo;
	};
	class rhs_weap_asval_grip: rhs_weap_asval
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot_Rail{};
		};
	};
	class rhs_weap_asval_grip_npz: rhs_weap_asval_grip
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot_Rail{};
		};
	};
	class rhs_weap_vss: rhs_weap_asval
	{
		class WeaponSlotsInfo;
	};
	class rhs_weap_vss_grip: rhs_weap_vss
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot_Rail{};
		};
	};
	class rhs_weap_vss_grip_npz: rhs_weap_vss
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot_Rail{};
		};
	};
	class Default;
	class rhs_weap_smokegen: Default
	{
		scope = 1;
	};
	class SmokeLauncher;
	class rhs_weap_902a: SmokeLauncher
	{
		scope = 1;
	};
	class RocketPods;
	class rhs_weap_SPG9: RocketPods
	{
		scope = 1;
	};
	class missiles_titan_static;
	class rhs_weap_Igla_twice: missiles_titan_static
	{
		scope = 1;
	};
	class MGun;
	class rhs_weap_kpvt: MGun
	{
		scope = 1;
	};
	class rhs_weap_DIRCM_Vitebsk: MGun
	{
		scope = 1;
	};
	class PKT;
	class rhs_weap_pkt: PKT
	{
		scope = 1;
	};
	class LMG_RCWS: MGun{};
	class rhs_weap_DSHKM: LMG_RCWS
	{
		scope = 1;
	};
	class rhs_weap_nsvt: rhs_weap_DSHKM
	{
		scope = 1;
	};
	class gatling_30mm;
	class rhs_weap_yakB: gatling_30mm
	{
		scope = 1;
	};
	class rhs_weap_gsh30: gatling_30mm
	{
		scope = 1;
	};
	class rhs_weap_d81;
	class rhs_weap_d10t2s_2: rhs_weap_d81
	{
		scope = 1;
	};
	class rhs_weap_d10tg: rhs_weap_d10t2s_2
	{
		scope = 1;
	};
	class rhs_weap_d10t2s: rhs_weap_d10t2s_2
	{
		scope = 1;
	};
	class rhs_weap_u5ts: rhs_weap_d81
	{
		scope = 1;
	};
	class rhs_weap_2a75: rhs_weap_d81
	{
		scope = 1;
	};
	class InventoryOpticsItem_Base_F;
	class rhs_acc_sniper_base;
	class rhs_acc_1pn93_base: rhs_acc_sniper_base
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class 1pn93_scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.0875;
					opticsZoomMax = 0.0875;
					opticsZoomInit = 0.0875;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 200;
					distanceZoomMax = 1000;
					cameraDir = "";
				};
				class rhs_1p29_iron
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
	};
	class rhs_acc_1pn34: rhs_acc_1pn93_base
	{
		class ItemInfo: ItemInfo
		{
			class OpticsModes
			{
				class 1pn34_scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"rhs_NSPU_Abera","rhs_NSPU_Blur","rhs_NSPU_RadialBlur","rhs_NSPU_FilmGrain"};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.1;
					opticsZoomMax = 0.1;
					opticsZoomInit = 0.1;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 200;
					distanceZoomMax = 1000;
					cameraDir = "";
				};
				class rhs_1pn34_iron
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye_svd";
					visionMode[] = {"Normal"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "eye_svd_look";
				};
			};
		};
	};
	class rhs_acc_pgo7v;
	class rhs_acc_1pn93_2: rhs_acc_pgo7v
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class rhs_pgo7v_scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					discreteDistance[] = {500};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.12963;
					opticsZoomMax = 0.12963;
					opticsZoomInit = 0.12963;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 200;
					distanceZoomMax = 1000;
					cameraDir = "direction";
				};
			};
		};
	};
	class acc_pointer_IR;
	class rhs_acc_harris_swivel: acc_pointer_IR
	{
		class ItemInfo
		{
			scope = 0;
			deployedPivot = "bipod";
			hasBipod = 1;
			mass = 10;
			type = 302;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_OP_down",0.707946,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_OP_up",0.707946,1,20};
		};
	};
	class rhs_weap_ak74m_camo;
	class rhs_weap_45th_ak74m_camo: rhs_weap_ak74m_camo
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhs_acc_2dpZenit";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhs_acc_dtk1";
			};
		};
	};
};
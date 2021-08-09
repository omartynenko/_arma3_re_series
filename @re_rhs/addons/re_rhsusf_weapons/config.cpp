#define _ARMA_

class CfgPatches
{
	class re_rhsusf_fix_weapons
	{
		name = "RE: RHS USF Weapons Fix";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhsusf_c_weapons","real_slots_to_rails"};
	};
};

class MuzzleSlot;
class MuzzleSlot_556: MuzzleSlot
{
	class compatibleItems
	{
		rhsusf_acc_rotex5_grey = 1;
		rhsusf_acc_rotex5_tan = 1;
		rhsusf_acc_SF3P556 = 1;
		rhsusf_acc_SFMB556 = 1;
		rhsusf_acc_nt4_black = 1;
		rhsusf_acc_nt4_tan = 1;
	};
};
class MuzzleSlot_762: MuzzleSlot
{
	class compatibleItems
	{
		rhsusf_acc_aac_scarh_silencer = 1;
		rhsusf_acc_aac_762sd_silencer = 1;
		rhsusf_acc_aac_762sdn6_silencer = 1;
	};
};

class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		rhsusf_acc_LEUPOLDMK4 = 1;
		rhsusf_acc_LEUPOLDMK4_d = 1;
		rhsusf_acc_LEUPOLDMK4_wd = 1;
		rhsusf_acc_LEUPOLDMK4_2 = 1;
		rhsusf_acc_LEUPOLDMK4_2_MRDS = 1;
		rhsusf_acc_LEUPOLDMK4_2_d = 1;
		rhsusf_acc_premier = 1;
		rhsusf_acc_premier_mrds = 1;
		rhsusf_acc_premier_low = 1;
		rhsusf_acc_M8541 = 1;
		rhsusf_acc_M8541_mrds = 1;
		rhsusf_acc_M8541_low = 1;
		rhsusf_acc_M8541_low_d = 1;
		rhsusf_acc_M8541_low_wd = 1;
		rhsusf_acc_EOTECH = 1;
		rhsusf_acc_eotech_552 = 1;
		rhsusf_acc_eotech_552_d = 1;
		rhsusf_acc_eotech_552_wd = 1;
		rhsusf_acc_eotech_xps3 = 1;
		rhsusf_acc_g33_xps3 = 1;
		rhsusf_acc_g33_xps3_flip = 1;
		rhsusf_acc_g33_xps3_tan = 1;
		rhsusf_acc_g33_xps3_tan_flip = 1;
		rhsusf_acc_g33_t1 = 1;
		rhsusf_acc_g33_t1_flip = 1;
		rhsusf_acc_compm4 = 1;
		rhsusf_acc_T1_high = 1;
		rhsusf_acc_T1_low = 1;
		rhsusf_acc_RX01 = 1;
		rhsusf_acc_RX01_NoFilter = 1;
		rhsusf_acc_RX01_tan = 1;
		rhsusf_acc_RX01_NoFilter_tan = 1;
		rhsusf_acc_RM05 = 1;
		rhsusf_acc_mrds = 1;
		rhsusf_acc_mrds_c = 1;
		rhsusf_acc_ACOG = 1;
		rhsusf_acc_ACOG2 = 1;
		rhsusf_acc_ACOG3 = 1;
		rhsusf_acc_ACOG_wd = 1;
		rhsusf_acc_ACOG_d = 1;
		rhsusf_acc_ACOG_sa = 1;
		rhsusf_acc_ACOG_USMC = 1;
		rhsusf_acc_ACOG2_USMC = 1;
		rhsusf_acc_ACOG3_USMC = 1;
		rhsusf_acc_ACOG_RMR = 1;
		rhsusf_acc_ACOG_PIP = 1;
		rhsusf_acc_ACOG2_pip = 1;
		rhsusf_acc_ACOG3_pip = 1;
		rhsusf_acc_ACOG_wd_pip = 1;
		rhsusf_acc_ACOG_d_pip = 1;
		rhsusf_acc_ACOG_sa_pip = 1;
		rhsusf_acc_ACOG_USMC_pip = 1;
		rhsusf_acc_ACOG2_USMC_pip = 1;
		rhsusf_acc_ACOG3_USMC_pip = 1;
		rhsusf_acc_ACOG_RMR_PIP = 1;
		rhsusf_acc_ACOG_3d = 1;
		rhsusf_acc_ACOG2_3d = 1;
		rhsusf_acc_ACOG3_3d = 1;
		rhsusf_acc_ACOG_wd_3d = 1;
		rhsusf_acc_ACOG_d_3d = 1;
		rhsusf_acc_ACOG_sa_3d = 1;
		rhsusf_acc_ACOG_USMC_3d = 1;
		rhsusf_acc_ACOG2_USMC_3d = 1;
		rhsusf_acc_ACOG3_USMC_3d = 1;
		rhsusf_acc_ACOG_RMR_3d = 1;
		rhsusf_acc_ELCAN = 1;
		rhsusf_acc_ELCAN_ard = 1;
		rhsusf_acc_ELCAN_3d = 1;
		rhsusf_acc_ELCAN_ard_3d = 1;
		rhsusf_acc_ELCAN_PIP = 1;
		rhsusf_acc_ELCAN_ard_PIP = 1;
		rhsusf_acc_su230 = 1;
		rhsusf_acc_su230_mrds = 1;
		rhsusf_acc_su230a = 1;
		rhsusf_acc_su230a_mrds = 1;
		rhsusf_acc_su230_c = 1;
		rhsusf_acc_su230_mrds_c = 1;
		rhsusf_acc_su230a_c = 1;
		rhsusf_acc_su230a_mrds_c = 1;
		rhsusf_acc_su230_3d = 1;
		rhsusf_acc_su230_mrds_3d = 1;
		rhsusf_acc_su230a_3d = 1;
		rhsusf_acc_su230a_mrds_3d = 1;
		rhsusf_acc_su230_c_3d = 1;
		rhsusf_acc_su230_mrds_c_3d = 1;
		rhsusf_acc_su230a_c_3d = 1;
		rhsusf_acc_su230a_mrds_c_3d = 1;
		rhsusf_acc_SpecterDR = 1;
		rhsusf_acc_SpecterDR_3d = 1;
		rhsusf_acc_SpecterDR_A = 1;
		rhsusf_acc_SpecterDR_A_3d = 1;
		rhsusf_acc_SpecterDR_CX = 1;
		rhsusf_acc_SpecterDR_CX_3D = 1;
		rhsusf_acc_SpecterDR_pvs27 = 1;
		rhsusf_acc_SpecterDR_D = 1;
		rhsusf_acc_SpecterDR_OD = 1;
		rhsusf_acc_SpecterDR_D_3D = 1;
		rhsusf_acc_SpecterDR_OD_3D = 1;
		rhsusf_acc_anpvs27 = 1;
		rhsusf_acc_anpas13gv1 = 1;
		rhsusf_acc_M2A1 = 1;
		rhsusf_acc_ACOG_MDO = 1;
		rhsusf_acc_premier_anpvs27 = 1;
		rhsusf_acc_ACOG_anpvs27 = 1;
	};
};

class PointerSlot;
class PointerSlot_Rail: PointerSlot
{
	class compatibleItems
	{
		rhsusf_acc_wmx = 1;
		rhsusf_acc_wmx_bk = 1;
		rhsusf_acc_M952V = 1;
		rhsusf_acc_anpeq15A = 1;
		rhsusf_acc_anpeq15side = 1;
		rhsusf_acc_anpeq15side_bk = 1;
		rhsusf_acc_anpeq16a = 1;
		rhsusf_acc_anpeq16a_light = 1;
	};
};
class UnderBarrelSlot;
class UnderBarrelSlot_rail: UnderBarrelSlot
{
	class compatibleItems
	{
		rhsusf_acc_harris_bipod = 1;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems;
};
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556
{
	class compatibleItems: compatibleItems
	{
		muzzle_snds_M = 1;
		muzzle_snds_m_khk_F = 1;
		muzzle_snds_m_snd_F = 1;
	};
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	class compatibleItems;
};
class rhs_western_9mmpistol_muzzle_slot: asdg_MuzzleSlot_9MM
{
	class compatibleItems: compatibleItems
	{
		muzzle_snds_L = 1;
	};
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		optic_DMS_weathered_F = 1;
		optic_DMS_weathered_Kir_F = 1;
		optic_Arco_AK_blk_F = 1;
		optic_Arco_arid_F = 1;
		optic_Arco_AK_arid_F = 1;
		optic_Arco_lush_F = 1;
		optic_Arco_AK_lush_F = 1;
		optic_Holosight_arid_F = 1;
		optic_Holosight_lush_F = 1;
	};
};

class CfgWeapons
{
	class rhs_weap_SCARH_USA_STD;
	class rhs_weap_SCARH_USA_STD_Folded: rhs_weap_SCARH_USA_STD
	{
		model = "\rhsusf\addons\rhsusf_weapons3\MK17\Mk17_folded.p3d";
	};
	class rhs_weap_SCARH_USA_LB;
	class rhs_weap_SCARH_USA_LB_Folded: rhs_weap_SCARH_USA_LB
	{
		model = "\rhsusf\addons\rhsusf_weapons3\MK17\Mk17_LB_folded.p3d";
	};
	class rhs_weap_SCARH_USA_CQC;
	class rhs_weap_SCARH_USA_CQC_Folded: rhs_weap_SCARH_USA_CQC
	{
		model = "\rhsusf\addons\rhsusf_weapons3\MK17\Mk17_CQC_folded.p3d";
	};
	class rhs_weap_m249_pip_L_para;
    class rhs_weap_m249_pip_L_para_folded: rhs_weap_m249_pip_L_para
    {
		scope = 1;
	};
	class acc_pointer_IR;
	class rhsusf_acc_anpeq15: acc_pointer_IR
	{
		class ItemInfo;
	};
	class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15
	{
		class ItemInfo: ItemInfo
		{
			RMBhint = "Flashlight";
			mass = 8;
			class Pointer{};
			class FlashLight
			{
				color[] = {700,700,800};
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
				class Attenuation
				{
					start = 15;
					constant = 100;
					linear = 70;
					quadratic = 15;
					hardLimitStart = 130;
					hardLimitEnd = 160;
				};
				scale[] = {0};
			};
		};
	};
	class rhsusf_acc_harris_bipod: acc_pointer_IR
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
	class InventoryOpticsItem_Base_F;
	/*class rhsusf_acc_sniper_base;
	class rhsusf_acc_ACOG: rhsusf_acc_sniper_base
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class elcan_scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_m150_Blur"};
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.08;
					opticsZoomMax = 0.08;
					opticsZoomInit = 0.08;
					memoryPointCamera = "opticview_3d";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					cameraDir = "";
				};
				class alternative_view
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsZoomMin = 0.275;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
	};*/
	class ItemCore;
	class rhsusf_acc_su230_base: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Elcan_x1
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.6;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
				};
				class Elcan_x4
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.1;
					opticsZoomMax = 0.1;
					opticsZoomInit = 0.1;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
				class Elcan_iron
				{
					opticsID = 3;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsZoomMin = 0.275;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
					visionMode[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
	};
};
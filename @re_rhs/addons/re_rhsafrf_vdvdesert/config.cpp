#define _ARMA_

class CfgPatches
{
	class re_rhsafrf_vdvdesert
	{
		name = "RE: RHS AFRF VDV Desert";
		author = "amartyn";
		units[] = {
			rhs_2s3_vdv_des,
			RHS_Mi24P_CAS_vdv_des,
			RHS_Mi24P_AT_vdv_des,
			RHS_Mi24P_vdv_des,
			RHS_Mi24V_FAB_vdv_des,
			RHS_Mi24V_UPK23_vdv_des,
			RHS_Mi24V_AT_vdv_des,
			RHS_Mi24V_vdv_des,
			RHS_Mi8mt_vdv_des,
			RHS_Mi8t_vdv_des,
			RHS_Mi8MTV3_heavy_vdv_des,
			RHS_Mi8mt_Cargo_vdv_des,
			RHS_Mi8mtv3_Cargo_vdv_des,
			RHS_Mi8MTV3_vdv_des,
			RHS_Mi8MTV3_UPK23_vdv_des,
			RHS_Mi8MTV3_FAB_vdv_des,
			RHS_Mi8AMT_vdv_des,
			RHS_Mi8AMTSh_vdv_des,
			RHS_Mi8AMTSh_UPK23_vdv_des,
			rhs_zsu234_vdv_des,
			RHS_Ural_VDV_des_01,
			RHS_Ural_Open_VDV_des_01,
			RHS_Ural_Fuel_VDV_des_01,
			RHS_BM21_VDV_des_01,
			rhs_bmp1_vdv_des,
			rhs_bmp1p_vdv_des,
			rhs_bmp1k_vdv_des,
			rhs_bmp1d_vdv_des,
			rhs_bmp2_vdv_des,
			rhs_bmp2k_vdv_des,
			rhs_bmp2d_vdv_des,
			rhs_btr70_vdv_des,
			rhs_btr80_vdv_des,
			rhs_btr80a_vdv_des,
			RHS_NSV_TriPod_VDV_des,
			rhs_KORD_VDV_des,
			rhs_KORD_high_VDV_des,
			RHS_AGS30_TriPod_VDV_des,
			rhs_SPG9M_VDV_des,
			rhs_Igla_AA_pod_vdv_des,
			rhs_2b14_82mm_vdv_des,
			rhs_Metis_9k115_2_vdv_des,
			rhs_D30_vdv_des,
			rhs_D30_at_vdv_des,
			rhs_Kornet_9M133_2_vdv_des,
			rhs_t72ba_vdv_des,
			rhs_t72bb_vdv_des,
			rhs_t72bc_vdv_des,
			rhs_t72bd_vdv_des,
			rhs_t72be_vdv_des,
			rhs_gaz66_vdv_des,
			rhs_gaz66_ammo_vdv_des
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_main","rhs_c_troops","rhs_c_2s3","rhs_c_a2port_air","rhs_c_a2port_car","rhs_c_a2port_armor","rhs_c_bmp","rhs_c_heavyweapons","rhs_c_t72","rhs_c_trucks","re_rhsafrf_factions"};
	};
};
class CfgFactionClasses
{
	class rhs_faction_vdv_des
	{
		displayName = "Russia (VDV) (Desert)";
		priority = -8;
		side = 0;
		icon = "\rhsafrf\addons\rhs_main\data\icons\vdv.paa";
		flag = "\rhsafrf\addons\rhs_main\data\flag_map\flag_vdv_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
};
class CfgVehicles
{
	class rhs_2s3tank_base;
	class rhs_2s3_vdv_des: rhs_2s3tank_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2s3_tv.paa";
		author = "$STR_RHS_AUTHOR_FULL";
		_generalMacro = "rhs_2s3_vdv_des";
		model = "\rhsafrf\addons\rhs_2s3\rhs_2s3";
		scope = 2;
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_01_des_co.paa","\rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_02_des_co.paa","\rhsafrf\addons\rhs_2s3_camo\data\rhs_art_wheels_des_co.paa"};
	};
	class RHS_Mi24P_CAS_vdv;
	class RHS_Mi24P_CAS_vdv_des: RHS_Mi24P_CAS_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
	};
	class RHS_Mi24P_AT_vdv;
	class RHS_Mi24P_AT_vdv_des: RHS_Mi24P_AT_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
	};
	class RHS_Mi24P_vdv;
	class RHS_Mi24P_vdv_des: RHS_Mi24P_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
	};
	class RHS_Mi24V_FAB_vdv;
	class RHS_Mi24V_FAB_vdv_des: RHS_Mi24V_FAB_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
	};
	class RHS_Mi24V_UPK23_vdv;
	class RHS_Mi24V_UPK23_vdv_des: RHS_Mi24V_UPK23_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
	};
	class RHS_Mi24V_AT_VVS_Base;
	class RHS_Mi24V_AT_vdv_des: RHS_Mi24V_AT_VVS_Base
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
	};
	class RHS_Mi24V_vdv;
	class RHS_Mi24V_vdv_des: RHS_Mi24V_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
	};
	class RHS_Mi8mt_vdv;
	class RHS_Mi8mt_vdv_des: RHS_Mi8mt_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8t_vdv;
	class RHS_Mi8t_vdv_des: RHS_Mi8t_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo4_co.paa"};
	};
	class RHS_Mi8MTV3_heavy_vdv;
	class RHS_Mi8MTV3_heavy_vdv_des: RHS_Mi8MTV3_heavy_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo3_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8mt_Cargo_vdv;
	class RHS_Mi8mt_Cargo_vdv_des: RHS_Mi8mt_Cargo_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8mtv3_Cargo_vdv;
	class RHS_Mi8mtv3_Cargo_vdv_des: RHS_Mi8mtv3_Cargo_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo3_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8MTV3_vdv;
	class RHS_Mi8MTV3_vdv_des: RHS_Mi8MTV3_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8MTV3_UPK23_vdv;
	class RHS_Mi8MTV3_UPK23_vdv_des: RHS_Mi8MTV3_UPK23_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8MTV3_FAB_vdv;
	class RHS_Mi8MTV3_FAB_vdv_des: RHS_Mi8MTV3_FAB_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8AMT_vdv;
	class RHS_Mi8AMT_vdv_des: RHS_Mi8AMT_vdv
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8AMTSh_vvsc;
	class RHS_Mi8AMTSh_vdv_des: RHS_Mi8AMTSh_vvsc
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class RHS_Mi8AMTSh_UPK23_vvsc;
	class RHS_Mi8AMTSh_UPK23_vdv_des: RHS_Mi8AMTSh_UPK23_vvsc
	{
		faction = "rhs_faction_vdv_des";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
	};
	class rhs_zsu234_aa;
	class rhs_zsu234_vdv_des: rhs_zsu234_aa
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenselectionstextures[] = {"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa"};
	};
	class RHS_Ural_VDV_01;
	class RHS_Ural_VDV_des_01: RHS_Ural_VDV_01
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_driver";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","\rhsafrf\addons\rhs_a2port_car_camo\data\ural_plachta_sand_co.paa"};
	};
	class RHS_Ural_Open_VDV_01;
	class RHS_Ural_Open_VDV_des_01: RHS_Ural_Open_VDV_01
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_driver";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","\rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa"};
	};
	class RHS_Ural_Fuel_VDV_01;
	class RHS_Ural_Fuel_VDV_des_01: RHS_Ural_Fuel_VDV_01
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_driver";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_fuel_sand_co.paa"};
	};
	class RHS_BM21_VDV_01;
	class RHS_BM21_VDV_des_01: RHS_BM21_VDV_01
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_driver";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","\rhsafrf\addons\rhs_a2port_car_camo\data\ural_bm21_sand_co.paa"};
	};
	class rhs_bmp1_vdv;
	class rhs_bmp1_vdv_des: rhs_bmp1_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp1p_vdv;
	class rhs_bmp1p_vdv_des: rhs_bmp1p_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp1k_vdv;
	class rhs_bmp1k_vdv_des: rhs_bmp1k_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp1d_vdv;
	class rhs_bmp1d_vdv_des: rhs_bmp1d_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp2_vdv;
	class rhs_bmp2_vdv_des: rhs_bmp2_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp2k_vdv;
	class rhs_bmp2k_vdv_des: rhs_bmp2k_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp2d_vdv;
	class rhs_bmp2d_vdv_des: rhs_bmp2d_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","\rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_btr70_vdv;
	class rhs_btr70_vdv_des: rhs_btr70_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_btr70_camo\data\btr70_1_sand_co.paa","\rhsafrf\addons\rhs_btr70_camo\data\btr70_2_sand_co.paa","\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_btr80_vdv;
	class rhs_btr80_vdv_des: rhs_btr80_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa","\rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa","\rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa"};
	};
	class rhs_btr80a_vdv;
	class rhs_btr80a_vdv_des: rhs_btr80a_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_armoredcrew";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa","\rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa","\rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa"};
	};
	class RHS_NSV_TriPod_VDV;
	class RHS_NSV_TriPod_VDV_des: RHS_NSV_TriPod_VDV
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_KORD_VDV;
	class rhs_KORD_VDV_des: rhs_KORD_VDV
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_KORD_high_VDV;
	class rhs_KORD_high_VDV_des: rhs_KORD_high_VDV
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class RHS_AGS30_TriPod_VDV;
	class RHS_AGS30_TriPod_VDV_des: RHS_AGS30_TriPod_VDV
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_SPG9M_VDV;
	class rhs_SPG9M_VDV_des: rhs_SPG9M_VDV
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_Igla_AA_pod_vdv;
	class rhs_Igla_AA_pod_vdv_des: rhs_Igla_AA_pod_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_2b14_82mm_vdv;
	class rhs_2b14_82mm_vdv_des: rhs_2b14_82mm_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_Metis_9k115_2_vdv;
	class rhs_Metis_9k115_2_vdv_des: rhs_Metis_9k115_2_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_D30_vdv;
	class rhs_D30_vdv_des: rhs_D30_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_D30_at_vdv;
	class rhs_D30_at_vdv_des: rhs_D30_at_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_Kornet_9M133_2_vdv;
	class rhs_Kornet_9M133_2_vdv_des: rhs_Kornet_9M133_2_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		typicalCargo[] = {"rhs_vdv_des_rifleman"};
	};
	class rhs_t72ba_tv;
	class rhs_t72ba_vdv_des: rhs_t72ba_tv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa"};
	};
	class rhs_t72bb_tv;
	class rhs_t72bb_vdv_des: rhs_t72bb_tv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01b_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02b_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05b_sand_co.paa"};
	};
	class rhs_t72bc_tv;
	class rhs_t72bc_vdv_des: rhs_t72bc_tv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa"};
	};
	class rhs_t72bd_tv;
	class rhs_t72bd_vdv_des: rhs_t72bd_tv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_turret_sand_co.paa"};
	};
	class rhs_t72be_tv;
	class rhs_t72be_vdv_des: rhs_t72be_tv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_turret_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa"};
	};
	class rhs_gaz66_vdv;
	class rhs_gaz66_vdv_des: rhs_gaz66_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_driver";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa"};
	};
	class rhs_gaz66_ammo_vdv;
	class rhs_gaz66_ammo_vdv_des: rhs_gaz66_ammo_vdv
	{
		faction = "rhs_faction_vdv_des";
		crew = "rhs_vdv_des_driver";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa"};
	};
};
class CfgGroups
{
	class East
	{
		class rhs_faction_vdv_des
		{
			name = "Russia (VDV) (Desert)";
			class rhs_group_rus_vdv_des_infantry
			{
				name = "$STR_RHS_GROUP_VDV_DES_Infantry";
				aliveCategory = "Infantry";
				class rhs_group_rus_vdv_des_infantry_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_section_mg
				{
					name = "$STR_RHS_GROUPS_SECTION_MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_section_marksman
				{
					name = "$STR_RHS_GROUPS_SECTION_MARKSMAN";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_section_AT
				{
					name = "$STR_RHS_GROUPS_SECTION_AT";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_lat";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_section_AA
				{
					name = "$STR_RHS_GROUPS_SECTION_AA";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_fireteam
				{
					name = "$STR_RHS_GROUPS_RUS_FIRETEAM";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_MANEUVER
				{
					name = "$STR_RHS_GROUPS_RUS_MANEUVER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_Ural
			{
				name = "$STR_RHS_GROUP_vdv_Ural";
				aliveCategory = "Motorized";
				class rhs_group_rus_vdv_des_Ural_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_tigr_3camo_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_Ural_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_vdv_des_01";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_des_Ural_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_vdv_des_01";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_Ural_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_vdv_des_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_Ural_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_vdv_des_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_gaz66
			{
				name = "$STR_RHS_GROUP_vdv_gaz66";
				aliveCategory = "Motorized";
				class rhs_group_rus_vdv_des_gaz66_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_tigr_3camo_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_gaz66_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv_des";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_des_gaz66_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_gaz66_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_gaz66_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_gaz66_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv_des";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_btr70
			{
				name = "$STR_RHS_GROUP_vdv_BTR70";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_des_btr70_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv_des";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_btr70_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv_des";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_des_btr70_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_btr70_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_btr70_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_btr70_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_BTR80
			{
				name = "$STR_RHS_GROUP_msv_BTR80";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_des_BTR80_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_vdv_des";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vdv_des";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vdv_des";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vdv_des";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vdv_des";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_BTR80a
			{
				name = "$STR_RHS_GROUP_msv_BTR80a";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_des_BTR80a_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv_des";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80a_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv_des";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80a_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv_des";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80a_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv_des";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80a_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv_des";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_arifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_BTR80a_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_bmp1
			{
				name = "$STR_RHS_GROUP_vdv_BMP1";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_des_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1k_vdv_des";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_vdv_des";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp1_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_vdv_des";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp1_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1p_vdv_des";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp1_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1p_vdv_des";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp1_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_bmp2
			{
				name = "$STR_RHS_GROUP_vdv_BMP2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_des_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2k_vdv_des";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vdv_des";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp2_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp2_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp2_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_bmp2_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vdv_des";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_mi8
			{
				name = "$STR_RHS_GROUP_vdv_mi8";
				aliveCategory = "Airborne";
				class rhs_group_rus_vdv_des_mi8_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8AMTSh_vdv_des";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_des_mi8_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8AMTSh_vdv_des";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_des_mi8_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8AMTSh_vdv_des";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_des_mi8_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8AMTSh_UPK23_vdv_des";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_des_mi8_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8AMTSh_UPK23_vdv_des";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_mi24
			{
				name = "$STR_RHS_GROUP_vdv_mi24";
				aliveCategory = "Airborne";
				class rhs_group_rus_vdv_des_mi24_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_vdv_des";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_des_mi24_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_vdv_des";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_des_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_des_mi24_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_vdv_des";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_mi24_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_UPK23_vdv_des";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vdv_des_mi24_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv_des";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_des_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_des_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_FAB_vdv_des";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_des_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_des_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_des_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_bm21
			{
				name = "BM-21 Artillery";
				aliveCategory = "Artillery";
				class RHS_SPGPlatoon_vdv_des_bm21
				{
					name = "BM-21 Platoon";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_BM21_vdv_des_01";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_BM21_vdv_des_01";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_BM21_vdv_des_01";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_BM21_vdv_des_01";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
					class Unit4
					{
						side = 0;
						vehicle = "RHS_BM21_vdv_des_01";
						rank = "SERGEANT";
						position[] = {60,-60,3};
					};
					class Unit5
					{
						side = 0;
						vehicle = "RHS_BM21_vdv_des_01";
						rank = "CORPORAL";
						position[] = {80,-60,3};
					};
				};
				class RHS_SPGSection_vdv_des_bm21
				{
					name = "BM-21 Section";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_BM21_vdv_des_01";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_BM21_vdv_des_01";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
			};
			class rhs_group_rus_vdv_des_72
			{
				name = "T-72 Groups";
				aliveCategory = "Armored";
				class RHS_T72BAPlatoon
				{
					name = "T-72B g.1984 Platoon";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72ba_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72ba_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BAPlatoon_AA_des
				{
					name = "T-72B g.1984 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72ba_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BASection_des
				{
					name = "T-72B g.1984 Section";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72ba_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BBPlatoon_des
				{
					name = "T-72B g.1985 Platoon";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BB_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BB_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BBPlatoon_AA_des
				{
					name = "T-72B g.1985 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BB_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BBSection_des
				{
					name = "T-72B g.1985 Section";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BB_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BCPlatoon_des
				{
					name = "T-72B g.1989 Platoon";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BC_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BC_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BCPlatoon_AA_des
				{
					name = "T-72B g.1989 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BC_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BCSection_des
				{
					name = "T-72B g.1989 Section";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BC_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BDPlatoon_des
				{
					name = "T-72B3 g.2012 Platoon";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BD_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BD_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BDPlatoon_AA_des
				{
					name = "T-72B3 g.2012 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BD_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BDSection_des
				{
					name = "T-72B3 g.2012 Section";
					side = 0;
					faction = "rhs_faction_tv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BD_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BEPlatoon_des
				{
					name = "T-72B3 g.2016 Platoon";
					side = 0;
					faction = "rhs_faction_tv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72be_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72be_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BEPlatoon_AA_des
				{
					name = "T-72B3 g.2016 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72be_vdv_des";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_vdv_des";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BESection_des
				{
					name = "T-72B3 g.2016 Section";
					side = 0;
					faction = "rhs_faction_vdv_des";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_vdv_des";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72be_vdv_des";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
			};
		};
	};
};
#define _ARMA_

class CfgPatches
{
	class re_rhsafrf_easternmilitia
	{
		name = "RE: RHS AFRF Eastern Militia";
		author = "amartyn";
		units[] = {
			rhs_g_Soldier_F,
			rhs_g_Soldier_lite_F,
			rhs_g_Soldier_F2,
			rhs_g_Soldier_F3,
			rhs_g_Soldier_AT_F,
			rhs_g_Soldier_GL_F,
			rhs_g_Soldier_TL_F,
			rhs_g_Soldier_M_F,
			rhs_g_Soldier_AR_F,
			rhs_g_Soldier_AAR_F,
			rhs_g_Soldier_LAT_F,
			rhs_g_Soldier_AAT_F,
			rhs_g_Soldier_SL_F,
			rhs_g_engineer_F,
			rhs_g_Soldier_exp_F,
			rhs_g_Soldier_AA_F,
			rhs_g_medic_F,
			rhs_g_Crew_F,
			RHS_UAZ_chdkz,
			rhs_uaz_open_chdkz,
			rhs_uaz_dshkm_chdkz,
			rhs_uaz_ags_chdkz,
			rhs_uaz_spg9_chdkz,
			rhs_ural_chdkz,
			rhs_ural_open_chdkz,
			rhs_ural_work_chdkz,
			rhs_ural_work_open_chdkz,
			RHS_BM21_chdkz,
			RHS_Mi8amt_chdkz,
			RHS_Mi8MTV3_chdkz,
			rhs_zsu234_chdkz,
			rhs_bmp1_chdkz,
			rhs_bmp1p_chdkz,
			rhs_bmp1d_chdkz,
			rhs_bmp1k_chdkz,
			rhs_bmp2_chdkz,
			rhs_bmp2e_chdkz,
			rhs_bmp2k_chdkz,
			rhs_bmp2d_chdkz,
			rhs_bmd2_chdkz,
			rhs_bmd1_chdkz,
			rhs_btr70_chdkz,
			rhs_btr60_chdkz,
			rhs_t72ba_chdkz,
			rhs_t72bb_chdkz
		};
		weapons[] = {
			rhs_insurgent_uniform_1,
			rhs_insurgent_uniform_2,
			rhs_insurgent_uniform_3,
			rhs_insurgent_uniform_4,
			rhs_insurgent_uniform_5
		};
		requiredVersion = 1;
		requiredAddons[] = {"rhs_cti_insurgents"};
	};
};

class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			delete t72_flag_init;
		};
	};
};

class cfgWeapons
{
	class rhs_chdkz_uniform_1;
	class rhs_chdkz_uniform_2;
	class rhs_chdkz_uniform_3;
	class rhs_chdkz_uniform_4;
	class rhs_chdkz_uniform_5;
	class rhs_insurgent_uniform_1: rhs_chdkz_uniform_1
	{
		scope = 2;
		scopeCurator = 2;
	};
	class rhs_insurgent_uniform_2: rhs_chdkz_uniform_2
	{
		scope = 2;
		scopeCurator = 2;
	};
	class rhs_insurgent_uniform_3: rhs_chdkz_uniform_3
	{
		scope = 2;
		scopeCurator = 2;
	};
	class rhs_insurgent_uniform_4: rhs_chdkz_uniform_4
	{
		scope = 2;
		scopeCurator = 2;
	};
	class rhs_insurgent_uniform_5: rhs_chdkz_uniform_5
	{
		scope = 2;
		scopeCurator = 2;
	};
};

class CfgVehicles
{
	class B_Carryall_cbr;
	class rhs_ins_demo: B_Carryall_cbr
	{
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_umtbs_ca.paa";
		displayName = "$STR_RHS_UMBTSBACKPACKDEMOLITIONS_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
		class TransportItems
		{
			class _xx_DemoCharge_Remote_Mag
			{
				name = "DemoCharge_Remote_Mag";
				count = 1;
			};
			class _xx_rhs_mine_tm62m_mag
			{
				name = "rhs_mine_tm62m_mag";
				count = 1;
			};
			class _xx_rhs_mine_pmn2_mag
			{
				name = "rhs_mine_pmn2_mag";
				count = 3;
			};
		};
	};
	class I_G_Soldier_F;
	class rhs_ins_base: I_G_Soldier_F
	{
		identityTypes[] = {"LanguageRUS_F","Head_Euro","rhs_scarf","G_GUERIL_default"};
		allowedHeadgearB[] = {"rhs_beanie","rhs_beanie_green","rhs_6b26","rhs_ssh68","H_Cap_blk","rhs_6b27m_green","H_Beret_blk","H_Bandanna_gry","H_Cap_tan"};
		linkedItems[] = {"rhs_6b27m_green","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_beanie_green","rhs_6b13_Flora_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_beanie_green","rhs_6b13_Flora_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_lite_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_balaclava1_olive","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_balaclava1_olive","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_F2: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_beanie","rhs_scarf","rhs_6b13_Flora_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_beanie","rhs_scarf","rhs_6b13_Flora_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_F3: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_beanie_green","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_beanie_green","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_45th_ak74m_camo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_45th_ak74m_camo","Throw","Put"};
	};
	class rhs_g_Soldier_AT_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_balaclava","rhs_6b13_Flora_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_balaclava","rhs_6b13_Flora_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_GL_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_beanie","rhs_6b13_Flora_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_beanie","rhs_6b13_Flora_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_TL_F: rhs_g_Soldier_GL_F
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"H_Cap_oli","rhs_scarf","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_oli","rhs_scarf","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_ak103_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak103_gp25","Throw","Put"};
	};
	class rhs_g_Soldier_M_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_Booniehat_flora","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_Booniehat_flora","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_AR_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"H_Bandanna_camo","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Bandanna_camo","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_AAR_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_balaclava1_olive","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_balaclava1_olive","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_LAT_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		magazines[] = {"rhs_rpg7_PG7VL_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgn","rhs_mag_rdg2_black"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgn","rhs_mag_rdg2_black"};
	};
	class rhs_g_Soldier_AAT_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_balaclava","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_balaclava","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_SL_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		headgearProbability = 0;
		linkedItems[] = {"rhs_6b13_Flora_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b13_Flora_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_45th_ak103","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_45th_ak103","Binocular","Throw","Put"};
	};
	class rhs_g_engineer_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_beanie","rhs_6b13_Flora_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_beanie","rhs_6b13_Flora_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_g_Soldier_exp_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		headgearProbability = 0;
		linkedItems[] = {"rhs_beanie_green","rhs_scarf","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_beanie_green","rhs_scarf","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "rhs_ins_demo";
	};
	class rhs_g_Soldier_AA_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		linkedItems[] = {"rhs_balaclava1_olive","rhs_6b13_Flora_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_balaclava1_olive","rhs_6b13_Flora_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "rhs_assault_umbts";
	};
	class rhs_g_medic_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		uniformClass = "rhs_insurgent_uniform_4";
	};
	class rhs_g_Crew_F: rhs_ins_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
	};
	class RHS_UAZ_Base;
	class RHS_UAZ_chdkz_Base: RHS_UAZ_Base
	{
		accuracy = 0.5;
		rhs_decalParameters[] = {};
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"};
	};
	class rhs_uaz_open_Base;
	class rhs_uaz_open_chdkz_Base: rhs_uaz_open_Base
	{
		accuracy = 0.5;
		rhs_decalParameters[] = {};
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"};
	};
	class RHS_UAZ_chdkz: RHS_UAZ_chdkz_Base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		author = "$STR_RHS_AUTHOR_FULL";
	};
	class rhs_uaz_open_chdkz: rhs_uaz_open_chdkz_base
	{
		scope = 2;
		scopeCurator = 2;
		editorPreview = "";
		author = "$STR_RHS_AUTHOR_FULL";
	};
	class RHS_UAZ_DShKM_Base;
	class rhs_uaz_dshkm_chdkz: RHS_UAZ_DShKM_Base
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		editorPreview = "";
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
	};
	class RHS_UAZ_AGS30_Base;
	class rhs_uaz_ags_chdkz: RHS_UAZ_AGS30_Base
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		editorPreview = "";
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
	};
	class RHS_UAZ_SPG9_Base;
	class rhs_uaz_spg9_chdkz: RHS_UAZ_SPG9_Base
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		editorPreview = "";
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
	};
	class RHS_Ural_Civ_Base;
	class rhs_ural_chdkz: RHS_Ural_Civ_Base
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		editorPreview = "";
		displayName = "$STR_RHS_URAL4320_NAME";
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		author = "$STR_RHS_AUTHOR_FULL";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_ural_open_chdkz: RHS_Ural_Civ_Base
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		editorPreview = "";
		model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\ural_open_ca.paa";
		displayName = "$STR_RHS_URAL4320OPEN_NAME";
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_ural_work_chdkz: RHS_Ural_Civ_Base
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		editorPreview = "";
		displayName = "$STR_RHS_URAL4320WORKER_NAME";
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa","rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_ural_work_open_chdkz: RHS_Ural_Civ_Base
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		editorPreview = "";
		model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\ural_open_ca.paa";
		displayName = "$STR_RHS_URAL4320WORKEROPEN_NAME";
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa","rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class RHS_BM21_MSV_01;
	class RHS_BM21_chdkz: RHS_BM21_MSV_01
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		crew = "rhs_g_Soldier_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		author = "$STR_RHS_AUTHOR_FULL";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class RHS_Mi8AMT_vvs;
	class RHS_Mi8amt_chdkz: RHS_Mi8amt_vvs
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		author = "$STR_RHS_AUTHOR_FULL";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_chdkz_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"};
	};
	class RHS_Mi8MTV3_vvs;
	class RHS_Mi8MTV3_chdkz: RHS_Mi8MTV3_vvs
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		author = "$STR_RHS_AUTHOR_FULL";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_chdkz_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"};
	};
	class rhs_zsutank_base;
	class rhs_zsu234_aa: rhs_zsutank_base
	{
		class EventHandlers;
	};
	class rhs_zsu234_chdkz: rhs_zsu234_aa
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {};
		_generalMacro = "rhs_zsu234_chdkz";
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_gue_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_gue_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_gue_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmp1_msv;
	class rhs_bmp1_chdkz: rhs_bmp1_msv
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'CDF']","['Label', cBMPPlatoon, 'Platoon',11]","['Label', cBMPLeftBack, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmp1p_msv;
	class rhs_bmp1p_chdkz: rhs_bmp1p_msv
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'CDF']","['Label', cBMPPlatoon, 'Platoon',11]","['Label', cBMPLeftBack, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmp1d_msv;
	class rhs_bmp1d_chdkz: rhs_bmp1d_msv
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'CDF']","['Label', cBMPPlatoon, 'Platoon',11]","['Label', cBMPLeftBack, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmp1k_msv;
	class rhs_bmp1k_chdkz: rhs_bmp1k_msv
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'CDF']","['Label', cBMPPlatoon, 'Platoon',11]","['Label', cBMPLeftBack, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmp2_msv;
	class rhs_bmp2_chdkz: rhs_bmp2_msv
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'CDF']","['Label', cBMPPlatoon, 'Platoon',11]","['Label', cBMPLeftBack, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmp2e_msv;
	class rhs_bmp2e_chdkz: rhs_bmp2e_msv
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'CDF']","['Label', cBMPPlatoon, 'Platoon',11]","['Label', cBMPLeftBack, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmp2k_msv;
	class rhs_bmp2k_chdkz: rhs_bmp2k_msv
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'CDF']","['Label', cBMPPlatoon, 'Platoon',11]","['Label', cBMPLeftBack, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmp2d_msv;
	class rhs_bmp2d_chdkz: rhs_bmp2d_msv
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'CDF']","['Label', cBMPPlatoon, 'Platoon',11]","['Label', cBMPLeftBack, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_bmd_base;
	class rhs_bmd2_base: rhs_bmd_base
	{
		class EventHandlers;
	};
	class rhs_bmd2: rhs_bmd2_base{};
	class rhs_bmd2_chdkz: rhs_bmd2
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMD3NumberPlaces, 'CDF']","['Label', cBMDPlnSymPlaces, 'Platoon',11]","['Label', cBMDArmySymPlaces, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa","rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_chdkz_co.paa","rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
	};
	class rhs_bmd1_base: rhs_bmd_base
	{
		class EventHandlers;
	};
	class rhs_bmd1: rhs_bmd1_base{};
	class rhs_bmd1_chdkz: rhs_bmd1
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBMD3NumberPlaces, 'Default']","['Label', cBMDPlnSymPlaces, 'Platoon',11]","['Label', cBMDArmySymPlaces, 'Army', 22]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa","rhsafrf\addons\rhs_c_cti_indep\data\sa_bmd1_02_chdkz_co.paa","rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
	};
	class rhs_btr_base;
	class rhs_btr70_vmf: rhs_btr_base
	{
		class EventHandlers;
	};
	class rhs_btr70_chdkz: rhs_btr70_vmf
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']","['Label', cBTR2SideRoundelPlaces, 'Army',22]","['Label', cBTRPlnSymPlaces, 'Platoon',11]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_btr70\data\btr70_chdkz_1_co.paa","rhsafrf\addons\rhs_btr70\data\btr70_chdkz_2_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_btr60_base;
	class rhs_btr60_vmf: rhs_btr60_base
	{
		class EventHandlers;
	};
	class rhs_btr60_chdkz: rhs_btr60_vmf
	{
		scope = 2;
		scopeCurator = 2;
		rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']","['Label', cBTR2SideRoundelPlaces, 'Army',22]","['Label', cBTRPlnSymPlaces, 'Platoon',11]"};
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_c_cti_indep\data\btr60_body_gue_co.paa","rhsafrf\addons\rhs_c_cti_indep\data\btr60_details_gue_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
			};
		};
	};
	class rhs_a3t72tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
					class CommanderMG;
				};
			};
		};
	};
	class rhs_t72ba_tv: rhs_a3t72tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
					class CommanderMG: CommanderMG{};
				};
			};
		};
	};
	class rhs_t72ba_chdkz: rhs_t72ba_tv
	{
		scope = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_chdkz_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_chdkz_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "rhs_g_Crew_F";
					};
					class CommanderMG: CommanderMG{};
				};
			};
		};
	};
	class rhs_t72bb_tv: rhs_a3t72tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
					class CommanderMG: CommanderMG{};
				};
			};
		};
	};
	class rhs_t72bb_chdkz: rhs_t72bb_tv
	{
		scope = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		crew = "rhs_g_Crew_F";
		side = 2;
		faction = "rhs_faction_insurgents";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01b_chdkz_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02b_chdkz_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05b_chdkz_co.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "rhs_g_Crew_F";
					};
					class CommanderMG: CommanderMG{};
				};
			};
		};
	};
};
class CfgGroups
{
	class Indep
	{
		class rhs_faction_insurgents
		{
			name = "Eastern Militia";
			class Infantry
			{
				name = "Infantry";
				class IRG_InfSquad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class IRG_InfSquad_Weapons
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class IRG_InfTeam
				{
					name = "$STR_RHS_GROUPS_RUS_FIRETEAM";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfTeam_AT
				{
					name = "$STR_RHS_GROUPS_SECTION_AT";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfTeam_MG
				{
					name = "$STR_RHS_GROUPS_SECTION_MG";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfSentry
				{
					name = "$STR_RHS_GROUPS_RUS_MANEUVER";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class IRG_ReconSentry
				{
					name = "$STR_RHS_GROUPS_RECON_SECTION";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class IRG_SniperTeam_M
				{
					name = "$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class IRG_Support_CLS
				{
					name = "Support Team (CLS)";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class rhs_group_indp_ins_bm21
			{
				aliveCategory = "Artillery";
				name = "BM-21 Artillery";
				class RHS_SPGPlatoon_ins_bm21
				{
					name = "BM-21 Platoon";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_art.paa";
					class Unit0
					{
						side = 2;
						vehicle = "RHS_BM21_chdkz";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "RHS_BM21_chdkz";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 2;
						vehicle = "RHS_BM21_chdkz";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit3
					{
						side = 2;
						vehicle = "RHS_BM21_chdkz";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
					class Unit4
					{
						side = 2;
						vehicle = "RHS_BM21_chdkz";
						rank = "SERGEANT";
						position[] = {60,-60,3};
					};
					class Unit5
					{
						side = 2;
						vehicle = "RHS_BM21_chdkz";
						rank = "CORPORAL";
						position[] = {80,-60,3};
					};
				};
				class RHS_SPGSection_ins_bm21
				{
					name = "BM-21 Section";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_art.paa";
					class Unit0
					{
						side = 2;
						vehicle = "RHS_BM21_chdkz";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "RHS_BM21_chdkz";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
			};
			class rhs_group_indp_ins_bmd1
			{
				name = "Mechanized (BMD-1)";
				aliveCategory = "Mechanized";
				class rhs_group_rus_ins_bmd1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_bmd1_chdkz";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class rhs_group_rus_ins_bmd1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd1_chdkz";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_ins_bmd1_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd1_chdkz";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_ins_bmd1_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd1_chdkz";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_ins_bmd1_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd1_chdkz";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_ins_bmd1_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd1_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
			};
			class rhs_group_indp_ins_bmd2
			{
				name = "Mechanized (BMD-2)";
				aliveCategory = "Mechanized";
				class rhs_group_rus_ins_bmd2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_bmd2_chdkz";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class rhs_group_rus_ins_bmd2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd2_chdkz";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_ins_bmd2_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd2_chdkz";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_ins_bmd2_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd2_chdkz";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_ins_bmd2_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd2_chdkz";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_ins_bmd2_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_bmd2_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
			};
			class rhs_group_indp_ins_bmp1
			{
				name = "Mechanized (BMP-1)";
				aliveCategory = "Mechanized";
				class rhs_group_indp_ins_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 0;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle = "rhs_g_soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {5,-5,0};
					};
					class Unit2: Unit0
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "LIEUTENANT";
						position[] = {-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle = "rhs_bmp1k_chdkz";
						rank = "SERGEANT";
						position[] = {19,-22,0};
					};
				};
				class rhs_group_indp_ins_bmp1_squad: rhs_group_indp_ins_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_chdkz";
						rank = "CORPORAL";
					};
					class Unit4: Unit0
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5: Unit0
					{
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6: Unit0
					{
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8: Unit0
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class rhs_group_indp_ins_bmp1_squad_2mg: rhs_group_indp_ins_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AAT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
					};
				};
				class rhs_group_indp_ins_bmp1_squad_sniper: rhs_group_indp_ins_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_M_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_medic_F";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
					};
				};
				class rhs_group_indp_ins_bmp1_squad_mg_sniper: rhs_group_indp_ins_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_M_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AAT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
					};
				};
				class rhs_group_indp_ins_bmp1_squad_aa: rhs_group_indp_ins_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						rank = "CORPORAL";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
					};
				};
			};
			class rhs_group_indp_ins_bmp2
			{
				name = "Mechanized (BMP-2)";
				aliveCategory = "Mechanized";
				class rhs_group_indp_ins_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 0;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle = "rhs_g_soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {5,-5,0};
					};
					class Unit2: Unit0
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "LIEUTENANT";
						position[] = {-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle = "rhs_bmp2k_chdkz";
						rank = "SERGEANT";
						position[] = {19,-22,0};
					};
				};
				class rhs_group_indp_ins_bmp2_squad: rhs_group_indp_ins_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp2_chdkz";
						rank = "CORPORAL";
					};
					class Unit4: Unit0
					{
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5: Unit0
					{
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6: Unit0
					{
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8: Unit0
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class rhs_group_indp_ins_bmp2_squad_2mg: rhs_group_indp_ins_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp2_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AAT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
					};
				};
				class rhs_group_indp_ins_bmp2_squad_sniper: rhs_group_indp_ins_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_M_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp2_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_medic_F";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
					};
				};
				class rhs_group_indp_ins_bmp2_squad_mg_sniper: rhs_group_indp_ins_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_SL_F";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AR_F";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp2_chdkz";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_M_F";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_AAT_F";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
					};
				};
				class rhs_group_indp_ins_bmp2_squad_aa: rhs_group_indp_ins_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					class Unit0: Unit0
					{
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						rank = "CORPORAL";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
					};
				};
			};
			class rhs_group_indp_ins_btr70
			{
				name = "Motorized (BTR-70)";
				aliveCategory = "Mechanized";
				class rhs_group_chdkz_btr70_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr70_chdkz";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class rhs_group_chdkz_btr70_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr70_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_chdkz_btr70_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr70_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_btr70_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr70_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_btr70_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr70_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_btr70_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr70_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_indp_ins_btr60
			{
				name = "Motorized (BTR-60)";
				aliveCategory = "Mechanized";
				class rhs_group_chdkz_btr60_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr60_chdkz";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class rhs_group_chdkz_btr60_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr60_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_chdkz_btr60_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr60_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_btr60_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr60_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_btr60_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr60_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_btr60_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_btr60_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_indp_ins_ural
			{
				name = "Motorized (Ural-4320)";
				aliveCategory = "Mechanized";
				class rhs_group_chdkz_ural_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "RHS_UAZ_chdkz";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class rhs_group_chdkz_ural_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_ural_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_chdkz_ural_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_ural_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_ural_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_ural_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_ural_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_ural_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_chdkz_ural_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_ural_chdkz";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_indp_ins_uaz
			{
				name = "Motorized (UAZ)";
				aliveCategory = "Motorized";
				class BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (AGS-30)";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_uaz_ags_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_uaz_ags_chdkz";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_uaz_ags_chdkz";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_Team_HMG: BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (DShkM)";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_uaz_dshkm_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_uaz_dshkm_chdkz";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_uaz_dshkm_chdkz";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_AT: BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (SPG-9)";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_uaz_spg9_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_uaz_spg9_chdkz";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_uaz_spg9_chdkz";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_AA: BUS_MotInf_Team_GMG
				{
					name = "Mot. Air-defense Team";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "RHS_UAZ_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AA_F";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
			};
			class rhs_group_indp_ins_72
			{
				name = "T-72 Groups";
				aliveCategory = "Armored";
				class RHS_T72BBPlatoon
				{
					name = "T-72 g.1985 Platoon";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					class Unit0
					{
						side = 2;
						vehicle = "RHS_T72BB_chdkz";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_t72ba_chdkz";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_t72ba_chdkz";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class RHS_T72BBPlatoon_AA
				{
					name = "T-72 g.1985 Platoon (Combined)";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_t72ba_chdkz";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_zsu234_chdkz";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 2;
						vehicle = "RHS_T72BB_chdkz";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class RHS_T72BBSection
				{
					name = "T-72 g.1985 Section";
					side = 2;
					faction = "rhs_faction_insurgents";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					class Unit0
					{
						side = 2;
						vehicle = "RHS_T72BB_chdkz";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_t72ba_chdkz";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
					};
				};
			};
		};
	};
};
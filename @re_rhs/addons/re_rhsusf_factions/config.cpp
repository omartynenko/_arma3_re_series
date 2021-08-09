#define _ARMA_

class CfgPatches
{
	class re_rhsusf_factions
	{
		name = "RE: RHS USF Factions Fix";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhsusf_main","rhsusf_c_troops","rhsusf_c_f22","RHS_US_A2_AirImport"};
	};
};

class CfgFactionClasses
{
	class rhs_faction_usarmy
	{
		displayName = "$STR_RHSUSF_FAC_USARMY";
		priority = -5;
		side = 7;
		icon = "\rhsusf\addons\rhsusf_main\data\armylogo.paa";
		flag = "\rhsusf\addons\rhsusf_main\data\flag_us_co.paa";
		backpack_tf_faction_radio_api = "tf_rt1523g_rhs";
	};
	class rhs_faction_usmc: rhs_faction_usarmy
	{
		side = 7;
	};
	class rhs_faction_usarmy_wd: rhs_faction_usarmy
	{
		side = 1;
	};
	class rhs_faction_usarmy_d: rhs_faction_usarmy
	{
		side = 1;
	};
	class rhs_faction_usmc_wd: rhs_faction_usarmy
	{
		side = 1;
	};
	class rhs_faction_usmc_d: rhs_faction_usarmy
	{
		side = 1;
	};
	class rhs_faction_usaf: rhs_faction_usarmy
	{
		side = 7;
	};
	class rhs_faction_usn: rhs_faction_usarmy
	{
		side = 7;
	};
	class rhs_faction_socom: rhs_faction_usarmy
	{
		side = 1;
	};
};

class CfgGlasses
{
	class G_Combat;
	class None
	{
		identityTypes[] += {"rhsusf_g_army",5,"rhsusf_g_usmc",10};
	};
	class rhs_googles_black: G_Combat
	{
		identityTypes[] = {};
	};
	class rhs_googles_clear: G_Combat
	{
		identityTypes[] = {};
	};
};

class CfgVehicles
{
	class Plane_Fighter_03_base_F;
	class rhsusf_f22: Plane_Fighter_03_base_F
	{
		faction = "rhs_faction_usarmy_d";
	};
	class Plane_CAS_01_base_F;
	class RHS_A10: Plane_CAS_01_base_F
	{
		faction = "rhs_faction_usarmy_wd";
	};
	class RHS_C130J_Base;
	class RHS_C130J: RHS_C130J_Base
	{
		faction = "rhs_faction_usarmy_wd";
	};
	class RHS_C130J_Cargo_Base;
	class RHS_C130J_Cargo: RHS_C130J_Cargo_Base
	{
		faction = "rhs_faction_usarmy_d";
	};
	class rhsusf_infantry_army_base;
	class rhsusf_army_ocp_rifleman: rhsusf_infantry_army_base
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_iotv_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_iotv_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_rifleman_m4: rhsusf_army_ocp_rifleman{};
	class rhsusf_army_ocp_officer: rhsusf_infantry_army_base
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp_norotos","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp_norotos","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_squadleader: rhsusf_infantry_army_base
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_iotv_ocp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_teamleader: rhsusf_infantry_army_base
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_medic: rhsusf_army_ocp_rifleman
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_iotv_ocp_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_iotv_ocp_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_marksman: rhsusf_infantry_army_base
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_driver;
	class rhsusf_army_ocp_driver_armored: rhsusf_army_ocp_driver
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_rifleman: rhsusf_army_ocp_rifleman
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_rifleman_m4: rhsusf_army_ocp_rifleman_m4
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhs_ess_black","rhsusf_iotv_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhs_ess_black","rhsusf_iotv_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_squadleader: rhsusf_army_ocp_squadleader
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_iotv_ucp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_iotv_ucp_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_teamleader: rhsusf_army_ocp_teamleader
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_iotv_ucp_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_iotv_ucp_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_medic: rhsusf_army_ocp_medic
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_marksman: rhsusf_army_ocp_marksman
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_driver_armored: rhsusf_army_ocp_driver_armored
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_arb_rifleman: rhsusf_army_ocp_rifleman
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_arb_squadleader: rhsusf_army_ocp_squadleader
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_arb_teamleader: rhsusf_army_ocp_teamleader
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_arb_medic: rhsusf_army_ocp_medic
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ocp_arb_marksman: rhsusf_army_ocp_marksman
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhs_ess_black","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_arb_rifleman: rhsusf_army_ocp_arb_rifleman
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_arb_squadleader: rhsusf_army_ocp_arb_squadleader
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_arb_teamleader: rhsusf_army_ocp_arb_teamleader
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_arb_medic: rhsusf_army_ocp_arb_medic
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_army_ucp_arb_marksman: rhsusf_army_ocp_arb_marksman
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_infantry_usmc_base;
	class rhsusf_usmc_marpat_wd_rifleman: rhsusf_infantry_usmc_base
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_wd_squadleader: rhsusf_usmc_marpat_wd_rifleman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_wd_teamleader: rhsusf_infantry_usmc_base
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_wd_marksman: rhsusf_usmc_marpat_wd_rifleman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_wd_spotter: rhsusf_usmc_marpat_wd_marksman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_d_rifleman: rhsusf_usmc_marpat_wd_rifleman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_d_squadleader: rhsusf_usmc_marpat_wd_squadleader
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_d_teamleader: rhsusf_usmc_marpat_wd_teamleader
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_d_marksman: rhsusf_usmc_marpat_wd_marksman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_mich_helmet_marpatd","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_marpat_d_spotter: rhsusf_usmc_marpat_wd_spotter
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_lar_marpat_wd_rifleman: rhsusf_usmc_marpat_wd_rifleman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_lar_marpat_wd_squadleader: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_lar_marpat_wd_teamleader: rhsusf_infantry_usmc_base
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_lar_marpat_wd_marksman: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_lar_marpat_d_rifleman: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_lar_marpat_d_squadleader: rhsusf_usmc_lar_marpat_wd_squadleader
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_lar_marpat_d_teamleader: rhsusf_usmc_lar_marpat_wd_teamleader
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_lar_marpat_d_marksman: rhsusf_usmc_lar_marpat_wd_marksman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_infantry_usmc_recon_base: rhsusf_infantry_usmc_base
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_rifleman: rhsusf_infantry_usmc_recon_base
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_rifleman_at: rhsusf_infantry_usmc_recon_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_grenadier_m32: rhsusf_usmc_recon_marpat_wd_rifleman
	{
		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_autorifleman: rhsusf_infantry_usmc_recon_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_spc_iar","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_spc_iar","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_machinegunner: rhsusf_infantry_usmc_recon_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_spc_mg","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_spc_mg","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_recon_marpat_wd_machinegunner_m249: rhsusf_usmc_recon_marpat_wd_machinegunner
	{
		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_recon_marpat_wd_marksman: rhsusf_infantry_usmc_recon_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_recon_marpat_wd_sniper_M107: rhsusf_usmc_recon_marpat_wd_marksman
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_recon_marpat_wd_officer: rhsusf_infantry_usmc_recon_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_headset","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_headset","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_teamleader: rhsusf_infantry_usmc_recon_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_rifleman_fast: rhsusf_usmc_recon_marpat_wd_rifleman
	{
		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_rifleman_at_fast: rhsusf_usmc_recon_marpat_wd_rifleman_at
	{
		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_autorifleman_fast: rhsusf_usmc_recon_marpat_wd_autorifleman
	{
		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_iar","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_iar","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast: rhsusf_usmc_recon_marpat_wd_machinegunner_m249
	{
		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_iar","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_iar","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_marksman_fast: rhsusf_usmc_recon_marpat_wd_marksman
	{
		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_wd_teamleader_fast: rhsusf_usmc_recon_marpat_wd_teamleader
	{
		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_d_rifleman: rhsusf_usmc_recon_marpat_wd_rifleman
	{
		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_d_rifleman_at: rhsusf_usmc_recon_marpat_wd_rifleman_at
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_d_autorifleman: rhsusf_usmc_recon_marpat_wd_autorifleman
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_tan","rhsusf_spc_iar","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_tan","rhsusf_spc_iar","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_d_grenadier_m32: rhsusf_usmc_recon_marpat_wd_grenadier_m32
	{
		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_d_machinegunner: rhsusf_usmc_recon_marpat_wd_machinegunner
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_mg","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_mg","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_recon_marpat_d_machinegunner_m249: rhsusf_usmc_recon_marpat_wd_machinegunner_m249
	{
		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_recon_marpat_d_marksman: rhsusf_usmc_recon_marpat_wd_marksman
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_recon_marpat_d_sniper_M107: rhsusf_usmc_recon_marpat_wd_sniper_M107
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_marksman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};
	class rhsusf_usmc_recon_marpat_d_officer: rhsusf_usmc_recon_marpat_wd_officer
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_tan_headset","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_tan_headset","rhsusf_spc_squadleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_recon_marpat_d_teamleader: rhsusf_usmc_recon_marpat_wd_teamleader
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_alt_tan_headset","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt_tan_headset","rhsusf_spc_teamleader","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_mc_uniform;
	class rhsusf_infantry_socom_armysf_base: rhsusf_socom_mc_uniform
	{
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_spcs_ocp_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_g3_m81_uniform;
	class rhsusf_infantry_socom_marsoc_base: rhsusf_socom_g3_m81_uniform
	{
		Items[] = {"FirstAidKit","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
		RespawnItems[] = {"FirstAidKit","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
		linkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_cso_cqb: rhsusf_infantry_socom_marsoc_base
	{
		Items[] = {"FirstAidKit","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
		RespawnItems[] = {"FirstAidKit","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
		linkedItems[] = {"rhsusf_opscore_fg_pelt_nsw","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_fg_pelt_nsw","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_cso_breacher: rhsusf_socom_marsoc_cso_cqb
	{
		Items[] = {"FirstAidKit","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
		RespawnItems[] = {"FirstAidKit","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
		linkedItems[] = {"rhsusf_opscore_fg_pelt","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_fg_pelt","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_cso_grenadier: rhsusf_infantry_socom_marsoc_base
	{
		Items[] = {"FirstAidKit","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
		RespawnItems[] = {"FirstAidKit","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
		linkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_teamleader: rhsusf_infantry_socom_marsoc_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_alt","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_teamchief: rhsusf_socom_marsoc_teamleader
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_elementleader: rhsusf_socom_marsoc_cso_cqb
	{
		linkedItems[] = {"rhsusf_opscore_rg_cover_pelt","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_rg_cover_pelt","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_jtac: rhsusf_infantry_socom_marsoc_base
	{
		linkedItems[] = {"rhsusf_opscore_fg_pelt","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_opscore_fg_pelt","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_jfo: rhsusf_socom_marsoc_jtac
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_spc_patchless_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_cso_mechanic: rhsusf_infantry_socom_marsoc_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_socom_marsoc_sarc: rhsusf_infantry_socom_marsoc_base
	{
		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt","rhsusf_spc_patchless","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
	};
	class rhsusf_usmc_marpat_wd_rifleman_m4;
	class rhsusf_navy_marpat_wd_medic: rhsusf_usmc_marpat_wd_rifleman_m4
	{
		faction = "rhs_faction_usmc_wd";
	};
	class rhsusf_usmc_marpat_d_rifleman_m4;
	class rhsusf_navy_marpat_d_medic: rhsusf_usmc_marpat_d_rifleman_m4
	{
		faction = "rhs_faction_usmc_d";
	};
	class rhsusf_navy_sarc_w: rhsusf_infantry_usmc_recon_base
	{
		faction = "rhs_faction_usmc_wd";
	};
	class rhsusf_navy_sarc_d: rhsusf_navy_sarc_w
	{
		faction = "rhs_faction_usmc_d";
	};
	class rhsusf_navy_sarc_w_fast: rhsusf_navy_sarc_w
	{
		faction = "rhs_faction_usmc_wd";
	};
	class rhsusf_navy_sarc_d_fast: rhsusf_navy_sarc_d
	{
		faction = "rhs_faction_usmc_d";
	};
	class rhsusf_airforce_jetpilot: rhsusf_usmc_marpat_wd_rifleman_m4
	{
		faction = "rhs_faction_usarmy_d";
	};
	class rhsusf_airforce_pilot: rhsusf_airforce_jetpilot
	{
		faction = "rhs_faction_usarmy_wd";
	};
	class rhsusf_M1165_ASV_OGPK_M240_base;
	class rhsusf_m1165_asv_m240_usaf_d: rhsusf_M1165_ASV_OGPK_M240_base
	{
		faction = "rhs_faction_usarmy_d";
	};
	class rhsusf_airforce_security_force_rifleman: rhsusf_infantry_army_base
	{
		faction = "rhs_faction_usarmy_wd";
	};
};

class CfgGroups
{
	class West
	{
		class rhs_faction_socom_marsoc
		{
			name = "$STR_RHSUSF_FAC_SOCOM";
			class rhs_group_nato_marsoc_infantry
			{
				name = "$STR_RHSUSF_VEHCLASS_MARSOC";
				aliveCategory = "Infantry";
				class rhs_group_nato_marsoc_infantry_squad
				{
					name = "$STR_RHSUSF_GROUPS_MSOT";
					faction = "rhs_faction_socom";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.75;
					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_teamleader";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_teamchief";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_elementleader";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_breacher";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_mechanic";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_sarc";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_elementleader";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso";
						rank = "CORPORAL";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_breacher";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_mechanic";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_sarc";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
				class rhs_group_nato_marsoc_infantry_team
				{
					name = "$STR_RHSUSF_GROUPS_MSOT_ELEMENT";
					faction = "rhs_faction_marsoc";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.75;
					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_elementleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_breacher";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_mechanic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_sarc";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class rhs_group_nato_marsoc_infantry_squad_sniper
				{
					name = "$STR_RHSUSF_GROUPS_MSOT_SNIPER_ELEMENT";
					faction = "rhs_faction_marsoc";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.75;
					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_sniper";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_spotter";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
				};
			};
		};
	};
};
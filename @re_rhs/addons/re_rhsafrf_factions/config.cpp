#define _ARMA_

class CfgPatches
{
	class re_rhsafrf_factions
	{
		name = "RE: RHS AFRF Factions Fix";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhs_main","rhs_c_troops","rhs_c_2s1","rhs_c_2s3","rhs_c_a2port_air","rhs_c_a2port_armor","rhs_c_a3retex","rhs_c_air","rhs_c_bmp","rhs_c_mi28","rhs_c_mig29","rhs_c_radars","rhs_c_rva","rhs_c_t14","rhs_c_t72","rhs_c_tanks"};
	};
};

class CfgFactionClasses
{
	class rhs_faction_msv;
	class rhs_faction_rva: rhs_faction_msv
	{
		side = 7;
	};
	class rhs_faction_tv: rhs_faction_msv
	{
		side = 7;
	};
	class rhs_faction_vdv_45: rhs_faction_msv
	{
		side = 7;
	};
	class rhs_faction_vpvo: rhs_faction_msv
	{
		side = 7;
	};
	class rhs_faction_vvs: rhs_faction_msv
	{
		side = 7;
	};
	class rhs_faction_vvs_c: rhs_faction_msv
	{
		side = 7;
	};
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

class CfgGlasses
{
	class G_Balaclava_blk;
	class rhs_scarf: G_Balaclava_blk
	{
		identityTypes[] = {"NoGlasses",0};
	};
};

class CfgVehicles
{
	class rhs_msv_emr_grenadier;
	class rhs_msv_emr_efreitor: rhs_msv_emr_grenadier
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_msv_emr_sergeant: rhs_msv_emr_grenadier
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_msv_emr_junior_sergeant: rhs_msv_emr_sergeant
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_infantry_vdv_base;
	class rhs_vdv_rifleman: rhs_infantry_vdv_base
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_infantry_vdv_des_base: rhs_infantry_vdv_base
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_des_rifleman: rhs_infantry_vdv_des_base
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b47","rhs_6b23_digi_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_LAT;
	class rhs_vdv_des_LAT: rhs_vdv_LAT
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_RShG2;
	class rhs_vdv_des_RShG2: rhs_vdv_RShG2
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_grenadier;
	class rhs_vdv_des_grenadier: rhs_vdv_grenadier
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_rifleman_asval;
	class rhs_vdv_des_rifleman_asval: rhs_vdv_rifleman_asval
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_arifleman;
	class rhs_vdv_des_arifleman: rhs_vdv_arifleman
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_machinegunner;
	class rhs_vdv_des_machinegunner: rhs_vdv_machinegunner
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_machinegunner_assistant;
	class rhs_vdv_des_machinegunner_assistant: rhs_vdv_machinegunner_assistant
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_marksman;
	class rhs_vdv_des_marksman: rhs_vdv_marksman
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_marksman_asval;
	class rhs_vdv_des_marksman_asval: rhs_vdv_marksman_asval
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_efreitor: rhs_vdv_LAT
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b47_bala","rhs_6b23_digi_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b47_bala","rhs_6b23_digi_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_des_efreitor: rhs_vdv_efreitor
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_sergeant: rhs_vdv_LAT
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b47_bala","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b47_bala","rhs_6b23_digi_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_des_sergeant: rhs_vdv_sergeant
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_junior_sergeant;
	class rhs_vdv_des_junior_sergeant: rhs_vdv_junior_sergeant
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_officer_armored;
	class rhs_vdv_des_officer_armored: rhs_vdv_officer_armored
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_officer;
	class rhs_vdv_des_officer: rhs_vdv_officer
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_grenadier_rpg: rhs_vdv_grenadier
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b47","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b47","rhs_6b23_digi_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_des_grenadier_rpg: rhs_vdv_grenadier_rpg
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_at;
	class rhs_vdv_des_at: rhs_vdv_at
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_aa;
	class rhs_vdv_des_aa: rhs_vdv_aa
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_strelok_rpg_assist;
	class rhs_vdv_des_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_medic;
	class rhs_vdv_des_medic: rhs_vdv_medic
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_engineer;
	class rhs_vdv_des_engineer: rhs_vdv_engineer
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_driver_armored;
	class rhs_vdv_des_driver_armored: rhs_vdv_driver_armored
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_driver;
	class rhs_vdv_des_driver: rhs_vdv_driver
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_crew;
	class rhs_vdv_des_crew: rhs_vdv_crew
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_armoredcrew;
	class rhs_vdv_des_armoredcrew: rhs_vdv_armoredcrew
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_combatcrew;
	class rhs_vdv_des_combatcrew: rhs_vdv_combatcrew
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_crew_commander;
	class rhs_vdv_des_crew_commander: rhs_vdv_crew_commander
	{
		faction = "rhs_faction_vdv_des";
	};
	class rhs_vdv_flora_efreitor: rhs_vdv_efreitor
	{
		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b23_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b23_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_flora_grenadier_rpg: rhs_vdv_grenadier_rpg
	{
		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b23_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b23_rifleman","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_flora_sergeant: rhs_vdv_sergeant
	{
		linkedItems[] = {"rhs_6b7_1m_olive","rhs_6b23_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_olive","rhs_6b23_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_flora_junior_sergeant: rhs_vdv_junior_sergeant
	{
		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b23_6sh92_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b23_6sh92_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_flora_LAT: rhs_vdv_LAT
	{
		linkedItems[] = {"rhs_6b7_1m_olive","rhs_6b23_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_olive","rhs_6b23_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_mflora_efreitor: rhs_vdv_efreitor
	{
		linkedItems[] = {"rhs_6b7_1m_olive","rhs_6sh92_digi_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_olive","rhs_6sh92_digi_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_mflora_sergeant: rhs_vdv_sergeant
	{
		linkedItems[] = {"rhs_6b7_1m_olive","rhs_6b23_ML_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_olive","rhs_6b23_ML_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_mflora_junior_sergeant: rhs_vdv_junior_sergeant
	{
		linkedItems[] = {"rhs_6b7_1m_olive","rhs_6sh92_digi_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_olive","rhs_6sh92_digi_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_rifleman: rhs_vdv_rifleman
	{
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_rifleman_akms: rhs_vdv_recon_rifleman
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_headset_spetsnaz","rhs_6b7_1m_bala1_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_spetsnaz","rhs_6b7_1m_bala1_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_rifleman_ak103: rhs_vdv_recon_rifleman_akms
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_headset_spetsnaz","rhs_6b7_1m_bala2_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_spetsnaz","rhs_6b7_1m_bala2_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_grenadier: rhs_vdv_recon_rifleman
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz","rhs_6b7_1m_bala2_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz","rhs_6b7_1m_bala2_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_arifleman: rhs_vdv_recon_rifleman
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala2_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala2_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_rifleman_lat;
	class rhs_vdv_recon_efreitor: rhs_vdv_recon_rifleman_lat
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_radio","rhs_6b7_1m_bala2_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_radio","rhs_6b7_1m_bala2_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_sergeant: rhs_vdv_recon_rifleman_lat
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b7_1m_bala1_emr","rhs_tr8_periscope_pip","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b7_1m_bala1_emr","rhs_tr8_periscope_pip","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_medic: rhs_vdv_recon_rifleman
	{
		linkedItems[] = {"rhs_6b7_1m_bala1_olive","rhs_6b23_digi_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala1_olive","rhs_6b23_digi_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_rifleman: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_efreitor: rhs_vdv_efreitor
	{
		linkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_grenadier: rhs_vdv_grenadier
	{
		linkedItems[] = {"rhs_6b7_1m_bala2_flora","rhs_6b13_Flora_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala2_flora","rhs_6b13_Flora_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_machinegunner: rhs_vdv_machinegunner
	{
		linkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_flora","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_flora","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_at: rhs_vdv_at
	{
		linkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_aa: rhs_vdv_aa
	{
		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_sergeant: rhs_vdv_sergeant
	{
		linkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_headset_mapcase","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_junior_sergeant: rhs_vdv_junior_sergeant
	{
		linkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_flora_LAT: rhs_vdv_LAT
	{
		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_recon_rifleman: rhs_vdv_recon_rifleman
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_recon_rifleman_akms: rhs_vdv_recon_rifleman_akms
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala2_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala2_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_recon_rifleman_lat: rhs_vdv_recon_rifleman_lat
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_recon_grenadier: rhs_vdv_recon_grenadier
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz","rhs_6b7_1m_bala2_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz","rhs_6b7_1m_bala2_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_rifleman_asval;
	class rhs_vmf_recon_rifleman_asval: rhs_vdv_recon_rifleman_asval
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_recon_arifleman: rhs_vdv_recon_arifleman
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala1_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_machinegunner_assistant;
	class rhs_vmf_recon_machinegunner_assistant: rhs_vdv_recon_machinegunner_assistant
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala2_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b7_1m_bala2_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_recon_efreitor: rhs_vdv_recon_efreitor
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b47_bala","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b47_bala","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		Items[] = {"FirstAidKit","rhs_beret_mp1"};
		RespawnItems[] = {"FirstAidKit","rhs_beret_mp1"};
	};
	class rhs_vmf_recon_sergeant: rhs_vdv_recon_sergeant
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b47_bala","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b47_bala","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		Items[] = {"FirstAidKit","rhs_beret_mp1"};
		RespawnItems[] = {"FirstAidKit","rhs_beret_mp1"};
	};
	class rhs_vdv_recon_officer_armored;
	class rhs_vmf_recon_officer_armored: rhs_vdv_recon_officer_armored
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b47","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_6b47","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		Items[] = {"FirstAidKit","rhs_beret_mp1"};
		RespawnItems[] = {"FirstAidKit","rhs_beret_mp1"};
	};
	class rhs_vdv_recon_officer;
	class rhs_vmf_recon_officer: rhs_vdv_recon_officer
	{
		linkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_beret_mp1","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_Spetsnaz","rhs_beret_mp1","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vdv_recon_marksman;
	class rhs_vmf_recon_marksman: rhs_vdv_recon_marksman
	{
		linkedItems[] = {"rhs_6b23_digi_sniper","rhs_6b7_1m_bala1_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_sniper","rhs_6b7_1m_bala1_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_vmf_recon_medic: rhs_vdv_recon_medic
	{
		linkedItems[] = {"rhs_6b23_digi_medic","rhs_6b7_1m_bala2_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"rhs_6b23_digi_medic","rhs_6b7_1m_bala2_emr","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class rhs_infantry_msv_base;
	class rhs_pilot_base: rhs_infantry_msv_base
	{
		faction = "rhs_faction_msv";
	};
	class rhs_rva_crew: rhs_infantry_msv_base
	{
		faction = "rhs_faction_vv";
	};
	class rhs_2s3tank_base;
	class rhs_2s3_tv: rhs_2s3tank_base
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi24_base;
	class RHS_Mi24P_VVS_Base: RHS_Mi24_base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi24P_vvs;
	class RHS_Mi24P_vvsc: RHS_Mi24P_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi24P_CAS_vvs;
	class RHS_Mi24P_CAS_vvsc: RHS_Mi24P_CAS_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi24P_AT_vvs;
	class RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi24V_base;
	class RHS_Mi24V_VVS_Base: RHS_Mi24V_base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi24V_vvs;
	class RHS_Mi24V_vvsc: RHS_Mi24V_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi24V_FAB_VVS_Base: RHS_Mi24V_VVS_Base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi24V_fab_vvs;
	class RHS_Mi24V_FAB_vvsc: RHS_Mi24V_fab_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi24V_UPK23_VVS_Base: RHS_Mi24V_VVS_Base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi24V_upk23_vvs;
	class RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_upk23_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi24V_AT_VVS_Base: RHS_Mi24V_VVS_Base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi24V_AT_vvs;
	class RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi24Vt_vvs;
	class RHS_Mi24Vt_vvsc: RHS_Mi24Vt_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8_base;
	class RHS_Mi8_VVS_Base: RHS_Mi8_base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi8MTV3_base;
	class RHS_Mi8MTV3_VVS_Base: RHS_Mi8MTV3_base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi8AMTSh_base;
	class RHS_Mi8AMTSh_VVS_Base: RHS_Mi8AMTSh_base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi8AMT_base;
	class RHS_Mi8AMT_VVS_Base: RHS_Mi8AMT_base
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_mi8t_base;
	class RHS_Mi8T_VVS_Base: rhs_mi8t_base
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_mi8mtv3_heavy_base;
	class RHS_Mi8MTV3_Heavy_VVS_Base: rhs_mi8mtv3_heavy_base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi8mt_vvs;
	class RHS_Mi8mt_vvsc: RHS_Mi8mt_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8T_vvs;
	class RHS_Mi8T_vvsc: RHS_Mi8T_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8MTV3_heavy_vvs;
	class RHS_Mi8MTV3_heavy_vvsc: RHS_Mi8MTV3_heavy_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8mt_Cargo_vvs;
	class RHS_Mi8mt_Cargo_vvsc: RHS_Mi8mt_Cargo_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8MTV3_vvs;
	class RHS_Mi8MTV3_vvsc: RHS_Mi8MTV3_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8mtv3_Cargo_vvs: RHS_Mi8MTV3_vvs
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Mi8mtv3_Cargo_vvsc: RHS_Mi8mtv3_Cargo_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8MTV3_UPK23_vvs;
	class RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8MTV3_FAB_vvs;
	class RHS_Mi8MTV3_FAB_vvsc: RHS_Mi8MTV3_FAB_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8AMT_vvs;
	class RHS_Mi8AMT_vvsc: RHS_Mi8AMT_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8AMTSh_vvs;
	class RHS_Mi8AMTSh_vvsc: RHS_Mi8AMTSh_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8AMTSh_UPK23_vvs;
	class RHS_Mi8AMTSh_UPK23_vvsc: RHS_Mi8AMTSh_UPK23_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Mi8AMTSh_FAB_vvs;
	class RHS_Mi8AMTSh_FAB_vvsc: RHS_Mi8AMTSh_FAB_vvs
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Su25_base;
	class RHS_Su25_VVS_Base: RHS_su25_base
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Su25SM_vvs: RHS_Su25_VVS_Base
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Su25SM_vvsc: RHS_Su25SM_vvs
	{
		faction = "rhs_faction_msv";
	};
	class Heli_Attack_02_base_F;
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		faction = "rhs_faction_vmf";
	};
	class RHS_Ka52_vvsc: RHS_Ka52_base
	{
		faction = "rhs_faction_msv";
	};
	class RHS_Ka52Black_base;
	class RHS_Ka52_vvs: RHS_Ka52Black_base
	{
		faction = "rhs_faction_vmf";
	};
	class UAV_02_base_F;
	class rhs_pchela1t_base: UAV_02_base_F
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_pchela1t_vvs;
	class rhs_pchela1t_vdv_des: rhs_pchela1t_vvs
	{
		author = "$STR_RHS_AUTHOR_FULL";
		faction = "rhs_faction_vdv_des";
	};
	class rhs_pchela1t_vvsc: rhs_pchela1t_base
	{
		faction = "rhs_faction_msv";
	};
	class rhs_zsutank_base;
	class rhs_zsu234_aa: rhs_zsutank_base
	{
		faction = "rhs_faction_msv";
	};
	class O_Heli_Light_02_unarmed_F;
	class rhs_ka60_grey: O_Heli_Light_02_unarmed_F
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_ka60_c: rhs_ka60_grey
	{
		faction = "rhs_faction_msv";
	};
	class RHS_T50_base;
	class RHS_T50_vvs_generic: RHS_T50_base
	{
		faction = "rhs_faction_vmf";
	};
	class Plane_Base_F;
	class RHS_TU95MS_base: Plane_Base_F
	{
		faction = "rhs_faction_vv";
	};
	class RHS_TU95MS_vvs_old: RHS_TU95MS_base
	{
		faction = "rhs_faction_vv";
	};
	class RHS_TU95MS_vvs_dubna: RHS_TU95MS_base
	{
		faction = "rhs_faction_vv";
	};
	class RHS_TU95MS_vvs_irkutsk: RHS_TU95MS_base
	{
		faction = "rhs_faction_vv";
	};
	class RHS_TU95MS_vvs_tambov: RHS_TU95MS_base
	{
		faction = "rhs_faction_vv";
	};
	class RHS_TU95MS_vvs_chelyabinsk: RHS_TU95MS_base
	{
		faction = "rhs_faction_vv";
	};
	class rhs_bmp1_vdv;
	class rhs_bmp1_tv: rhs_bmp1_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_bmp1p_vdv;
	class rhs_bmp1p_tv: rhs_bmp1p_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_bmp1k_vdv;
	class rhs_bmp1k_tv: rhs_bmp1k_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_bmp1d_vdv;
	class rhs_bmp1d_tv: rhs_bmp1d_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_prp3_tv: rhs_bmp1_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_brm1k_vdv;
	class rhs_brm1k_tv: rhs_brm1k_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_bmp2e_vdv;
	class rhs_bmp2e_tv: rhs_bmp2e_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_bmp2_vdv;
	class rhs_bmp2_tv: rhs_bmp2_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_bmp2k_vdv;
	class rhs_bmp2k_tv: rhs_bmp2k_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class rhs_bmp2d_vdv;
	class rhs_bmp2d_tv: rhs_bmp2d_vdv
	{
		scope = 1;
		faction = "rhs_faction_vdv";
	};
	class Tank_F;
	class rhs_a3t72tank_base: Tank_F
	{
		faction = "rhs_faction_vdv";
	};
	class rhs_t72ba_tv;
	class rhs_t72ba_msv: rhs_t72ba_tv
	{
		faction = "rhs_faction_msv";
	};
	class rhs_t72bb_tv;
	class rhs_t72bb_msv: rhs_t72bb_tv
	{
		faction = "rhs_faction_msv";
	};
	class rhs_t72bc_tv;
	class rhs_t72bc_msv: rhs_t72bc_tv
	{
		faction = "rhs_faction_msv";
	};
	class rhs_t72bd_tv;
	class rhs_t72bd_msv: rhs_t72bd_tv
	{
		faction = "rhs_faction_msv";
	};
	class rhs_t72be_tv;
	class rhs_t72be_msv: rhs_t72be_tv
	{
		faction = "rhs_faction_msv";
	};
	class rhs_t90_tv: rhs_t72bd_tv
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_2s1tank_base: Tank_F
	{
		faction = "rhs_faction_vv";
	};
	class rhs_mi28n_base;
	class rhs_mi28n_vvs: rhs_mi28n_base
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_mi28n_vvsc: rhs_mi28n_base
	{
		faction = "rhs_faction_msv";
	};
	class rhs_mi28n_S13_base;
	class rhs_mi28n_s13_vvs: rhs_mi28n_S13_base
	{
		faction = "rhs_faction_vmf";
	};
	class rhs_mi28n_s13_vvsc: rhs_mi28n_S13_base
	{
		faction = "rhs_faction_msv";
	};
	class rhs_mig29s_base;
	class rhs_mig29s_vvs: rhs_mig29s_base
	{
		faction = "rhs_faction_vdv";
	};
	class rhs_mig29s_vvsc: rhs_mig29s_vvs
	{
		faction = "rhs_faction_msv";
	};
	class rhs_mig29sm_base;
	class rhs_mig29sm_vvs: rhs_mig29sm_base
	{
		faction = "rhs_faction_vdv";
	};
	class rhs_mig29sm_vvsc: rhs_mig29sm_vvs
	{
		faction = "rhs_faction_msv";
	};
	class House_F;
	class rhs_p37: House_F
	{
		faction = "rhs_faction_vv";
	};
	class StaticCannon;
	class rhs_radars_turret_base: StaticCannon
	{
		faction = "rhs_faction_vv";
	};
	class ThingX;
	class rhs_2P3_1: ThingX
	{
		faction = "rhs_faction_vv";
	};
	class Truck_F;
	class OTR21_Base: Truck_F
	{
		faction = "rhs_faction_vv";
	};
	class rhs_t14_base;
	class rhs_t14_tv: rhs_t14_base
	{
		faction = "rhs_faction_msv";
	};
	class rhs_tank_base;
	class rhs_t80b: rhs_tank_base
	{
		faction = "rhs_faction_msv";
	};
};
class CfgGroups
{
	class East
	{
		delete rhs_faction_tv;
		class rhs_faction_msv
		{
			name = "$STR_RHS_FAC_MSV";
			
			class rhs_group_rus_msv_Ural
			{
				name = "$STR_RHS_GROUP_MSV_Ural";
				aliveCategory = "Motorized";
				class rhs_group_rus_msv_Ural_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_uaz_msv_01";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_Zu23_msv_01";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
				};
			};
			class rhs_group_rus_msv_gaz66
			{
				name = "$STR_RHS_GROUP_vdv_gaz66";
				aliveCategory = "Motorized";
				class rhs_group_rus_msv_gaz66_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_uaz_msv_01";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_Zu23_msv";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
			class rhs_group_rus_msv_btr70
			{
				name = "$STR_RHS_GROUP_MSV_BTR70";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_btr70_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_msv_BTR80
			{
				name = "$STR_RHS_GROUP_MSV_BTR80";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_BTR80_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_msv_BTR80a
			{
				name = "$STR_RHS_GROUP_MSV_BTR80a";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_BTR80a_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_msv_bmp1
			{
				name = "$STR_RHS_GROUP_MSV_BMP1";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1k_msv";
						rank = "SERGEANT";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1_msv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1_msv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_msv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_msv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1_msv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
			};
			class rhs_group_rus_msv_bmp2
			{
				name = "$STR_RHS_GROUP_MSV_BMP2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2k_msv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_msv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_MSV_BMP3
			{
				name = "$STR_RHS_GROUP_MSV_BMP3";
				aliveCategory = "Mechanized";
				class rhs_group_rus_MSV_BMP3_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_MSV_bmp3m
			{
				name = "$STR_RHS_GROUP_MSV_bmp3m";
				aliveCategory = "Mechanized";
				class rhs_group_rus_MSV_bmp3m_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp3mera_msv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmp3mera_msv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmp3mera_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmp3mera_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmp3mera_msv";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp3mera_msv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_msv_72
			{
				name = "T-72 Groups";
				aliveCategory = "Armored";
				class RHS_T72BAPlatoon_msv
				{
					name = "T-72B g.1984 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72ba_msv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72ba_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BAPlatoon_AA_msv
				{
					name = "T-72B g.1984 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72ba_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BASection_msv
				{
					name = "T-72B g.1984 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72ba_msv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BBPlatoon_msv
				{
					name = "T-72B g.1985 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BB_msv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BB_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BBPlatoon_AA_msv
				{
					name = "T-72B g.1985 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BB_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BBSection_msv
				{
					name = "T-72B g.1985 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BB_msv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BCPlatoon_msv
				{
					name = "T-72B g.1989 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BC_msv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BC_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BCPlatoon_AA_msv
				{
					name = "T-72B g.1989 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BC_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BCSection_msv
				{
					name = "T-72B g.1989 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BC_msv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BDPlatoon_msv
				{
					name = "T-72B3 g.2012 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BD_msv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BD_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BDPlatoon_AA_msv
				{
					name = "T-72B3 g.2012 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BD_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BDSection_msv
				{
					name = "T-72B3 g.2012 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BD_msv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BEPlatoon_msv
				{
					name = "T-72B3 g.2016 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72be_msv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72be_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BEPlatoon_AA_msv
				{
					name = "T-72B3 g.2016 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72be_msv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BESection_msv
				{
					name = "T-72B3 g.2016 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_msv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72be_msv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
			};
			class rhs_group_rus_tv_14
			{
				name = "T-14 Groups";
				aliveCategory = "Armored";
				class RHS_T14Platoon
				{
					name = "T-14 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T14Platoon_AA
				{
					name = "T-14 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T14Section
				{
					name = "T-14 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
			};
			class rhs_group_rus_tv_80
			{
				name = "T-80 Groups";
				aliveCategory = "Armored";
				class RHS_T80Platoon
				{
					name = "T-80 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T80Platoon_AA
				{
					name = "T-80 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T80Section
				{
					name = "T-80 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
					};
				};
				class RHS_T80BPlatoon
				{
					name = "T-80B Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T80BPlatoon_AA
				{
					name = "T-80B Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T80BSection
				{
					name = "T-80B Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T80BVPlatoon
				{
					name = "T-80BV Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T80BVPlatoon_AA
				{
					name = "T-80BV Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T80BVSection
				{
					name = "T-80BV Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T80APlatoon
				{
					name = "T-80A Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T80APlatoon_AA
				{
					name = "T-80A Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T80ASection
				{
					name = "T-80A Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T80UPlatoon
				{
					name = "T-80U Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T80UPlatoon_AA
				{
					name = "T-80U Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T80USection
				{
					name = "T-80U Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T80UMPlatoon
				{
					name = "T-80UM Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80UM";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80UM";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80UM";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T80UMPlatoon_AA
				{
					name = "T-80UM Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80UM";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T80UM";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T80UMSection
				{
					name = "T-80UM Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T80UM";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T80UM";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class rhs_t80ue1Platoon
				{
					name = "T-80UE-1 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t80ue1";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t80ue1";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t80ue1";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class rhs_t80ue1Platoon_AA
				{
					name = "T-80UE-1 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t80ue1";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t80ue1";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class rhs_t80ue1Section
				{
					name = "T-80UE-1 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t80ue1";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t80ue1";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class rhs_t80u45mPlatoon
				{
					name = "T-80U (45m) Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t80u45m";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t80u45m";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t80u45m";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class rhs_t80u45mPlatoon_AA
				{
					name = "T-80U (45m) Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t80u45m";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t80u45m";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class rhs_t80u45mSection
				{
					name = "T-80U (45m) Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t80u45m";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t80u45m";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
			};
			class rhs_group_rus_tv_2s3
			{
				name = "2S3 Artillery";
				aliveCategory = "Artillery";
				class RHS_SPGPlatoon_tv_2s3
				{
					name = "Artillery 2S3 Platoon";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_SPGSection_tv_2s3
				{
					name = "Artillery 2S3 Section";
					side = 0;
					faction = "rhs_faction_msv";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
		};
		class rhs_faction_vdv
		{
			name = "$STR_RHS_FAC_VDV";
			delete rhs_group_rus_vdv_des_infantry;
			class rhs_group_rus_vdv_Ural
			{
				name = "$STR_RHS_GROUP_vdv_Ural";
				aliveCategory = "Motorized";
				class rhs_group_rus_vdv_Ural_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_uaz_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_Zu23_vdv_01";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_gaz66
			{
				name = "$STR_RHS_GROUP_vdv_gaz66";
				aliveCategory = "Motorized";
				class rhs_group_rus_vdv_gaz66_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_uaz_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_Zu23_vdv";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_btr60
			{
				name = "$STR_RHS_GROUP_vdv_btr60";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_btr60_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_btr70
			{
				name = "$STR_RHS_GROUP_vdv_BTR70";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_btr70_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_BTR80
			{
				name = "$STR_RHS_GROUP_msv_BTR80";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_BTR80_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_BTR80a
			{
				name = "$STR_RHS_GROUP_msv_BTR80a";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_BTR80a_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmp1
			{
				name = "$STR_RHS_GROUP_vdv_BMP1";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1k_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmp2
			{
				name = "$STR_RHS_GROUP_vdv_BMP2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2k_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd1
			{
				name = "$STR_RHS_GROUP_vdv_bmd1";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd1pk";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit7
					{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit7
					{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit7
					{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit7
					{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd1r";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd2
			{
				name = "$STR_RHS_GROUP_vdv_bmd2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd2k";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit7
					{
						side = 0;
						vehicle = "rhs_bmd2k";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit7
					{
						side = 0;
						vehicle = "rhs_bmd2k";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit7
					{
						side = 0;
						vehicle = "rhs_bmd2m";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit7
					{
						side = 0;
						vehicle = "rhs_bmd2m";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd2m";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd4
			{
				name = "$STR_RHS_GROUP_vdv_bmd4";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd4_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd4m
			{
				name = "$STR_RHS_GROUP_vdv_bmd4m";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd4m_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd4ma
			{
				name = "$STR_RHS_GROUP_vdv_bmd4ma";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd4ma_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_mi8
			{
				name = "$STR_RHS_GROUP_vdv_mi8";
				aliveCategory = "Airborne";
				class rhs_group_rus_vdv_mi8_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8MTV3_vdv";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vdv_mi8_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8MTV3_vdv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
				};
				class rhs_group_rus_vdv_mi8_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8MTV3_vdv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
				};
				class rhs_group_rus_vdv_mi8_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8MTV3_FAB_vdv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
				};
				class rhs_group_rus_vdv_mi8_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8MTV3_UPK23_vdv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_mi24
			{
				name = "$STR_RHS_GROUP_vdv_mi24";
				aliveCategory = "Airborne";
				class rhs_group_rus_vdv_mi24_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_vdv";
						rank = "SERGEANT";
						position[] = {15,0,0};
					};
				};
				class rhs_group_rus_vdv_mi24_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_vdv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
				};
				class rhs_group_rus_vdv_mi24_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_vdv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
				};
				class rhs_group_rus_vdv_mi24_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_FAB_vdv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
				};
				class rhs_group_rus_vdv_mi24_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mi24v_UPK23_vdv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
				};
			};
			class rhs_group_rus_tv_72
			{
				name = "T-72 Groups";
				aliveCategory = "Armored";
				class RHS_T72BAPlatoon
				{
					name = "T-72B g.1984 Platoon";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BAPlatoon_AA
				{
					name = "T-72B g.1984 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BASection
				{
					name = "T-72B g.1984 Section";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BBPlatoon
				{
					name = "T-72B g.1985 Platoon";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BBPlatoon_AA
				{
					name = "T-72B g.1985 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BBSection
				{
					name = "T-72B g.1985 Section";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BCPlatoon
				{
					name = "T-72B g.1989 Platoon";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BCPlatoon_AA
				{
					name = "T-72B g.1989 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BCSection
				{
					name = "T-72B g.1989 Section";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BDPlatoon
				{
					name = "T-72B3 g.2012 Platoon";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BD_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BD_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BDPlatoon_AA
				{
					name = "T-72B3 g.2012 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T72BD_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BDSection
				{
					name = "T-72B3 g.2012 Section";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T72BD_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T72BD_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T72BEPlatoon
				{
					name = "T-72B3 g.2016 Platoon";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72be_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72be_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class RHS_T72BEPlatoon_AA
				{
					name = "T-72B3 g.2016 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t72be_tv";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_T72BESection
				{
					name = "T-72B3 g.2016 Section";
					side = 0;
					faction = "rhs_faction_vdv";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t72be_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t72be_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
			};
		};
		class rhs_faction_vmf
		{
			name = "Russia (VMF)";
			class rhs_group_rus_msv_bmp2
			{
				name = "$STR_RHS_GROUP_MSV_BMP2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2k_vmf";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vmf";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vmf";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vmf";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vmf";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_msv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2_vmf";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_vmf_BTR80
			{
				name = "$STR_RHS_GROUP_MSV_BTR80";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vmf_BTR80_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vmf";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_vmf";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vmf";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vmf";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vmf";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vmf";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vmf";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vmf";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vmf";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit2
					{
						side = 0;
						vehicle = "rhs_btr80_vmf";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vmf";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_vmf";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
			};
			class rhs_group_rus_tv_90
			{
				name = "T-90 Groups";
				aliveCategory = "Armored";
				class RHS_T90Platoon
				{
					name = "T-90 Platoon";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T90_tv";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T90_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90Platoon_AA
				{
					name = "T-90 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T90_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90Section
				{
					name = "T-90 Section";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T90_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_t90aPlatoon
				{
					name = "T-90A Platoon";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_t90a_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_t90a_tv";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_t90a_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_t90aPlatoon_AA
				{
					name = "T-90A Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_t90a_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_t90a_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_t90aSection
				{
					name = "T-90A Section";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_t90a_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_t90a_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T90AMPlatoon
				{
					name = "T-90AM Platoon";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90AM_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T90AM_tv";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T90AM_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90AMPlatoon_AA
				{
					name = "T-90AM Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90AM_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T90AM_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90AMSection
				{
					name = "T-90AM Section";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90AM_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T90AM_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T90SMPlatoon
				{
					name = "T-90SM Platoon";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90SM_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T90SM_tv";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T90SM_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90SMPlatoon_AA
				{
					name = "T-90SM Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90SM_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T90SM_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90SMSection
				{
					name = "T-90SM Section";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T90SM_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T90SM_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T90SAPlatoon
				{
					name = "T-90SA g.2004 Platoon";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t90saa_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t90saa_tv";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t90saa_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90SAPlatoon_AA
				{
					name = "T-90SA g.2004 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t90saa_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t90saa_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90SASection
				{
					name = "T-90SA g.2004 Section";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t90saa_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t90saa_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
				class RHS_T90SABPlatoon
				{
					name = "T-90SA g.2016 Platoon";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t90sab_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t90sab_tv";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t90sab_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90SABPlatoon_AA
				{
					name = "T-90SA g.2016 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t90sab_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_t90sab_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T90SABSection
				{
					name = "T-90SA g.2016 Section";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_t90sab_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_t90sab_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
			};
			class rhs_group_rus_tv_2S1
			{
				name = "2S1 Artillery";
				aliveCategory = "Artillery";
				class RHS_SPGPlatoon_tv_2S1
				{
					name = "Artillery 2S1 Platoon";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_SPGSection_tv_2S1
				{
					name = "Artillery 2S1 Section";
					side = 0;
					faction = "rhs_faction_vmf";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
		};
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
		};
		class rhs_faction_vv
		{
			name = "$STR_RHS_FAC_VV";
			class rhs_group_rus_vv_infantry
			{
				name = "Infantry (OSN)";
				aliveCategory = "Infantry";
				class rhs_group_rus_vv_infantry_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class rhs_group_rus_vv_infantry_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class rhs_group_rus_vv_infantry_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_infantry_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_infantry_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_infantry_section_mg
				{
					name = "$STR_RHS_GROUPS_SECTION_MG";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class rhs_group_rus_vv_infantry_section_marksman
				{
					name = "$STR_RHS_GROUPS_SECTION_MARKSMAN";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class rhs_group_rus_vv_infantry_section_AT
				{
					name = "$STR_RHS_GROUPS_SECTION_AT";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};

				class rhs_group_rus_vv_infantry_fireteam
				{
					name = "$STR_RHS_GROUPS_RUS_FIRETEAM";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class rhs_group_rus_vv_infantry_MANEUVER
				{
					name = "$STR_RHS_GROUPS_RUS_MANEUVER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};
			class rhs_group_rus_vv_Ural
			{
				name = "$STR_RHS_GROUP_MSV_Ural";
				aliveCategory = "Motorized";
				class rhs_group_rus_vv_Ural_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_uaz_vv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vv_Ural_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_VV_01";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vv_Ural_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_VV_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_Ural_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_VV_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_Ural_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_Ural_VV_01";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vv_gaz66
			{
				name = "$STR_RHS_GROUP_vdv_gaz66";
				aliveCategory = "Motorized";
				class rhs_group_rus_vv_gaz66_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_uaz_vv";
						rank = "SERGEANT";
						position[] = {19,-22,0};
					};
				};
				class rhs_group_rus_vv_gaz66_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vv";
						rank = "CORPORAL";
						position[] = {19,-22,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vv_gaz66_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vv";
						rank = "CORPORAL";
						position[] = {19,-22,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_gaz66_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_gaz66_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_gaz66_vv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_gaz66_squad_aa
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_gaz66_zu23_vv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_gaz66_zu23_vv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
			};
			class rhs_group_rus_vv_btr70
			{
				name = "$STR_RHS_GROUP_MSV_BTR70";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vv_btr70_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vv_btr70_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vv_btr70_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_btr70_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_btr70_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr70_vv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vv_BTR80
			{
				name = "$STR_RHS_GROUP_MSV_BTR80";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vv_BTR80_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_btr80_vv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
			};
			class rhs_group_rus_vv_BTR80a
			{
				name = "$STR_RHS_GROUP_MSV_BTR80a";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vv_BTR80a_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_BTR80a_vv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
			};
			class rhs_group_rus_vv_bmp1
			{
				name = "$STR_RHS_GROUP_MSV_BMP1";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vv_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1k_vv";
						rank = "SERGEANT";
						position[] = {19,-22,0};
					};
				};
				class rhs_group_rus_vv_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_vv";
						rank = "CORPORAL";
						position[] = {19,-22,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class rhs_group_rus_vv_bmp1_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_vv";
						rank = "CORPORAL";
						position[] = {19,-22,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class rhs_group_rus_vv_bmp1_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_vv";
						rank = "CORPORAL";
						position[] = {19,-22,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class rhs_group_rus_vv_bmp1_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp1d_vv";
						rank = "CORPORAL";
						position[] = {19,-22,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
			class rhs_group_rus_vv_bmp2
			{
				name = "$STR_RHS_GROUP_MSV_BMP2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vv_bmp2_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2k_vv";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vv_bmp2_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vv";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vv_bmp2_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_bmp2_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class rhs_group_rus_vv_bmp2_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_bmp2d_vv";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class rhs_group_rus_vv_bm21
			{
				aliveCategory = "Artillery";
				name = "BM-21 Artillery";
				class RHS_SPGSection_vv_bm21
				{
					name = "BM-21 Section";
					side = 0;
					faction = "rhs_faction_vv";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_BM21_VV_01";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_BM21_VV_01";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
			};
			class rhs_group_rus_vv_mi8
			{
				name = "$STR_RHS_GROUP_VDV_Mi8";
				aliveCategory = "Airborne";
				class rhs_group_rus_vv_mi8_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8mt_vv";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
				};
				class rhs_group_rus_vv_mi8_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8mt_vv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vv_mi8_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8mt_vv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vv_mi8_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8mt_vv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_asval";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class rhs_group_rus_vv_mi8_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vv";
					side = 0;
					rarityGroup = 0.75;
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Mi8mt_vv";
						rank = "CORPORAL";
						position[] = {25,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_marksman_vss";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "rhs_mvd_izlom_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
			};
		};
	};
};
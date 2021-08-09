#define _ARMA_

class CfgPatches
{
	class real_uniform_unlock
	{
		name = "Real Uniform Unlock";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Bootcamp","A3_Characters_F_Civil","A3_Characters_F_Enoch","A3_Characters_F_EPA","A3_Characters_F_EPB","A3_Characters_F_EPC","A3_Characters_F_Exp","A3_Characters_F_Exp_Civil","A3_Characters_F_Gamma","A3_Characters_F_Kart","A3_Characters_F_Mark","A3_Characters_F_Tank"};
	};
};

class CfgVehicles
{
	class Civilian;
	class Civilian_F: Civilian
	{
		modelSides[] = {6};
	};
	class CAManBase;
	class SoldierWB: CAManBase
	{
		modelSides[] = {6};
	};
	class SoldierEB: CAManBase
	{
		modelSides[] = {6};
	};
	class SoldierGB: CAManBase
	{
		modelSides[] = {6};
	};
	class B_Soldier_base_F: SoldierWB
	{
		modelSides[] = {6};
	};
	class B_Soldier_02_f: B_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class B_Soldier_03_f: B_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class B_Soldier_04_f: B_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class B_Soldier_05_f: B_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class B_RangeMaster_F: B_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		modelSides[] = {6};
	};
	class B_Pilot_F: B_Soldier_05_f
	{
		modelSides[] = {6};
	};
	class B_helicrew_F: B_Helipilot_F
	{
		modelSides[] = {6};
	};
	class B_Soldier_diver_base_F;
	class B_diver_F: B_Soldier_diver_base_F
	{
		modelSides[] = {6};
	};
	class B_Story_SF_Captain_F: B_Soldier_02_f
	{
		modelSides[] = {6};
	};
	class B_Story_Protagonist_F: B_Soldier_02_f
	{
		modelSides[] = {6};
	};
	class b_soldier_survival_F: B_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class C_man_1;
	class C_man_1_1_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_man_p_fugitive_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_man_p_beggar_F: C_man_p_fugitive_F
	{
		modelSides[] = {6};
	};
	class C_man_w_worker_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_scientist_F: C_man_w_worker_F
	{
		modelSides[] = {6};
	};
	class C_man_hunter_1_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_man_pilot_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_journalist_F: C_man_1
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_base_F: SoldierGB
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_F: I_G_Soldier_base_F{};
	class B_G_Soldier_F: I_G_Soldier_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_F: I_G_Soldier_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_lite_F: I_G_Soldier_base_F{};
	class B_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_SL_F: I_G_Soldier_base_F{};
	class B_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_TL_F: I_G_Soldier_base_F{};
	class B_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_AR_F: I_G_Soldier_base_F{};
	class B_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		modelSides[] = {6};
	};
	class I_G_medic_F: I_G_Soldier_base_F{};
	class B_G_medic_F: I_G_medic_F
	{
		modelSides[] = {6};
	};
	class O_G_medic_F: I_G_medic_F
	{
		modelSides[] = {6};
	};
	class I_G_engineer_F: I_G_Soldier_base_F{};
	class B_G_engineer_F: I_G_engineer_F
	{
		modelSides[] = {6};
	};
	class O_G_engineer_F: I_G_engineer_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_exp_F: I_G_Soldier_base_F{};
	class B_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_GL_F: I_G_Soldier_base_F{};
	class B_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_M_F: I_G_Soldier_base_F{};
	class B_G_Soldier_M_F: I_G_Soldier_M_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_M_F: I_G_Soldier_M_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_LAT_F: I_G_Soldier_base_F{};
	class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_A_F: I_G_Soldier_base_F{};
	class B_G_Soldier_A_F: I_G_Soldier_A_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_A_F: I_G_Soldier_A_F
	{
		modelSides[] = {6};
	};
	class I_G_officer_F: I_G_Soldier_base_F{};
	class B_G_officer_F: I_G_officer_F
	{
		modelSides[] = {6};
	};
	class O_G_officer_F: I_G_officer_F
	{
		modelSides[] = {6};
	};
	class I_G_Story_SF_Captain_F: B_G_Soldier_F
	{
		modelSides[] = {6};
	};
	class I_Soldier_base_F: SoldierGB
	{
		modelSides[] = {6};
	};
	class I_Soldier_03_F: I_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class I_Soldier_04_F: I_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class I_officer_F: I_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class I_Soldier_diver_base_F: I_Soldier_base_F{};
	class I_diver_F: I_Soldier_diver_base_F
	{
		modelSides[] = {6};
	};
	class O_Soldier_base_F: SoldierEB
	{
		modelSides[] = {6};
	};
	class O_Soldier_02_F: O_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class O_officer_F: O_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class O_Soldier_diver_base_F: O_Soldier_base_F{};
	class O_diver_F: O_Soldier_diver_base_F
	{
		modelSides[] = {6};
	};
	class C_Driver_1_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_Marshal_F: B_RangeMaster_F
	{
		modelSides[] = {6};
	};
	class B_Soldier_VR_F: B_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class O_Soldier_VR_F: O_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class I_Soldier_VR_F: I_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class C_Soldier_VR_F: C_man_1
	{
		modelSides[] = {6};
	};
	class B_Protagonist_VR_F: B_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class O_Protagonist_VR_F: O_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class I_Protagonist_VR_F: I_Soldier_base_F
	{
		modelSides[] = {6};
	};
	class C_Protagonist_VR_F: C_man_1
	{
		modelSides[] = {6};
	};
	class I_G_Sharpshooter_F: I_G_Soldier_base_F{};
	class B_G_Sharpshooter_F: I_G_Sharpshooter_F
	{
		modelSides[] = {6};
	};
	class O_G_Sharpshooter_F: I_G_Sharpshooter_F
	{
		modelSides[] = {6};
	};
	class B_Captain_Pettka_F: B_Soldier_02_f
	{
		modelSides[] = {6};
	};
	class B_Captain_Jay_F: B_Soldier_02_f
	{
		modelSides[] = {6};
	};
	class I_Captain_Hladas_F: I_officer_F
	{
		modelSides[] = {6};
	};
	class B_Soldier_F: B_Soldier_base_F{};
	class Underwear_F: B_Soldier_F
	{
		modelSides[] = {6};
	};
	class I_C_Soldier_base_F : I_G_Soldier_base_F{};
	class I_C_Soldier_Para_2_F: I_C_Soldier_base_F{};
	class B_G_Captain_Ivan_F: I_C_Soldier_Para_2_F
	{
		modelSides[] = {6};
	};
	class C_man_sport_1_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_man_sport_2_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_man_sport_3_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_Man_casual_1_F: C_man_1
	{
		modelSides[] = {6};
	};
	class C_IDAP_Man_Base_F: Civilian_F
	{
		modelSides[] = {6};
	};
	class C_Story_Mechanic_01_F: Civilian_F
	{
		modelSides[] = {6};
	};
	class O_A_soldier_base_F: O_officer_F
	{
		modelSides[] = {6};
	};
	class I_G_Soldier_LAT2_F: I_G_Soldier_base_F{};
	class B_G_Soldier_LAT2_F: I_G_Soldier_LAT2_F
	{
		modelSides[] = {6};
	};
	class O_G_Soldier_LAT2_F: I_G_Soldier_LAT2_F
	{
		modelSides[] = {6};
	};
	class I_crew_F: I_Soldier_base_F{};
	class I_Story_Crew_F: I_crew_F
	{
		modelSides[] = {6};
	};
	class C_E_Man_Base_F: Civilian_F
	{
		modelSides[] = {6};
	};
	class C_E_LooterJacket_01_F: C_E_Man_Base_F
	{
		modelSides[] = {6};
	};
	class O_Soldier_F: O_Soldier_base_F{};
	class O_R_Man_Base_F: O_Soldier_F{};
	class O_R_Gorka_base_F: O_R_Man_Base_F{};
	class O_R_Gorka_F: O_R_Gorka_base_F{};
	class O_R_Gorka_black_F: O_R_Gorka_F
	{
		modelSides[] = {6};
	};
	class B_CBRN_Man_Base_F: B_Soldier_F
	{
		modelSides[] = {6};
	};
	class I_L_Uniform_01_camo_F: I_G_Soldier_LAT_F
	{
		modelSides[] = {6};
	};
	class I_L_Uniform_01_deserter_F: I_G_Soldier_F
	{
		modelSides[] = {6};
	};
	class I_L_Soldier_Base_F: I_Soldier_base_F{};
	class I_L_Uniform_01_tshirt_skull_F: I_L_Soldier_Base_F
	{
		modelSides[] = {6};
	};
	class I_L_Uniform_01_tshirt_black_F: I_L_Uniform_01_tshirt_skull_F
	{
		modelSides[] = {6};
	};
	class I_L_Uniform_01_tshirt_sport_F: I_L_Uniform_01_tshirt_skull_F
	{
		modelSides[] = {6};
	};
	class I_L_Uniform_01_tshirt_olive_F: I_L_Uniform_01_tshirt_skull_F
	{
		modelSides[] = {6};
	};
};
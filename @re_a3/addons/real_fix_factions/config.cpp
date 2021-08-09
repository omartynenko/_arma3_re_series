#define _ARMA_

class CfgPatches
{
	class real_fix_factions
	{
		name = "Real Faction Fix";
		author = "amartyn";
		units[] = {
			B_W_AFV_Wheeled_01_cannon_F,
			B_W_AFV_Wheeled_01_up_cannon_F,
			B_W_APC_Tracked_01_AA_F,
			B_W_APC_Tracked_01_CRV_F,
			B_W_APC_Tracked_01_rcws_F,
			B_W_APC_Wheeled_01_cannon_F,
			B_W_Boat_Armed_01_minigun_F,
			B_W_Boat_Transport_01_F,
			B_W_GMG_01_F,
			B_W_HMG_01_F,
			B_W_LSV_01_armed_F,
			B_W_LSV_01_AT_F,
			B_W_LSV_01_unarmed_F,
			B_W_MBT_01_arty_F,
			B_W_MBT_01_cannon_F,
			B_W_MBT_01_mlrs_F,
			B_W_MBT_01_TUSK_F,
			B_W_Mortar_01_F,
			B_W_MRAP_01_F,
			B_W_MRAP_01_gmg_F,
			B_W_MRAP_01_hmg_F,
			B_W_Quadbike_01_F,
			B_W_Static_AA_F,
			B_W_Static_AT_F,
			B_W_Truck_01_ammo_F,
			B_W_Truck_01_box_F,
			B_W_Truck_01_cargo_F,
			B_W_Truck_01_covered_F,
			B_W_Truck_01_flatbed_F,
			B_W_Truck_01_fuel_F,
			B_W_Truck_01_medical_F,
			B_W_Truck_01_mover_F,
			B_W_Truck_01_Repair_F,
			B_W_Truck_01_transport_F,
			B_W_UAV_03_dynamicLoadout_F,
			B_W_UGV_01_olive_F,
			B_W_UGV_01_rcws_olive_F,
			B_W_VTOL_01_armed_F,
			B_W_VTOL_01_infantry_F,
			B_W_VTOL_01_vehicle_F
		};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgVehicles
{
	class B_T_AFV_Wheeled_01_cannon_F;
	class B_W_AFV_Wheeled_01_cannon_F: B_T_AFV_Wheeled_01_cannon_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_AFV_Wheeled_01_up_cannon_F;
	class B_W_AFV_Wheeled_01_up_cannon_F: B_T_AFV_Wheeled_01_up_cannon_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_APC_Tracked_01_AA_F;
	class B_W_APC_Tracked_01_AA_F: B_T_APC_Tracked_01_AA_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_APC_Tracked_01_CRV_F;
	class B_W_APC_Tracked_01_CRV_F: B_T_APC_Tracked_01_CRV_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_APC_Tracked_01_rcws_F;
	class B_W_APC_Tracked_01_rcws_F: B_T_APC_Tracked_01_rcws_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_APC_Wheeled_01_cannon_F;
	class B_W_APC_Wheeled_01_cannon_F: B_T_APC_Wheeled_01_cannon_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_Boat_Armed_01_minigun_F;
	class B_W_Boat_Armed_01_minigun_F: B_T_Boat_Armed_01_minigun_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Boat_Transport_01_F;
	class B_W_Boat_Transport_01_F: B_T_Boat_Transport_01_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_GMG_01_F;
	class B_W_GMG_01_F: B_T_GMG_01_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_HMG_01_F;
	class B_W_HMG_01_F: B_T_HMG_01_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_LSV_01_armed_F;
	class B_W_LSV_01_armed_F: B_T_LSV_01_armed_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_LSV_01_AT_F;
	class B_W_LSV_01_AT_F: B_T_LSV_01_AT_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_LSV_01_unarmed_F;
	class B_W_LSV_01_unarmed_F: B_T_LSV_01_unarmed_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_MBT_01_arty_F;
	class B_W_MBT_01_arty_F: B_T_MBT_01_arty_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_MBT_01_cannon_F;
	class B_W_MBT_01_cannon_F: B_T_MBT_01_cannon_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_MBT_01_mlrs_F;
	class B_W_MBT_01_mlrs_F: B_T_MBT_01_mlrs_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_MBT_01_TUSK_F;
	class B_W_MBT_01_TUSK_F: B_T_MBT_01_TUSK_F
	{
		faction = "BLU_W_F";
		crew = "B_W_crew_F";
	};
	class B_T_Mortar_01_F;
	class B_W_Mortar_01_F: B_T_Mortar_01_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_MRAP_01_F;
	class B_W_MRAP_01_F: B_T_MRAP_01_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_MRAP_01_gmg_F;
	class B_W_MRAP_01_gmg_F: B_T_MRAP_01_gmg_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_MRAP_01_hmg_F;
	class B_W_MRAP_01_hmg_F: B_T_MRAP_01_hmg_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Quadbike_01_F;
	class B_W_Quadbike_01_F: B_T_Quadbike_01_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Static_AA_F;
	class B_W_Static_AA_F: B_T_Static_AA_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Static_AT_F;
	class B_W_Static_AT_F: B_T_Static_AT_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_ammo_F;
	class B_W_Truck_01_ammo_F: B_T_Truck_01_ammo_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_box_F;
	class B_W_Truck_01_box_F: B_T_Truck_01_box_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_cargo_F;
	class B_W_Truck_01_cargo_F: B_T_Truck_01_cargo_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_covered_F;
	class B_W_Truck_01_covered_F: B_T_Truck_01_covered_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_flatbed_F;
	class B_W_Truck_01_flatbed_F: B_T_Truck_01_flatbed_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_fuel_F;
	class B_W_Truck_01_fuel_F: B_T_Truck_01_fuel_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_medical_F;
	class B_W_Truck_01_medical_F: B_T_Truck_01_medical_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_mover_F;
	class B_W_Truck_01_mover_F: B_T_Truck_01_mover_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_Repair_F;
	class B_W_Truck_01_Repair_F: B_T_Truck_01_Repair_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_Truck_01_transport_F;
	class B_W_Truck_01_transport_F: B_T_Truck_01_transport_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Soldier_F";
	};
	class B_T_UAV_03_dynamicLoadout_F;
	class B_W_UAV_03_dynamicLoadout_F: B_T_UAV_03_dynamicLoadout_F
	{
		faction = "BLU_W_F";
	};
	class B_T_UGV_01_rcws_olive_F;
	class B_W_UGV_01_rcws_olive_F: B_T_UGV_01_rcws_olive_F
	{
		faction = "BLU_W_F";
	};
	class B_T_UGV_01_olive_F;
	class B_W_UGV_01_olive_F: B_T_UGV_01_olive_F
	{
		faction = "BLU_W_F";
	};
	class B_T_VTOL_01_armed_F;
	class B_W_VTOL_01_armed_F: B_T_VTOL_01_armed_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Helipilot_F";
	};
	class B_T_VTOL_01_infantry_F;
	class B_W_VTOL_01_infantry_F: B_T_VTOL_01_infantry_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Helipilot_F";
	};
	class B_T_VTOL_01_vehicle_F;
	class B_W_VTOL_01_vehicle_F: B_T_VTOL_01_vehicle_F
	{
		faction = "BLU_W_F";
		crew = "B_W_Helipilot_F";
	};
};
class CfgGroups
{
	class West
	{
		side = 1;
		class BLU_W_F
		{
			name = "NATO (Woodland)";
			class Infantry
			{
				name = "Infantry";
				class B_W_InfSquad
				{
					name = "Rifle Squad";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_W_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_W_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class B_W_InfSquad_Weapons
				{
					name = "Weapons Squad";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_M_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_W_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_W_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_W_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_W_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class B_W_InfTeam
				{
					name = "Fire Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_W_InfTeam_AT
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_W_InfTeam_AA
				{
					name = "Air-defense Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_W_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class B_W_MotInf_Team
				{
					name = "Motorized Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MRAP_01_gmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_W_MotInf_AT
				{
					name = "Motorized Anti-armor Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_W_MotInf_AA
				{
					name = "Motorized Air-defense Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_W_MotInf_MGTeam
				{
					name = "Motorized HMG Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_support_MG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_W_MotInf_GMGTeam
				{
					name = "Motorized GMG Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_support_GMG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_W_MotInf_MortTeam
				{
					name = "Motorized Mortar Team";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_support_Mort_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_support_AMort_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_W_MotInf_Reinforcements
				{
					name = "Motorized Reinforcements";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_Truck_01_transport_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-4,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_W_soldier_M_F";
						rank = "PRIVATE";
						position[] = {5,-6,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-8,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_W_soldier_A_F";
						rank = "PRIVATE";
						position[] = {5,-12,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_W_medic_F";
						rank = "PRIVATE";
						position[] = {5,-14,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_W_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "B_W_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-2,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "B_W_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-4,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "B_W_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-5,-6,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,-8,0};
					};
					class Unit14
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-10,0};
					};
					class Unit15
					{
						side = 1;
						vehicle = "B_W_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-5,-12,0};
					};
					class Unit16
					{
						side = 1;
						vehicle = "B_W_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-14,0};
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class B_W_MechInfSquad
				{
					name = "Mechanized Rifle Squad";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_APC_Wheeled_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_W_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_W_soldier_A_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_W_medic_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_W_MechInf_AT
				{
					name = "Mechanized Anti-armor Squad";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_APC_Tracked_01_rcws_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_W_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_W_soldier_AT_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_W_soldier_AAT_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_W_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_W_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_W_MechInf_AA
				{
					name = "Mechanized Air-defense Squad";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_APC_Tracked_01_aa_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_W_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_W_soldier_AA_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_W_soldier_AAA_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_W_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_W_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_W_MechInf_Support
				{
					name = "Mechanized Support Squad";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_APC_Wheeled_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_soldier_repair_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_W_engineer_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_W_medic_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_W_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_W_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_W_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
			class Armored
			{
				name = "Armor";
				class B_W_TankPlatoon
				{
					name = "Tank Platoon";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_MBT_01_cannon_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_W_TankPlatoon_AA
				{
					name = "Tank Platoon (Combined)";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_APC_Tracked_01_aa_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_APC_Tracked_01_aa_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_W_TankSection
				{
					name = "Tank Section";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class B_W_SPGPlatoon_Scorcher
				{
					name = "Artillery SPG Platoon";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MBT_01_arty_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_W_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_W_MBT_01_arty_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_W_SPGSection_Scorcher
				{
					name = "Artillery SPG Section";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MBT_01_arty_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class B_W_SPGSection_MLRS
				{
					name = "MLRS Section";
					side = 1;
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_W_MBT_01_mlrs_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_W_MBT_01_mlrs_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
			};
		};			
		class Guerilla
		{
			name = "$STR_REAL_FAC_FIA_B";
			class Infantry
			{
				name = "$STR_REAL_SUBCAT_INF";
				class IRG_InfTeam_AA
				{
					name = "$STR_REAL_GROUPS_TEAM_AA";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side = 1;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 1;
						vehicle = "B_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_G_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_G_soldier_A_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
	class East
	{
		side = 0;
		class OPF_G_F
		{
			name = "$STR_REAL_FAC_FIA_O";
			class Infantry
			{
				name = "$STR_REAL_SUBCAT_INF";
				class IRG_InfSquad
				{
					name = "$STR_REAL_GROUPS_SQUAD";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_G_Soldier_A_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_G_medic_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_G_soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_G_soldier_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class IRG_InfSquad_Weapons
				{
					name = "$STR_REAL_GROUPS_SQUAD_WEAP";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_soldier_AR_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_soldier_LAT_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_G_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_G_soldier_A_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_G_soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_G_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class IRG_InfTeam
				{
					name = "$STR_REAL_GROUPS_TEAM";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfTeam_AT
				{
					name = "$STR_REAL_GROUPS_TEAM_AT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_soldier_A_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfTeam_AA
				{
					name = "$STR_REAL_GROUPS_TEAM_AA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_soldier_A_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfSentry
				{
					name = "$STR_REAL_GROUPS_SENTRY";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class IRG_ReconSentry
				{
					name = "$STR_REAL_GROUPS_SENTRY_REC";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class IRG_SniperTeam_M
				{
					name = "$STR_REAL_GROUPS_SNIPER_TEAM";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_M_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Soldier_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class Support
			{
				name = "$STR_REAL_SUBCAT_SUPP";
				class IRG_Support_CLS
				{
					name = "$STR_REAL_GROUPS_TEAM_CLS";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_Support_EOD
				{
					name = "$STR_REAL_GROUPS_TEAM_EOD";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_soldier_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_engineer_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_Support_ENG
				{
					name = "$STR_REAL_GROUPS_TEAM_ENG";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_soldier_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_engineer_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class Motorized_MTP
			{
				name = "$STR_REAL_SUBCAT_MOTINF";
				class IRG_MotInf_Team
				{
					name = "$STR_REAL_GROUPS_MOT_PAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Offroad_01_F";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_G_Soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_G_medic_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_G_Soldier_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class IRG_Technicals
				{
					name = "$STR_REAL_GROUPS_MOT_TECH";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					side = 0;
					faction = "OPF_G_F";
					class Unit0
					{
						side = 0;
						vehicle = "O_G_Offroad_01_armed_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_G_Offroad_01_armed_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_G_Offroad_01_armed_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
			};
		};
	};
	class Indep
	{
		side = 2;
		class IND_G_F
		{
			name = "$STR_REAL_FAC_FIA_I";
			class Infantry
			{
				name = "$STR_REAL_SUBCAT_INF";
				class IRG_InfSquad
				{
					name = "$STR_REAL_GROUPS_SQUAD";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_G_Soldier_A_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_G_medic_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "I_G_soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "I_G_soldier_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class IRG_InfSquad_Weapons
				{
					name = "$STR_REAL_GROUPS_SQUAD_WEAP";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_soldier_AR_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_soldier_LAT_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_G_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "I_G_soldier_A_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_G_soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "I_G_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class IRG_InfTeam
				{
					name = "$STR_REAL_GROUPS_TEAM";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_Soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfTeam_AT
				{
					name = "$STR_REAL_GROUPS_TEAM_AT";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_soldier_A_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfTeam_AA
				{
					name = "$STR_REAL_GROUPS_TEAM_AA";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_soldier_A_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfSentry
				{
					name = "$STR_REAL_GROUPS_SENTRY";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class IRG_ReconSentry
				{
					name = "$STR_REAL_GROUPS_SENTRY_REC";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class IRG_SniperTeam_M
				{
					name = "$STR_REAL_GROUPS_SNIPER_TEAM";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_M_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Soldier_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class Support
			{
				name = "$STR_REAL_SUBCAT_SUPP";
				class IRG_Support_CLS
				{
					name = "$STR_REAL_GROUPS_TEAM_CLS";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_Support_EOD
				{
					name = "$STR_REAL_GROUPS_TEAM_EOD";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_soldier_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_engineer_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_Support_ENG
				{
					name = "$STR_REAL_GROUPS_TEAM_ENG";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_soldier_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_engineer_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class Motorized_MTP
			{
				name = "$STR_REAL_SUBCAT_MOTINF";
				class IRG_MotInf_Team
				{
					name = "$STR_REAL_GROUPS_MOT_PAT";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Offroad_01_F";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_G_Soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_G_medic_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_G_Soldier_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class IRG_Technicals
				{
					name = "$STR_REAL_GROUPS_MOT_TECH";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					side = 2;
					faction = "IND_G_F";
					class Unit0
					{
						side = 2;
						vehicle = "I_G_Offroad_01_armed_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_G_Offroad_01_armed_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_G_Offroad_01_armed_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
			};
		};
	};
};
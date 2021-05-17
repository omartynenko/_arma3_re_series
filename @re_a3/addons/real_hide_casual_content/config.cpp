#define _ARMA_

class CfgPatches
{
	class real_hide_casual_content
	{
		name = "Real Hide Casual Content";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Mark","A3_Characters_F_Kart","A3_Characters_F_Bootcamp","A3_Characters_F_Exp","A3_Characters_F_Orange","A3_Characters_F_Jets","A3_Data_F_Kart","A3_Soft_F_Kart","A3_Soft_F_Kart_Kart_01"};
	};
};
class CfgGlasses
{
	class None;
	class G_Goggles_VR: None
	{
		scope = 1;
	};
	class G_Lady_Blue: None
	{
		scope = 1;
	};
	class G_Spectacles: None
	{
		scope = 1;
	};
	class G_Spectacles_Tinted: None
	{
		scope = 1;
	};
	class G_Sport_Blackred: None
	{
		scope = 1;
	};
	class G_Sport_BlackWhite: None
	{
		scope = 1;
	};
	class G_Sport_Blackyellow: None
	{
		scope = 1;
	};
	class G_Sport_Checkered: None
	{
		scope = 1;
	};
	class G_Sport_Greenblack: None
	{
		scope = 1;
	};
	class G_Sport_Red: None
	{
		scope = 1;
	};
	class G_Squares: None
	{
		scope = 2;
	};
	class G_Squares_Tinted: None
	{
		scope = 1;
	};
	class G_Tactical_Black: None
	{
		scope = 2;
	};
};

class CfgVehicles
{
	class C_Kart_01_F_Base;
	class C_Kart_01_F: C_Kart_01_F_Base
	{
		scope = 2;
	};
	class C_Kart_01_Fuel_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class C_Kart_01_Blu_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class C_Kart_01_Red_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class C_Kart_01_Vrana_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class C_Kart_01_green_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class C_Kart_01_orange_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class C_Kart_01_white_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class C_Kart_01_yellow_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class C_Kart_01_black_F: C_Kart_01_F_Base
	{
		scope = 1;
	};
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_base_F;
	class B_RangeMaster_F;
	class C_Marshal_F: B_RangeMaster_F
	{
		scope = 2;
	};
	class B_Protagonist_VR_F: B_Soldier_base_F
	{
		scope = 1;
	};
	class O_Protagonist_VR_F: O_Soldier_base_F
	{
		scope = 1;
	};
	class I_Protagonist_VR_F: I_Soldier_base_F
	{
		scope = 1;
	};
	class B_Soldier_VR_F: B_Soldier_base_F
	{
		scope = 1;
	};
	class O_Soldier_VR_F: O_Soldier_base_F
	{
		scope = 1;
	};
	class I_Soldier_VR_F: I_Soldier_base_F
	{
		scope = 1;
	};
	class C_man_1;
	class C_Protagonist_VR_F: C_man_1
	{
		scope = 1;
	};
	class C_Soldier_VR_F: C_man_1
	{
		scope = 1;
	};
	class C_man_sport_1_F: C_man_1
	{
		scope = 2;
	};
	class C_man_sport_2_F: C_man_1
	{
		scope = 2;
	};
	class C_man_sport_3_F: C_man_1
	{
		scope = 2;
	};
	class C_Man_casual_1_F: C_man_1
	{
		scope = 2;
	};
	class C_Driver_1_F: C_man_1
	{
		scope = 2;
	};
	class C_Driver_2_F: C_Driver_1_F
	{
		scope = 1;
	};
	class C_Driver_3_F: C_Driver_1_F
	{
		scope = 1;
	};
	class C_Driver_4_F: C_Driver_1_F
	{
		scope = 1;
	};
	class C_Driver_1_random_base_F: C_Driver_1_F
	{
		scope = 1;
	};
	class C_Driver_1_black_F: C_Driver_1_random_base_F
	{
		scope = 1;
	};
	class C_Driver_1_blue_F: C_Driver_1_random_base_F
	{
		scope = 1;
	};
	class C_Driver_1_green_F: C_Driver_1_random_base_F
	{
		scope = 1;
	};
	class C_Driver_1_red_F: C_Driver_1_random_base_F
	{
		scope = 1;
	};
	class C_Driver_1_white_F: C_Driver_1_random_base_F
	{
		scope = 1;
	};
	class C_Driver_1_yellow_F: C_Driver_1_random_base_F
	{
		scope = 1;
	};
	class C_Driver_1_orange_F: C_Driver_1_random_base_F
	{
		scope = 1;
	};
	class Item_Base_F;
	class Item_U_C_Driver_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_3: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_4: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_1_black: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_1_blue: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_1_green: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_1_red: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_1_white: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_1_yellow: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Driver_1_orange: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_ConstructionCoverall_Black_F: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_ConstructionCoverall_Red_F: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_ConstructionCoverall_Vrana_F: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Poloshirt_burgundy: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Poloshirt_redwhite: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Poloshirt_salmon: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Poloshirt_stripped: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_C_Poloshirt_tricolour: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_Base_F;
	class Headgear_H_RacingHelmet_1_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_2_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_3_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_4_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_1_black_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_1_blue_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_1_green_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_1_red_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_1_white_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_1_yellow_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_RacingHelmet_1_orange_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Pistol_Base_F;
	class Weapon_hgun_Pistol_Signal_F: Pistol_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Bandanna_surfer: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
	};
	class Headgear_H_Bandanna_surfer_blk: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Bandanna_surfer_grn: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_StrawHat_dark: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Hat_brown: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Hat_camo: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Hat_grey: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Hat_checker: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Hat_tan: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Cap_blu: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_basic_black_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_basic_red_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_basic_vrana_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_basic_yellow_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_earprot_black_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_earprot_red_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_earprot_vrana_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_earprot_yellow_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_headset_black_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_headset_red_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_headset_vrana_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_Construction_headset_yellow_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_EarProtectors_orange_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_EarProtectors_red_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_EarProtectors_white_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_EarProtectors_yellow_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_HeadSet_orange_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_HeadSet_red_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_HeadSet_white_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Headgear_H_HeadSet_yellow_F: Headgear_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_B_Protagonist_VR: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_O_Protagonist_VR: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Item_U_I_Protagonist_VR: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class Vest_Base_F;
	class Vest_V_Safety_blue_F: Vest_Base_F
	{
		scope = 1;
		scopeCurator = 1;
	};
};

class CfgMagazines
{
	class 3Rnd_UGL_FlareGreen_F;
	class 6Rnd_GreenSignal_F: 3Rnd_UGL_FlareGreen_F
	{
		scope = 1;
		scopeCurator = 1;
	};
	class 6Rnd_RedSignal_F: 6Rnd_GreenSignal_F
	{
		scope = 1;
		scopeCurator = 1;
	};
};

class CfgWeapons
{
	class HelmetBase;
	class H_Bandanna_surfer: HelmetBase
	{
		scope = 2;
	};
	class H_Bandanna_surfer_blk: H_Bandanna_surfer
	{
		scope = 1;
	};
	class H_Bandanna_surfer_grn: H_Bandanna_surfer
	{
		scope = 1;
	};
	class H_StrawHat;
	class H_StrawHat_dark: H_StrawHat
	{
		scope = 1;
	};
	class H_Hat_blue;
	class H_Hat_brown: H_Hat_blue
	{
		scope = 1;
	};
	class H_Hat_camo: H_Hat_blue
	{
		scope = 1;
	};
	class H_Hat_grey: H_Hat_blue
	{
		scope = 1;
	};
	class H_Hat_checker: H_Hat_blue
	{
		scope = 1;
	};
	class H_Hat_tan: H_Hat_blue
	{
		scope = 1;
	};
	class H_Cap_red;
	class H_Cap_blu: H_Cap_red
	{
		scope = 1;
	};
	class H_Cap_blk_CMMG: H_Cap_red
	{
		scope = 1;
	};
	class H_Cap_grn_BI: H_Cap_red
	{
		scope = 1;
	};
	class H_Cap_blk_ION: H_Cap_red
	{
		scope = 1;
	};
	class H_Cap_surfer: H_Cap_red
	{
		scope = 1;
	};
	class H_Cap_headphones;
	class H_Cap_marshal: H_Cap_headphones
	{
		scope = 1;
	};
	class Uniform_Base;
	class U_C_Poloshirt_burgundy: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Poloshirt_stripped: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Poloshirt_tricolour: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Poloshirt_salmon: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Poloshirt_redwhite: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Poor_1: Uniform_Base
	{
		scope = 1;
	};
	class U_C_man_sport_1_F: Uniform_Base
	{
		scope = 1;
	};
	class U_C_man_sport_3_F: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Man_casual_2_F: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Man_casual_3_F: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Man_casual_5_F: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Man_casual_6_F: Uniform_Base
	{
		scope = 1;
	};
	class U_B_Protagonist_VR: Uniform_Base
	{
		scope = 1;
	};
	class U_O_Protagonist_VR: Uniform_Base
	{
		scope = 1;
	};
	class U_I_Protagonist_VR: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Protagonist_VR: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_1: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_2: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_3: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_4: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_1_black: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_1_blue: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_1_green: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_1_red: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_1_white: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_1_yellow: Uniform_Base
	{
		scope = 1;
	};
	class U_C_Driver_1_orange: Uniform_Base
	{
		scope = 1;
	};
	class U_C_ConstructionCoverall_Black_F: Uniform_Base
	{
		scope = 1;
	};
	class U_C_ConstructionCoverall_Red_F: Uniform_Base
	{
		scope = 1;
	};
	class U_C_ConstructionCoverall_Vrana_F: Uniform_Base
	{
		scope = 1;
	};
	class H_HelmetB_camo;
	class H_RacingHelmet_1_F: H_HelmetB_camo
	{
		scope = 2;
	};
	class H_RacingHelmet_2_F: H_RacingHelmet_1_F
	{
		scope = 1;
	};
	class H_RacingHelmet_3_F: H_RacingHelmet_1_F
	{
		scope = 1;
	};
	class H_RacingHelmet_4_F: H_RacingHelmet_1_F
	{
		scope = 1;
	};
	class H_RacingHelmet_1_black_F: H_RacingHelmet_1_F
	{
		scope = 1;
	};
	class H_RacingHelmet_1_blue_F: H_RacingHelmet_1_black_F
	{
		scope = 1;
	};
	class H_RacingHelmet_1_green_F: H_RacingHelmet_1_black_F
	{
		scope = 1;
	};
	class H_RacingHelmet_1_red_F: H_RacingHelmet_1_black_F
	{
		scope = 1;
	};
	class H_RacingHelmet_1_white_F: H_RacingHelmet_1_black_F
	{
		scope = 1;
	};
	class H_RacingHelmet_1_yellow_F: H_RacingHelmet_1_black_F
	{
		scope = 1;
	};
	class H_RacingHelmet_1_orange_F: H_RacingHelmet_1_black_F
	{
		scope = 1;
	};
	class H_EarProtectors_base_F;
	class H_EarProtectors_orange_F: H_EarProtectors_base_F
	{
		scope = 1;
	};
	class H_EarProtectors_red_F: H_EarProtectors_base_F
	{
		scope = 1;
	};
	class H_EarProtectors_white_F: H_EarProtectors_base_F
	{
		scope = 1;
	};
	class H_EarProtectors_yellow_F: H_EarProtectors_base_F
	{
		scope = 1;
	};
	class H_Construction_basic_base_F;
	class H_Construction_basic_black_F: H_Construction_basic_base_F
	{
		scope = 1;
	};
	class H_Construction_basic_red_F: H_Construction_basic_base_F
	{
		scope = 1;
	};
	class H_Construction_basic_vrana_F: H_Construction_basic_base_F
	{
		scope = 1;
	};
	class H_Construction_basic_yellow_F: H_Construction_basic_base_F
	{
		scope = 1;
	};
	class H_Construction_earprot_base_F;
	class H_Construction_earprot_black_F: H_Construction_earprot_base_F
	{
		scope = 1;
	};
	class H_Construction_earprot_red_F: H_Construction_earprot_base_F
	{
		scope = 1;
	};
	class H_Construction_earprot_vrana_F: H_Construction_earprot_base_F
	{
		scope = 1;
	};
	class H_Construction_earprot_yellow_F: H_Construction_earprot_base_F
	{
		scope = 1;
	};
	class H_Construction_headset_base_F;
	class H_Construction_headset_black_F: H_Construction_headset_base_F
	{
		scope = 1;
	};
	class H_Construction_headset_red_F: H_Construction_headset_base_F
	{
		scope = 1;
	};
	class H_Construction_headset_vrana_F: H_Construction_headset_base_F
	{
		scope = 1;
	};
	class H_Construction_headset_yellow_F: H_Construction_headset_base_F
	{
		scope = 1;
	};
	class H_HeadSet_base_F;
	class H_HeadSet_orange_F: H_HeadSet_base_F
	{
		scope = 1;
	};
	class H_HeadSet_red_F: H_HeadSet_base_F
	{
		scope = 1;
	};
	class H_HeadSet_white_F: H_HeadSet_base_F
	{
		scope = 1;
	};
	class H_HeadSet_yellow_F: H_HeadSet_base_F
	{
		scope = 1;
	};
	class Pistol_Base_F;
	class hgun_Pistol_Signal_F: Pistol_Base_F
	{
		scope = 1;
	};
	class V_Safety_base_F;
	class V_Safety_blue_F: V_Safety_base_F
	{
		scope = 1;
	};
};
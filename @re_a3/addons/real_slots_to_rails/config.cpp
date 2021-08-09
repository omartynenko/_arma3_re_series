#define _ARMA_

class CfgPatches
{
	class real_slots_to_rails
	{
		name = "Real Weapons Slots to Rails";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","A3_Weapons_F_Enoch"};
	};
};

class MuzzleSlot;
class MuzzleSlot_556;
class MuzzleSlot_65: MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_65_TI_blk_F = 1;
		muzzle_snds_65_TI_ghex_F = 1;
		muzzle_snds_65_TI_hex_F = 1;
	};
};
class MuzzleSlot_762;
//class MuzzleSlot_MG;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};
	class GM6_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};
	class srifle_GM6_F: GM6_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class LRR_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};
	class srifle_LRR_F: LRR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class LMG_Mk200_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			//class MuzzleSlot: MuzzleSlot_MG
			//{
			//	delete compatibleItems;
			//};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class LMG_Zafir_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			//class MuzzleSlot: MuzzleSlot_MG
			//{
			//	delete compatibleItems;
			//};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_556
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_Katiba_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_65
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_762
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_556
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_556
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_MSBS65_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_65
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_556
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_556
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_762
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class SMG_03_TR_BASE: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_762
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class DMR_02_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_762
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class DMR_04_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class DMR_05_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class DMR_06_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_762
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				delete compatibleItems;
			};
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class MuzzleSlot: MuzzleSlot_762
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class MMG_01_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
	class MMG_02_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				delete compatibleItems;
			};
			class PointerSlot: PointerSlot_Rail
			{
				delete compatibleItems;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				delete compatibleItems;
			};
		};
	};
};
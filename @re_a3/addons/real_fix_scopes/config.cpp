#define _ARMA_

class CfgPatches
{
	class real_fix_scopes
	{
		name = "Real Weapon Scopes Fix";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark","A3_Weapons_F_Exp","A3_Weapons_F_Enoch"};
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_Holosight : ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ACO
				{
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_Holosight_smg : ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ACO
				{
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_aco: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ACO
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_aco_grn: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ACO
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_aco_smg: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ACO
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_aco_grn_smg: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ACO
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_arco: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ARCO2collimator
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					visionMode[] = {};
					cameraDir = "";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 2;
				};
				class ARCO2scope: ARCO2collimator
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"Default"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_Hamr: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Hamr2Collimator
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					memoryPointCamera = "opticView";
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 2;
					
				};
				class Hamr2Scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"Default"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_Hamr_F: optic_Hamr{};
	class optic_DMS : ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 2;
				};
				class Iron: Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_SOS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 2;
				};
				class Iron
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class optic_MRCO: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class MRCOcq
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
				class MRCOscope
				{
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 2;
				};
			};
		};
	};
	class optic_NVS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NVS
				{
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
					discreteDistanceInitIndex = 2;
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
};
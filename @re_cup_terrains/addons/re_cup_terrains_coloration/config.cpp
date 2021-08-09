#define _ARMA_

class CfgPatches
{
	class re_cup_terrains_coloration
	{
		name = "RE: CUP Terrains Coloration";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"CUP_Worlds_Water","CUP_Desert_Lighting","Chernarus","CUP_Chernarus_Config","Utes","CUP_Utes_Config","Chernarus_Summer","CUP_Chernarus_Summer_Config","CUP_Chernarus_Winter","CUP_Chernarus_Winter_Config","Sara","CUP_Sara_Config","SaraLite","CUP_Saralite_Config","Sara_dbe1","CUP_Sara_dbe1_Config","Porto","CUP_Desert2_Config","Takistan","CUP_Takistan_Config","Shapur_BAF","CUP_Shapur_baf_Config","zargabad","CUP_Zargabad_Config","ProvingGrounds_PMC","CUP_Provinggrounds_pmc_Config","Desert","CUP_Desert_Config","Desert_E","CUP_Desert_e_Config","Mountains_ACR","CUP_Afghan_Config","Woodland_ACR","CUP_Bohemia_Config","Bootcamp_ACR","CUP_Bootcamp_acr_Config"};
	};
};

class Cfg3DEN
{
	class EventHandlers
	{
		class real_color_correction
		{
			OnTerrainNew = "[] execVM '\re_cup_terrains_coloration\color_correction.sqf'";
			OnMissionPreviewEnd = "[] execVM '\re_cup_terrains_coloration\color_correction.sqf'";
			OnMissionLoad = "[] execVM '\re_cup_terrains_coloration\color_correction.sqf'";
		};
	};
};
class CfgFunctions
{
	class real
	{
		class color_correction
		{
			class colorize
			{
				postInit = 1;
				file = "\re_cup_terrains_coloration\color_correction.sqf";
				description = "runs post-process effect depending on the terrain";
			};
		};
	};
};

class CfgSurfaces
{
	class Default;
	class Grass: Default
	{
		character = "GrassClutterFix";
	};
};

class CfgSurfaceCharacters
{
	class SparseWeedsClutter
	{
		probability[] = {0.3,0.02,0.01,0.01};
		names[] = {"StubbleClutter","FlowersWhite","WeedDead","WeedDeadSmall"};
	};
	class CRSSparseWeedsClutter
	{
		probability[] = {0.3,0.02,0.01,0.01};
		names[] = {"StubbleClutter","FlowersWhite","WeedDead","WeedDeadSmall"};
	};
};

class CfgWorlds
{
	class DefaultWorld
	{
		class DefaultClutter;
		class Grid;
		class Weather;
	};
	class CAWorld: DefaultWorld
	{
		class WaterExPars;
		class HDRNewPars;
		class Lighting;
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class Weather: Weather
		{
			class RainConfig;
			class RainbowConfig;
			class LightningsConfig;
			class ThunderboltNorm;
			class ThunderboltHeavy;
			class Lighting;
		};
	};
	class Sara: CAWorld
	{
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "5.0f";
		clutterColoringFarSpeed = "2.0f";
		clutterColoringFarStart = "0.0f";
		terrainBlendMaxDarkenCoef = "1.0f";
		terrainBlendMaxBrightenCoef = "1.0f";
		clutterGrid = 0.9;
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.09;
			fogColor[] = {0,0.07,0.07};
			fogColorExtinctionSpeed[] = {0,0.07,0.07};
		};
	};
	class Saralite: CAWorld
	{
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "5.0f";
		clutterColoringFarSpeed = "2.0f";
		clutterColoringFarStart = "20.0f";
		terrainBlendMaxDarkenCoef = "1.0f";
		terrainBlendMaxBrightenCoef = "0.3f";
		clutterGrid = 0.9;
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.09;
			fogColor[] = {0,0.07,0.07};
			fogColorExtinctionSpeed[] = {0,0.07,0.07};
		};
	};
	class Sara_dbe1: CAWorld
	{
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "5.0f";
		clutterColoringFarSpeed = "2.0f";
		clutterColoringFarStart = "0.0f";
		terrainBlendMaxDarkenCoef = "1.0f";
		terrainBlendMaxBrightenCoef = "1.0f";
		clutterGrid = 0.9;
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.09;
			fogColor[] = {0,0.07,0.07};
			fogColorExtinctionSpeed[] = {0,0.07,0.07};
		};
	};
	class Intro: CAWorld
	{
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "5.0f";
		clutterColoringFarSpeed = "2.0f";
		clutterColoringFarStart = "20.0f";
		terrainBlendMaxDarkenCoef = "1.0f";
		terrainBlendMaxBrightenCoef = "0.3f";
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.09;
			fogColor[] = {0,0.07,0.07};
			fogColorExtinctionSpeed[] = {0,0.07,0.07};
		};
	};
	class Porto: CAWorld
	{
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "20.0f";
		clutterColoringFarSpeed = "4.0f";
		clutterColoringFarStart = "0.0f";
		terrainBlendMaxDarkenCoef = "1.0f";
		terrainBlendMaxBrightenCoef = "0.0f";
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.09;
			fogColor[] = {0,0.07,0.07};
			fogColorExtinctionSpeed[] = {0,0.07,0.07};
		};
	};
	class Desert_E: CAWorld
	{
		class HDRNewPars
		{
			minAperture = 0.00001;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1.0;
			bloomScale = 0.3;
			bloomExponent = 1.0;
			bloomLuminanceOffset = 0.8;
			bloomLuminanceScale = 1;
			bloomLuminanceExponent = 1.2;
			tonemapMethod = 2;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.30;
			tonemapLinearAngle = 0.10;
			tonemapToeStrength = 0.20;
			tonemapToeNumerator = 0.01;
			tonemapToeDenominator = 0.30;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 2.0;
			tonemapLinearWhiteReinhard = 2.5;
			nvgApertureMin = 1;
			nvgApertureStandard = 7;
			nvgApertureMax = 15;
			nvgStandardAvgLum = 3;
			nvgLightGain = 100;
			nvgTransition = 1;
			nvgTransitionCoefOn = 40.0;
			nvgTransitionCoefOff = 0.01;
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
			eyeAdaptFactorLight = 0.6;
			eyeAdaptFactorDark = 0.2;
		};
	};
	class Takistan: CAWorld
	{
		terrainBlendMaxDarkenCoef = "0.7f";
		terrainBlendMaxBrightenCoef = "0.0f";
		class HDRNewPars
		{
			minAperture = 0.00001;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1.0;
			bloomScale = 0.3;
			bloomExponent = 1.0;
			bloomLuminanceOffset = 0.8;
			bloomLuminanceScale = 1;
			bloomLuminanceExponent = 1.2;
			tonemapMethod = 2;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.30;
			tonemapLinearAngle = 0.10;
			tonemapToeStrength = 0.20;
			tonemapToeNumerator = 0.01;
			tonemapToeDenominator = 0.30;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1.0;
			tonemapLinearWhiteReinhard = 2.0;
			nvgApertureMin = 1;
			nvgApertureStandard = 7;
			nvgApertureMax = 15;
			nvgStandardAvgLum = 3;
			nvgLightGain = 100;
			nvgTransition = 1;
			nvgTransitionCoefOn = 40.0;
			nvgTransitionCoefOff = 0.01;
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
			eyeAdaptFactorLight = 0.6;
			eyeAdaptFactorDark = 0.2;
		};
	};
	class Mountains_ACR: CAWorld
	{
		terrainBlendMaxDarkenCoef = "0.7f";
		terrainBlendMaxBrightenCoef = "0.0f";
		class HDRNewPars
		{
			minAperture = 0.00001;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1.0;
			bloomScale = 0.3;
			bloomExponent = 1.0;
			bloomLuminanceOffset = 0.8;
			bloomLuminanceScale = 1;
			bloomLuminanceExponent = 1.2;
			tonemapMethod = 2;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.30;
			tonemapLinearAngle = 0.10;
			tonemapToeStrength = 0.20;
			tonemapToeNumerator = 0.01;
			tonemapToeDenominator = 0.30;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1.0;
			tonemapLinearWhiteReinhard = 2.0;
			nvgApertureMin = 1;
			nvgApertureStandard = 7;
			nvgApertureMax = 15;
			nvgStandardAvgLum = 3;
			nvgLightGain = 100;
			nvgTransition = 1;
			nvgTransitionCoefOn = 40.0;
			nvgTransitionCoefOff = 0.01;
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
			eyeAdaptFactorLight = 0.6;
			eyeAdaptFactorDark = 0.2;
		};
	};
	class Zargabad: CAWorld
	{
		terrainBlendMaxDarkenCoef = "0.2f";
		terrainBlendMaxBrightenCoef = "1.0f";
		class HDRNewPars
		{
			minAperture = 0.00001;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1.0;
			bloomScale = 0.3;
			bloomExponent = 1.0;
			bloomLuminanceOffset = 0.8;
			bloomLuminanceScale = 1;
			bloomLuminanceExponent = 1.2;
			tonemapMethod = 2;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.30;
			tonemapLinearAngle = 0.10;
			tonemapToeStrength = 0.20;
			tonemapToeNumerator = 0.01;
			tonemapToeDenominator = 0.30;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1.0;
			tonemapLinearWhiteReinhard = 2.0;
			nvgApertureMin = 1;
			nvgApertureStandard = 7;
			nvgApertureMax = 15;
			nvgStandardAvgLum = 3;
			nvgLightGain = 100;
			nvgTransition = 1;
			nvgTransitionCoefOn = 40.0;
			nvgTransitionCoefOff = 0.01;
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
			eyeAdaptFactorLight = 0.6;
			eyeAdaptFactorDark = 0.2;
		};
	};
	class Shapur_BAF: CAWorld
	{
		terrainBlendMaxDarkenCoef = "1.0f";
		terrainBlendMaxBrightenCoef = "0.15f";
		class HDRNewPars
		{
			minAperture = 0.00001;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1.0;
			bloomScale = 0.3;
			bloomExponent = 1.0;
			bloomLuminanceOffset = 0.8;
			bloomLuminanceScale = 1;
			bloomLuminanceExponent = 1.2;
			tonemapMethod = 2;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.30;
			tonemapLinearAngle = 0.10;
			tonemapToeStrength = 0.20;
			tonemapToeNumerator = 0.01;
			tonemapToeDenominator = 0.30;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1.0;
			tonemapLinearWhiteReinhard = 2.0;
			nvgApertureMin = 1;
			nvgApertureStandard = 7;
			nvgApertureMax = 15;
			nvgStandardAvgLum = 3;
			nvgLightGain = 100;
			nvgTransition = 1;
			nvgTransitionCoefOn = 40.0;
			nvgTransitionCoefOff = 0.01;
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
			eyeAdaptFactorLight = 0.6;
			eyeAdaptFactorDark = 0.2;
		};
	};
	class ProvingGrounds_PMC: CAWorld
	{
		terrainBlendMaxDarkenCoef = "1.0f";
		terrainBlendMaxBrightenCoef = "1.0f";
		latitude = -41.5;
		longitude = 60.5;
		class HDRNewPars
		{
			minAperture = 0.00001;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1.0;
			bloomScale = 0.3;
			bloomExponent = 1.0;
			bloomLuminanceOffset = 0.8;
			bloomLuminanceScale = 1;
			bloomLuminanceExponent = 1.2;
			tonemapMethod = 2;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.30;
			tonemapLinearAngle = 0.10;
			tonemapToeStrength = 0.20;
			tonemapToeNumerator = 0.01;
			tonemapToeDenominator = 0.30;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1.0;
			tonemapLinearWhiteReinhard = 1.0;
			nvgApertureMin = 1;
			nvgApertureStandard = 7;
			nvgApertureMax = 15;
			nvgStandardAvgLum = 3;
			nvgLightGain = 100;
			nvgTransition = 1;
			nvgTransitionCoefOn = 40.0;
			nvgTransitionCoefOff = 0.01;
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
			eyeAdaptFactorLight = 0.6;
			eyeAdaptFactorDark = 0.2;
		};
	};
	class Chernarus: CAWorld
	{
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "4.0f";
		clutterColoringFarSpeed = "2.0f";
		clutterColoringFarStart = "0.0f";
		terrainBlendMaxDarkenCoef = "0.0f";
		terrainBlendMaxBrightenCoef = "1.0f";
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.2;
			fogColor[] = {0.01,0.03,0.03};
			surfaceOpacity = 0.6;
		};
	};
	class utes: CAWorld
	{
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "4.0f";
		clutterColoringFarSpeed = "2.0f";
		clutterColoringFarStart = "0.0f";
		terrainBlendMaxDarkenCoef = "0.0f";
		terrainBlendMaxBrightenCoef = "1.0f";
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.2;
			fogColor[] = {0.01,0.03,0.03};
			surfaceOpacity = 0.6;
		};
	};
	class Chernarus_Summer: CAWorld
	{
		startDate = "9/5/2008";
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "4.0f";
		clutterColoringFarSpeed = "2.0f";
		clutterColoringFarStart = "0.0f";
		terrainBlendMaxDarkenCoef = "0.0f";
		terrainBlendMaxBrightenCoef = "1.0f";
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.2;
			fogColor[] = {0.01,0.03,0.03};
			surfaceOpacity = 0.6;
		};
	};
	class Chernarus_Winter: CAWorld
	{
		startDate = "10/12/2008";
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "2.0f";
		clutterColoringFarSpeed = "1.0f";
		clutterColoringFarStart = "20.0f";
		terrainBlendMaxDarkenCoef = "0.0f";
		terrainBlendMaxBrightenCoef = "0.0f";
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.17;
			fogColor[] = {0.01,0.03,0.04};
			surfaceOpacity = 0.6;
			fogColorExtinctionSpeed[] = {0.12,0.015,0.013};
		};
		class HDRNewPars
		{
			minAperture = 1e-005;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1;
			bloomScale = 0.09;
			bloomExponent = 0.75;
			bloomLuminanceOffset = 0.4;
			bloomLuminanceScale = 0.15;
			bloomLuminanceExponent = 0.25;
			tonemapMethod = 1;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.12;
			tonemapLinearAngle = 0.1;
			tonemapToeStrength = 0.2;
			tonemapToeNumerator = 0.022;
			tonemapToeDenominator = 0.2;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1;
			tonemapLinearWhiteReinhard = "2.5f";
			eyeAdaptFactorLight = 3.3;
			eyeAdaptFactorDark = 0.75;
			nvgApertureMin = 10;
			nvgApertureStandard = 12.5;
			nvgApertureMax = 16.5;
			nvgStandardAvgLum = 10;
			nvgLightGain = 320;
			nvgTransition = 1;
			nvgTransitionCoefOn = "40.0f";
			nvgTransitionCoefOff = "0.01f";
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
		};
		class Lighting: Lighting
		{
			groundReflection[] = {0.06,0.06,0.03};
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{0.05,0.05,0.06},{0.001,0.001,0.002},{0.02,0.02,0.05},{0.003,0.003,0.003},{0.0001,0.0001,0.0002},{0.0001,0.0001,0.0002},0};
			fullNight[] = {-5,{0.05,0.05,0.05},{0.02,0.02,0.02},{0.04,0.04,0.04},{0.04,0.04,0.04},{0.01,0.01,0.02},{0.08,0.06,0.06},0};
			sunMoon[] = {-3.75,{0.045,0.04,0.04},{0.04,0.04,0.04},{0.045,0.04,0.04},{0.04,0.04,0.04},{0.04,0.035,0.04},{0.1,0.08,0.09},0.5};
			earlySun[] = {-2.5,{0.12,0.1,0.1},{0.08,0.06,0.07},{0.12,0.1,0.1},{0.08,0.06,0.07},{0.08,0.07,0.08},{0.1,0.1,0.12},1};
			sunrise[] = {0,{{0.7,0.45,0.45},"5.16+(-4)"},{{0.07,0.09,0.12},"4.0+(-4)"},{{0.6,0.47,0.25},"4.66+(-4)"},{{0.1,0.09,0.1},"4.3+(-4)"},{{0.5,0.4,0.4},"6.49+(-4)"},{{0.88,0.51,0.24},"8.39+(-4)"},1};
			earlyMorning[] = {3,{{0.65,0.55,0.55},"6.04+(-4)"},{{0.08,0.09,0.11},"4.5+(-4)"},{{0.55,0.47,0.25},"5.54+(-4)"},{{0.1,0.09,0.1},"5.02+(-4)"},{{0.5,0.4,0.4},"7.05+(-4)"},{{0.88,0.51,0.24},"8.88+(-4)"},1};
			midMorning[] = {8,{{0.98,0.85,0.8},"8.37+(-4)"},{{0.08,0.09,0.11},"6.42+(-4)"},{{0.87,0.47,0.25},"7.87+(-4)"},{{0.09,0.09,0.1},"6.89+(-4)"},{{0.5,0.4,0.4},"8.9+(-4)"},{{0.88,0.51,0.24},"10.88+(-4)"},1};
			morning[] = {16,{{1,1,0.9},"13.17+(-4)"},{{0.17,0.18,0.19},"10.26+(-4)"},{{1,1,0.9},"12.67+(-4)"},{{0.17,0.18,0.19},"11.71+(-4)"},{{0.15,0.15,0.15},"12.42+(-4)"},{{0.17,0.17,0.15},"14.42+(-4)"},1};
			noon[] = {45,{{1,1,1},"17+(-4)"},{{1,1.3,1.55},"13.5+(-4)"},{{1,1,1},"15+(-4)"},{{0.36,0.37,0.38},"13.5+(-4)"},{{1,1,1},"16+(-4)"},{{1.0,1.0,1},"17+(-4)"},1};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{0.0034,0.0034,0.004},{0.003,0.003,0.003},{0.0034,0.0034,0.004},{0.003,0.003,0.003},{0.001,0.001,0.002},{0.001,0.001,0.002},0};
			fullNight[] = {-5,{0.023,0.023,0.023},{0.02,0.02,0.02},{0.023,0.023,0.023},{0.02,0.02,0.02},{0.01,0.01,0.02},{0.08,0.06,0.06},0};
			sunMoon[] = {-3.75,{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.035,0.04},{0.11,0.08,0.09},0.5};
			earlySun[] = {-2.5,{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.08,0.07,0.08},{0.14,0.1,0.12},0.5};
			earlyMorning[] = {0,{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+4"},{{1,1,1},"(-4)+5.5"},1};
			morning[] = {5,{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+7"},{{1,1,1},"(-4)+8"},1};
			lateMorning[] = {25,{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+12"},{{1,1,1},"(-4)+12.75"},1};
			noon[] = {70,{{1,1,1},"(-4)+12.5"},{{1,1,1},"(-4)+11"},{{1,1,1},"(-4)+12"},{{1,1,1},"(-4)+11"},{{1,1,1},"(-4)+13.5"},{{1,1,1},"(-4)+14"},1};
		};
		class Weather: Weather
		{
			class RainbowConfig : RainbowConfig
			{
				intensityCoef = 0;
				maxCloudiness = 0;
			};
			class LightningsConfig : LightningsConfig
			{
				maxProbability = 0;
				maxCount = 0;
			};
			class ThunderboltNorm : ThunderboltNorm
			{
				model = "\A3\data_f\raindrop.p3d";
				soundNear[] = {"",0,0};
				soundFar[] = {"",0,0};
			};
			class ThunderboltHeavy : ThunderboltNorm
			{
				model = "\A3\data_f\raindrop.p3d";
				soundNear[] = {"",0,0};
				soundFar[] = {"",0,0};
			};
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0;
				};
				class Rainy: DayLightingRainy
				{
					overcast = 1.0;
				};
			};
			class LightingNew
			{
				class Lighting0
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.14,0.19,0.3},4};
					diffuseCloud[] = {{0.14,0.19,0.3},0.2};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},0.05};
					ambientMid[] = {{0.1384,0.1912,0.2984},0.88};
					ambientMidCloud[] = {{0.1384,0.1912,0.2984},0.044};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.04224};
					bidirect[] = {0.025,0.025,0.023};
					bidirectCloud[] = {0.0125,0.0125,0.0115};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.65,1},11.016};
					swBrightness = 1;
				};
				class Lighting1
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting2
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting3
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting4
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.16,0.18,0.28},3};
					diffuseCloud[] = {{0.16,0.18,0.28},3};
					ambient[] = {{0.173,0.239,0.373},4.6};
					ambientCloud[] = {{0.173,0.239,0.373},4.6};
					ambientMid[] = {{0.173,0.239,0.373},4.048};
					ambientMidCloud[] = {{0.173,0.239,0.373},4.048};
					groundReflection[] = {{0.173,0.239,0.373},3.88608};
					groundReflectionCloud[] = {{0.173,0.239,0.373},3.88608};
					bidirect[] = {0.0115,0.012,0.0125};
					bidirectCloud[] = {0.0115,0.012,0.0125};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting5
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.25,0.21,0.2},5};
					diffuseCloud[] = {{0.25,0.21,0.2},5};
					ambient[] = {{0.196,0.275,0.42},6.9};
					ambientCloud[] = {{0.196,0.275,0.42},6.9};
					ambientMid[] = {{0.196,0.275,0.42},6.072};
					ambientMidCloud[] = {{0.196,0.275,0.42},6.072};
					groundReflection[] = {{0.196,0.275,0.42},5.82912};
					groundReflectionCloud[] = {{0.196,0.275,0.42},5.82912};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting6
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.75,0.38,0.22},6};
					diffuseCloud[] = {{0.75,0.38,0.22},6};
					ambient[] = {{0.2497,0.31,0.467},7.8};
					ambientCloud[] = {{0.2497,0.31,0.467},7.8};
					ambientMid[] = {{0.2541,0.314,0.467},6.864};
					ambientMidCloud[] = {{0.2541,0.314,0.467},6.864};
					groundReflection[] = {{0.235,0.318,0.467},6.58944};
					groundReflectionCloud[] = {{0.235,0.318,0.467},6.58944};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 8;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting7
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.42,0.22},8.4};
					diffuseCloud[] = {{0.95,0.42,0.22},8.4};
					ambient[] = {{0.306,0.357,0.463},8.4};
					ambientCloud[] = {{0.306,0.357,0.463},8.4};
					ambientMid[] = {{0.365,0.361,0.396},7.392};
					ambientMidCloud[] = {{0.365,0.361,0.396},7.392};
					groundReflection[] = {{0.416,0.38,0.388},7.09632};
					groundReflectionCloud[] = {{0.416,0.38,0.388},7.09632};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.125,0.192,0.329},8.61};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting8
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.55,0.35},10.2};
					diffuseCloud[] = {{0.95,0.55,0.35},10.2};
					ambient[] = {{0.337,0.404,0.525},9.6};
					ambientCloud[] = {{0.337,0.404,0.525},9.6};
					ambientMid[] = {{0.412,0.408,0.443},8.448};
					ambientMidCloud[] = {{0.412,0.408,0.443},8.448};
					groundReflection[] = {{0.475,0.435,0.431},8.11008};
					groundReflectionCloud[] = {{0.475,0.435,0.431},8.11008};
					bidirect[] = {0.01375,0.0132,0.01265};
					bidirectCloud[] = {0.01375,0.0132,0.01265};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.133,0.204,0.357},9.84};
					apertureMin = 8;
					apertureStandard = 16;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting9
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1,0.65,0.45},12.3};
					diffuseCloud[] = {{1,0.65,0.45},12.3};
					ambient[] = {{0.388,0.471,0.612},10.9};
					ambientCloud[] = {{0.388,0.471,0.612},10.9};
					ambientMid[] = {{0.482,0.475,0.506},9.81};
					ambientMidCloud[] = {{0.482,0.475,0.506},9.81};
					groundReflection[] = {{0.557,0.51,0.494},9.4176};
					groundReflectionCloud[] = {{0.557,0.51,0.494},9.4176};
					bidirect[] = {0.01875,0.018,0.01725};
					bidirectCloud[] = {0.01875,0.018,0.01725};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.145,0.224,0.396},11.1725};
					apertureMin = 20;
					apertureStandard = 25;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting10
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.62},15.8};
					diffuseCloud[] = {{1,0.75,0.62},15.8};
					ambient[] = {{0.435,0.533,0.698},13.8};
					ambientCloud[] = {{0.435,0.533,0.698},13.8};
					ambientMid[] = {{0.545,0.541,0.569},12.696};
					ambientMidCloud[] = {{0.545,0.541,0.569},12.696};
					groundReflection[] = {{0.635,0.58,0.557},12.18816};
					groundReflectionCloud[] = {{0.635,0.58,0.557},12.18816};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.15,0.251,0.488},14.145};
					apertureMin = 45;
					apertureStandard = 60;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting11
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17.2};
					diffuseCloud[] = {{1,0.87,0.85},17.2};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting12
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17.2};
					diffuseCloud[] = {{1,0.87,0.85},17.2};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting13
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.14,0.19,0.3},4};
					diffuseCloud[] = {{0.14,0.19,0.3},3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.1384,0.1912,0.2984},0.88};
					ambientMidCloud[] = {{0.1384,0.1912,0.2984},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0.025,0.025,0.023};
					bidirectCloud[] = {0.0245,0.0245,0.02254};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.65,1},11.016};
					swBrightness = 1;
				};
				class Lighting14
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting15
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting16
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting17
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.16,0.18,0.28},2.25};
					diffuseCloud[] = {{0.16,0.18,0.28},1.6875};
					ambient[] = {{0.173,0.239,0.373},4.6};
					ambientCloud[] = {{0.173,0.239,0.373},4.6};
					ambientMid[] = {{0.173,0.239,0.373},4.048};
					ambientMidCloud[] = {{0.173,0.239,0.373},4.048};
					groundReflection[] = {{0.173,0.239,0.373},3.88608};
					groundReflectionCloud[] = {{0.173,0.239,0.373},3.88608};
					bidirect[] = {0.0115,0.012,0.0125};
					bidirectCloud[] = {0.01127,0.01176,0.01225};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting18
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.25,0.21,0.2},3.75};
					diffuseCloud[] = {{0.25,0.21,0.2},2.8125};
					ambient[] = {{0.196,0.275,0.42},6.9};
					ambientCloud[] = {{0.196,0.275,0.42},6.9};
					ambientMid[] = {{0.196,0.275,0.42},6.072};
					ambientMidCloud[] = {{0.196,0.275,0.42},6.072};
					groundReflection[] = {{0.196,0.275,0.42},5.82912};
					groundReflectionCloud[] = {{0.196,0.275,0.42},5.82912};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting19
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.75,0.38,0.22},4.5};
					diffuseCloud[] = {{0.75,0.38,0.22},3.375};
					ambient[] = {{0.2497,0.31,0.467},7.8};
					ambientCloud[] = {{0.2497,0.31,0.467},7.8};
					ambientMid[] = {{0.2541,0.314,0.467},6.864};
					ambientMidCloud[] = {{0.2541,0.314,0.467},6.864};
					groundReflection[] = {{0.235,0.318,0.467},6.58944};
					groundReflectionCloud[] = {{0.235,0.318,0.467},6.58944};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 8;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting20
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.42,0.22},6.72};
					diffuseCloud[] = {{0.95,0.42,0.22},5.04};
					ambient[] = {{0.306,0.357,0.463},8.4};
					ambientCloud[] = {{0.306,0.357,0.463},8.4};
					ambientMid[] = {{0.365,0.361,0.396},7.392};
					ambientMidCloud[] = {{0.365,0.361,0.396},7.392};
					groundReflection[] = {{0.416,0.38,0.388},7.09632};
					groundReflectionCloud[] = {{0.416,0.38,0.388},7.09632};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.125,0.192,0.329},8.61};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting21
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.55,0.35},10.2};
					diffuseCloud[] = {{0.95,0.55,0.35},7.65};
					ambient[] = {{0.337,0.404,0.525},9.6};
					ambientCloud[] = {{0.337,0.404,0.525},9.6};
					ambientMid[] = {{0.412,0.408,0.443},8.448};
					ambientMidCloud[] = {{0.412,0.408,0.443},8.448};
					groundReflection[] = {{0.475,0.435,0.431},8.11008};
					groundReflectionCloud[] = {{0.475,0.435,0.431},8.11008};
					bidirect[] = {0.01375,0.0132,0.01265};
					bidirectCloud[] = {0.01375,0.0132,0.01265};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.133,0.204,0.357},9.84};
					apertureMin = 8;
					apertureStandard = 16;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting22
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1,0.65,0.45},12.3};
					diffuseCloud[] = {{1,0.65,0.45},9.225};
					ambient[] = {{0.388,0.471,0.612},10.9};
					ambientCloud[] = {{0.388,0.471,0.612},10.9};
					ambientMid[] = {{0.482,0.475,0.506},9.81};
					ambientMidCloud[] = {{0.482,0.475,0.506},9.81};
					groundReflection[] = {{0.557,0.51,0.494},9.4176};
					groundReflectionCloud[] = {{0.557,0.51,0.494},9.4176};
					bidirect[] = {0.01875,0.018,0.01725};
					bidirectCloud[] = {0.01875,0.018,0.01725};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.145,0.224,0.396},11.1725};
					apertureMin = 20;
					apertureStandard = 25;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting23
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.62},15.8};
					diffuseCloud[] = {{1,0.75,0.62},11.85};
					ambient[] = {{0.435,0.533,0.698},13.8};
					ambientCloud[] = {{0.435,0.533,0.698},13.8};
					ambientMid[] = {{0.545,0.541,0.569},12.696};
					ambientMidCloud[] = {{0.545,0.541,0.569},12.696};
					groundReflection[] = {{0.635,0.58,0.557},12.18816};
					groundReflectionCloud[] = {{0.635,0.58,0.557},12.18816};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.15,0.251,0.488},14.145};
					apertureMin = 45;
					apertureStandard = 60;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting24
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17};
					diffuseCloud[] = {{1,0.87,0.85},12.75};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},13.616};
					ambientMidCloud[] = {{0.635,0.635,0.663},13.616};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},13.9564};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting25
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17};
					diffuseCloud[] = {{1,0.87,0.85},13.94};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting26
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.09,0.137,0.22},1};
					diffuseCloud[] = {{0,0,0},0.75};
					ambient[] = {{0.09,0.137,0.22},1};
					ambientCloud[] = {{0.09,0.137,0.22},1};
					ambientMid[] = {{0.09,0.137,0.22},0.8624};
					ambientMidCloud[] = {{0.09,0.137,0.22},0.8624};
					groundReflection[] = {{0.09,0.137,0.22},0.758912};
					groundReflectionCloud[] = {{0.09,0.137,0.22},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.09,0.137,0.22};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting27
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.16954,0.239,0.37673};
					diffuseCloud[] = {0.042385,0.05975,0.094183};
					ambient[] = {{0.16954,0.239,0.37673},1};
					ambientCloud[] = {{0.16954,0.239,0.37673},1};
					ambientMid[] = {{0.173,0.239,0.373},0.8624};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.8624};
					groundReflection[] = {{0.14705,0.20315,0.31705},0.758912};
					groundReflectionCloud[] = {{0.14705,0.20315,0.31705},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting28
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.129,0.18,0.271};
					diffuseCloud[] = {0.03225,0.045,0.06775};
					ambient[] = {{0.129,0.18,0.271},1};
					ambientCloud[] = {{0.129,0.18,0.271},1};
					ambientMid[] = {{0.129,0.184,0.267},0.8624};
					ambientMidCloud[] = {{0.129,0.184,0.267},0.8624};
					groundReflection[] = {{0.125,0.176,0.263},0.758912};
					groundReflectionCloud[] = {{0.125,0.176,0.263},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting29
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.129,0.18,0.271};
					diffuseCloud[] = {0.03225,0.045,0.06775};
					ambient[] = {{0.129,0.18,0.271},1};
					ambientCloud[] = {{0.129,0.18,0.271},1};
					ambientMid[] = {{0.129,0.184,0.267},0.8624};
					ambientMidCloud[] = {{0.129,0.184,0.267},0.8624};
					groundReflection[] = {{0.125,0.176,0.263},0.758912};
					groundReflectionCloud[] = {{0.125,0.176,0.263},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting30
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.157,0.212,0.306},0.5625};
					diffuseCloud[] = {{0.03925,0.053,0.0765},0.39375};
					ambient[] = {{0.157,0.212,0.306},3.22};
					ambientCloud[] = {{0.157,0.212,0.306},3.22};
					ambientMid[] = {{0.157,0.208,0.298},3.96704};
					ambientMidCloud[] = {{0.157,0.208,0.298},3.96704};
					groundReflection[] = {{0.149,0.204,0.29},3.649677};
					groundReflectionCloud[] = {{0.149,0.204,0.29},3.649677};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.141,0.192,0.282},3.96704};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting31
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.184,0.247,0.341},0.9375};
					diffuseCloud[] = {{0.046,0.06175,0.08525},0.65625};
					ambient[] = {{0.184,0.247,0.341},6.9};
					ambientCloud[] = {{0.184,0.247,0.341},6.9};
					ambientMid[] = {{0.184,0.243,0.329},5.95056};
					ambientMidCloud[] = {{0.184,0.243,0.329},5.95056};
					groundReflection[] = {{0.176,0.231,0.322},5.593526};
					groundReflectionCloud[] = {{0.176,0.231,0.322},5.593526};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.165,0.22,0.31},5.95056};
					apertureMin = 7;
					apertureStandard = 7;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting32
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.216,0.286,0.384},1.125};
					diffuseCloud[] = {{0.054,0.0715,0.096},0.7875};
					ambient[] = {{0.216,0.286,0.384},7.8};
					ambientCloud[] = {{0.216,0.286,0.384},7.8};
					ambientMid[] = {{0.22,0.278,0.365},6.72672};
					ambientMidCloud[] = {{0.22,0.278,0.365},6.72672};
					groundReflection[] = {{0.204,0.267,0.353},6.457651};
					groundReflectionCloud[] = {{0.204,0.267,0.353},6.457651};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.188,0.247,0.341},6.72672};
					apertureMin = 8;
					apertureStandard = 8;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting33
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.255,0.325,0.42},1.68};
					diffuseCloud[] = {{0.06375,0.08125,0.105},1.176};
					ambient[] = {{0.255,0.325,0.42},8.4};
					ambientCloud[] = {{0.255,0.325,0.42},8.4};
					ambientMid[] = {{0.259,0.314,0.396},7.24416};
					ambientMidCloud[] = {{0.259,0.314,0.396},7.24416};
					groundReflection[] = {{0.239,0.294,0.376},7.099277};
					groundReflectionCloud[] = {{0.239,0.294,0.376},7.099277};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.216,0.275,0.373},7.24416};
					apertureMin = 8;
					apertureStandard = 8;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting34
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.298,0.365,0.451},2.55};
					diffuseCloud[] = {{0.0745,0.09125,0.11275},1.785};
					ambient[] = {{0.298,0.365,0.451},9.6};
					ambientCloud[] = {{0.298,0.365,0.451},9.6};
					ambientMid[] = {{0.302,0.349,0.416},8.27904};
					ambientMidCloud[] = {{0.302,0.349,0.416},8.27904};
					groundReflection[] = {{0.275,0.318,0.384},8.11346};
					groundReflectionCloud[] = {{0.275,0.318,0.384},8.11346};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.243,0.306,0.408},8.27904};
					apertureMin = 8;
					apertureStandard = 14;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting35
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{0.376,0.431,0.506},3.075};
					diffuseCloud[] = {{0.094,0.10775,0.1265},2.1525};
					ambient[] = {{0.376,0.431,0.506},10.9};
					ambientCloud[] = {{0.376,0.431,0.506},10.9};
					ambientMid[] = {{0.38,0.408,0.447},9.6138};
					ambientMidCloud[] = {{0.38,0.408,0.447},9.6138};
					groundReflection[] = {{0.329,0.361,0.396},9.421524};
					groundReflectionCloud[] = {{0.329,0.361,0.396},9.421524};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.286,0.353,0.463},9.6138};
					apertureMin = 20;
					apertureStandard = 22;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting36
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{0.447,0.494,0.557},3.95};
					diffuseCloud[] = {{0,0,0},2.765};
					ambient[] = {{0.447,0.494,0.557},13.8};
					ambientCloud[] = {{0.447,0.494,0.557},13.8};
					ambientMid[] = {{0.455,0.467,0.475},12.44208};
					ambientMidCloud[] = {{0.455,0.467,0.475},12.44208};
					groundReflection[] = {{0.388,0.396,0.408},12.19324};
					groundReflectionCloud[] = {{0.388,0.396,0.408},12.19324};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.333,0.404,0.518},12.44208};
					apertureMin = 45;
					apertureStandard = 50;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting37
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.506,0.553,0.608},4.25};
					diffuseCloud[] = {0.1265,0.13825,0.152};
					ambient[] = {{0.506,0.553,0.608},14.8};
					ambientCloud[] = {{0.506,0.553,0.608},14.8};
					ambientMid[] = {{0.514,0.518,0.514},13.34368};
					ambientMidCloud[] = {{0.514,0.518,0.514},13.34368};
					groundReflection[] = {{0.435,0.439,0.439},13.07681};
					groundReflectionCloud[] = {{0.435,0.439,0.439},13.07681};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.369,0.447,0.565},13.34368};
					apertureMin = 70;
					apertureStandard = 100;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting38
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{0.549,0.596,0.651},4.25};
					diffuseCloud[] = {0.13725,0.149,0.16275};
					ambient[] = {{0.549,0.596,0.651},14.8};
					ambientCloud[] = {{0.549,0.596,0.651},14.8};
					ambientMid[] = {{0.557,0.557,0.585},14.21392};
					ambientMidCloud[] = {{0.557,0.557,0.585},14.21392};
					groundReflection[] = {{0.471,0.471,0.463},13.92964};
					groundReflectionCloud[] = {{0.471,0.471,0.463},13.92964};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.4,0.48,0.6},15};
					apertureMin = 70;
					apertureStandard = 110;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting39
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.6,0.8,1},2.8};
					diffuseCloud[] = {{0.6,0.8,1},2.8};
					ambient[] = {{0.4,0.9,1},0.84};
					ambientCloud[] = {{0.4,0.9,1},0.84};
					ambientMid[] = {{0.24,0.63,1},0.9072};
					ambientMidCloud[] = {{0.24,0.63,1},0.9072};
					groundReflection[] = {{0.24,0.63,1},0.870912};
					groundReflectionCloud[] = {{0.24,0.63,1},0.870912};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0,0.2355,0.2335};
					skyAroundSun[] = {0,0.2355,0.2335};
					fogColor[] = {{0.09,0.137,0.22},0.0275};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting40
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},2.1};
					diffuseCloud[] = {{0.6,0.8,1},2.1};
					ambient[] = {{0.4,0.9,1},3.68};
					ambientCloud[] = {{0.4,0.9,1},3.68};
					ambientMid[] = {{0.24,0.63,1},3.9744};
					ambientMidCloud[] = {{0.24,0.63,1},3.9744};
					groundReflection[] = {{0.24,0.63,1},3.815424};
					groundReflectionCloud[] = {{0.24,0.63,1},3.815424};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2235,0.2705},4.232};
					skyAroundSun[] = {{0,0.2235,0.2705},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting41
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},3.5};
					diffuseCloud[] = {{0.6,0.8,1},3.5};
					ambient[] = {{0.4,0.9,1},5.52};
					ambientCloud[] = {{0.4,0.9,1},5.52};
					ambientMid[] = {{0.24,0.63,1},5.9616};
					ambientMidCloud[] = {{0.24,0.63,1},5.9616};
					groundReflection[] = {{0.24,0.63,1},5.723136};
					groundReflectionCloud[] = {{0.24,0.63,1},5.723136};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2175,0.288},6.348};
					skyAroundSun[] = {{0,0.2175,0.288},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting42
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},4.2};
					diffuseCloud[] = {{0.6,0.8,1},4.2};
					ambient[] = {{0.4,0.9,1},6.24};
					ambientCloud[] = {{0.4,0.9,1},6.24};
					ambientMid[] = {{0.24,0.63,1},6.7392};
					ambientMidCloud[] = {{0.24,0.63,1},6.7392};
					groundReflection[] = {{0.24,0.63,1},6.469632};
					groundReflectionCloud[] = {{0.24,0.63,1},6.469632};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2115,0.306},7.176};
					skyAroundSun[] = {{0,0.2115,0.306},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 8;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting43
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},12.04};
					diffuseCloud[] = {{0.6,0.8,1},12.04};
					ambient[] = {{0.4,0.9,1},11.84};
					ambientCloud[] = {{0.4,0.9,1},11.84};
					ambientMid[] = {{0.36,0.72,1},11.4848};
					ambientMidCloud[] = {{0.36,0.72,1},11.4848};
					groundReflection[] = {{0.36,0.72,1},11.02541};
					groundReflectionCloud[] = {{0.36,0.72,1},11.02541};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.09,0.4},13.8};
					skyAroundSun[] = {{0,0.09,0.4},13.8};
					fogColor[] = {{0.3,0.44,0.74},16.5};
					apertureMin = 12;
					apertureStandard = 18;
					apertureMax = 25;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting44
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},12.04};
					diffuseCloud[] = {{0.6,0.8,1},12.04};
					ambient[] = {{0.4,0.9,1},11.84};
					ambientCloud[] = {{0.4,0.9,1},11.84};
					ambientMid[] = {{0.36,0.72,1},11.4848};
					ambientMidCloud[] = {{0.36,0.72,1},11.4848};
					groundReflection[] = {{0.36,0.72,1},11.02541};
					groundReflectionCloud[] = {{0.36,0.72,1},11.02541};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.09,0.4},13.8};
					skyAroundSun[] = {{0,0.09,0.4},13.8};
					fogColor[] = {{0.3,0.44,0.74},16.5};
					apertureMin = 12;
					apertureStandard = 18;
					apertureMax = 25;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
			};
		};
		class SimulWeather
		{
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000;
			fadeMaxAltitudeKm = 15;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 0;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 96;
			cloudGridLength = 96;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 1000000;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 100;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4;
			opticalDensity = 0.5;
			alphaSharpness = 0.85;
			selfShadowScale = 0.905;
			mieAsymmetry = 0.5087;
			minimumLightElevationDegrees = 6;
			directLightCoef = 1;
			indirectLightCoef = 0.04;
			fogStart = 0;
			fogEnd = 50000;
			fogHeight = 2000;
			class DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 30;
				hazeBaseKm = 1;
				hazeScaleKm = 0.2;
				hazeEccentricity = 1;
				brightnessAdjustment = 1;
				cloudiness = 0.6;
				cloudBaseKm = 2;
				cloudHeightKm = 7;
				directLight = 1;
				indirectLight = 1;
				ambientLight = 0.2;
				noiseOctaves = 4.3;
				noisePersistence = 0.535;
				fractalAmplitude = 2.3;
				fractalWavelength = 240;
				extinction = 8.4;
				diffusivity = 0.001;
				churn = 10;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0;
					cloudiness = 0.55;
					diffusivity = 0.001;
					extinction = 3.9;
					seqFileKeyframe = 0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
					cloudiness = 0.70;
					diffusivity = 0.001;
					extinction = 4.3;
					seqFileKeyframe = 0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					cloudiness = 0.75;
					diffusivity = 0.001;
					extinction = 6;
					seqFileKeyframe = 3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.6;
					cloudiness = 0.80;
					diffusivity = 0.01;
					extinction = 7;
					seqFileKeyframe = 4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					cloudiness = 0.85;
					diffusivity = 0.01;
					extinction = 7.3;
					cloudBaseKm = 1;
					cloudHeightKm = 8;
					seqFileKeyframe = 4;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1;
					cloudiness = 0.90000004;
					diffusivity = 0.001;
					extinction = 8.3;
					cloudBaseKm = 1;
					cloudHeightKm = 10;
					seqFileKeyframe = 4;
				};
			};
		};
	};
};
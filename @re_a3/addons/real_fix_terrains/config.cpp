#define _ARMA_

class CfgPatches
{
	class real_fix_terrains
	{
		name = "Real Terrains Fix";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Map_Stratis","A3_Map_Altis","A3_Map_Malden","A3_Map_Tanoabuka","A3_Map_Enoch"};
	};
};

class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		interpolateClutterColoring = 1;
	};
	class Enoch: CAWorld
	{
		clutterColoringFarCoef = "10.0f";
		clutterColoringFarSpeed = "4.0f";
		clutterColoringFarStart = "0.0f";
		interpolateClutterColoring = 1;
	};
	class Malden: CAWorld
	{
		interpolateClutterColoring = 1;
	};
	class Stratis: CAWorld
	{
		interpolateClutterColoring = 1;
	};
	class Tanoa: CAWorld
	{
		clutterColoringFarStart = "0.0f";
	};
};

class CfgSurfaces
{
	class Default;
	class GdtForestMalden: Default
	{
		grassCover = 0.2;
	};
	class GdtForestPine: Default
	{
		grassCover = 0.1;
	};
	class GdtGrassDry: Default
	{
		grassCover = 0.1;
	};
	class GdtGrassGreen: Default
	{
		grassCover = 0.2;
	};
	class GdtGrassLong: Default
	{
		grassCover = 0.3;
	};
	class GdtGrassShort: Default
	{
		grassCover = 0.15;
	};
	class GdtGrassTall: Default
	{
		grassCover = 0.35;
	};
	class GdtGrassWild: Default
	{
		grassCover = 0.1;
	};
	class GdtStratisDryGrass: Default
	{
		grassCover = 0.1;
	};
	class GdtStratisForestPine: Default
	{
		grassCover = 0.1;
	};
	class GdtStratisGreenGrass: Default
	{
		grassCover = 0.2;
	};
};
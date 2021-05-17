#define _ARMA_

class CfgPatches
{
	class real_fix_ui
	{
		name = "Real UI Fix";
		author = "amartyn, sakura_chan";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F","A3_UI_F"};
	};
};

class CfgFontFamilies
{
	class real_empty_font
	{
		fonts[] = {"\real_fix_ui\fonts\empty_font12"};
		spaceWidth = 0.9;
		spacing = 0.17;
	};
};

class CfgInGameUI
{
	class DefaultAction
	{
		font = "real_empty_font";
		shadow = 0;
		infoTextShadow = 0;
	};
};

class CfgActions
{
	class None;
	class HealSoldier: None
	{
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class HealSoldierSelf: None
	{
		textDefault = "";
		text = "<t color='#ff0000'>First Aid</t>";
	};
	class TakeWeapon: None
	{
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\obsolete\ui_action_takeweapon_ca.paa' size='2' shadow=2 />";
	};
	class OpenBag: None
	{
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\gear_ca.paa' size='2.5' shadow=2 />";
	};
	class BackFromUAV: None
	{
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\obsolete\ui_action_cancel_ca.paa' size='2' shadow=2 />";
	};
	class SwitchToUAVGunner: None
	{
		//textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\obsolete\ui_action_manualfire_ca.paa' size='2' shadow=2 />";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	class SwitchToUAVDriver: None
	{
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getindriver_ca.paa' size='1.8' shadow=2 />";
	};
	class LoadMagazine;
	class LoadEmptyMagazine: LoadMagazine
	{
		textDefault = "";
	};
};

class RscObject;
class RscCompass: RscObject
{
	scale = "0.47 * 0.875 * (SafeZoneW Min SafeZoneH) * 1.5";
};

class RscMapControl
{
	maxSatelliteAlpha = 0.5;
	colorTracks[] = {0.2,0.13,0,1};
	colorTracksFill[] = {1,0.88,0.65,0.3};
	colorRoads[] = {0.2,0.13,0,1};
	colorRoadsFill[] = {1,0.88,0.65,1};
	colorMainRoads[] = {0.0,0.0,0.0,1};
	colorMainRoadsFill[] = {0.94,0.69,0.2,1};
	colorRailWay[] = {0.8,0.2,0,1};
	colorGrid[] = {0.05,0.1,0,0.6};
	colorGridMap[] = {0.05,0.1,0,0.4};
	colorBackground[] = {0.929412,0.929412,0.929412,1.0};
	colorOutside[] = {0.929412,0.929412,0.929412,1.0};
	colorCountlines[] = {0.647059,0.533333,0.286275,1};
	colorMainCountlines[] = {0.858824,0,0,1};
	colorForest[] = {0.6,0.8,0.2,0.25};
	colorLevels[] = {0.0,0.0,0.0,1.0};
	colorRocks[] = {0.5,0.5,0.5,0.5};
	sizeExLevel = 0.03;
	showCountourInterval = 1;
	sizeExGrid = 0.032;
};
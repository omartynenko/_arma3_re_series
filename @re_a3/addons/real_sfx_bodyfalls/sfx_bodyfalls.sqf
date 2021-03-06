//Functions
real_fnc_sfx_bodyfall = {

	private ["_unit","_eyePosZ","_surfaceType","_obj","_time","_sound"];
	_unit = _this;

	if (player distance _unit > 150) exitWith {};
	if (stance _unit == "PRONE") exitWith {};
	if ((vehicle _unit != _unit )) exitWith {};

	_eyePosZ = ((ASLToATL(eyePos _unit)) select 2);
	_surfaceType = surfaceType (getPosWorld _unit);
	_obj = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
	_obj attachTo [_unit,[0,0,1]];
	_time = time;

	if ((surfaceIsWater getPosWorld _unit) && (_eyePosZ >= 0.5)) exitWith {
	waitUntil {((ASLToATL(eyePos _unit)) select 2) <= 0.7 || (time > (_time + 2))};
	_obj say3D (real_sfx_unit_bodyfall_water select floor random real_sfx_unit_bodyfall_water_size);
	sleep 2;
	deleteVehicle _obj;
	};

	_sound = switch (_surfaceType) do {
		case "#GdtVRsurface01": {real_sfx_unit_bodyfall_virtual select floor random real_sfx_unit_bodyfall_virtual_size};
		case "#BCGrass1";
		case "#BCGrass2";
		case "#BCGrass3";
		case "#BCGrassW1";
		case "#BCGrassW2";
		case "#CRGrass1";
		case "#CRGrass2";
		case "#CRGrassW1";
		case "#CRGrassW2";
		case "#CRSGrass1";
		case "#CRSGrass2";
		case "#CRSGrassW1";
		case "#CRSGrassW2";
		case "#GdtGrassLong";
		case "#GdtGrassShort";
		case "#GdtGrassTall";
		case "#GdtKlField";
		case "#GdtKLGrass1";
		case "#GdtKlStubble";
		case "#GdtStratisGreenGrass";
		case "#Grass";
		case "#GrassSouth";
		case "#GZTrava";
		case "#TKPole";
		case "#UTGrass";
		case "#WLGrass1";
		case "#WLGrass2";
		case "#WLGrassW1";
		case "#WLGrassW2";
		case "#ZRPole";
		case "#GdtGrassGreen": {real_sfx_unit_bodyfall_grass select floor random real_sfx_unit_bodyfall_grass_size};
		case "#BCForest1";
		case "#BCForest2";
		case "#BCHeather";
		case "#CRForest1";
		case "#CRForest2";
		case "#CRHeather";
		case "#CRSForest1";
		case "#CRSForest2";
		case "#CRSHeather";
		case "#D2Grass";
		case "#DBTrava";
		case "#DETrava";
		case "#ForestLeaves";
		case "#ForestNeedles";
		case "#GdtForestMalden";
		case "#GdtForestPine";
		case "#GdtGrassWild";
		case "#GdtKLGrass2";
		case "#GdtStratisDryGrass";
		case "#GdtStratisForestPine";
		case "#GdtWeed";
		case "#GdtWildField";
		case "#TKPlevel";
		case "#TKTrava";
		case "#UTForest";
		case "#UTHeather";
		case "#UTWeeds";
		case "#WCHeather";
		case "#WLForest1";
		case "#WLForest2";
		case "#WLHeather";
		case "#ZRPlevel";
		case "#ZRTrava";
		case "#GdtGrassDry": {real_sfx_unit_bodyfall_drygrass select floor random real_sfx_unit_bodyfall_drygrass_size};
		case "#AiA_Mud";
		case "#Asfalt";
		case "#BCField1";
		case "#BCGrit1";
		case "#BCMudGround";
		case "#BCTarmac";
		case "#CityGround";
		case "#CRField1";
		case "#CRField2";
		case "#CRGrit1";
		case "#CRHlina";
		case "#CRMudGround";
		case "#CRTarmac";
		case "#CRSField1";
		case "#CRSField2";
		case "#CRSHlina";
		case "#CRSMudGround";
		case "#CRSSterk";
		case "#CRSTarmac";
		case "#CRSterk";
		case "#D2City";
		case "#DBPolopoust";
		case "#DEPolopoust";
		case "#dirtrunway";
		case "#DryGround";
		case "#Field1";
		case "#GdtDirt";
		case "#GdtField";
		case "#GdtForest";
		case "#GdtKLDirt";
		case "#GdtKLForestCon";
		case "#GdtKLForestDec";
		case "#GdtKlSoil";
		case "#GdtMarsh";
		case "#GdtMud";
		case "#GdtRedDirt";
		case "#GdtSeabed";
		case "#GdtStratisDirt";
		case "#GdtStratisRocky";
		case "#GdtStratisSeabed";
		case "#GdtStratisThistles";
		case "#GdtVolcano";
		case "#grav_dirt";
		case "#GZforest";
		case "#GZHlina";
		case "#GZkameny";
		case "#Hlina";
		case "#mud";
		case "#mud_gravel";
		case "#MudBuilding";
		case "#path_dirt";
		case "#Pesina";
		case "#TKDirtRoad";
		case "#TKForest";
		case "#TKHlina";
		case "#TKMoutain";
		case "#TKPolopoust";
		case "#UTGravel";
		case "#UTGround";
		case "#WCField1";
		case "#WCField2";
		case "#WCForest1";
		case "#WCForest2";
		case "#WCGrass1";
		case "#WCGrass2";
		case "#WCGrassW1";
		case "#WCGrassW2";
		case "#WCHlina";
		case "#WCSterk";
		case "#WCTarmac";
		case "#WLField1";
		case "#WLGrit1";
		case "#WLMudGround";
		case "#WLTarmac";
		case "#ZRHlina";
		case "#ZRPolopoust";
		case "#GdtSoil": {real_sfx_unit_bodyfall_gravel select floor random real_sfx_unit_bodyfall_gravel_size};
		case "#D2Sand";
		case "#GdtDead";
		case "#GdtDesert";
		case "#GdtStratisBeach";
		case "#GdtVolcanoBeach";
		case "#sand";
		case "#sand_exp";
		case "#SandBeach";
		case "#SandBuilding";
		case "#SandDesert";
		case "#SandGeneral";
		case "#GdtBeach": {real_sfx_unit_bodyfall_sand select floor random real_sfx_unit_bodyfall_sand_size};
		case "#SurfWater";
		case "#Water";
		case "#Freshwater": {real_sfx_unit_bodyfall_water select floor random real_sfx_unit_bodyfall_water_size};
		case default {real_sfx_unit_bodyfall_concrete select floor random real_sfx_unit_bodyfall_concrete_size};
	};

	if ((_eyePosZ > 0) && (_eyePosZ <= 1.8)) exitWith {
		waitUntil {((ASLToATL(eyePos _unit)) select 2) <= 0.7 || (time > (_time + 2))};
		_obj say3D _sound;
		sleep 2;
		deleteVehicle _obj;
	};

	if (_eyePosZ >= 2) exitWith {
		waitUntil {((ASLToATL(eyePos _unit)) select 2) <= (_eyePosZ-0.9) || (time > (_time + 2))};
		_obj say3D _sound;
		sleep 2;
		deleteVehicle _obj;
	};
};

{
	_x addEventHandler ["Killed", {(_this select 0) spawn real_fnc_sfx_bodyfall;}];
} forEach allUnits
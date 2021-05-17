//All rights reserved Andrew Gregory aka axeman axeman@thefreezer.co.uk
if (!hasInterface || isServer) then {

	private ["_nrTowers","_lCol","_lbrt","_lamb","_stHr","_fnHr","_ndGen","_nrGen","_rngGen","_genCls","_doLit","_gnCnt"];
	_lCol = [1, 0.88, 0.73]; // Colour of lights on tower when directly looked at | RGB Value from 0 to 1.
	_lbrt = 1; //Brightness (also visible distance) of light source. Default 0.04
	_lamb = [1, 0.88, 0.73]; // Colour of surrounding (ambient) light | RGB Value from 0 to 1.
	_stHr = 16;//Hour (in 24 hours) to start lighting up tower
	_fnHr = 8;//Hour (in 24 hours) to stop lighting up tower
	_ndGen = false;//Require a Generator ? An entity, set by _genCls, must be within a radius (in metres), set by_rngGen, for the towerlights to be lit.
	_rngGen = 1800;//Generator range (Generator must be within this radius from the tower for towerlights to be lit)
	_genCls = ["Land_PowerGenerator_F","PowerGenerator","PowerGenerator_EP1"];//Class name of generator (Tested PowerGenerator_EP1 & PowerGenerator)
	_tower_worlds = ['chernarus','chernarus_summer','chernarus_winter','fallujah'];

	if ((toLower worldName) in ['chernarus','chernarus_summer','chernarus_winter']) then {
		_nrT_chernarus_airport = [4556.895,10312.014] nearObjects ["Land_Ind_IlluminantTower",600];
		_nrT_chernarus_berezino = [13128.964,10041.647] nearObjects ["Land_Ind_IlluminantTower",180];
		_nrTowers = _nrT_chernarus_airport + _nrT_chernarus_berezino;
		while {true} do {
			if ((daytime < _fnHr) || (daytime > _stHr)) then {
				{
				_doLit = true;
				if (_ndGen) then {
					_nrGen = (position _x) nearEntities [_genCls,_rngGen];
					_gnCnt = count _nrGen;
						if (_gnCnt < 1) then {
							_doLit = false;
						};
					};
				[_lCol,_lbrt,_lamb,[_x],[_doLit]] call compile preprocessFileLineNumbers "\re_cup_terrains_illuminant_tower\real_fnc_light.sqf";
				}
				forEach _nrTowers;
			};
		sleep 1;
		};
	};

	if ((toLower worldName) == 'bootcamp_acr') then {
		_nrT_bootcamp_acr_airport = [1550.000,1808.000] nearObjects ["Land_Ind_IlluminantTower",600];
		_nrTowers = _nrT_bootcamp_acr_airport;
		while {true} do {
			if ((daytime < _fnHr) || (daytime > _stHr)) then {
				{
				_doLit = true;
				if (_ndGen) then {
					_nrGen = (position _x) nearEntities [_genCls,_rngGen];
					_gnCnt = count _nrGen;
						if (_gnCnt < 1) then {
							_doLit = false;
						};
					};
				[_lCol,_lbrt,_lamb,[_x],[_doLit]] call compile preprocessFileLineNumbers "\re_cup_terrains_illuminant_tower\real_fnc_light.sqf";
				}
				forEach _nrTowers;
			};
		sleep 1;
		};
	};
};	
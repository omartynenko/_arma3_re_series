if (!hasInterface || isServer) then {

	private _real_cc_map = toLower worldName;
	private _real_dworlds = ['takistan','zargabad','shapur_baf','desert_e'];
	private _real_eworlds = ['chernarus','chernarus_summer','utes'];
	private _real_wworlds = ['chernarus_winter'];
	private _real_cworlds = ['provinggrounds_pmc'];
	private _real_worlds = _real_dworlds + _real_eworlds + _real_wworlds + _real_cworlds;

	if (_real_cc_map in _real_dworlds) then {
		_real_color_correction = ppEffectCreate ["Real Color Correction", 2005];
		_real_color_correction   ppEffectAdjust [1,1.1,-0.03,[0,0,0,-0.1],[1,1,1,1],[0.4,0.3,0.25,0]];
		_real_color_correction   ppEffectCommit 0;
		_real_color_correction   ppEffectForceInNVG false;
		_real_color_correction   ppEffectEnable true;
	};

	if (_real_cc_map in _real_eworlds) then {
		_real_color_correction = ppEffectCreate ["Real Color Correction", 2005];
		_real_color_correction   ppEffectAdjust [0.95,1.05,0.02,[0.03,0.05,0.2,-0.1],[1,0.9,1,0.9],[0.5,0.25,0.25,0]];
		_real_color_correction   ppEffectCommit 0;
		_real_color_correction   ppEffectForceInNVG false;
		_real_color_correction   ppEffectEnable true;
	};

	if (_real_cc_map in _real_wworlds) then {
		_real_color_correction = ppEffectCreate ["Real Color Correction", 2005];
		_real_color_correction   ppEffectAdjust [1.05,1.1,-0.01,[0.25,0.1,0,-0.1],[0.9,0.9,1,1],[1,0.25,-0.25,0]];
		_real_color_correction   ppEffectCommit 0;
		_real_color_correction   ppEffectForceInNVG false;
		_real_color_correction   ppEffectEnable true;
	};

	if (_real_cc_map == 'provinggrounds_pmc') then {
		_real_color_correction = ppEffectCreate ["Real Color Correction", 2005];
		_real_color_correction   ppEffectAdjust [0.9,1,0.01,[0.02,0.05,0.2,-0.05],[1,1,1,1],[0.3,0.4,0.2,0]];
		_real_color_correction   ppEffectCommit 0;
		_real_color_correction   ppEffectForceInNVG false;
		_real_color_correction   ppEffectEnable true;
	};

	if !(_real_cc_map in _real_worlds) then {
		_real_color_correction = ppEffectCreate ["Real Color Correction", 2005];
		_real_color_correction   ppEffectAdjust [1,1,0,[0,0,0,0],[1,1,1,1],[0.299,0.587,0.114,0]];
		_real_color_correction   ppEffectCommit 0;
		_real_color_correction   ppEffectForceInNVG false;
		_real_color_correction   ppEffectEnable true;
		ppEffectDestroy _real_color_correction;
	};
};
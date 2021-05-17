/*
	Name: 		RAM_fnc_hitPart
	Desc:		Initialization for RAM
	Param(s):	hitPart EH output
	Returns:	nil
	Author:		Jiaan "Bakerman"
*/

// First hitPart element
private "_hit";
_hit = _this select 0;

// Exit on non-direct hits
if !(_hit select 10) exitWith {};

// Get AIS CE penetrators and exit if none or empty
private ["_pen","_count"];
_pen = getArray(configFile >> "CfgAmmo" >> (_hit select 6 select 4) >> "ais_ce_penetrators");
_count = count _pen;
if (_count == 0 || {_pen select 0 == ""}) exitWith {};

private ["_vec","_pos","_mod","_v","_anm","_rev"];

// Projectile vector
_vec = vectorNormalized (_hit select 4);

// Move penetrators back 0.2 meter and convert to AGL
_pos = ASLToAGL ((_hit select 3) vectorAdd (_vec vectorMultiply -0.2));

// Legacy CE surface modifier for RHS vehicles
_mod = RHS_hitPartModifier find (_hit select 9);

// Transform vector into velocity and apply modifier
if (_mod != -1) then {
	_vec = _vec vectorMultiply (1000 * ([0.95,0.9,0.85,0.8,0.75,0.7,0.65,0.6,0.5,0.4,0.3,0.2,0.1] select _mod));
} else {
	_vec = _vec vectorMultiply 1000;
};

// Vehicle hit and AIS protector animation
_v = _hit select 0;
_anm = getText(configFile >> "CfgVehicles" >> (typeOf _v) >> "ais_ce_protector");

// Do protector animation if available and not deployed
_rev = false;
if (_anm != "") then {
	if ((_v animationPhase _anm) != 1) then {
		_rev = true;
		_v animate [_anm, 1];
	};
};

// Create the first projectile
private "_p";
_p = createVehicle [_pen select 0, _pos, [], 0, "CAN_COLLIDE"];
_p setVelocity _vec;

// Revert or spawn for additional warheads
if (_count == 1) then {
	if (_rev) then {
		_v animate [_anm, 0];
	};
} else {
	[_pen,_pos,_vec,_count,_rev,_anm,_v] spawn {
		params ["_pen","_pos","_vec"];
		private "_p";
		// Create the additional projectiles
		for "_i" from 1 to (_this select 3)-1 do {
			sleep (1/diag_fps);
			_p = createVehicle [_pen select _i, _pos, [], 0, "CAN_COLLIDE"];
			_p setVelocity _vec;
		};
		// Revert protector if required
		if (_this select 4) then {
			(_this select 6) animate [_this select 5, 0];
		};
	};
};
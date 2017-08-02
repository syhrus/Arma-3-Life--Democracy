_shooter = _this select 0;
_gun = _this select 1;
_ammo = _this select 2;
_location = _this select 3;
if(_shooter == player)then{
	_mag = "Land_Magazine_rifle_F" createvehicle _location;
	_mag setpos ([_location, 0, 1.5, 0.1, 1] call bis_fnc_findsafepos);
	_mag setVariable ["EvidenceDetails", [_ammo, _gun, _shooter, _location], true];
	[[_mag, false], "enablesimulationglobal",false,false,false] call bis_fnc_MP;
	[_mag, ["Pick up evidence", "Criminal\pickUpEvidence.sqf"]] remoteExec ["addaction"];
	[_mag] spawn {
		sleep 600;
		deletevehicle (_this select 0);

	};
};



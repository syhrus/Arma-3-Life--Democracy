_cargo = _this select 0;

_NearestTruck = nearestObjects [position _cargo, ["Car"], 50] select 0;
//hint format ["%1", _nearestTruck];
_cargo attachTo [_NearestTruck, [0,-1.1,0]];
_cargo setVectorDirAndUp [[1,0,0],[1,0,1]];

_drop = _cargo getVariable "CargoDestination";

hint format ["%1", getmass _NearestTruck];

_mass = _cargo getVariable ["CargoWeight", 500];

_nearestTruck setmass [(getmass _NearestTruck)+ _mass, 2];

removeallactions _cargo;
[_NearestTruck, _drop, _mass, _cargo] spawn {
	_vehicle = _this select 0;
	_drop = _this select 1;
	_cargoMass = _this select 2;
	_cargo = _this select 3;
	
	while {alive _vehicle && ((getpos _drop) distance2D (getpos _vehicle)) > 10}do{
		if(speed _vehicle > 1)then{
			_mass = getmass _vehicle;
			_speed = speed _vehicle;
			_coeff = -0.002;
			
			_vehicle addforce [_vehicle vectorModelToWorld [0,_speed * _mass * _coeff, 0],[0,-0.5,0]];
			
			sleep 0.1;
		};
	};
	_oldmass = getmass _vehicle;
	_vehicle setmass [(getmass _vehicle)- _cargoMass , 2];
	sleep 2;
	hint format ["old mass: %1, Lost mass: %2, New Mass: %3", _oldmass, _cargoMass, getmass _vehicle];

	_markerName = _drop getVariable ["AttachedMarker", ""];
	_markerName setMarkerColorLocal "ColorYellow";
	_markerName setMarkerTypeLocal "mil_dot";

	deleteVehicle _cargo;
};
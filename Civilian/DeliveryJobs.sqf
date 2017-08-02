_cargoPlace = _this select 0;
_unit = _this select 1;

_cargoType = _cargoPlace getVariable ["CargoType", "Land_CargoBox_V1_F"];
_cargoWeight = _cargoPlace getVariable ["CargoWeight", "500"];
_dropoffs = _cargoPlace getVariable ["CargoDropoffs", [GenericDrop_1]];

_dropoff = _dropoffs call bis_fnc_selectRandom;

_markerName = _dropoff getVariable ["AttachedMarker", ""];
_markerName setMarkerColorLocal "ColorRed";
_markerName setMarkerTypeLocal "mil_objective";

_cargo = _cargoType createvehicle (position _unit);
_cargo setVariable ["CargoWeight", _cargoWeight];
_cargo setVariable ["CargoDestination", _dropoff];
_cargo addaction ["Load into nearest truck", "functions\loadCargoInTruck.sqf"];
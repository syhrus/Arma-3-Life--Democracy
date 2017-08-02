disableSerialization;



_i = 0;
_guns = [];

while {_i < lbSize 4003} do{
	_guns = _guns + [lbData [4003, _i]];
	_i = _i + 1;
};

LawsVariables setVariable ["IllegalWeapons", _guns];
hint "Illegal Weapons Updated";
{
systemChat str ("Added: " + _x);
}foreach _guns;
[] execVM "President\Pres_Laws_Guns_Dialog_Reset.sqf"
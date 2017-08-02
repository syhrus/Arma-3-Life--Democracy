disableSerialization;

lbClear 4003;
lbClear 4002;

_display = findDisplay 200;
_openDialog = _display displayCtrl 4003;
_guns = (LawsVariables getVariable "Allweapons");
_illegalGuns = (LawsVariables getVariable "IllegalWeapons");

{
	if((_x select 0) in _illegalGuns) then {
		_openDialog = _display displayCtrl 4003;
	}else{
		_openDialog = _display displayCtrl 4002;
	};
	_openDialog lbADD (_x select 1);
	_openDialog lbsetData [(lbsize _openDialog)-1, (_x select 0)];
	_openDialog lbsetPicture [(lbsize _openDialog)-1, (_x select 2)];
}foreach _guns;
disableSerialization;

_laws = LawsVariables getVariable "PunishmentValues";
_index = lbCurSel 1504;
_currentitem = (_laws select _index);
_current = [_currentitem select 0, floor (sliderPosition 1905), _currentitem select 2, _currentitem select 3];

_newLaws = [];
_i = 0;
while {_i < count _laws} do {
	if(_i == _index) then 
	{
		diag_log format ["%1, %2, %3, %4", _current select 0, _current select 1, _current select 2, _current select 3];
		_newLaws = _newLaws + _current;
	}else
	{
		_newLaws = _newLaws + [(_laws select _i) select 0, (_laws select _i) select 1, (_laws select _i) select 2, (_laws select _i) select 3];
		diag_log format ["%1, %2, %3, %4", (_newLaws select _i) select 0, (_newLaws select _i) select 1, (_newLaws select _i) select 2, (_newLaws select _i) select 3];
	};
	_i = _i + 1;
};

LawsVariables setVariable ["PunishmentValues", _newLaws];
//hint "Punishments Updated";
[] execVM "President\Pres_Laws_Punishments_Reset.sqf"
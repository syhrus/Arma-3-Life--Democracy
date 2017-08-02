disableSerialization;
_display = findDisplay 200;

_CurVal
_setVal = _display displayCtrl 1905;
LawsVariables setVariable ["PunishmentValues", floor (sliderPosition _setVal)];


hint "Speed Limits Updated";
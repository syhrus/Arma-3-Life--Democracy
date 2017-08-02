disableSerialization;

lbClear 1504;

_display = findDisplay 200;
_openDialog = _display displayCtrl 1504;
_Punishments = (LawsVariables getVariable "PunishmentValues");
{
	_openDialog = _display displayCtrl 1504;
	_openDialog lbADD (_x select 0);
}foreach _Punishments;
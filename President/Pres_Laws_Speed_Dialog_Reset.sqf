disableSerialization;

_CitySpeedLimit = LawsVariables getVariable "CitySpeedLimit";
_TownSpeedLimit = LawsVariables getVariable "TownSpeedLimit";
_SealedSpeedLimit = LawsVariables getVariable "SealedSpeedLimit";
_DirtSpeedLimit = LawsVariables getVariable "DirtSpeedLimit";

_display = findDisplay 200;

	_Slider = _display displayCtrl 1900;
		_Slider sliderSetPosition _CitySpeedLimit;
	_openDialog = _display displayCtrl 2004;
	_openDialog ctrlSetText ((sliderPosition _Slider) call STL_fnc_intToString);
		
	_Slider = _display displayCtrl 1901;
		_Slider sliderSetPosition _TownSpeedLimit;
	_openDialog = _display displayCtrl 2005;
	_openDialog ctrlSetText ((sliderPosition _Slider) call STL_fnc_intToString);
			
	_Slider = _display displayCtrl 1902;
		_Slider sliderSetPosition _SealedSpeedLimit;
	_openDialog = _display displayCtrl 2006;
	_openDialog ctrlSetText ((sliderPosition _Slider) call STL_fnc_intToString);
	
	_Slider = _display displayCtrl 1903;
		_Slider sliderSetPosition _DirtSpeedLimit;
	_openDialog = _display displayCtrl 2007;
	_openDialog ctrlSetText ((sliderPosition _Slider) call STL_fnc_intToString);
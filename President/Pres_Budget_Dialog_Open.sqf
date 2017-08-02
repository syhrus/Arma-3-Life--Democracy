_TreasuryTotal = TreasuryVariables getVariable "TreasuryTotal";
_FactoryIn = TreasuryVariables getVariable "FactoryIn";
_ExportIn = TreasuryVariables getVariable "ExportIn";
_IncomeTaxIn = TreasuryVariables getVariable "IncomeTaxIn";
_PropertyTaxIn = TreasuryVariables getVariable "PropertyTaxIn";
_PoliceOut = TreasuryVariables getVariable "PoliceOut";
_EdictOut = TreasuryVariables getVariable "EdictOut";
_InfrastructureOut = TreasuryVariables getVariable "InfrastructureOut";
_NetChange = (_FactoryIn + _ExportIn + _IncomeTaxIn + _PropertyTaxIn - _PoliceOut - _EdictOut - _InfrastructureOut);
_ExportTaxRate = TreasuryVariables getVariable "ExportTaxRate";
_IncomeTaxRate = TreasuryVariables getVariable "IncomeTaxRate";
_PropertyTaxRate = TreasuryVariables getVariable "PropertyTaxRate";


disableSerialization;

_handle = createDialog "Pres_Budget_Screen";

waitUntil {!isNull (findDisplay 100)};
	_display = findDisplay 100;
		_setText = _display displayCtrl 1012;
		_setText ctrlSetText (_TreasuryTotal call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1013;
		_setText ctrlSetText (_FactoryIn call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1014;
		_setText ctrlSetText (_ExportIn call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1015;
		_setText ctrlSetText (_IncomeTaxIn call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1016;
		_setText ctrlSetText (_PropertyTaxIn call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1017;
		_setText ctrlSetText (_PoliceOut call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1018;
		_setText ctrlSetText (_EdictOut call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1019;
		_setText ctrlSetText (_InfrastructureOut call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1020;
		_setText ctrlSetText (_NetChange call STL_fnc_intToString);
		
		_Slider1 = _display displayCtrl 1022;
		_Slider1 sliderSetRange [0, 50];
		_Slider1 sliderSetSpeed [1, 5];
		_Slider1 sliderSetPosition _ExportTaxRate;
		
		_Slider1 ctrlAddEventHandler["SliderPosChanged", {_display = findDisplay 100; _setText = _display displayCtrl 1029; _setText ctrlSetText ((sliderPosition (_this select 0)) call STL_fnc_intToString);}];
		
		_Slider2 = _display displayCtrl 1023;
		_Slider2 sliderSetRange [0, 50];
		_Slider2 sliderSetSpeed [1, 5];
		_Slider2 sliderSetPosition _IncomeTaxRate;
		
		_Slider2 ctrlAddEventHandler["SliderPosChanged", {_display = findDisplay 100; _setText = _display displayCtrl 1030; _setText ctrlSetText ((sliderPosition (_this select 0)) call STL_fnc_intToString);}];
		
		_Slider3 = _display displayCtrl 1024;
		_Slider3 sliderSetRange [0, 25];
		_Slider3 sliderSetSpeed [1, 5];		
		_Slider3 sliderSetPosition _PropertyTaxRate;
		
		_Slider3 ctrlAddEventHandler["SliderPosChanged", {_display = findDisplay 100; _setText = _display displayCtrl 1031; _setText ctrlSetText ((sliderPosition (_this select 0)) call STL_fnc_intToString);}];
		
		_setText = _display displayCtrl 1029;
		_setText ctrlSetText ((sliderPosition _Slider1) call STL_fnc_intToString);
		
		_setText = _display displayCtrl 1030;
		_setText ctrlSetText ((sliderPosition _Slider2) call STL_fnc_intToString);
				
		_setText = _display displayCtrl 1031;
		_setText ctrlSetText ((sliderPosition _Slider3) call STL_fnc_intToString);
		
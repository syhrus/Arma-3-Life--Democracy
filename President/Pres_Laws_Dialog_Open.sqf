_CitySpeedLimit = LawsVariables getVariable "CitySpeedLimit";
_TownSpeedLimit = LawsVariables getVariable "TownSpeedLimit";
_SealedSpeedLimit = LawsVariables getVariable "SealedSpeedLimit";
_DirtSpeedLimit = LawsVariables getVariable "DirtSpeedLimit";

disableSerialization;

_handle = createDialog "Pres_Laws_Screen";
_allSecondaryControls = [1801, 1900, 1901, 1902, 1903, 1904, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 1606, 1607, 4002, 1608, 1609, 4003, 2008, 2009, 1610, 1611, 1905, 2010, 1612, 1613, 1504];

waitUntil {!isNull (findDisplay 200)};
	_display = findDisplay 200;
	_script = [_display, _allSecondaryControls, false] execVM "Functions\UI_ShowHide.sqf";
	WaitUntil {scriptdone _script};
	
	_Slider = _display displayCtrl 1900;
		_Slider sliderSetRange [30, 150];
		_Slider sliderSetSpeed [10, 10];
		_Slider sliderSetPosition _CitySpeedLimit;
		
		_Slider ctrlAddEventHandler["SliderPosChanged", {_display = findDisplay 200; _setText = _display displayCtrl 2004; _setText ctrlSetText ((sliderPosition (_this select 0)) call STL_fnc_intToString);}];
	
	_openDialog = _display displayCtrl 2004;
	_openDialog ctrlSetText ((sliderPosition _Slider) call STL_fnc_intToString);
		
	_Slider = _display displayCtrl 1901;
		_Slider sliderSetRange [30, 150];
		_Slider sliderSetSpeed [10, 10];
		_Slider sliderSetPosition _TownSpeedLimit;
		
		_Slider ctrlAddEventHandler["SliderPosChanged", {_display = findDisplay 200; _setText = _display displayCtrl 2005; _setText ctrlSetText ((sliderPosition (_this select 0)) call STL_fnc_intToString);}];
	
	_openDialog = _display displayCtrl 2005;
	_openDialog ctrlSetText ((sliderPosition _Slider) call STL_fnc_intToString);
	
	_Slider = _display displayCtrl 1902;
		_Slider sliderSetRange [30, 150];
		_Slider sliderSetSpeed [10, 10];
		_Slider sliderSetPosition _SealedSpeedLimit;
		
		_Slider ctrlAddEventHandler["SliderPosChanged", {_display = findDisplay 200; _setText = _display displayCtrl 2006; _setText ctrlSetText ((sliderPosition (_this select 0)) call STL_fnc_intToString);}];
	
	_openDialog = _display displayCtrl 2006;
	_openDialog ctrlSetText ((sliderPosition _Slider) call STL_fnc_intToString);
	
	_Slider = _display displayCtrl 1903;
		_Slider sliderSetRange [30, 150];
		_Slider sliderSetSpeed [10, 10];
		_Slider sliderSetPosition _DirtSpeedLimit;
		
		_Slider ctrlAddEventHandler["SliderPosChanged", {_display = findDisplay 200; _setText = _display displayCtrl 2007; _setText ctrlSetText ((sliderPosition (_this select 0)) call STL_fnc_intToString);}];
		
	_openDialog = _display displayCtrl 2007;
	_openDialog ctrlSetText ((sliderPosition _Slider) call STL_fnc_intToString);
	
	_openDialog = _display displayCtrl 1600;
	_openDialog ctrlAddEventHandler["ButtonDown", {_display = findDisplay 200; [_display , [1801, 1900, 1901, 1902, 1903, 1904, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 1606, 1607, 4002, 1608, 1609, 4003, 2008, 2009, 1610, 1611, 1905, 2010, 1612, 1613, 1504], false] execVM "Functions\UI_ShowHide.sqf";}];
	_openDialog ctrlAddEventHandler["ButtonClick", {_display = findDisplay 200; [_display, [1801, 1900, 1901, 1902, 1903, 1904, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 1606, 1607], true] execVM "Functions\UI_ShowHide.sqf";}];
	
	_openDialog = _display displayCtrl 1601;
	_openDialog ctrlAddEventHandler["ButtonDown", {_display = findDisplay 200; [_display, [1801, 1900, 1901, 1902, 1903, 1904, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 1606, 1607, 4002, 1608, 1609, 4003, 2008, 2009, 1610, 1611, 1905, 2010, 1612, 1613, 1504], false] execVM "Functions\UI_ShowHide.sqf";}];
	_openDialog ctrlAddEventHandler["ButtonClick", {_display = findDisplay 200; [_display, [1801, 1606, 1607, 4002, 1608, 1609, 4003, 2008, 2009, 1610, 1611], true] execVM "Functions\UI_ShowHide.sqf";}];
	
	_openDialog = _display displayCtrl 1604;
	_openDialog ctrlAddEventHandler["ButtonDown", {_display = findDisplay 200; [_display, [1801, 1900, 1901, 1902, 1903, 1904, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 1606, 1607, 4002, 1608, 1609, 4003, 2008, 2009, 1610, 1611, 1905, 2010, 1612, 1613, 1504], false] execVM "Functions\UI_ShowHide.sqf";}];
	_openDialog ctrlAddEventHandler["ButtonClick", {_display = findDisplay 200; [_display, [1801, 1905, 2010, 1612, 1613, 1504], true] execVM "Functions\UI_ShowHide.sqf";}];

	
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
	
	_Punishments = (LawsVariables getVariable "PunishmentValues");
	{
		_openDialog = _display displayCtrl 1504;
		_openDialog lbADD (_x select 0);
		_openDialog lbsetData [(lbsize _openDialog)-1, str (_x select 1)];
	}foreach _Punishments;
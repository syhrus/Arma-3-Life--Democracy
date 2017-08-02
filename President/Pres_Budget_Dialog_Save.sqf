disableSerialization;
_display = findDisplay 100;

_setVal = _display displayCtrl 1022;
TreasuryVariables setVariable ["ExportTaxRate", floor (sliderPosition _setVal)];
_setVal2 = _display displayCtrl 1023;
TreasuryVariables setVariable ["IncomeTaxRate", floor (sliderPosition _setVal2)];
_setVal3 = _display displayCtrl 1024;
TreasuryVariables setVariable ["PropertyTaxRate", floor (sliderPosition _setVal3)];

hint "Taxes Updated";
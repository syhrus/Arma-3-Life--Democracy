0 = [] execVM "Setup\Bank_Setup.sqf";

if(isServer)then{
	TreasuryVariables setVariable ["TreasuryTotal", 1000000];
	TreasuryVariables setVariable ["FactoryIn", 0];
	TreasuryVariables setVariable ["ExportIn", 0];
	TreasuryVariables setVariable ["IncomeTaxIn", 0];
	TreasuryVariables setVariable ["PropertyTaxIn", 0];
	TreasuryVariables setVariable ["PoliceOut", 0];
	TreasuryVariables setVariable ["EdictOut", 0];
	TreasuryVariables setVariable ["InfrastructureOut", 0];
	TreasuryVariables setVariable ["ExportTaxRate", 15];
	TreasuryVariables setVariable ["IncomeTaxRate", 15];
	TreasuryVariables setVariable ["PropertyTaxRate", 10];
	
	LawsVariables setVariable ["CitySpeedLimit", 60];
	LawsVariables setVariable ["TownSpeedLimit", 80];
	LawsVariables setVariable ["SealedSpeedLimit", 110];
	LawsVariables setVariable ["DirtSpeedLimit", 100];
	LawsVariables setVariable ["AllWeapons", [
													["hgun_P07_F", "PO-7 9mm Pistol",  "\A3\weapons_F\Pistols\P07\data\UI\gear_p07_x_ca.paa"],
													["hgun_Rook40_F", "Rook-40 9mm Pistol", "\A3\weapons_F\Pistols\Rook40\data\UI\gear_Rook40_x_ca.paa"],
													["hgun_ACPC2_F", "ACP-C2 .45 Pistol", "\A3\Weapons_F_Beta\Pistols\ACPC2\Data\UI\gear_Acpc2_X_CA.paa"],
													["hgun_Pistol_heavy_01_F", "4-five .45 Pistol", "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_01\data\UI\gear_pistol_heavy_01_X_ca.paa"],
													["hgun_Pistol_heavy_02_F", "Zubr .45 Revolver", "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\UI\gear_Pistol_heavy_02_X_CA.paa"]
												]
									];
	LawsVariables setVariable ["IllegalWeapons", [
														"hgun_Pistol_heavy_02_F"
														]
									
									
									];
									
	LawsVariables setVariable ["PunishmentValues", [
															["Speeding", 1000, 1000, 10000],
															["Reckless Driving", 1000, 1000, 10000],
															["Reckless Flying", 1000, 1000, 10000],
															["Reckless Boating", 1000, 1000, 10000],
															["Mugging", 5000, 2000, 15000],
															["Robbery", 8000, 4000, 24000],
															["Murder", 10000, 5000, 30000],
															["Manslaughter", 5000, 1000, 10000],
															["IllegalWeapon", 5000, 2000, 10000],
															["Drug Possession", 5000, 1000, 20000],
															["Drug Trafficing", 8000, 2000, 30000]
														]
									];
};

STL_fnc_intToString = {
    _s = "";
    while {_this >= 10} do {
        _this = _this / 10;
        _s = format ["%1%2", round ((_this % floor _this) * 10), _s];
        _this = floor _this;
    };
    format ["%1%2", _this, _s];
};
publicVariable "STL_fnc_intToString";
[player] execVM "Civilian\GunCheck.sqf"
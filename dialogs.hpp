class Pres_Budget_Screen
{
	idd = 100;
	movingEnable = false;
	onLoad = "with uiNameSpade do {Pres_Budget_Screen = _this select 0}";
class controls 
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Syhrus, v1.063, #Kujixa)
		////////////////////////////////////////////////////////

		class Pres_Budget_Screen_BG: Box
		{
			idc = 1000;

			x = 0.298906 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.528 * safezoneH;
			sizeEx = 0;
			text = "";
		};
		class Pres_Budget_Screen_Total: RscText
		{
			idc = 1001;

			text = "Treasury Total: "; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Confirm: RscButton
		{
			idc = 1002;

			text = "Enact Changes"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0.5,0,1};
			sizeEx = 0.03921;
			//action = "disableSerialization; _display = findDisplay 100; _setVal = _display displayCtrl 1022; TanoaTreasuryVariables setVariable [""ExportTaxRate"", floor (sliderPosition _setVal)]; _setVal2 = _display displayCtrl 1023; TanoaTreasuryVariables setVariable [""IncomeTaxRate"", floor (sliderPosition _setVal2)]; _setVal3 = _display displayCtrl 1024; TanoaTreasuryVariables setVariable [""PropertyTaxRate"", floor (sliderPosition _setVal3)]; closeDialog 0;";
			action = "_handle = []execVM ""President\Pres_Budget_Dialog_Save.sqf"";";
		};
		class Pres_Budget_Screen_Discard_Button: RscButton
		{
			idc = 1003;

			text = "Close"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0.5,0.5,0,1};
			sizeEx = 0.03921;
			action = "closeDialog 0;";
		};
		class Pres_Budget_Screen_FactoryIn: RscText
		{
			idc = 1004;

			text = "Income from factories: "; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_ExportIn: RscText
		{
			idc = 1005;

			text = "Income from Export Tax:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_IncomeTaxIn: RscText
		{
			idc = 1006;

			text = "Income from Income Tax:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_PropertyTaxIn: RscText
		{
			idc = 1007;

			text = "Income from Property Tax:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_PoliceOut: RscText
		{
			idc = 1008;

			text = "Expenses from Police Armoury:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_EdictsOut: RscText
		{
			idc = 1009;

			text = "Expenses from Edicts:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_InfrastructureOut: RscText
		{
			idc = 1010;

			text = "Expenses from Infastructure:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_NetChange: RscText
		{
			idc = 1011;

			text = "Predicted Change:"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 0.038;
		};
		class Pres_Budget_Screen_Value_Total: RscText
		{
			idc = 1012;

			text = "X"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Value_FactoryIn: RscText
		{
			idc = 1013;

			text = "X"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Value_ExportIn: RscText
		{
			idc = 1014;

			text = "X"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Value_IncomeTaxIn: RscText
		{
			idc = 1015;

			text = "X"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Value_PropertyTaxIn: RscText
		{
			idc = 1016;

			text = "X"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Value_PoliceOut: RscText
		{
			idc = 1017;

			text = "X"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Value_EdictOut: RscText
		{
			idc = 1018;

			text = "X"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Value_InfrastructureOut: RscText
		{
			idc = 1019;

			text = "X"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_Value_NetChange: RscText
		{
			idc = 1020;

			text = "X"; //--- ToDo: Localize;
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 0.038;
		};
		class Pres_Budget_Screen_Header: RscText
		{
			idc = 1021;

			text = "BUDGET"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.04;
		};
		class Pres_Budget_Screen_Set_ExportTax: RscSlider
		{
			idc = 1022;

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Budget_Screen_Set_IncomeTax: RscSlider
		{
			idc = 1023;

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Budget_Screen_Set_PropertyTax: RscSlider
		{
			idc = 1024;

			x = 0.525781 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Budget_Screen_ExportTaxLabel: RscText
		{
			idc = 1025;

			text = "Export Tax"; //--- ToDo: Localize;
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_TaxesLabel: RscText
		{
			idc = 1026;

			text = "Tax Rates"; //--- ToDo: Localize;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 0.035;
		};
		class Pres_Budget_Screen_IncomeTaxLabel: RscText
		{
			idc = 1027;

			text = "Income Tax"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_PropertyTaxLabel: RscText
		{
			idc = 1028;

			text = "Property Tax"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_ExportRate: RscText
		{
			idc = 1029;

			text = "X"; //--- ToDo: Localize;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_IncomeRate: RscText
		{
			idc = 1030;

			text = "X"; //--- ToDo: Localize;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_PropertyRate: RscText
		{
			idc = 1031;

			text = "X"; //--- ToDo: Localize;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_PoliceArmouryButton: RscButton
		{
			idc = 1032;

			text = "Police Armoury"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0.5,1};
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_EdictsButton: RscButton
		{
			idc = 1033;

			text = "Edicts"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.5,0,0.75,1};
			sizeEx = 0.032;
		};
		class Pres_Budget_Screen_FactoryButton: RscButton
		{
			idc = 1034;

			text = "Factory Inventories"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.75,0.5,0,1};
			sizeEx = 0.032;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};

class Pres_Laws_Screen
{
	idd = 200;
	movingEnable = false;
	onLoad = "with uiNameSpade do {Pres_Laws_Screen = _this select 0}";
	class controls 
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Syhrus, v1.063, #Wyrapa)
		////////////////////////////////////////////////////////

		class Pres_Law_MainScreen_BG: Box
		{
			idc = 1800;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.473 * safezoneH;
			text = "";
		};
		class Pres_Laws_MainScreen_SpeedLimitsButton: RscButton
		{
			idc = 1600;
			text = "Speed Limits"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Pres_Laws_MainScreen_Aviation: RscButton
		{
			idc = 1602;
			text = "Aviation"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Pres_Laws_MainScreen_Guns: RscButton
		{
			idc = 1601;
			text = "Legal Weapons"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Pres_Laws_MainScreen_Boating: RscButton
		{
			idc = 1603;
			text = "Boating"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Pres_Laws_MainScreen_Punishments: RscButton
		{
			idc = 1604;
			text = "Punishments"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Pres_Laws_MainScreen_Close: RscButton
		{
			idc = 1605;
			text = "Close"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			action = "closeDialog 0;";
		};
		class Pres_Laws_MainScreen_Title: RscText
		{
			idc = 1000;
			text = "Laws"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.045;
		};
		class Pres_Tax_Secondary_BG: Box
		{
			idc = 1801;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.473 * safezoneH;
			text = "";
			sizeEx = 0.045;
		};
		class Pres_Laws_Speeds_City_Slider: RscSlider
		{
			idc = 1900;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Speeds_Town_Slider: RscSlider
		{
			idc = 1901;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Speeds_Sealed_Slider: RscSlider
		{
			idc = 1902;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Speeds_Unsealed_Slider: RscSlider
		{
			idc = 1903;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Speeds_Cities_Label: RscText
		{
			idc = 2000;

			text = "Cities"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Laws_Speeds_Towns_Label: RscText
		{
			idc = 2001;

			text = "Towns"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Laws_Speeds_Sealed_Label: RscText
		{
			idc = 2002;

			text = "Sealed Roads"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Laws_Speeds_Dirt_Label: RscText
		{
			idc = 2003;

			text = "Dirt Roads"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Laws_Speeds_City_Value: RscText
		{
			idc = 2004;

			text = "X"; //--- ToDo: Localize;
			x = 0.659844 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Speeds_Town_Value: RscText
		{
			idc = 2005;

			text = "X"; //--- ToDo: Localize;
			x = 0.659844 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Speeds_Sealed_Value: RscText
		{
			idc = 2006;

			text = "X"; //--- ToDo: Localize;
			x = 0.659844 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Speeds_Dirt_Value: RscText
		{
			idc = 2007;

			text = "X"; //--- ToDo: Localize;
			x = 0.659844 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Speeds_Confirm_Button: RscButton
		{
			idc = 1606;
			

			text = "Confirm Changes"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			action = "_handle = []execVM ""President\Pres_Laws_Speed_Dialog_Save.sqf"";"
		};
		class Pres_Laws_Speeds_Discard_Button: RscButton
		{
			idc = 1607;
			

			text = "Discard Changes"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			action = "_handle = []execVM ""President\Pres_Laws_Speed_Dialog_Reset.sqf"";"
		};
		
		class Pres_Laws_Guns_Legal_List
		{
			access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
			idc = 4002; // Control identification (without it, the control won't be displayed)
			type = 5; // Type 102
			style = 0x00 + 0x10; // Style
			default = 0; // Control selected by default (only one within a display can be used)
			blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

			x = 0.44328 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.33 * safezoneH;

			colorBackground[] = {0.7,0.7,0.7,1}; //Fill color
			colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
			colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)

			sizeEx = 0.02; // Text size
			font = "PuristaMedium"; // Font from CfgFontFamilies
			shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)

			colorPicture[] = {1,1,1,1}; // Picture color
			colorPictureSelected[] = {1,1,1,1}; // Selected picture color
			colorPictureDisabled[] = {1,1,1,0.5}; // Disabled picture color
			
			tooltip = ""; // Tooltip text
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

			period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected

			rowHeight = 0.024 * safezoneH; // Row height
			itemSpacing = 0; // Height of empty space between items
			maxHistoryDelay = 1; // Time since last keyboard type search to reset it
			canDrag = 0; // 1 (true) to allow item dragging
			
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

			// Scrollbar configuration (applied only when LB_TEXTURES style is used)
			class ListScrollBar
			{
				width = 0; // width of ListScrollBar
				height = 0; // height of ListScrollBar
				scrollSpeed = 0.01; // scrollSpeed of ListScrollBar

				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

				color[] = {1,1,1,1}; // Scrollbar color
			};

			onCanDestroy = "true";
			onDestroy = "false";
			onSetFocus = "false";
			onKillFocus = "false";
			onKeyDown = "false";
			onKeyUp = "false";
			onMouseButtonDown = "false";
			onMouseButtonUp = "false";
			onMouseButtonClick = "false";
			onMouseButtonDblClick = "false";
			onMouseZChanged = "false";
			onMouseMoving = "";
			onMouseHolding = "";

			onLBSelChanged = "false";
			onLBDblClick = "false";
			onLBDrag = "false";
			onLBDragging = "false";
			onLBDrop = "false";
		};
		
		class Pres_Laws_Guns_Confirm_Button: RscButton
		{
			idc = 1608;
			action = "_handle = []execVM ""President\Pres_Laws_Guns_Dialog_Save.sqf"";";

			text = "Confirm Changes"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Pres_Laws_Guns_Reset_Button: RscButton
		{
			idc = 1609;
			action = "_handle = []execVM ""President\Pres_Laws_Guns_Dialog_Reset.sqf"";";

			text = "Discard Changes"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
		};


		class Pres_Laws_Guns_Illegal_List
		{
			access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
			idc = 4003; // Control identification (without it, the control won't be displayed)
			type = 5; // Type 102
			style = 0x00 + 0x10; // Style
			default = 0; // Control selected by default (only one within a display can be used)
			blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

			x = 0.5825 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.33 * safezoneH;

			colorBackground[] = {0.7,0.7,0.7,1}; //Fill color
			colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
			colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)

			sizeEx = 0.02; // Text size
			font = "PuristaMedium"; // Font from CfgFontFamilies
			shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)

			colorPicture[] = {1,1,1,1}; // Picture color
			colorPictureSelected[] = {1,1,1,1}; // Selected picture color
			colorPictureDisabled[] = {1,1,1,0.5}; // Disabled picture color
			
			tooltip = ""; // Tooltip text
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

			period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected

			rowHeight = 0.024 * safezoneH; // Row height
			itemSpacing = 0; // Height of empty space between items
			maxHistoryDelay = 1; // Time since last keyboard type search to reset it
			canDrag = 0; // 1 (true) to allow item dragging
			
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

			// Scrollbar configuration (applied only when LB_TEXTURES style is used)
			class ListScrollBar
			{
				width = 0; // width of ListScrollBar
				height = 0; // height of ListScrollBar
				scrollSpeed = 0.01; // scrollSpeed of ListScrollBar

				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

				color[] = {1,1,1,1}; // Scrollbar color
			};

			onCanDestroy = "true";
			onDestroy = "false";
			onSetFocus = "false";
			onKillFocus = "false";
			onKeyDown = "false";
			onKeyUp = "false";
			onMouseButtonDown = "false";
			onMouseButtonUp = "false";
			onMouseButtonClick = "false";
			onMouseButtonDblClick = "false";
			onMouseZChanged = "false";
			onMouseMoving = "";
			onMouseHolding = "";

			onLBSelChanged = "false";
			onLBDblClick = "false";
			onLBDrag = "false";
			onLBDragging = "false";
			onLBDrop = "false";
		};
		class Pres_Laws_Guns_Legal_Label: RscText
		{
			idc = 2008;

			text = "Legal"; //--- ToDo: Localize;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Laws_Guns_Illegal_Label: RscText
		{
			idc = 2009;

			text = "Illegal"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Laws_Guns_MakeIllegal_Button: RscButton
		{
			idc = 1610;
			action = "_handle = [4002,4003,false]execVM ""Functions\UI_Move_Between_Listboxes.sqf"";";

			text = ">"; //--- ToDo: Localize;
			x = 0.559194 * safezoneW + safezoneX;
			y = 0.35766 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Laws_Guns_MakeLegal_Button: RscButton
		{
			idc = 1611;
			action = "_handle = [4003,4002,false]execVM ""Functions\UI_Move_Between_Listboxes.sqf"";";

			text = "<"; //--- ToDo: Localize;
			x = 0.559503 * safezoneW + safezoneX;
			y = 0.38318 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pres_Laws_Punishments_Slider: RscSlider
		{
			idc = 1905;

			x = 0.572187 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			
			onSliderPosChanged = "ctrlsetText [2010, str (SliderPosition 1905)]";
		};
		class Pres_Laws_Punishments_Slider_Text: RscText
		{
			idc = 2010;

			text = "X"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0409375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pres_Laws_Punishments_Confirm: RscButton
		{
			idc = 1612;
			action = "_handle = []execVM ""President\Pres_Laws_Punishments_Save.sqf"";";

			text = "Confirm Change"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			
			onButtonClick = "";
		};
		class Pres_Laws_Punishments_Discard: RscButton
		{
			idc = 1613;
			action = "_handle = []execVM ""President\Pres_Laws_Punishments_Reset.sqf"";";

			text = "Discard Change"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			
		};
		class Pres_Laws_Punishment_List
		{
			access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
			idc = 1504; // Control identification (without it, the control won't be displayed)
			type = 5; // Type 102
			style = 0x00 + 0x10; // Style
			default = 0; // Control selected by default (only one within a display can be used)
			blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

			x = 0.443281 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.363 * safezoneH;

			colorBackground[] = {0.7,0.7,0.7,1}; //Fill color
			colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
			colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)

			sizeEx = 0.03; // Text size
			font = "PuristaMedium"; // Font from CfgFontFamilies
			shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)

			colorPicture[] = {1,1,1,1}; // Picture color
			colorPictureSelected[] = {1,1,1,1}; // Selected picture color
			colorPictureDisabled[] = {1,1,1,0.5}; // Disabled picture color
			
			tooltip = ""; // Tooltip text
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

			period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected

			rowHeight = 0.024 * safezoneH; // Row height
			itemSpacing = 0; // Height of empty space between items
			maxHistoryDelay = 1; // Time since last keyboard type search to reset it
			canDrag = 0; // 1 (true) to allow item dragging
			
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

			// Scrollbar configuration (applied only when LB_TEXTURES style is used)
			class ListScrollBar
			{
				width = 0; // width of ListScrollBar
				height = 0; // height of ListScrollBar
				scrollSpeed = 0.01; // scrollSpeed of ListScrollBar

				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

				color[] = {1,1,1,1}; // Scrollbar color
			};

			onCanDestroy = "true";
			onDestroy = "false";
			onSetFocus = "false";
			onKillFocus = "false";
			onKeyDown = "false";
			onKeyUp = "false";
			onMouseButtonDown = "false";
			onMouseButtonUp = "false";
			onMouseButtonClick = "false";
			onMouseButtonDblClick = "false";
			onMouseZChanged = "false";
			onMouseMoving = "";
			onMouseHolding = "";

			onLBSelChanged = "_index = lbCurSel (_this select 0); _item = ((TanoaLawsVariables getVariable ""PunishmentValues"") select _index); sliderSetRange [1905, (_item select 2), (_item select 3)]; sliderSetPosition [1905, (_item select 1)]; ctrlsetText [2010, str(_item select 1)];";
			onLBDblClick = "false";
			onLBDrag = "false";
			onLBDragging = "false";
			onLBDrop = "false";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};
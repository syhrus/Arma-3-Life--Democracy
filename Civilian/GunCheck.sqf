[_this select 0] spawn {
	_thisPerson = (_this select 0);
	while{alive _thisPerson} do{
		_Illegal = LawsVariables getVariable "IllegalWeapons";
		if((primaryWeapon _thisPerson) in _Illegal) then{
			//hint "This Rifle/SMG is illegal!";
		};
		if((handgunWeapon _thisPerson) in _Illegal) then{
			//hint "This pistol is illegal!";
		};
		if((secondaryWeapon _thisPerson) in _Illegal) then{
			//hint "This launcher is illegal!";
		};
		sleep 1;
	};
}
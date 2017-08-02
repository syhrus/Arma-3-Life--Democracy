_me = _this select 1;

if (side (_this select 1) == west)then{
	//do the thing where the police get the evidence
}else{
	_evidence = (_this select 0) getVariable "EvidenceDetails";
	systemChat format ["Found ammo: %1 fired from %2, by %3" , (_evidence select 0), (_evidence select 1), (_evidence select 2)];
};

deleteVehicle (_this select 0);
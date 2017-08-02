_me = _this select 1;
_body = _this select 0;

_evidence = _body getVariable "ShootInfo";
systemChat format ["This person was shot with %1, from %2", (_evidence select 0), (_evidence select 1)];
_me = _this select 0;
_damage = _this select 1;
_shooter = _this select 2;
_bullet = _this select 3;

if(alive _me && _damage >= 1)then{
	_shootdir = [_me, _shooter] call BIS_fnc_dirTo;
	_me setVariable ["ShootInfo", [_bullet, _shootdir, _shooter]];
	_me addaction ["Examine Body", "Criminal\ExamineBody.sqf"];
};
_me setDamage _damage;
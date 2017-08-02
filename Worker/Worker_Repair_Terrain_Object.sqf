player allowDamage false;
_objects = nearestTerrainObjects [position player, [], 4];
{_x setDamage 0;} foreach _objects;
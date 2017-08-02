{
_buildings = nearestTerrainObjects [_x, [], 50];
_building = _buildings select 0;
hideObjectGlobal _building;
} foreach [[7212.05,7894.95,0.00140381], [7212.98,7884.92,0.00140381], [4053.86,4422.88,0.00131607], [4041.99,4435.11,0.0014267], [4051.73,4430.01,0.00152588]];
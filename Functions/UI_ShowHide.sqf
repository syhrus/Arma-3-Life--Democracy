//Takes 3 arguments
//1 - Display to act on
//2 - Array of idcs to show/hide
//3 - Boolean true = show, false = hide

disableSerialization;

_display = _this select 0;
_items = _this select 1;
_show = _this select 2;

{
	_current = _display displayCtrl _x;
	_current ctrlShow _show;
}foreach _items;
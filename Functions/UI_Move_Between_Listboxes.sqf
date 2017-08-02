//Takes 3 arguments
//0 - number - idc of control to take item FROM.
//1 - number - idc of control to add item TO.
//2 - boolean - true, item remains in original list; false, item is removed from original list.

_ListFrom = _this select 0;
_ListTo = _this select 1;
_ItemStays = _this select 2;

_currentSelection = lbCurSel _ListFrom;
_selectedItemData = lbData [_ListFrom, _currentSelection];
_selectedItemText = lbText [_ListFrom, _currentSelection];

if (_selectedItemData != "") then{

	_newIndex = lbAdd [_ListTo, _selectedItemText];
	lbSetData [_ListTo, _newIndex, _selectedItemData];
	lbsetPicture [_ListTo, (lbSize _ListTo)-1, lbPicture [_ListFrom, _currentSelection]];

	if(!(_ItemStays)) then{
		lbDelete [_ListFrom, _currentSelection];
	}
}
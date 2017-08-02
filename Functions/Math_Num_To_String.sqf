{
    _number = _this;
    _str = "";
    if (_number % 1 == 0) then
    {
        while { _number > 0 } do
        {
            _digit = floor (_number % 10);
            _str = (str _digit) + _str;
            _number = floor (_number / 10);
        };
    }
    else
    {
        _decimals = _number % 1;
        _decimals = _decimals * 1000000;
        _number = floor _number;
        _str = _number call MTP_fnc_numberToString;
        _str = _str + "." + str _decimals;
    };
    
    _str;
};
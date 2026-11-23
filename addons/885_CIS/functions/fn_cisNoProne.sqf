/*
    BPD_fnc_cisNoProne
    Keeps CIS droids on their feet (no prone, no "Down"/"Auto" stance).
    Crouching ("Middle", e.g. the BX combat roll) is left alone.

    Performance: instead of one scheduled loop per droid (which piles up in the
    script scheduler with large droid counts), every machine runs ONE CBA
    per-frame handler, every 2 seconds, over the droids that are local to it.

    Arguments:
        0: OBJECT - unit
*/
params [["_unit", objNull, [objNull]]];
if (isNull _unit) exitWith {};

// Re-register if the unit moves to this machine later (e.g. Zeus -> headless client)
if (isNil {_unit getVariable "BPD_CIS_noProneLocalEH"}) then {
    _unit setVariable ["BPD_CIS_noProneLocalEH", _unit addEventHandler ["Local", {
        params ["_u", "_isLocal"];
        if (_isLocal) then { [_u] call BPD_fnc_cisNoProne; };
    }]];
};

if (!local _unit) exitWith {};

if (isNil "BPD_CIS_noProneUnits") then {
    BPD_CIS_noProneUnits = [];
    [{
        BPD_CIS_noProneUnits = BPD_CIS_noProneUnits select { alive _x && {local _x} };
        {
            if (!isPlayer _x && {isNull objectParent _x} && {(stance _x == "PRONE") || {(toLower unitPos _x) in ["down", "auto"]}}) then {
                _x setUnitPos "UP";
            };
        } forEach BPD_CIS_noProneUnits;
    }, 2] call CBA_fnc_addPerFrameHandler;
};

BPD_CIS_noProneUnits pushBackUnique _unit;

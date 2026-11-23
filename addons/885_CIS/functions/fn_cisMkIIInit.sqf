/*
    BPD_fnc_cisMkIIInit
    Mk II droid setup: more aggressive AI that works alongside Vcom AI.
    Runs once per unit (where the unit is local); group settings are applied once per group.

    WebKnight Droids itself is started by the WBK init hooks in config.cpp
    (B2 through WBK_LS_B2). WBK turns LAMBS off for its droids but leaves Vcom alone,
    so Vcom keeps handling movement/flanking while the settings below make the droids
    push instead of hanging back.

    Optional config value on the unit class:
        BPD_droidHealth = <number>;  // overrides WBK's CBA health setting for this unit (e.g. RC B1)

    Arguments:
        0: OBJECT - unit
*/
params [["_unit", objNull, [objNull]]];
if (isNull _unit || {!local _unit} || {isPlayer _unit}) exitWith {};

// --- Unit: never break, react and engage fast ---
_unit allowFleeing 0;
{ _unit setSkill _x; } forEach [
    ["courage", 1],
    ["commanding", 1],
    ["general", 0.9],
    ["aimingSpeed", 0.7],
    ["spotDistance", 0.9],
    ["spotTime", 0.9],
    ["reloadSpeed", 1]
];

// --- Custom WBK health (set after WBK has initialised the droid) ---
private _health = getNumber (configOf _unit >> "BPD_droidHealth");
if (_health > 0) then {
    [
        { !alive (_this # 0) || {!isNil {(_this # 0) getVariable "Droid_Health"}} },
        { params ["_u", "_h"]; if (alive _u) then { _u setVariable ["Droid_Health", _h, true]; }; },
        [_unit, _health],
        15
    ] call CBA_fnc_waitUntilAndExecute;
};

// --- Group: always on the attack, engage at will, keep Vcom on ---
private _grp = group _unit;
if (_grp getVariable ["BPD_CIS_MkII_grp", false]) exitWith {};
_grp setVariable ["BPD_CIS_MkII_grp", true];

_grp allowFleeing 0;
_grp setCombatMode "RED";
_grp enableAttack true;
_grp setSpeedMode "FULL";
_grp setVariable ["Vcm_Disable", false, true];  // make sure Vcom is not switched off for this group

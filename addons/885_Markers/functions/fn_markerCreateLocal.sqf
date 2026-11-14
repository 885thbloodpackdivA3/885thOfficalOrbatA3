/*
    BPD_fnc_markerCreateLocal
    Runs on each machine (incl. JIP). Creates the marker locally only if the
    local player is on the same side as the player who placed it.
*/
params ["_name", "_pos", "_type", "_color", "_text", "_side"];

if (!hasInterface) exitWith {};

_this spawn {
    params ["_name", "_pos", "_type", "_color", "_text", "_side"];

    // JIP messages can arrive before the player object exists
    waitUntil { !isNull player };
    if (side group player != _side) exitWith {};

    deleteMarkerLocal _name;
    private _m = createMarkerLocal [_name, _pos];
    _m setMarkerTypeLocal _type;
    _m setMarkerColorLocal _color;
    _m setMarkerTextLocal _text;
};

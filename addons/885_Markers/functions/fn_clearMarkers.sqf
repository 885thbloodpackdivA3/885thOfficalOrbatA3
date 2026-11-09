/*
    BPD_fnc_clearMarkers
    Removes every marker the local player has placed, for everyone, and
    drops their JIP queue entries.
*/
if (!hasInterface) exitWith {};

private _mine = missionNamespace getVariable ["BPD_markers_mine", []];
if (_mine isEqualTo []) exitWith { systemChat "[885th] You have no markers placed."; };

{
    [_x] remoteExec ["BPD_fnc_markerDeleteLocal", 0];
    remoteExec ["", _x]; // remove from JIP queue
} forEach _mine;

systemChat format ["[885th] Cleared %1 marker(s).", count _mine];
missionNamespace setVariable ["BPD_markers_mine", []];
missionNamespace setVariable ["BPD_markers_usedNames", createHashMap];

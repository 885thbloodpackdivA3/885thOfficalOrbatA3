params ["_box"];

if (isServer) then {
	[_box] remoteExec ["BPD_fnc_gnkArsenal"];
} else {
	_box call BPD_fnc_gnkArsenal;
};
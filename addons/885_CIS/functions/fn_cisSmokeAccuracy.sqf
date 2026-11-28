/*
    BPD_fnc_cisSmokeAccuracy
    B1 droids lose most of their accuracy when smoke is between them and their target,
    and only get it back once they have re-acquired the target (clear line of sight
    for a few seconds after the smoke).

    How it works:
      - Every machine runs ONE CBA per-frame handler (every 1 s) over the B1s local to it,
        the same pattern as BPD_fnc_cisNoProne, so big droid counts don't flood the scheduler.
      - "Smoke" = any SmokeShell object (hand smoke, GL smoke, Zeus smoke) that has landed
        and sits within BPD_CIS_smokeRadius metres of the line between the droid's eyes
        and its target. Clouds drift, so the radius is generous.
      - While smoked: aimingAccuracy drops to BPD_CIS_smokeAccuracyMult of its normal value.
        The droid keeps shooting, just badly (blind suppressive fire).
      - Re-acquire: once the smoke is no longer on the line AND the target has been visible
        for BPD_CIS_smokeReacquireTime seconds, normal accuracy comes back. If the droid
        never sees the target again, accuracy is restored BPD_CIS_smokeTimeout seconds
        after the last smoke.

    Tuning (set in init.sqf / initServer.sqf / debug console before droids spawn, optional):
        BPD_CIS_smokeAccuracyMult  = 0.25;  // accuracy while smoked (0.25 = a quarter)
        BPD_CIS_smokeRadius        = 8;     // metres from the line of fire
        BPD_CIS_smokeReacquireTime = 3;     // seconds of clear view to re-acquire
        BPD_CIS_smokeTimeout       = 20;    // fail-safe restore

    Arguments:
        0: OBJECT - unit
*/
params [["_unit", objNull, [objNull]]];
if (isNull _unit) exitWith {};

// Re-register if the unit moves to this machine later (e.g. Zeus -> headless client)
if (isNil {_unit getVariable "BPD_CIS_smokeLocalEH"}) then {
    _unit setVariable ["BPD_CIS_smokeLocalEH", _unit addEventHandler ["Local", {
        params ["_u", "_isLocal"];
        if (_isLocal) then { [_u] call BPD_fnc_cisSmokeAccuracy; };
    }]];
};

if (!local _unit) exitWith {};

if (isNil "BPD_CIS_smokeUnits") then {
    if (isNil "BPD_CIS_smokeAccuracyMult")  then { BPD_CIS_smokeAccuracyMult  = 0.25; };
    if (isNil "BPD_CIS_smokeRadius")        then { BPD_CIS_smokeRadius        = 8;    };
    if (isNil "BPD_CIS_smokeReacquireTime") then { BPD_CIS_smokeReacquireTime = 3;    };
    if (isNil "BPD_CIS_smokeTimeout")       then { BPD_CIS_smokeTimeout       = 20;   };

    // Restore normal accuracy and clear the smoke state
    BPD_CIS_fnc_smokeRestore = {
        params ["_u"];
        _u setSkill ["aimingAccuracy", _u getVariable ["BPD_CIS_smokeOrigAcc", 0.5]];
        _u setVariable ["BPD_CIS_smoked", nil, true];
        _u setVariable ["BPD_CIS_smokeOrigAcc", nil, true];
        _u setVariable ["BPD_CIS_smokeLast", nil];
        _u setVariable ["BPD_CIS_smokeClearSince", nil];
    };

    // Is a landed smoke shell within the radius of the segment _from -> _to (ASL)?
    BPD_CIS_fnc_smokeOnLine = {
        params ["_from", "_to"];
        private _d = _to vectorDiff _from;
        private _len2 = _d vectorDotProduct _d;
        if (_len2 < 1) exitWith { false };
        private _mid = _from vectorAdd (_d vectorMultiply 0.5);
        private _smokes = (ASLToAGL _mid) nearObjects ["SmokeShell", (sqrt _len2) / 2 + BPD_CIS_smokeRadius];
        (_smokes findIf {
            (vectorMagnitude velocity _x < 2) && {
                // cloud sits above the grenade, so test a point ~2 m up
                private _p = (getPosASL _x) vectorAdd [0, 0, 2];
                private _t = (((_p vectorDiff _from) vectorDotProduct _d) / _len2) max 0 min 1;
                (_p vectorDistance (_from vectorAdd (_d vectorMultiply _t))) < BPD_CIS_smokeRadius
            }
        }) > -1
    };

    BPD_CIS_smokeUnits = [];
    [{
        BPD_CIS_smokeUnits = BPD_CIS_smokeUnits select { alive _x && {local _x} };
        private _now = time;
        {
            private _u = _x;
            call {
                if (isPlayer _u) exitWith {
                    if (_u getVariable ["BPD_CIS_smoked", false]) then { [_u] call BPD_CIS_fnc_smokeRestore; };
                };

                private _smoked = _u getVariable ["BPD_CIS_smoked", false];
                private _tgt = getAttackTarget _u;
                if (isNull _tgt) then { _tgt = assignedTarget _u; };

                // Nothing to shoot at: only the fail-safe matters
                if (isNull _tgt || {!alive _tgt}) exitWith {
                    if (_smoked && {_now - (_u getVariable ["BPD_CIS_smokeLast", 0]) > BPD_CIS_smokeTimeout}) then {
                        [_u] call BPD_CIS_fnc_smokeRestore;
                    };
                };

                private _from = eyePos _u;
                private _to = aimPos _tgt;
                private _inSmoke = (_from vectorDistance _to < 800) && {[_from, _to] call BPD_CIS_fnc_smokeOnLine};

                if (_inSmoke) exitWith {
                    if (!_smoked) then {
                        private _acc = _u skill "aimingAccuracy";
                        _u setVariable ["BPD_CIS_smokeOrigAcc", _acc, true];
                        _u setVariable ["BPD_CIS_smoked", true, true];
                        _u setSkill ["aimingAccuracy", (_acc * BPD_CIS_smokeAccuracyMult) max 0.02];
                    };
                    _u setVariable ["BPD_CIS_smokeLast", _now];
                    _u setVariable ["BPD_CIS_smokeClearSince", nil];
                };

                if (!_smoked) exitWith {};

                // Smoke is off the line: re-acquire once the target is actually visible for a bit
                if (([_u, "VIEW", _tgt] checkVisibility [_from, _to]) > 0.4) then {
                    private _since = _u getVariable ["BPD_CIS_smokeClearSince", -1];
                    if (_since < 0) then {
                        _u setVariable ["BPD_CIS_smokeClearSince", _now];
                    } else {
                        if (_now - _since >= BPD_CIS_smokeReacquireTime) then { [_u] call BPD_CIS_fnc_smokeRestore; };
                    };
                } else {
                    _u setVariable ["BPD_CIS_smokeClearSince", nil];
                    if (_now - (_u getVariable ["BPD_CIS_smokeLast", 0]) > BPD_CIS_smokeTimeout) then {
                        [_u] call BPD_CIS_fnc_smokeRestore;
                    };
                };
            };
        } forEach BPD_CIS_smokeUnits;
    }, 1] call CBA_fnc_addPerFrameHandler;
};

BPD_CIS_smokeUnits pushBackUnique _unit;

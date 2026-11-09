/*
    BPD_fnc_placeMarker
    Places a tactical map marker visible to the player's side (JIP-safe).

    Arguments:
        0: STRING - Marker kind: "LZ", "EZ", "DZ", "FM", "SUP", "DOT", "CCP"
        1: BOOL   - true = place at aim point, false = at player position (default false)
                    FM (Fire Mission) is always placed at the aim point.

    LZ / EZ / DZ / FM / CCP replace the player's previous marker of that kind.
    DOT markers stack until cleared with BPD_fnc_clearMarkers.
*/
params [["_kind", "DOT", [""]], ["_atAim", false, [false]]];

if (!hasInterface) exitWith {};

private _defs = createHashMapFromArray [
    // kind,  [markerType,   color,         label]
    ["LZ",    ["hd_pickup",    "ColorBlue",  "LZ"]],   // "Pick Up" from the Insert Marker dialog
    ["EZ",    ["hd_pickup",    "ColorBlue",  "EZ"]],
    ["DZ",    ["hd_pickup",    "ColorBlue",  "DZ"]],
    ["FM",    ["hd_destroy",   "ColorRed",   "FM"]],   // Fire Mission (aim point only)
    ["SUP",   ["b_support",    "ColorYellow", "SUPPLY"]], // NATO support/logistics symbol
    ["DOT",   ["hd_dot",     "ColorBlack", ""]],     // same "Dot" as the in-game Insert Marker dialog
    // "@Name" = look the marker class up by its in-game display name, with a fallback class
    ["CCP",   ["@Red Crystal|loc_Hospital", "ColorWhite", "CCP"]]
];

if !(_kind in _defs) exitWith { systemChat format ["[885th] Unknown marker kind: %1", _kind]; };
(_defs get _kind) params ["_type", "_color", "_label"];

// Resolve "@Display Name|fallbackClass" against CfgMarkers (cached per session)
if ((_type select [0, 1]) isEqualTo "@") then {
    private _cache = missionNamespace getVariable ["BPD_markers_typeCache", createHashMap];
    missionNamespace setVariable ["BPD_markers_typeCache", _cache];
    private _key = _type;
    _type = _cache getOrDefaultCall [_key, {
        (_key select [1]) splitString "|" params ["_display", ["_fallback", "mil_dot"]];
        private _found = (configFile >> "CfgMarkers") call {
            private _hits = ("getText (_x >> 'name') == _display" configClasses _this);
            if (_hits isEqualTo []) then { "" } else { configName (_hits select 0) }
        };
        [_found, _fallback] select (_found isEqualTo "")
    }, true];
};

// Fire missions are always plotted where the player is looking
if (_kind isEqualTo "FM") then { _atAim = true; };

// --- Position ---
private _pos = getPosATL player;
if (_atAim) then {
    private _eye = eyePos player;
    private _hits = lineIntersectsSurfaces [_eye, _eye vectorAdd ((getCameraViewDirection player) vectorMultiply 2000), player, objNull, true, 1, "VIEW", "GEOM"];
    _pos = if (_hits isEqualTo []) then { [] } else { ASLToATL ((_hits select 0) select 0) };
};
if (_pos isEqualTo []) exitWith { systemChat "[885th] No valid aim point within 2 km."; };
_pos = [_pos select 0, _pos select 1, 0];

// --- Unique name per player (and per dot) ---
private _uid = getPlayerUID player;
if (_uid isEqualTo "") then { _uid = str clientOwner; };

private _name = if (_kind isEqualTo "DOT") then {
    private _n = (missionNamespace getVariable ["BPD_markers_dotCount", 0]) + 1;
    missionNamespace setVariable ["BPD_markers_dotCount", _n];
    format ["BPD_mkr_%1_DOT_%2", _uid, _n]
} else {
    format ["BPD_mkr_%1_%2", _uid, _kind]
};

// --- Random codename per marker kind ---
private _names = createHashMapFromArray [
    // Clone Wars era - LZ: battlefront worlds
    ["LZ",  ["Christophsis", "Geonosis", "Ryloth", "Umbara", "Felucia", "Mygeeto", "Saleucami", "Teth", "Rishi", "Anaxes", "Lola Sayu", "Onderon", "Utapau", "Kashyyyk", "Mon Cala"]],
    // EZ: Republic warships
    ["EZ",  ["Resolute", "Negotiator", "Vigilance", "Tranquility", "Endurance", "Triumphant", "Guarlara", "Steadfast", "Twilight", "Integrity", "Leveler", "Defender", "Valor", "Courageous", "Redeemer"]],
    // DZ: galactic beasts
    ["DZ",  ["Rancor", "Acklay", "Nexu", "Reek", "Krayt", "Varactyl", "Mynock", "Zillo", "Gundark", "Wampa", "Dianoga", "Sarlacc", "Kowakian", "Bantha", "Tauntaun"]],
    // FM: Republic artillery & firepower
    ["FM",  ["Hammer", "Anvil", "Sunder", "Hellfire", "Barrage", "Juggernaut", "Saber", "Torrent", "Ion", "Proton", "Turbolaser", "Thermal", "Detonator", "Ordnance", "Wrath"]],
    // SUPPLY: materials & shipyards
    ["SUP", ["Coaxium", "Tibanna", "Kyber", "Durasteel", "Plastoid", "Powercell", "Kuat", "Fondor", "Rothana", "Corellia", "Bespin", "Lothal", "Ration", "Cargo", "Freighter"]],
    // CCP: Republic medicine
    ["CCP", ["Bacta", "Kolto", "Tipoca", "Kamino", "Kix", "Coric", "Medstar", "Synthflesh", "Stimpack", "Rendili", "Halcyon", "Mercy", "Lifeline", "Sanctum", "Haven"]]
];

// Shared pool mixed into every marker kind above
private _shared = [
    // Clone troopers & commanders
    "Rex", "Cody", "Fives", "Echo", "Hardcase", "Jesse", "Wolffe", "Gree", "Bly", "Bacara",
    "Neyo", "Fox", "Thorn", "Thire", "Appo", "Dogma", "Tup", "Hevy", "Cutup", "Droidbait",
    "Waxer", "Boil", "Gregor", "Hunter", "Wrecker", "Crosshair", "Tech", "Odd Ball", "Ponds", "Keeli",
    // Star Wars creatures
    "Dewback", "Eopie", "Kaadu", "Shaak", "Fambaa", "Orray", "Ronto", "Boga", "Massiff", "Tooka",
    "Blurrg", "Opee", "Kybuck", "Colo", "Nerf", "Womp Rat", "Anooba", "Akk Dog", "Narglatch", "Kouhun"
];
{ _names set [_x, (_names get _x) + _shared]; } forEach keys _names;

// Don't reuse a codename that's currently on one of your markers
private _used = missionNamespace getVariable ["BPD_markers_usedNames", createHashMap];
private _codename = "";
if (_kind in _names) then {
    _used deleteAt _name; // this marker is being replaced, free its old name
    private _taken = values _used;
    private _pool = (_names get _kind) select { !(_x in _taken) };
    if (_pool isEqualTo []) then { _pool = _names get _kind; };
    _codename = selectRandom _pool;
    _used set [_name, _codename];
    missionNamespace setVariable ["BPD_markers_usedNames", _used];
    _codename = toUpper _codename;
};

private _grid = mapGridPosition _pos;
private _text = call {
    if (_label isEqualTo "") exitWith { "" };
    // Fire missions show no squad name
    if (_kind isEqualTo "FM") exitWith { format ["%1 %2 [%3]", _label, _codename, _grid] };
    format ["%1 %2 - %3 [%4]", _label, _codename, groupId group player, _grid]
};
private _side = side group player;

// Create on every client of this side; JIP id = marker name, so re-placing replaces the queued JIP entry too
[_name, _pos, _type, _color, _text, _side] remoteExec ["BPD_fnc_markerCreateLocal", 0, _name];

// Track locally for "Clear My Markers"
private _mine = missionNamespace getVariable ["BPD_markers_mine", []];
_mine pushBackUnique _name;
missionNamespace setVariable ["BPD_markers_mine", _mine];

systemChat format ["[885th] %1 marked at grid %2", [format ["%1 %2", _label, _codename], "Dot"] select (_label isEqualTo ""), _grid];

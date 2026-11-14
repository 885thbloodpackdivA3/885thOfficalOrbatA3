class CfgPatches
{
	class 885_Markers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {"cba_main", "ace_interact_menu"};
		author = "AifeSupport";
	};
};

class CfgFunctions
{
	class 885_Markers_Functions
	{
		tag = "BPD";
		class Markers
		{
			file = "885_Markers\functions";
			class placeMarker {};
			class markerCreateLocal {};
			class markerDeleteLocal {};
			class clearMarkers {};
		};
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class BPD_Markers
			{
				displayName = "Place Marker";
				condition = "alive _player && {isNull objectParent _player}";
				exceptions[] = {};
				statement = "";
				icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\map_ca.paa";

				class BPD_Marker_LZ
				{
					displayName = "LZ - Landing Zone";
					condition = "true";
					statement = "";
					icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\heli_ca.paa";
					class BPD_Marker_LZ_Here
					{
						displayName = "At My Position";
						condition = "true";
						statement = "['LZ', false] call BPD_fnc_placeMarker";
					};
					class BPD_Marker_LZ_Aim
					{
						displayName = "At Aim Point";
						condition = "true";
						statement = "['LZ', true] call BPD_fnc_placeMarker";
					};
				};
				class BPD_Marker_EZ
				{
					displayName = "EZ - Extraction Zone";
					condition = "true";
					statement = "";
					icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\takeoff_ca.paa";
					class BPD_Marker_EZ_Here
					{
						displayName = "At My Position";
						condition = "true";
						statement = "['EZ', false] call BPD_fnc_placeMarker";
					};
					class BPD_Marker_EZ_Aim
					{
						displayName = "At Aim Point";
						condition = "true";
						statement = "['EZ', true] call BPD_fnc_placeMarker";
					};
				};
				class BPD_Marker_DZ
				{
					displayName = "DZ - Drop Zone";
					condition = "true";
					statement = "";
					icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\land_ca.paa";
					class BPD_Marker_DZ_Here
					{
						displayName = "At My Position";
						condition = "true";
						statement = "['DZ', false] call BPD_fnc_placeMarker";
					};
					class BPD_Marker_DZ_Aim
					{
						displayName = "At Aim Point";
						condition = "true";
						statement = "['DZ', true] call BPD_fnc_placeMarker";
					};
				};
				class BPD_Marker_CCP
				{
					displayName = "CCP - Casualty Collection Point";
					condition = "true";
					statement = "";
					icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\heal_ca.paa";
					class BPD_Marker_CCP_Here
					{
						displayName = "At My Position";
						condition = "true";
						statement = "['CCP', false] call BPD_fnc_placeMarker";
					};
					class BPD_Marker_CCP_Aim
					{
						displayName = "At Aim Point";
						condition = "true";
						statement = "['CCP', true] call BPD_fnc_placeMarker";
					};
				};
				class BPD_Marker_FM
				{
					displayName = "FM - Fire Mission (Aim Point)";
					condition = "true";
					statement = "['FM', true] call BPD_fnc_placeMarker";
					icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa";
				};
				class BPD_Marker_SUP
				{
					displayName = "Supply";
					condition = "true";
					statement = "";
					icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\box_ca.paa";
					class BPD_Marker_SUP_Here
					{
						displayName = "At My Position";
						condition = "true";
						statement = "['SUP', false] call BPD_fnc_placeMarker";
					};
					class BPD_Marker_SUP_Aim
					{
						displayName = "At Aim Point";
						condition = "true";
						statement = "['SUP', true] call BPD_fnc_placeMarker";
					};
				};
				class BPD_Marker_DOT
				{
					displayName = "Dot (Black)";
					condition = "true";
					statement = "";
					icon = "\a3\ui_f\data\map\markers\military\dot_ca.paa";
					class BPD_Marker_DOT_Here
					{
						displayName = "At My Position";
						condition = "true";
						statement = "['DOT', false] call BPD_fnc_placeMarker";
					};
					class BPD_Marker_DOT_Aim
					{
						displayName = "At Aim Point";
						condition = "true";
						statement = "['DOT', true] call BPD_fnc_placeMarker";
					};
				};

				class BPD_Marker_Clear
				{
					displayName = "Clear My Markers";
					condition = "!((missionNamespace getVariable ['BPD_markers_mine', []]) isEqualTo [])";
					statement = "call BPD_fnc_clearMarkers";
					icon = "\a3\ui_f\data\igui\cfg\actions\obsolete\ui_action_cancel_ca.paa";
				};
			};
		};
	};
};

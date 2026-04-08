#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
class CfgPatches {
    class Civ_A {
        units[] = {
            "civ_a_man",
            "civ_a_work",
            "civ_a_farm",
            "civ_a_lead",
            "civ_a_aid",
            "civ_a_mech",
            "civ_a_guy"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "AifeSupport";
        authors[] = {"AifeSupport"};
    };
};
class CfgFactionClasses {
    class Civ_A {
        displayName = "[885th] Civilian (Various)";
        side = 3;
        flag = "\a3\Data_f\Flags\flag_Altis_co.paa";
        icon = "\a3\Data_f\Flags\flag_Altis_co.paa";
        priority = 2;
    };
};

class CfgGroups {
    class Civilian {
        class Civ_A {
            name = "[885th] Civilian (Various)";
        };
    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class ls_civ_randomNearHuman_m_polo1;
    class ls_civ_randomNearHuman_m_polo1_OCimport_01 : ls_civ_randomNearHuman_m_polo1 { scope = 0; class EventHandlers; };
    class ls_civ_randomNearHuman_m_polo1_OCimport_02 : ls_civ_randomNearHuman_m_polo1_OCimport_01 { class EventHandlers; };

    class ls_civ_randomNearHuman_m_worker;
    class ls_civ_randomNearHuman_m_worker_OCimport_01 : ls_civ_randomNearHuman_m_worker { scope = 0; class EventHandlers; };
    class ls_civ_randomNearHuman_m_worker_OCimport_02 : ls_civ_randomNearHuman_m_worker_OCimport_01 { class EventHandlers; };

    class ls_civ_randomNearHuman_m_scientist;
    class ls_civ_randomNearHuman_m_scientist_OCimport_01 : ls_civ_randomNearHuman_m_scientist { scope = 0; class EventHandlers; };
    class ls_civ_randomNearHuman_m_scientist_OCimport_02 : ls_civ_randomNearHuman_m_scientist_OCimport_01 { class EventHandlers; };

    class ls_civ_randomNearHuman_m_pilot;
    class ls_civ_randomNearHuman_m_pilot_OCimport_01 : ls_civ_randomNearHuman_m_pilot { scope = 0; class EventHandlers; };
    class ls_civ_randomNearHuman_m_pilot_OCimport_02 : ls_civ_randomNearHuman_m_pilot_OCimport_01 { class EventHandlers; };

    class ls_civ_randomNearHuman_m_officer;
    class ls_civ_randomNearHuman_m_officer_OCimport_01 : ls_civ_randomNearHuman_m_officer { scope = 0; class EventHandlers; };
    class ls_civ_randomNearHuman_m_officer_OCimport_02 : ls_civ_randomNearHuman_m_officer_OCimport_01 { class EventHandlers; };


    class civ_a_man : ls_civ_randomNearHuman_m_polo1_OCimport_02 {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Man (Random)";
        side = 3;
        faction = "Civ_A";

        identityTypes[] = {"Head_m_lsRandom","LanguageENG_F"};

        uniformClass = "U_C_Poor_1";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Poor_1",{{"ACE_EarPlugs",1}}},{},{},"","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class civ_a_work : ls_civ_randomNearHuman_m_worker_OCimport_02 {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Worker (Random)";
        side = 3;
        faction = "Civ_A";

        identityTypes[] = {"Head_m_lsRandom","LanguageENG_F"};

        uniformClass = "U_C_WorkerCoveralls";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_WorkerCoveralls",{{"ACE_EarPlugs",1}}},{},{},"","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class civ_a_farm : ls_civ_randomNearHuman_m_polo1_OCimport_02 {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Farmer (Random)";
        side = 3;
        faction = "Civ_A";

        identityTypes[] = {"Head_m_lsRandom","LanguageENG_F"};

        uniformClass = "U_C_Uniform_Farmer_01_F";

        linkedItems[] = {"H_StrawHat_dark","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_StrawHat_dark","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Uniform_Farmer_01_F",{{"ACE_EarPlugs",1}}},{},{},"H_StrawHat_dark","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class civ_a_lead : ls_civ_randomNearHuman_m_scientist_OCimport_02 {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leader (Random)";
        side = 3;
        faction = "Civ_A";

        identityTypes[] = {"Head_m_lsRandom","LanguageENG_F"};

        uniformClass = "U_C_FormalSuit_01_gray_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_FormalSuit_01_gray_F",{{"ACE_EarPlugs",1}}},{},{},"","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class civ_a_aid : ls_civ_randomNearHuman_m_worker_OCimport_02 {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aid Worker (Random)";
        side = 3;
        faction = "Civ_A";

        identityTypes[] = {"Head_m_lsRandom","LanguageENG_F"};

        uniformClass = "U_C_Paramedic_01_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Paramedic_01_F",{{"ACE_EarPlugs",1}}},{},{},"","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class civ_a_mech : ls_civ_randomNearHuman_m_pilot_OCimport_02 {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mechanic (Random)";
        side = 3;
        faction = "Civ_A";

        identityTypes[] = {"Head_m_lsRandom","LanguageENG_F"};

        uniformClass = "U_C_Mechanic_01_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        backpack = "B_Messenger_Gray_F";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Mechanic_01_F",{{"ACE_EarPlugs",1}}},{},{"B_Messenger_Gray_F",{}},"","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class civ_a_guy : ls_civ_randomNearHuman_m_officer_OCimport_02 {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Some Guy (Random)";
        side = 3;
        faction = "Civ_A";

        identityTypes[] = {"Head_m_lsRandom","LanguageENG_F"};

        uniformClass = "U_C_HunterBody_grn";

        linkedItems[] = {"ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_HunterBody_grn",{{"ACE_EarPlugs",1}}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};
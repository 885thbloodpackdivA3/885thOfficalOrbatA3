#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a

class CfgPatches
{
    class 885th_CIS
    {
        units[] = {
            "885th_CIS_droid",
            "885th_CIS_droid_commander",
            "885th_CIS_droid_repeater",
            "885th_CIS_droid_AT",
            "885th_CIS_droid_pilot",
            "885th_CIS_droid_sniper",
            "885th_CIS_droid_BX_sniper",
            "885th_CIS_droid_BX_commando",
            "885th_CIS_droid_B2",
            "885th_CIS_MkII_droid",
            "885th_CIS_MkII_droid_repeater",
            "885th_CIS_MkII_droid_sniper",
            "885th_CIS_MkII_droid_AT",
            "885th_CIS_MkII_droid_commander",
            "885th_CIS_MkII_droid_RC",
            "885th_CIS_MkII_droid_B2",
            "885th_CIS_MkII_droid_BX_commando",
            "885th_CIS_MkII_droid_BX_sniper",
            "885th_CIS_AAT",
            "885th_CIS_GAT",
            "885th_CIS_HAAT",
            "885th_CIS_HMPG",
            "885th_CIS_HMPT",
            "885th_CIS_Hailfire_AA",
            "885th_CIS_Hailfire_R",
            "885th_CIS_MAFG",
            "885th_CIS_MAFT",
            "885th_CIS_TriFighter",
            "885th_CIS_Vulture",
            "885th_CIS_Vulture_AA",
            "885th_CIS_Vulture_CAS"};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "TAS_Characters_Droids_B1Series", "ls_characters_droid", "JLTS_characters_DroidArmor", "JLTS_radios", "JLTS_core",
            "Indecisive_Armoury_units", "IDA_Ammo", "3AS_Weapons_E60R",
            "3AS_AAT", "3AS_GAT", "3AS_HMP", "3AS_CIS_Heli_MAF", "3AS_Hailfire", "3AS_Tri_Fighter", "3AS_Vulture",
            "885th_Weapons", "885th_Armor",
            "cba_xeh", "WBK_DroidsSw", "WBK_Droids_LS",  // WebKnight Droids is required for the Mk II droids (Mk II B2 is built on WBK_LS_B2)
            "ls_dubbing"                                 // LS Core droid radio voice (ls_b1BattleDroid)
        };
        author = "AifeSupport";
    };
};

class CfgFunctions
{
    class 885_CIS_Functions
    {
        tag = "BPD";
        class CIS
        {
            file = "885_CIS\functions";
            class cisNoProne {};
            class cisMkIIInit {};
        };
    };
};

class CfgFactionClasses
{
    class o_cis
    {
        displayName = "[885th] CIS";
        side = 0;
        flag = "\MRC\JLTS\Core_mod_droids\data\markers\flags\cis_ca.paa";
        icon = "\MRC\JLTS\Core_mod_droids\data\markers\flags\cis_ca.paa";
        priority = 0;
    };
};

class CFgEditorSubcategories
{
    class Sub885thCISDroids
    {
        side = 0;
        displayName = "Battledroids Mk I";
        scope = 2;
        scopeCurator = 2;
    };
    class Sub885thCISDroidsMkII
    {
        side = 0;
        displayName = "Battledroids Mk II";
        scope = 2;
        scopeCurator = 2;
    };
    class Sub885thCISTanks
    {
        side = 0;
        displayName = "Tanks";
        scope = 2;
        scopeCurator = 2;
    };
    class Sub885thCISFighters
    {
        side = 0;
        displayName = "Fighters";
        scope = 2;
        scopeCurator = 2;
    };
    class Sub885thCISGunships
    {
        side = 0;
        displayName = "Gunships";
        scope = 2;
        scopeCurator = 2;
    };
    class Sub885thCISOfficials
    {
        side = 0;
        displayName = "Officials";
        scope = 2;
        scopeCurator = 2;
    };
};

class CfgGroups
{
    class East
    {
        name = "OPFOR";
        side = 0;
        class 885_CIS
        {
            name = "[885th] CIS";
            scope = 2;
            class Infantry
            {
                name = "Infantry Mk I";

                class cis_droid_team
                {
                    name = "Droid Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "885th_CIS_droid_repeater";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit3
                    {
                        position[] = {5, 0, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_AT";
                    };
                };

                class cis_droid_squad
                {
                    name = "Droid Squad";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_droid_commander";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_repeater";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_AT";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_repeater";
                    };
                    class Unit5
                    {
                        position[] = {15, -15, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                };

                class cis_droid_pile
                {
                    name = "Roger Roger";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit5
                    {
                        position[] = {15, -15, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit8
                    {
                        position[] = {20, -20, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                    class Unit9
                    {
                        position[] = {20, -20, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid";
                    };
                };

                class cis_droid_heavy_team
                {
                    name = "Heavy Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_repeater";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_droid_B2";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "885th_CIS_droid_AT";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = "CAPTAIN";
                        side = 0;
                        vehicle = "885th_CIS_droid_commander";
                    };
                };

                class cis_sniper_team
                {
                    name = "Sniper Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_droid_commander";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_sniper";
                    };
                };

                class cis_infantry_anti_tank_team
                {
                    name = "Anti-Tank Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_droid_commander";
                    };
                    class Unit1
                    {
                        position[] = {10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_AT";
                    };
                };
            };
            class SpecOps
            {
                name = "Spec Ops Mk I";
                class cis_commando_team
                {
                    name = "Commando Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_droid_BX_commando";
                    };
                    class Unit1
                    {
                        position[] = {2, 0, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_BX_commando";
                    };
                    class Unit2
                    {
                        position[] = {0, 2, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_BX_commando";
                    };
                    class Unit3
                    {
                        position[] = {3, 2, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_BX_sniper";
                    };
                };
            };
            class InfantryMkII
            {
                name = "Infantry Mk II";

                class cis_droid_team_mk2
                {
                    name = "Droid Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_repeater";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit3
                    {
                        position[] = {5, 0, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_AT";
                    };
                };

                class cis_droid_squad_mk2
                {
                    name = "Droid Squad";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_commander";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_repeater";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_AT";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_repeater";
                    };
                    class Unit5
                    {
                        position[] = {15, -15, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                };

                class cis_droid_pile_mk2
                {
                    name = "Roger Roger";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit5
                    {
                        position[] = {15, -15, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit8
                    {
                        position[] = {20, -20, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                    class Unit9
                    {
                        position[] = {20, -20, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid";
                    };
                };

                class cis_droid_heavy_team_mk2
                {
                    name = "Heavy Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_repeater";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_B2";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_AT";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = "CAPTAIN";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_commander";
                    };
                };

                class cis_sniper_team_mk2
                {
                    name = "Sniper Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_commander";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_sniper";
                    };
                };

                class cis_infantry_anti_tank_team_mk2
                {
                    name = "Anti-Tank Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_commander";
                    };
                    class Unit1
                    {
                        position[] = {10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_AT";
                    };
                };
            };
            class SpecOpsMkII
            {
                name = "Spec Ops Mk II";
                class cis_commando_team_mk2
                {
                    name = "Commando Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_BX_commando";
                    };
                    class Unit1
                    {
                        position[] = {2, 0, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_BX_commando";
                    };
                    class Unit2
                    {
                        position[] = {0, 2, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_BX_commando";
                    };
                    class Unit3
                    {
                        position[] = {3, 2, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_BX_sniper";
                    };
                };

                class cis_rc_b1_kill_team
                {
                    name = "RC B1 Kill Team";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                    class Unit1
                    {
                        position[] = {3, -3, 0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                    class Unit2
                    {
                        position[] = {-3, -3, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                    class Unit3
                    {
                        position[] = {6, -6, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                };

                class cis_rc_b1_kill_squad
                {
                    name = "RC B1 Kill Squad";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                    class Unit1
                    {
                        position[] = {4, -4, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_B2";
                    };
                    class Unit2
                    {
                        position[] = {-4, -4, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_B2";
                    };
                    class Unit3
                    {
                        position[] = {8, -8, 0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                    class Unit4
                    {
                        position[] = {-8, -8, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                    class Unit5
                    {
                        position[] = {12, -12, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                    class Unit6
                    {
                        position[] = {-12, -12, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                    class Unit7
                    {
                        position[] = {16, -16, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_MkII_droid_RC";
                    };
                };
            };
            class Armored
            {
                name = "Armored";
                class cis_armored_AAT
                {
                    name = "AAT and Escort";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_AAT";
                    };
                    class Unit1
                    {
                        position[] = {10, 10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_AT";
                    };
                    class Unit2
                    {
                        position[] = {-10, 10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_commander";
                    };
                    class Unit3
                    {
                        position[] = {-10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_repeater";
                    };
                    class Unit4
                    {
                        position[] = {-10, 10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_droid_repeater";
                    };
                };
            };

            class Air
            {
                name = "Air";

                class cis_air_transport
                {
                    name = "Transport";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_air.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 50};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_HMPT";
                    };
                    class Unit1
                    {
                        position[] = {-10, -10, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                    class Unit2
                    {
                        position[] = {15, -15, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                    class Unit3
                    {
                        position[] = {-15, -15, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                };

                class cis_heavy_vehicle_transport
                {
                    name = "Heavy ATT Delivery";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_air.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_MAFT";
                    };
                    class Unit1
                    {
                        position[] = {-10, -10, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_AAT";
                    };
                };

                class cis_bully_squad
                {
                    name = "Anti-Air Squad";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_air.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 50};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                    class Unit1
                    {
                        position[] = {-10, -10, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                    class Unit2
                    {
                        position[] = {15, -15, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                    class Unit3
                    {
                        position[] = {-15, -15, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                };

                class cis_cas_squad
                {
                    name = "CAS and Cover Squad";
                    side = 0;
                    scope = 2;
                    faction = "o_cis";
                    icon = "\data\icons\n_air.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 50};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_CAS";
                    };
                    class Unit1
                    {
                        position[] = {-10, -10, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_CAS";
                    };
                    class Unit2
                    {
                        position[] = {15, -15, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                    class Unit3
                    {
                        position[] = {-15, -15, 50};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CIS_Vulture_AA";
                    };
                };
            };
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class DefaultEventHandlers;
class Optics_Armored;
class Optics_Gunner_MBT_01 : Optics_Armored
{
    class Wide;
    class Medium;
    class Narrow;
};

class CfgVehicles
{
    // Imports
    class TAS_Droid_B1_E5;
    class TAS_Droid_B1_Commander;
    class TAS_Droid_B1_Pilot;
    class TAS_Droid_B1_Crew;
    class 3AS_CIS_B2_F;
    class ls_droid_bx;
    class 3AS_HMP_Transport;
    class 3AS_MAF_Transport_F;
    class 3AS_HMP_Gunship;
    class 3AS_MAF_Gunship_F;
    class 3AS_AAT;
    class 3AS_AAT_Red;
    class 3AS_GAT_Light;
    class 3AS_Hailfire_Rocket;
    class 3AS_Hailfire_SAM;
    class 3AS_Tri_Fighter_DynamicLoadout;
    class 3AS_CIS_Vulture_F;
    class 3AS_CIS_Vulture_AA_F;
    class 3AS_CIS_Vulture_CAS_F;
    class 3AS_EscapePodNav;
    class 3as_droid_container;

    class 885th_CIS_droid : TAS_Droid_B1_E5
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "B1 Battledroid";
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISDroids";
        // ls_b1BattleDroid = Legion Studios B1 droid radio voice (ls_dubbing).
        // WBK mutes this on AI it runs on and plays its own droid lines instead;
        // it is what the B1 Pilot (not run by WBK) and player-controlled droids use.
        identityTypes[] = {"Head_NATO", "ls_b1BattleDroid"};
        cost = 1;
        camouflage = 1.0;
        sensitivity = 1.0;
        threat[] = {1, 0.8, 0.6};
        genericNames = "ls_droid_b1";
        uniformClass = "TAS_DroidB1";
        Items[] = {"ACE_EarPlugs", "ACE_EntrenchingTool", MAG_10("IDA_BactaBandage"), MAG_5("ACE_tourniquet"), MAG_4("ACE_Splint"), "ACE_PlasmaIV_500", MAG_2("IDA_BattleStim"), MAG_4("ACE_CableTie"), "acc_flashlight"};
        RespawnItems[] = {"ACE_EarPlugs", "ACE_EntrenchingTool", MAG_10("IDA_BactaBandage"), MAG_5("ACE_tourniquet"), MAG_4("ACE_Splint"), "ACE_PlasmaIV_500", MAG_2("IDA_BattleStim"), MAG_4("ACE_CableTie"), "acc_flashlight"};
        linkedItems[] = {"IDA_vest_base","ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","JLTS_NVG_droid_chip_1"};
        respawnlinkedItems[] = {"IDA_vest_base","ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","JLTS_NVG_droid_chip_1"};

        weapons[] = {"885th_E5"};
        respawnWeapons[] = {"885th_E5"};
        magazines[] = {MAG_10("885th_e_cell_red")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red")};
        backpack = "JLTS_B1_Backpack";
    };

    class 885th_CIS_droid_repeater : 885th_CIS_droid
    {
        displayName = "B1 Repeater";
        weapons[] = {"885th_E5C"};
        respawnWeapons[] = {"885th_E5C"};
        magazines[] = {MAG_10("885th_e_cell_red")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red")};
        backpack = "JLTS_B1_Backpack";
    };

    class 885th_CIS_droid_sniper : 885th_CIS_droid
    {
        displayName = "B1 Sniper";
        camouflage = 0.8;
        weapons[] = {"885th_E5S"};
        respawnWeapons[] = {"885th_E5S"};
        magazines[] = {MAG_10("885th_e_cell_red_amp")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red_amp")};
        backpack = "JLTS_B1_Backpack";
    };

    class 885th_CIS_droid_AT : 885th_CIS_droid
    {
        displayName = "B1 Anti-Tank";
        weapons[] += {"3AS_E60R_F"};
        respawnWeapons[] += {"3AS_E60R_F"};
        magazines[] = {MAG_10("885th_e_cell_red"), MAG_2("3AS_E60R_AT")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red"), MAG_2("3AS_E60R_AT")};
        backpack = "885th_Vornskr_Backpack_invis";
    };

    class 885th_CIS_droid_commander : 885th_CIS_droid
    {
        displayName = "B1 Commander";
        cost = 4;
        camouflage = 2.0;
        sensitivity = 1.5;
        threat[] = {1, 0.8, 0.6};
        uniformClass = "TAS_DroidB1_Commander";
        weapons[] = {"885th_A180"};
        respawnWeapons[] = {"885th_A180"};
        magazines[] = {MAG_12("885th_e_cell_red_pistol")};
        respawnMagazines[] = {MAG_12("885th_e_cell_red_pistol")};
        backpack = "JLTS_B1_Backpack";
    };

    class 885th_CIS_droid_pilot : 885th_CIS_droid_commander
    {
        displayName = "B1 Pilot";
        cost = 1;
        camouflage = 1.0;
        sensitivity = 1.7;
        threat[] = {1, 0.8, 0.6};
        uniformClass = "TAS_DroidB1_Pilot";
    };

    // Mk I B2: Legion Studios B2 with 885th hit points (no WebKnight).
    class ls_droid_base;
    class ls_droid_b2: ls_droid_base
    {
        class HitPoints;
    };
    class 885th_CIS_droid_B2 : ls_droid_b2
    {
        displayName = "B2 Super Battledroid";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISDroids";
        genericNames = "ls_droid_b1";
        identityTypes[] = {"ls_b1BattleDroid", "O_3AS_head_F"};
        class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=10;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=15;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=15;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=15;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=4;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=14;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=4;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=14;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=4;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=16;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitSensor: HitChest
			{
				armor=6;
				radius=0.1;
				name="sensor_hit";
			};
			/*class HitBody: HitChest
			{
				armor=13;
				material=-1;
				name="body";
				passThrough=1;
				explosionShielding=2;
				radius=0.15;
				visual="injury_body";
				minimalHit=0.0099999998;
				//depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};*/
			class HitArms: HitChest
			{
				armor=10;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.16;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=10;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=10;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=5;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=50;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=20;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
				armor=20;
			};
			class HitLeftLeg
			{
				armor=20;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};

        Items[] = {"ACE_EarPlugs", "ACE_EntrenchingTool", MAG_10("IDA_BactaBandage"), MAG_5("ACE_tourniquet"), MAG_4("ACE_Splint"), "ACE_PlasmaIV_500", MAG_2("IDA_BattleStim"), MAG_4("ACE_CableTie"), "acc_flashlight"};
        RespawnItems[] = {"ACE_EarPlugs", "ACE_EntrenchingTool", MAG_10("IDA_BactaBandage"), MAG_5("ACE_tourniquet"), MAG_4("ACE_Splint"), "ACE_PlasmaIV_500", MAG_2("IDA_BattleStim"), MAG_4("ACE_CableTie"), "acc_flashlight"};

        linkedItems[] = {"885th_vest_base", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885th_vest_base", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","JLTS_NVG_droid_chip_2"};
        backpack = "885th_Vornskr_Backpack_invis";

        weapons[] = {"885th_WristBlaster"};
        respawnWeapons[] = {"885th_WristBlaster"};
        magazines[] = {MAG_10("885th_e_battery_red_high"), MAG_6("IDA_wrist_rocket")};
        respawnMagazines[] = {MAG_10("885th_e_battery_red_high"), MAG_6("IDA_wrist_rocket")};
    };

    class 885th_CIS_droid_BX_commando : ls_droid_bx
    {
        displayName = "BX Commando Droid";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISDroids";
        cost = 3;
        camouflage = 0.4;
        sensitivity = 2.5;
        threat[] = {3, 1, 1};

        genericNames = "ls_droid_bx";
        identityTypes[] = {"ls_b1BattleDroid", "Head_LSD_BX"};

        //uniformClass = "lsd_cis_bxDroid_uniform";

        linkedItems[] = {"885th_vest_base", "ItemMap", "ItemGPS", "SWLB_comlink_droid", "ItemCompass", "ItemWatch", "JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885th_vest_base", "ItemMap", "ItemGPS", "SWLB_comlink_droid", "ItemCompass", "ItemWatch", "JLTS_NVG_droid_chip_2"};

        weapons[] = {"885th_E5C"};
        respawnWeapons[] = {"885th_E5C"};

        magazines[] = {MAG_10("885th_e_cell_red"), MAG_3("IDA_grenade_Smoke_mag"), MAG_3("IDA_grenade_Detonator_mag")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red"), MAG_3("IDA_grenade_Smoke_mag"), MAG_3("IDA_grenade_Detonator_mag")};
    };

    class 885th_CIS_droid_BX_sniper : 885th_CIS_droid_BX_commando
    {
        displayName = "BX Sniper Commando Droid";
        cost = 4;
        camouflage = 0.4;
        sensitivity = 2.5;
        threat[] = {3, 1, 1};

        weapons[] = {"885th_E5S"};
        respawnWeapons[] = {"885th_E5S"};

        magazines[] = {MAG_10("885th_e_cell_red_amp"), MAG_3("IDA_grenade_Smoke_mag"), MAG_3("IDA_grenade_Detonator_mag")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red_amp"), MAG_3("IDA_grenade_Smoke_mag"), MAG_3("IDA_grenade_Detonator_mag")};
    };

    // ===================================================================
    //  Mk II droids: same loadouts as Mk I, run by WebKnight Droids,
    //  with the aggressive / Vcom setup from BPD_fnc_cisMkIIInit.
    // ===================================================================

    class 885th_CIS_MkII_droid : 885th_CIS_droid
    {
        displayName = "B1 Battledroid";
        EditorSubcategory = "Sub885thCISDroidsMkII";
    };

    class 885th_CIS_MkII_droid_repeater : 885th_CIS_MkII_droid
    {
        displayName = "B1 Repeater";
        weapons[] = {"885th_E5C"};
        respawnWeapons[] = {"885th_E5C"};
        magazines[] = {MAG_10("885th_e_cell_red")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red")};
    };

    class 885th_CIS_MkII_droid_sniper : 885th_CIS_MkII_droid
    {
        displayName = "B1 Sniper";
        camouflage = 0.8;
        weapons[] = {"885th_E5S"};
        respawnWeapons[] = {"885th_E5S"};
        magazines[] = {MAG_10("885th_e_cell_red_amp")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red_amp")};
    };

    class 885th_CIS_MkII_droid_AT : 885th_CIS_MkII_droid
    {
        displayName = "B1 Anti-Tank";
        weapons[] = {"885th_E5", "3AS_E60R_F"};
        respawnWeapons[] = {"885th_E5", "3AS_E60R_F"};
        magazines[] = {MAG_10("885th_e_cell_red"), MAG_2("3AS_E60R_AT")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red"), MAG_2("3AS_E60R_AT")};
        backpack = "885th_Vornskr_Backpack_invis";
    };

    class 885th_CIS_MkII_droid_commander : 885th_CIS_MkII_droid
    {
        displayName = "B1 Commander";
        cost = 4;
        camouflage = 2.0;
        sensitivity = 1.5;
        uniformClass = "TAS_DroidB1_Commander";
        weapons[] = {"885th_A180"};
        respawnWeapons[] = {"885th_A180"};
        magazines[] = {MAG_12("885th_e_cell_red_pistol")};
        respawnMagazines[] = {MAG_12("885th_e_cell_red_pistol")};
    };

    // RC B1: elite B1 in the JLTS prototype droid armor, tougher than a normal B1
    class 885th_CIS_MkII_droid_RC : 885th_CIS_MkII_droid
    {
        displayName = "RC B1 Droid";
        cost = 3;
        camouflage = 0.8;
        sensitivity = 2.0;
        threat[] = {1, 0.9, 0.7};
        uniformClass = "JLTS_DroidB1_Prototype";
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_prototype_co.paa"};
        editorPreview = "\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Prototype.jpg";
        backpack = "JLTS_B1_backpack_prototype";
        weapons[] = {"885th_E5C"};
        respawnWeapons[] = {"885th_E5C"};
        magazines[] = {MAG_10("885th_e_cell_red"), MAG_2("IDA_grenade_Smoke_mag"), MAG_2("IDA_grenade_Detonator_mag")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red"), MAG_2("IDA_grenade_Smoke_mag"), MAG_2("IDA_grenade_Detonator_mag")};
        BPD_droidHealth = 150;   // WBK health (normal B1 = CBA setting "B1 Health", default 50)
    };

    // Mk II B2: built on WebKnight's LS B2 so WBK treats it as a B2 (B2 health pool,
    // animations, sounds). WBK's B2 init hook is inherited from WBK_LS_B2_Baseclass.
    // Damage is handled by WBK (CBA setting "B2 Health"), so no HitPoints overrides here.
    class WBK_LS_B2;
    class 885th_CIS_MkII_droid_B2 : WBK_LS_B2
    {
        displayName = "B2 Super Battledroid";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISDroidsMkII";
        genericNames = "ls_droid_b1";
        identityTypes[] = {"ls_b1BattleDroid", "O_3AS_head_F"};
        // Same Legion Studios B2 model as the Mk I B2
        uniformClass = "ls_droidUniform_b2";
        model = "\ls\core\addons\characters_droid\uniforms\b2\ls_uniform_droid_b2.p3d";
        hiddenSelections[] = {"camo_arms","legs","torso"};
        hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\b2\data\arms_co.paa","\ls\core\addons\characters_droid\uniforms\b2\data\legs_co.paa","\ls\core\addons\characters_droid\uniforms\b2\data\torso_co.paa"};
        Items[] = {"ACE_EarPlugs", "ACE_EntrenchingTool", MAG_10("IDA_BactaBandage"), MAG_5("ACE_tourniquet"), MAG_4("ACE_Splint"), "ACE_PlasmaIV_500", MAG_2("IDA_BattleStim"), MAG_4("ACE_CableTie"), "acc_flashlight"};
        RespawnItems[] = {"ACE_EarPlugs", "ACE_EntrenchingTool", MAG_10("IDA_BactaBandage"), MAG_5("ACE_tourniquet"), MAG_4("ACE_Splint"), "ACE_PlasmaIV_500", MAG_2("IDA_BattleStim"), MAG_4("ACE_CableTie"), "acc_flashlight"};

        linkedItems[] = {"885th_vest_base", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885th_vest_base", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","JLTS_NVG_droid_chip_2"};
        backpack = "885th_Vornskr_Backpack_invis";

        weapons[] = {"885th_WristBlaster"};
        respawnWeapons[] = {"885th_WristBlaster"};
        magazines[] = {MAG_10("885th_e_battery_red_high"), MAG_6("IDA_wrist_rocket")};
        respawnMagazines[] = {MAG_10("885th_e_battery_red_high"), MAG_6("IDA_wrist_rocket")};
    };

    class 885th_CIS_MkII_droid_BX_commando : 885th_CIS_droid_BX_commando
    {
        displayName = "BX Commando Droid";
        EditorSubcategory = "Sub885thCISDroidsMkII";
    };

    class 885th_CIS_MkII_droid_BX_sniper : 885th_CIS_MkII_droid_BX_commando
    {
        displayName = "BX Sniper Commando Droid";
        cost = 4;
        weapons[] = {"885th_E5S"};
        respawnWeapons[] = {"885th_E5S"};
        magazines[] = {MAG_10("885th_e_cell_red_amp"), MAG_3("IDA_grenade_Smoke_mag"), MAG_3("IDA_grenade_Detonator_mag")};
        respawnMagazines[] = {MAG_10("885th_e_cell_red_amp"), MAG_3("IDA_grenade_Smoke_mag"), MAG_3("IDA_grenade_Detonator_mag")};
    };

    class 885th_CIS_HMPT : 3AS_HMP_Transport
    {
        displayName = "HMP Transport";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISGunships";
        armor = 300;
        cost = 10000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_MAFT : 3AS_MAF_Transport_F
    {
        displayName = "MAF Transport";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISGunships";
        armor = 400;
        cost = 10000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_HMPG : 3AS_HMP_Gunship
    {
        displayName = "HMP Gunship";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISGunships";
        armor = 200;
        cost = 10000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_MAFG : 3AS_MAF_Gunship_F
    {
        displayName = "MAF Gunship";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISGunships";
        armor = 200;
        cost = 10000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_AAT : 3AS_AAT
    {
        displayName = "AAT Tank";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISTanks";
        cost = "30000";
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_HAAT : 3AS_AAT_Red
    {
        displayName = "AAT Heavy Tank";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISTanks";
        cost = 30000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_GAT : 3AS_GAT_Light
    {
        displayName = "GAT Light Tank";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISTanks";
        armor = 150;
        cost = 15000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_Hailfire_R : 3AS_Hailfire_Rocket
    {
        displayName = "Hailfire Rocket Droid";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISTanks";
        cost = 40000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_Hailfire_AA : 3AS_Hailfire_SAM
    {
        displayName = "Hailfire SAM Droid";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISTanks";
        cost = 40000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_TriFighter : 3AS_Tri_Fighter_DynamicLoadout
    {
        displayName = "Tri-Fighter Droid";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISFighters";
        cost = 100000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_Vulture : 3AS_CIS_Vulture_F
    {
        displayName = "Vulture Droid";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISFighters";
        cost = 100000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_Vulture_AA : 3AS_CIS_Vulture_AA_F
    {
        displayName = "Vulture Droid AA";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISFighters";
        cost = 120000;
        crew = "885th_CIS_droid_pilot";
    };

    class 885th_CIS_Vulture_CAS : 3AS_CIS_Vulture_CAS_F
    {
        displayName = "Vulture Droid CAS";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "o_cis";
        EditorSubcategory = "Sub885thCISFighters";
        cost = 120000;
        crew = "885th_CIS_droid_pilot";
        ejectDamageLimit = 0.9;
    };
};

// ---------------------------------------------------------------------------
//  Init hooks
//  Mk I  : plain AI (Vcom/LAMBS as normal), no WebKnight.
//  Mk II : WebKnight Droids (animations, voice lines, WBK health) + aggressive
//          AI that works with Vcom (BPD_fnc_cisMkIIInit).
//  All   : no-prone, done by one cheap per-machine handler (BPD_fnc_cisNoProne)
//          instead of one script loop per droid.
// ---------------------------------------------------------------------------
#define CIS_NO_PRONE class 885th_CIS_NoProne { init = "[_this select 0] call BPD_fnc_cisNoProne;"; }
#define CIS_MKII_AI  class 885th_CIS_MkII_AI { init = "[_this select 0] call BPD_fnc_cisMkIIInit;"; }

class Extended_InitPost_EventHandlers
{
    // Mk I B1s (incl. the B1 Pilot that crews CIS vehicles) and every Mk II B1, through inheritance
    class 885th_CIS_droid
    {
        CIS_NO_PRONE;
    };
    class 885th_CIS_droid_B2
    {
        CIS_NO_PRONE;
    };
    // Mk I BX and Mk II BX (inherits it)
    class 885th_CIS_droid_BX_commando
    {
        CIS_NO_PRONE;
    };

    // Mk II B1s, incl. RC B1
    class 885th_CIS_MkII_droid
    {
        class 885th_CIS_MkII_WBK_B1
        {
            init = "params ['_unit']; if (local _unit && {!isNil 'WBK_Droid_B1_Load'}) then {_unit spawn WBK_Droid_B1_Load;};";
        };
        CIS_MKII_AI;
    };
    // Mk II B2 (WBK is started by WBK_LS_B2's own hook)
    class 885th_CIS_MkII_droid_B2
    {
        CIS_NO_PRONE;
        CIS_MKII_AI;
    };
    // Mk II BX
    class 885th_CIS_MkII_droid_BX_commando
    {
        class 885th_CIS_MkII_WBK_BX
        {
            init = "params ['_unit']; if (local _unit && {!isNil 'WBK_Droid_BX_Load'}) then {_unit spawn WBK_Droid_BX_Load;};";
        };
        CIS_MKII_AI;
    };
};
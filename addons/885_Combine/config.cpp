class CfgPatches
{
    class 885_Combine
    {
        units[] = {
            "885th_CMB_CP",
            "885th_CMB_CP_SMG",
            "885th_CMB_Soldier_E",
            "885th_CMB_Soldier_Nova",
            "885th_CMB_Soldier_AR2_Nova",
            "885th_CMB_Leader_Nova",
            "885th_CMB_Soldier",
            "885th_CMB_Leader",
            "885th_Combine_Wallhammer",
            "885th_Hunter",
            "885th_Strider",
            "885th_CMB_CP_APC",
            "885th_CMB_CP_APC_Razor",
            "885th_CMB_Gunship",
            "885th_CMB_Hunter"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "AifeSupport";
    };
};

class CfgFactionClasses
{
    class 885_Universal_Union
    {
        displayName = "[885th] Universal Union";
        side = 0;
        flag = "";
        icon = "";
        priority = 0;
    };
};

class CfgEditorCategories
{
    class 885_Universal_Union
    {
        author = "AifeSupport";
        displayName = "[885th] Universal Union";
        flag = "hl_cmb_core\cmb_flag_co.paa";
        icon = "hl_cmb_core\cmb_co.paa";
        priority = -6;
        side = 0;
    };
};

class CFgEditorSubcategories
{
    class 885_Combine
    {
        side = 0;
        displayName = "Combine";
        scope = 2;
        scopeCurator = 2;
    };
    class 885_Synths
    {
        side = 0;
        displayName = "Synths";
        scope = 2;
        scopeCurator = 2;
    };
    class 885_Transport
    {
        side = 0;
        displayName = "Transports";
        scope = 2;
        scopeCurator = 2;
    };
    class 885_Air
    {
        side = 0;
        displayName = "Airwatch";
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
        class 885_Universal_Union
        {
            name = "[885th] Universal Union";
            scope = 2;
            class Infantry
            {
                name = "Infantry";

                class combine_patrol
                {
                    name = "Civil Protection Patrol";
                    side = 0;
                    scope = 2;
                    faction = "885_Universal_Union";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "885th_CMB_CP_SMG";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "885th_CMB_CP";
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
    class HL_CMB_CP;
    class HL_CMB_CP_SMG;
    class HL_CMB_Soldier_E;
    class HL_CMB_Soldier_Nova;
    class HL_CMB_Soldier_AR2_Nova;
    class HL_CMB_Leader_Nova;
    class HL_CMB_Soldier;
    class HL_CMB_Leader;
    class WBK_Combine_Wallhammer;
    class WBK_HunterSynth_1;
    class WBK_Strider_HL2;
    class HL_CMB_CP_APC;
    class HL_CMB_CP_APC_Razor;
    class HL_CMB_Gunship;
    class HL_CMB_Hunter;

    class 885th_CMB_CP : HL_CMB_CP
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civil Protection";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };
    
    class 885th_CMB_CP_SMG : HL_CMB_CP_SMG
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civil Protection (SMG)";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };

    class 885th_CMB_Soldier : HL_CMB_Soldier
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };

    class 885th_CMB_Leader : HL_CMB_Leader
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leader";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };

    class 885th_CMB_Soldier_E : HL_CMB_Soldier_E
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Elite Soldier";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };

    class 885th_CMB_Soldier_Nova : HL_CMB_Soldier_Nova
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Prison Guard";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };
    
    class 885th_CMB_Soldier_AR2_Nova : HL_CMB_Soldier_AR2_Nova
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Prison Guard (AR2)";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };
    
    class 885th_CMB_Leader_Nova : HL_CMB_Leader_Nova
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Prison Guard (Leader)";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };
    
    class 885th_Combine_Wallhammer : WBK_Combine_Wallhammer
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wallhammer";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Combine";
    };
    
    class 885th_Hunter : WBK_HunterSynth_1
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Synths";
    };
    
    class 885th_Strider : WBK_Strider_HL2
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider";
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Synths";
    };

    class 885th_CMB_CP_APC : HL_CMB_CP_APC
    {
        displayName = "APC";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Transport";
        crew = "885th_CMB_CP";
    };

    class 885th_CMB_CP_APC_Razor : HL_CMB_CP_APC_Razor
    {
        displayName = "APC (Razor)";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Transport";
        crew = "885th_CMB_CP";
    };

    class 885th_CMB_Gunship : HL_CMB_Gunship
    {
        displayName = "Gunship";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Air";
        crew = "885th_CMB_CP";
    };

    class 885th_CMB_Hunter : HL_CMB_Hunter
    {
        displayName = "Hunter Chopper";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "885_Universal_Union";
        editorCategory = "885_Universal_Union";
        EditorSubcategory = "885_Air";
        crew = "885th_CMB_CP";
    };
};
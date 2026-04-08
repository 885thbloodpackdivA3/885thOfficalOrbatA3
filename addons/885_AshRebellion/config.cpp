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

class CfgPatches {
    class 885th_Rebellion {
        units[] = {
			"Rebel_Clone_F",
			"Rebel_Recruit",
			"Rebel_Trooper",
			"Rebel_Marksman",
			"Rebel_AT",
			"Rebel_Heavy",
			"Rebel_Medic",
			"Rebel_Pilot"
		};
        weapons[] = {
            "AshRebel_P1_Helmet",
            "AshRebel_P2_Helmet"
        };
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "AifeSupport";
    };
};

class CfgFactionClasses {
    class 885th_Rebellion_Faction {
        displayName = "[885th] Ash's Rebellion";
        side = 2;
        priority = 0;
    };
};

class CFgEditorSubcategories
{
	class Sub885thRebellionTroops
	{
		side = 2;
        scope = 2;
        scopeCurator = 2;
		displayName = "[885th] Rebellion Troops";
	};
};
class CfgGroups {
    class Indep {

        class 885_Rebel_Clones {
            name = "[885th] Ash's Rebellion";

            class Infantry {
                name = "Infantry";

                class 885_Rebel_Team {
                    name = "Fireteam";
                    side=2;
                    faction = "885th_Rebellion_Faction";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side=2;
                        vehicle = "Rebel_Trooper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Medic";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_AT";
                    };
					class Unit3 {
						position[] = {5,0,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Marksman";
					};
                };

                class 885_Rebel_infantry_squad {
                    name = "Infantry Squad";
                    side=2;
                    faction = "885th_Rebellion_Faction";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side=2;
                        vehicle = "Rebel_Trooper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Heavy";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "SERGEANT";
                        side=2;
                        vehicle = "Rebel_Medic";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Marksman";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Recruit";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Recruit";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Recruit";
                    };
                };

                class 885_Rebel_infantry_patrol {
                    name = "Patrol";
                    side=2;
                    faction = "885th_Rebellion_Faction";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side=2;
                        vehicle = "Rebel_Trooper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Recruit";
                    };
                };

                class 885_Rebel_infantry_sniper_team {
                    name = "Marksman Team";
                    side=2;
                    faction = "885th_Rebellion_Faction";
                    icon = "\data\icons\n_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side=2;
                        vehicle = "Rebel_Marksman";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_Trooper";
                    };
                };

                class bss_infantry_anti_tank_team {
                    name = "Anti-Tank Team";
                    side=2;
                    faction = "885th_Rebellion_Faction";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side=2;
                        vehicle = "Rebel_Trooper";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side=2;
                        vehicle = "Rebel_AT";
                    };
                };

				class 885_Rebel_recon_patrol {
                    name = "Recon Patrol";
                    side=2;
                    faction = "885th_Rebellion_Faction";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side=2;
                        vehicle = "Rebel_Marksman";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side=2;
                        vehicle = "Rebel_Marksman";
                    };
                };
            };
        };
    };
};

class CfgWeapons {
    class SEA_Helmet_P1_Base;
    class 885th_P2_V2_Helmet;
    class AshRebel_P1_Helmet: SEA_Helmet_P1_Base
    {
        author="885th Bloodpack Division - ONI"; //Hit Ctrl+F and replace "Smegus the destroyer" with your name
        displayName="[885th] Rebel P1 Helmet";
        hiddenselections[]= //DONT TOUCH hiddenselections, lest you explode
        {
            "Camo1", 
            "visor",
        };
        hiddenSelectionsTextures[]=
        {
            "\885_AshRebellion\textures\OPFOR_P1_Helm_co.paa", //Replace "Thatchers_Test_Mod" with your mod's name, something like "333th_Aux_Mod" is usually how its done
            "\885_AshRebellion\textures\OPFOR_P1_Helm_co.paa",
        };
    };
    class AshRebel_P2_Helmet: 885th_P2_V2_Helmet
    {
        author="885th Bloodpack Division - ONI"; //Hit Ctrl+F and replace "Smegus the destroyer" with your name
        displayName="[885th] Rebel P2 Helmet";
        hiddenselections[]= //DONT TOUCH hiddenselections, lest you explode
        {
            "Camo", 
            "visor",
        };
        hiddenSelectionsTextures[]=
        {
            "\885_AshRebellion\textures\OPFOR_P2_Helm_co.paa", //Replace "Thatchers_Test_Mod" with your mod's name, something like "333th_Aux_Mod" is usually how its done
            "\885_AshRebellion\textures\OPFOR_P2_Helm_co.paa",
        };
        hiddenSelectionsMaterials[]=
        {
            "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\IDA_P2_Helmet.rvmat", //Currently pathed to IDA for your convenience
            "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\IDA_P2_Helmet_Visor.rvmat",
        };
    };
};

class CfgVehicles {
	class I_soldier_F;
	class Rebel_Clone_F : I_soldier_F {
		author = "AifeSupport";
		scope = 1;
		isMan = 1;
		side = 2;
		faction = "885th_Rebellion_Faction";
		editorSubcategory = "Sub885thRebellionTroops";
		identityTypes[] = {"CloneTrooperENG","Head_LSD_CLONE"};
		genericNames = "JLTS_Clones"; 
		displayName = "Clone";
		cost = 1;
		camouflage = 1.0;
		sensitivity = 1.5;
		threat[] = {1, 0.8, 0.6};
		model = "\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
		nakedUniform = "IDA_Clone_Undersuit";
		uniformClass = "885th_Vornskr_Trooper";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsMaterials[] = {
            "\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper.rvmat",
            "\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower.rvmat"
        };
		hiddenSelectionsTextures[] = {
            "\885_AshRebellion\textures\OPFOR_Upper_Armor_co.paa",
            "\885_AshRebellion\textures\OPFOR_Lower_Armor_co.paa"
        };
		canDeactivateMines = 0;
		engineer = 0;
		attendant = 0;
		icon = "iconMan";
		picture = "";
		backpack = "885th_Vornskr_Backpack_invis";
		weapons[] = {"885th_DC17S_F","Throw","Put"};
		respawnWeapons[] = {"885th_DC17S_F","Throw","Put"};
		Items[] = {"ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		magazines[] = {MAG_4("885th_dc_cell_blue_pistol"),MAG_3("IDA_grenade_Smoke_mag"),"IDA_grenade_Detonator_mag"};
		respawnMagazines[] = {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue"),MAG_4("885th_dc_cell_blue_pistol"),MAG_3("IDA_grenade_Smoke_mag"),"IDA_grenade_Detonator_mag"};
		linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_CloneBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_CloneBinocular","JLTS_NVG_droid_chip_2"};
	};
	class Rebel_Recruit : Rebel_Clone_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Clone Recruit";
		cost = 1;
		sensitivity = 0.8;
		uniformClass = "Rebel_Recruit_Uniform";
        hiddenSelectionsTextures[] = {
            "\885_AshRebellion\textures\OPFOR_Upper_Armor_co.paa",
            "\885_AshRebellion\textures\OPFOR_Lower_Armor_co.paa"
        };
        weapons[] += {"885th_DC15S"};
		magazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		respawnMagazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		linkedItems[] += {"AshRebel_P1_Helmet","885th_vest_base"};
		respawnLinkedItems[] += {"AshRebel_P1_Helmet","885th_vest_base"};
	};
	class Rebel_Trooper : Rebel_Clone_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Clone Trooper";
		genericNames = "ls_clone_p2_ct";
		cost = 1;
		sensitivity = 1.1;
		uniformClass = "885th_Vornskr_Uniform";
        hiddenSelectionsTextures[] = {
            "\885_AshRebellion\textures\OPFOR_Upper_Armor_co.paa",
            "\885_AshRebellion\textures\OPFOR_Lower_Armor_co.paa"
        };
        weapons[] += {"885th_DC15A_F"};
		magazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		respawnMagazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		linkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
		respawnLinkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
	};
	class Rebel_Marksman : Rebel_Clone_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Clone Marksman";
		genericNames = "ls_clone_p2_ct";
		cost = 2;
		sensitivity = 1.8;
		camouflage = 0.6;
		uniformClass = "885th_Vornskr_Uniform";
        hiddenSelectionsTextures[] = {
            "\885_AshRebellion\textures\OPFOR_Upper_Armor_co.paa",
            "\885_AshRebellion\textures\OPFOR_Lower_Armor_co.paa"
        };
        weapons[] += {"885th_Valken38x_F"};
		magazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		respawnMagazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		linkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
		respawnLinkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
	};
	class Rebel_AT : Rebel_Clone_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Clone Anti-Tank";
		genericNames = "ls_clone_p2_ct";
		cost = 3;
		sensitivity = 1.3;
		uniformClass = "885th_Vornskr_Uniform";
        hiddenSelectionsTextures[] = {
            "\885_AshRebellion\textures\OPFOR_Upper_Armor_co.paa",
            "\885_AshRebellion\textures\OPFOR_Lower_Armor_co.paa"
        };
        weapons[] += {"885th_DC15S_GL", "IDA_PLX1"};
		magazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_4("885th_PLX1_AT_Rocket")};
		respawnMagazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_4("885th_PLX1_AT_Rocket")};
		linkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
		respawnLinkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
	};
	class Rebel_Heavy : Rebel_Clone_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Clone Heavy Trooper";
		genericNames = "ls_clone_p2_ct";
		cost = 3;
		sensitivity = 1.3;
		uniformClass = "885th_Vornskr_Uniform";
        hiddenSelectionsTextures[] = {
            "\885_AshRebellion\textures\OPFOR_Upper_Armor_co.paa",
            "\885_AshRebellion\textures\OPFOR_Lower_Armor_co.paa"
        };
		weapons[] += {"885th_DLT19"};
		magazines[] += {MAG_3("885th_battery_low_blue"),MAG_2("885th_battery_high_blue")};
		respawnMagazines[] += {MAG_3("885th_battery_low_blue"),MAG_2("885th_battery_high_blue")};
		linkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
		respawnLinkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
	};
	class Rebel_Medic : Rebel_Clone_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Clone Medic";
		cost = 2;
		sensitivity = 1.0;
		uniformClass = "885th_Medic_Uniform";
        hiddenSelectionsTextures[] = {
            "\885_AshRebellion\textures\OPFOR_Upper_Armor_co.paa",
            "\885_AshRebellion\textures\OPFOR_Lower_Armor_co.paa"
        };
        weapons[] += {"885th_DC15S_F"};
		items[] += {MAG_5("GW_Vasko500"),MAG_5("GW_Vasko250"),"IDA_Cauterizer","ACE_painkillers_item"};
		respawnItems[] += {MAG_5("GW_Vasko500"),MAG_5("GW_Vasko250"),"IDA_Cauterizer","ACE_painkillers_item"};
		magazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		respawnMagazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		linkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base","885th_Medic_Vest"};
		respawnLinkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base","885th_Medic_Vest"};
	};
	class Rebel_Pilot : Rebel_Clone_F {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Clone Pilot";
		cost = 1;
		sensitivity = 1.7;
		uniformClass = "885th_Nightsingers_Uniform";
        hiddenSelectionsTextures[] = {
            "\885_AshRebellion\textures\OPFOR_Upper_Armor_co.paa",
            "\885_AshRebellion\textures\OPFOR_Lower_Armor_co.paa"
        };
        weapons[] += {"885th_DC15S_F"};
		magazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		respawnMagazines[] += {MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue")};
		linkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
		respawnLinkedItems[] += {"AshRebel_P2_Helmet","885th_vest_base"};
	};
};
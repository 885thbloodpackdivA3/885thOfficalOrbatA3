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
    class 885th_BSS {
        units[] = {
            "bss_Gangster",
            "bss_Shooter",
            "bss_Shotgunner",
            "bss_AT",
            "bss_Medic",
            "bss_Guard",
            "bss_Gunner",
            "bss_Pilot",
            "bss_Sniper",
            "bss_Commander",
            "bss_b2",
            "bss_Supply_Transport",
            "bss_Gunship",
            "bss_Troop_Transport",
            "bss_Gang_Transport",
            "bss_AAT",
            "bss_Mortar",
            "bss_Shuttle",
            "bss_Fighter",
            "bss_z95"
        };
        weapons[] = {"885_bss_grunt_vest"};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "AifeSupport";
        authors[] = {"AifeSupport"};
    };
};

class CfgFactionClasses {
    class 885_bss {
        displayName = "[885th] Black Sun Syndicate";
        side = 2;
        flag = "\data\bss_icon.paa";
        icon = "\data\bss_icon.paa";
        priority = 1;
    };
};

class CFgEditorSubcategories
{
	class Sub885thBSSGangsters
	{
        side = 2;
		displayName = "Gang Members";
        scope = 2;
        scopeCurator = 2;
	};
	class Sub885thBSSGuards
	{
        side = 2;
		displayName = "Black Sun Guards";
        scope = 2;
        scopeCurator = 2;
	};
	class Sub885thBSSAir
	{
        side = 2;
		displayName = "Aircraft";
        scope = 2;
        scopeCurator = 2;
	};
	class Sub885thBSSArmor
	{
        side = 2;
		displayName = "Armored Vehicles";
        scope = 2;
        scopeCurator = 2;
	};
	class Sub885thBSSTransports
	{
        side = 2;
		displayName = "Transports";
        scope = 2;
        scopeCurator = 2;
	};
};

class CfgGroups {
    class Indep {

        class 885_bss {
            name = "[885th] Black Sun Syndicate";

            class Infantry {
                name = "Infantry";

                class bss_infantry_gangsters {
                    name = "Gangsters";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "bss_Gangster";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Shooter";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Shotgunner";
                    };
					class Unit3 {
						position[] = {5,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Gangster";
					};
                };

                class bss_infantry_squad {
                    name = "Infantry Squad";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_Commander";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Gunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Medic";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Guard";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Guard";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Guard";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Guard";
                    };
                };

                class bss_infantry_syndicate_team {
                    name = "Syndicate Team";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Gunner";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_Guard";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "bss_Medic";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CAPTAIN";
                        side = 2;
                        vehicle = "bss_Commander";
                    };
                };

                class bss_infantry_patrol {
                    name = "Patrol";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_Gunner";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Guard";
                    };
                };

                class bss_infantry_sniper_team {
                    name = "Sniper Team";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Guard";
                    };
                };

                class bss_infantry_anti_tank_team {
                    name = "Anti-Tank Team";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_Commander";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_AT";
                    };
                };

            };

            class Armored {
                name = "Armored";
				class bss_armored_AAT {
					name = "AAT and Escort";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_inf.paa";
                    rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_AAT";
					};
					class Unit1 {
						position[] = {10,10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_AT";
					};
					class Unit2 {
						position[] = {-10,10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Gunner";
					};
					class Unit3 {
						position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Guard";
					};
					class Unit4 {
						position[] = {-10,10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Medic";
					};
				};
            };

            class Air {
                name = "Air";

                class bss_air_transport {
                    name = "Transport";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_Shuttle";
                    };
                    class Unit1 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Fighter";
                    };
                    class Unit2 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Fighter";
                    };
                    class Unit3 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Fighter";
                    };
                };

				class bss_vehicle_transport {
                    name = "ATT Delivery";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_Shuttle";
                    };
                    class Unit1 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_AAT";
                    };
                };
				
                class bss_air_fighter_squad {
                    name = "Fighter Squad";
                    side = 2;
                    faction = "885_bss";
                    icon = "\data\icons\n_plane.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "bss_Fighter";
                    };
                    class Unit1 {
                        position[] = {20,-14,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Fighter";
                    };
                    class Unit2 {
                        position[] = {-20,-14,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Fighter";
                    };
                    class Unit3 {
                        position[] = {40,-34,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "bss_Fighter";
                    };
                };

            };


        };

    };
};

class CfgWeapons {
	class ls_mandalorianVest_deathwatchGrunt;
	class 885_bss_grunt_vest : ls_mandalorianVest_deathwatchGrunt {
		author = "AifeSupport";
		scope = 2;
		weaponPoolAvailable = 1;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\885_bss\textures\Armor\grunt_vest.paa"};
		class HitpointsProtectionInfo {
			class Body
			{
					hitPointName = "HitBody";
					armor = 16;
					passThrough = 1;
			};
		};
	};
};

class CfgVehicles {
	class 3AS_Aegis_Carrier_Pirate_F;
	class 3AS_Aegis_Shuttle_Pirate_F;
    class 3AS_HMP_Gunship;
    class 3as_V19_base;
    class I_G_Van_02_transport_F;
    class I_Truck_02_transport_F;
    class 3AS_AAT;
    class ls_mandalorian_base;
	

    class bss_Guard : ls_mandalorian_base {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guard";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGuards";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"885_bss_grunt_vest","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885_bss_grunt_vest","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};

        weapons[] = {"885th_FA11","885th_S5Security"};
        respawnWeapons[] = {"885th_FA11","885th_S5Security"};

        magazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
        respawnMagazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
		
		Items[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		
        backpack = "ls_mandalorianBackpack_light";
    };

    class bss_AT : bss_Guard {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Anti-Tank";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGuards";
		
        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"885_bss_grunt_vest","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885_bss_grunt_vest","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};

        weapons[] = {"885th_SPAK15","885th_S5Security","IDA_RPS6HP"};
        respawnWeapons[] = {"885th_SPAK15","885th_S5Security","IDA_RPS6HP"};

        magazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol"),MAG_4("IDA_RPS6_rocket")};
        respawnMagazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol"),MAG_4("IDA_RPS6_rocket")};
		
		Items[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		
        backpack = "ls_mandalorianBackpack_light";
    };

    class bss_Medic : bss_Guard {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGuards";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"885_bss_grunt_vest","H_Cap_marshal","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885_bss_grunt_vest","H_Cap_marshal","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};

        weapons[] = {"885th_SPAK15","885th_S5Security"};
        respawnWeapons[] = {"885th_SPAK15","885th_S5Security"};

        magazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
        respawnMagazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
		
		items[] += {MAG_5("GW_Vasko500"),MAG_5("GW_Vasko250"),"IDA_Cauterizer","ACE_painkillers_item"};
		respawnItems[] += {MAG_5("GW_Vasko500"),MAG_5("GW_Vasko250"),"IDA_Cauterizer","ACE_painkillers_item"};
		
        backpack = "ls_mandalorianBackpack_medic";
    };
	
	class bss_Gunner : bss_Guard {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGuards";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"885_bss_grunt_vest","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885_bss_grunt_vest","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};

        weapons[] = {"885th_DLT15","885th_S5Security"};
        respawnWeapons[] = {"885th_DLT15","885th_S5Security"};

        magazines[] = {MAG_10("885th_battery_low_blue"),"IDA_Stun_cell",MAG_5("885th_cell_green_pistol")};
        respawnMagazines[] = {MAG_10("885th_battery_low_blue"),"IDA_Stun_cell",MAG_5("885th_cell_green_pistol")};
		
		Items[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		
        backpack = "ls_mandalorianBackpack_light";
    };
	
    class bss_Pilot : bss_Guard {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGuards";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};

        weapons[] = {"885th_S5Security"};
        respawnWeapons[] = {"885th_S5Security"};

        magazines[] = {"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
        respawnMagazines[] = {"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
		
		Items[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		
        backpack = "";
    };

    class bss_Sniper : bss_Guard {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGuards";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"885_bss_grunt_vest","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885_bss_grunt_vest","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};

        weapons[] = {"885th_Valken38x_F","885th_S5Security"};
        respawnWeapons[] = {"885th_Valken38x_F","885th_S5Security"};

        magazines[] = {MAG_10("885th_dc_cell_green"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
        respawnMagazines[] = {MAG_10("885th_dc_cell_green"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
		
		Items[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		
        backpack = "ls_mandalorianBackpack_light";
    };

    class bss_Commander : bss_Guard {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Commander";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGuards";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"885_bss_grunt_vest","H_Beret_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885_bss_grunt_vest","H_Beret_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_2"};

        weapons[] = {"885th_FA11","885th_S5Security"};
        respawnWeapons[] = {"885th_FA11","885th_S5Security"};

        magazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
        respawnMagazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol")};
		
		Items[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		
        backpack = "ls_mandalorianBackpack_light";
    };

    class bss_Gangster : ls_mandalorian_base {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gangster";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGangsters";

        identityTypes[] = {"Head_Enoch","LanguagePOL_F","G_GUERIL_default"};

        uniformClass = "ls_imperialUniform_army_armored";

        linkedItems[] = {"JLTS_CloneVestHolster","H_Watchcap_blk","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ACE_NVG_Gen2_Black"};
        respawnlinkedItems[] = {"JLTS_CloneVestHolster","H_Watchcap_blk","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ACE_NVG_Gen2_Black"};

        weapons[] = {"885th_Westar35"};
        respawnWeapons[] = {"885th_Westar35"};

        magazines[] = {MAG_10("885th_mando_cell_yellow_pistol")};
        respawnMagazines[] = {MAG_10("885th_mando_cell_yellow_pistol")};

        backpack = "B_Messenger_Gray_F";
    };

    class bss_Shooter : bss_Gangster {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Shooter";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGangsters";

        identityTypes[] = {"Head_Enoch","LanguagePOL_F","G_GUERIL_default"};

        uniformClass = "U_IG_Guerilla3_1";

        linkedItems[] = {"JLTS_CloneVestHolster","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ACE_NVG_Gen2_Black"};
        respawnlinkedItems[] = {"JLTS_CloneVestHolster","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ACE_NVG_Gen2_Black"};
		
        weapons[] = {"885th_SPAK15"};
        respawnWeapons[] = {"885th_SPAK15"};

        magazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol"),MAG_4("IDA_RPS6_rocket")};
        respawnMagazines[] = {MAG_10("885th_cell_green_high"),"IDA_Stun_cell","IDA_RPS6_rocket",MAG_5("885th_cell_green_pistol"),MAG_4("IDA_RPS6_rocket")};
		
		Items[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};

        backpack = "ls_mandalorianBackpack_light";
    };

    class bss_Shotgunner : bss_Gangster {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Shotgunner";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSGangsters";

        identityTypes[] = {"Head_Enoch","LanguagePOL_F","G_GUERIL_default"};

        uniformClass = "U_C_Mechanic_01_F";

        linkedItems[] = {"V_Pocketed_coyote_F","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ACE_NVG_Gen2_Black"};
        respawnlinkedItems[] = {"V_Pocketed_coyote_F","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ACE_NVG_Gen2_Black"};

        weapons[] = {"IDA_SBB3"};
        respawnWeapons[] = {"IDA_SBB3"};

        magazines[] = {MAG_5("IDA_Blaster_Cell_Scatter_6Rnd_Red"),"IDA_Blaster_Cell_Scatter_6Rnd_Red"};
        respawnMagazines[] = {MAG_5("IDA_Blaster_Cell_Scatter_6Rnd_Red"),"IDA_Blaster_Cell_Scatter_6Rnd_Red"};

        backpack = "B_Kitbag_rgr";
    };

    class ls_droid_b2_junkyard {
        class HitPoints;
    };
    class bss_b2 : ls_droid_b2_junkyard
    {
        displayName = "B2 Junker Battledroid";
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "885_bss";
        EditorSubcategory = "Sub885thBSSGuards";
        genericNames = "ls_droid_b1";
        identityTypes[] = {"LanguageENGVR_F", "O_3AS_head_F"};
        class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=5;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=10;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
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
				armor=10;
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
				armor=9;
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
				armor=9;
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
				armor=11;
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
				armor=1;
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
				armor=5;
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
				armor=5;
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
				armor=5;
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
				armor=45;
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
				armor=15;
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
				armor=15;
			};
			class HitLeftLeg
			{
				armor=15;
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

        //uniformClass = "885th_cis_b2Droid";
        Items[] = {"ACE_EarPlugs", "ACE_EntrenchingTool", MAG_10("IDA_BactaBandage"), MAG_5("ACE_tourniquet"), MAG_4("ACE_Splint"), "ACE_PlasmaIV_500", MAG_2("IDA_BattleStim"), MAG_4("ACE_CableTie"), "acc_flashlight"};
        RespawnItems[] = {"ACE_EarPlugs", "ACE_EntrenchingTool", MAG_10("IDA_BactaBandage"), MAG_5("ACE_tourniquet"), MAG_4("ACE_Splint"), "ACE_PlasmaIV_500", MAG_2("IDA_BattleStim"), MAG_4("ACE_CableTie"), "acc_flashlight"};

        linkedItems[] = {"885th_vest_base", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","JLTS_NVG_droid_chip_2"};
        respawnlinkedItems[] = {"885th_vest_base", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch","JLTS_NVG_droid_chip_2"};
        backpack = "885th_Vornskr_Backpack_invis";

        weapons[] = {"885th_WristBlaster"};
        respawnWeapons[] = {"885th_WristBlaster"};
        magazines[] = {MAG_10("885th_mando_battery_yellow_high")};
        respawnMagazines[] = {MAG_10("885th_mando_battery_yellow_high")};
    };

    class bss_Fighter : 3as_V19_base {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSAir";
		
        crew = "bss_Pilot";
		hiddenselections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenselectionstextures[] = {"885_bss\textures\V19\bss_wings_co.paa","885_bss\textures\V19\bss_wing plates_co.paa","885_bss\textures\V19\bss_hull_co.paa","3as\3as_v19\textures\gun gear_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","3as\3as_v19\textures\pizzlepit_co.paa"};
    };

    class ls_vehicle_z95;
    class bss_z95 : ls_vehicle_z95
    {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Z-95 Fighter";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSAir";
        crew = "bss_Pilot";
    };
	
	class bss_Supply_Transport : 3AS_Aegis_Carrier_Pirate_F {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Supply Carrier";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSTransports";
        crew = "bss_Pilot";
    };

	class bss_hmp_base_F : 3AS_HMP_Gunship {
		scope = 0;
		class textureSources {
			class 885th_HMPLivery {
				displayName = "BSS Livery";
				author = "AifeSupport";
				textures[] = {"885_bss\textures\HMP\bss_Body_CO.paa"};
				factions[] = {
					"885_bss"
				};
			};
		};
	};
    class bss_Gunship : bss_hmp_base_F {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "HMP Gunship";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSAir";
        crew = "bss_Pilot";
		textureList[] = {
			"885th_HMPLivery",1,
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"885_bss\textures\HMP\bss_Body_CO.paa"};
		hasGunner = 1;
		hasDriver = 1;
    };
	
    class bss_AAT : 3AS_AAT {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "AAT";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSArmor";
        crew = "bss_Pilot";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"885_bss\textures\AAT\CIS_BSS_AAT_CO.paa"};
    };

    class bss_Shuttle : 3AS_Aegis_Shuttle_Pirate_F {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Syndicate Shuttle";
        side = 2;
        faction = "885_bss";
		editorSubcategory = "Sub885thBSSTransports";
        crew = "bss_Pilot";
    };
};
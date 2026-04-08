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
    class 885_Mando {
        units[] = {
            "viz_recruit",
            "viz_warrior",
            "viz_medic",
            "viz_marksman",
            "viz_heavy",
            "viz_airtransport",
            "viz_speeder",
            "viz_px"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "AifeSupport";
    };
};
class CfgFactionClasses {
    class 885_mando {
        displayName = "[885] Clan Vizsla";
        side = 2;
        priority = 0;
    };
};

class CFgEditorSubcategories
{
	class SubMandoAir
	{
		displayName = "Aircraft";
	};
	class SubMandoGround
	{
		displayName = "Transport";
	};
	class SubMandoTroops
	{
		displayName = "Mandalorians";
	};
};

class CfgGroups {
    class Indep {

        class 885_mando {
            name = "[885th] Clan Vizsla";

            class Infantry {
                name = "Infantry";

                class viz_team {
                    name = "Team";
                    side = 2;
                    faction = "885_mando";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "viz_warrior";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_recruit";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_medic";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_heavy";
                    };
                };

                class viz_squad {
                    name = "Squad";
                    side = 2;
                    faction = "885_mando";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "viz_warrior";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_recruit";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_medic";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_marksman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_heavy";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_recruit";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_recruit";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_heavy";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

                class viz_hell {
                    name = "Hunter Team";
                    side = 2;
                    faction = "885_mando";
                    icon = "\a3\UI_F_Orange\Data\CfgMarkers\n_Ordnance_ca.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "viz_marksman";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_heavy";
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";
				
				class viz_biker_gang {
                    name = "Swoop Gang";
                    side = 2;
                    faction = "885_mando";
                    icon = "\a3\UI_F_Orange\Data\CfgMarkers\n_Ordnance_ca.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "viz_speeder";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_speeder";
                    };
                    class Unit2 {
                        position[] = {5,5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_speeder";
                    };
                    class Unit3 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_speeder";
                    };
                    class Unit4 {
                        position[] = {-5,5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_speeder";
                    };
                };
            };

            class Mechanized {
                name = "Mechanized Infantry";
				class viz_px_squad {
                    name = "PX Escort";
                    side = 2;
                    faction = "885_mando";
                    icon = "\a3\UI_F_Orange\Data\CfgMarkers\n_Ordnance_ca.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "viz_px";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_warrior";
                    };
                    class Unit2 {
                        position[] = {5,5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_warrior";
                    };
                    class Unit3 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_warrior";
                    };
                    class Unit4 {
                        position[] = {-5,5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_warrior";
                    };
                    class Unit5 {
                        position[] = {5,-7,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "viz_warrior";
                    };
                };
            };

            class Air {
                name = "Air";
				
            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class ls_mandalorian_base;
    class 3as_LAAT_Mk2;
    class 3AS_Fliknot_Brown;
    class 3AS_PX10_REP_UP;

    class viz_recruit : ls_mandalorian_base {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recruit";
        side = 2;
        faction = "885_mando";
		editorSubcategory = "SubMandoTroops";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};
        respawnlinkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};

        weapons[] = {"885th_Galaar15","885th_Westar35"};
        respawnWeapons[] = {"885th_Galaar15","885th_Westar35"};

        magazines[] = {MAG_10("885th_mando_cell_yellow"),MAG_5("885th_mando_cell_yellow_pistol")};
        respawnMagazines[] = {MAG_10("885th_mando_cell_yellow"),MAG_5("885th_mando_cell_yellow_pistol")};

        backpack = "ls_mandalorianBackpack_light";
    };

    class viz_warrior : viz_recruit {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Warrior";
        side = 2;
        faction = "885_mando";
		editorSubcategory = "SubMandoTroops";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};
        respawnlinkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};

        weapons[] = {"885th_WestarM5_Base","885th_Westar35"};
        respawnWeapons[] = {"885th_WestarM5_Base","885th_Westar35"};

        magazines[] = {MAG_10("885th_dc_cell_green"),MAG_5("885th_mando_cell_yellow_pistol")};
        respawnMagazines[] = {MAG_10("885th_dc_cell_green"),MAG_5("885th_mando_cell_yellow_pistol")};

        backpack = "ls_mandalorianBackpack_light";
    };
	
    class viz_medic : viz_recruit {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "885_mando";
		editorSubcategory = "SubMandoTroops";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};
        respawnlinkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};

        weapons[] = {"885th_Galaar15","885th_Westar35"};
        respawnWeapons[] = {"885th_Galaar15","885th_Westar35"};

        magazines[] = {MAG_10("885th_mando_cell_yellow"),MAG_6("885th_mando_cell_yellow_pistol")};
        respawnMagazines[] = {MAG_10("885th_mando_cell_yellow"),MAG_6("885th_mando_cell_yellow_pistol")};

        backpack = "ls_mandalorianBackpack_medic";
    };
	
    class viz_marksman : viz_recruit {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "885_mando";
		editorSubcategory = "SubMandoTroops";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};
        respawnlinkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};

        weapons[] = {"885th_Galaar90","885th_Westar35"};
        respawnWeapons[] = {"885th_Galaar90","885th_Westar35"};

        magazines[] = {MAG_10("885th_mando_cell_yellow_high"),MAG_2("885th_mando_cell_yellow_amp"),MAG_6("885th_mando_cell_yellow_pistol")};
        respawnMagazines[] = {MAG_10("885th_mando_cell_yellow_high"),MAG_2("885th_mando_cell_yellow_amp"),MAG_6("885th_mando_cell_yellow_pistol")};

        backpack = "ls_mandalorianBackpack_light";
    };
	
    class viz_heavy : viz_recruit {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy";
        side = 2;
        faction = "885_mando";
		editorSubcategory = "SubMandoTroops";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "ls_mandalorianUniform";

        linkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};
        respawnlinkedItems[] = {"ls_mandalorianVest_vizslaGrunt","ls_mandalorianHelmet_vizslaGrunt","ItemMap","SWLB_comlink_hush98","ItemCompass","ItemWatch","ls_mandalorian_rangefinder_nvg"};

        weapons[] = {"885th_Z6","885th_Westar35"};
        respawnWeapons[] = {"885th_Z6","885th_Westar35"};

        magazines[] = {MAG_10("885th_battery_high_blue"),MAG_2("885th_battery_amp_blue"),MAG_6("885th_mando_cell_yellow_pistol")};
        respawnMagazines[] = {MAG_10("885th_battery_high_blue"),MAG_2("885th_battery_amp_blue"),MAG_6("885th_mando_cell_yellow_pistol")};

        backpack = "ls_mandalorianBackpack_heavy";
    };
	
    class viz_airtransport : 3as_LAAT_Mk2 {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "LAAT/i (Mandalorian)";
        side = 2;
        faction = "885_mando";
		editorSubcategory = "SubMandoAir";
		
        crew = "viz_recruit";
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"885_ClanVizsla\textures\LAAT\Hull_Imp_CO.paa","885_ClanVizsla\textures\LAAT\Wings_Imp_CO.paa","885_ClanVizsla\textures\LAAT\Weapons_Imp_CO.paa","885_ClanVizsla\textures\LAAT\Weapon_Details_Imp_CO.paa","885_ClanVizsla\textures\LAAT\Interior_Imp_CO.paa"};
    };

    class viz_speeder : 3AS_Fliknot_Brown {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fliknot Speeder";
        side = 2;
        faction = "885_mando";
		editorSubcategory = "SubMandoGround";
		
        crew = "viz_warrior";
    };

    class viz_px : 3AS_PX10_REP_UP {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "PX-10 (Mandalorian)";
        side = 2;
        faction = "885_mando";
		editorSubcategory = "SubMandoGround";
		
        crew = "viz_warrior";
	};
};
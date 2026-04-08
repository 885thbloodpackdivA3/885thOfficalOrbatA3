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
    class 885th_Republic {
        units[] = {
            "885th_republic_commando",
            "885th_republic_senator",
			"885th_republic_trooper",
			"885th_republic_guard",
			"885th_republic_pilot",
			"885th_republic_antitank"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "AifeSupport";
    };
};
class CfgFactionClasses {
    class 885th_Faction;
};

class CFgEditorSubcategories
{
	class Sub885thRepublicTroops
	{
		side = 1;
        scope = 2;
        scopeCurator = 2;
		displayName = "[885th] Republic Troops";
	};
	class Sub885thRepublicOfficials
	{
		side = 1;
        scope = 2;
        scopeCurator = 2;
		displayName = "Republic Officials";
	};
	class Sub885thRepublicVehicles
	{
		side = 1;
        scope = 2;
        scopeCurator = 2;
		displayName = "Republic Vehicles";
	};
};

class CfgVehicles {
	class SWLB_CEE_Senate_Commando_Trooper;
	class ls_civ_mirialan_m_officer;
	class lsd_orsf_trooper_standard;
	class B_GEN_Soldier_F;
	
	class 885th_republic_commando : SWLB_CEE_Senate_Commando_Trooper {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        displayName = "Senate Commando";
        faction = "885th_Faction";
		editorSubcategory = "Sub885thRepublicTroops";
		identityTypes[] = {"Head_LSD_CLONE","LanguageENG_F"};
		genericNames = "ls_clone_p2_cr commando";
		
		camouflage = 1.5;
		sensitivity = 1.5;
		threat[] = {1, 0.8, 0.6};
		
        uniformClass = "SWLB_CEE_Senate_Commando_Trooper_Uniform";
        linkedItems[] = {"IDA_vest_base","SWLB_CEE_Senate_Commando_Trooper_Helmet","ItemMap","SWLB_comlink","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"IDA_vest_base","SWLB_CEE_Senate_Commando_Trooper_Helmet","ItemMap","SWLB_comlink","ItemCompass","ItemWatch"};
        weapons[] = {"IDA_DC17M","885th_DC17","Throw","Put"};
        respawnWeapons[] = {"IDA_DC17M","885th_DC17","Throw","Put"};
        Items[] = {"ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		magazines[] = {MAG_5("IDA_dc17m_standard_mag"),MAG_4("885th_dc_cell_blue_pistol"),MAG_3("IDA_grenade_Smoke_mag"),"IDA_grenade_Detonator_mag"};
		respawnMagazines[] = {MAG_5("IDA_dc17m_standard_mag"),MAG_10("885th_dc_cell_blue_low"),MAG_10("885th_dc_cell_blue"),MAG_4("885th_dc_cell_blue_pistol"),MAG_3("IDA_grenade_Smoke_mag"),"IDA_grenade_Detonator_mag"};
		backpack = "SWLB_clone_backpack_predef_heavy";
	};
	class 885th_republic_senator : ls_civ_mirialan_m_officer {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Senator Devo Shin of Alsakan";
        side = 1;
        faction = "885th_Faction";
		EditorSubcategory = "Sub885thRepublicOfficials";		
        identityTypes[] = {"Head_m_mirialan","LanguageENG_F"};
        uniformClass = "U_I_ParadeUniform_01_AAF_decorated_F";
		
        linkedItems[] = {"H_Beret_red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_Beret_red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"885th_S5Security"};
        respawnWeapons[] = {"885th_S5Security"};
        magazines[] = {"885th_cell_green_pistol","885th_cell_green_pistol"};
        respawnMagazines[] = {"885th_cell_green_pistol","885th_cell_green_pistol"};
	};
	class 885th_republic_trooper : lsd_orsf_trooper_standard {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Republic Trooper";
        side = 1;
        faction = "885th_Faction";
		EditorSubcategory = "Sub885thRepublicTroops";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};
        uniformClass = "lsd_orsf_trooper_uniform";
		
		weapons[] = {"885th_DC15S","885th_DC17","Throw","Put"};
		respawnWeapons[] = {"885th_DC15S","885th_DC17","Throw","Put"};
        Items[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		RespawnItems[] = {"ACE_EarPlugs","ACE_EntrenchingTool",MAG_10("IDA_BactaBandage"),MAG_5("ACE_tourniquet"),MAG_4("ACE_Splint"),"ACE_PlasmaIV_500",MAG_2("IDA_BattleStim"),MAG_4("ACE_CableTie"),"acc_flashlight"};
		magazines[] = {MAG_10("885th_dc_cell_blue_low"),MAG_4("885th_dc_cell_blue_pistol"),MAG_3("IDA_grenade_Smoke_mag"),"IDA_grenade_Detonator_mag"};
		respawnMagazines[] = {MAG_10("885th_dc_cell_blue_low"),MAG_4("885th_dc_cell_blue_pistol"),MAG_3("IDA_grenade_Smoke_mag"),"IDA_grenade_Detonator_mag"};
		linkedItems[] = {"lsd_orsf_trooper_vest","ItemMap","ItemGPS","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_CloneBinocular"};
		respawnLinkedItems[] = {"lsd_orsf_trooper_vest","ItemMap","ItemGPS","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_CloneBinocular"};

        backpack = "lsd_orsf_PREDEF_standard_backpack";
    };
	class 885th_republic_antitank : 885th_republic_trooper {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Republic Anti-Tank";
        side = 1;
        faction = "885th_Faction";
		EditorSubcategory = "Sub885thRepublicTroops";
		weapons[] += {"IDA_RPS6_Disposable"};
		respawnWeapons[] += {"IDA_RPS6_Disposable"};
    };
	class 885th_republic_pilot : 885th_republic_trooper {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Republic Pilot";
        side = 1;
        faction = "885th_Faction";
		EditorSubcategory = "Sub885thRepublicTroops";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};
        uniformClass = "lsd_orsf_trooper_uniform";
		
		weapons[] = {"885th_DC17","Throw","Put"};
		respawnWeapons[] = {"885th_DC17","Throw","Put"};
		magazines[] = {MAG_4("885th_dc_cell_blue_pistol"),MAG_3("IDA_grenade_Smoke_mag"),"IDA_grenade_Detonator_mag"};
		respawnMagazines[] = {MAG_4("885th_dc_cell_blue_pistol"),MAG_3("IDA_grenade_Smoke_mag"),"IDA_grenade_Detonator_mag"};
		linkedItems[] += {"H_HeadSet_black_F"};
		respawnLinkedItems[] += {"H_HeadSet_black_F"};

        backpack = "";
    };
	class 885th_republic_guard : B_GEN_Soldier_F {
        author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guard";
        side = 1;
        faction = "885th_Faction";
		EditorSubcategory = "Sub885thRepublicTroops";
        identityTypes[] = {"Head_Tanoan","LanguageENGFRE_F"};

        uniformClass = "U_B_GEN_Soldier_F";
        linkedItems[] = {"V_Pocketed_black_F","H_PASGT_basic_blue_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Pocketed_black_F","H_PASGT_basic_blue_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"885th_DC15S"};
        respawnWeapons[] = {"885th_DC15S"};
        magazines[] = {"885th_dc_cell_green","885th_dc_cell_green","885th_dc_cell_green","885th_dc_cell_green"};
        respawnMagazines[] = {"885th_dc_cell_green","885th_dc_cell_green","885th_dc_cell_green","885th_dc_cell_green"};
	};
    class JLTS_Clone_jumppack_mc;
	class 885th_Jumppack : JLTS_Clone_jumppack_mc {
		author="AifeSupport";
        displayName="[885th] Emergency Descent Pack";
        JLTS_isJumppack=0;
		sc_jumppack=1;
		sc_particles[]=
		{
			{0,-0.3,-0.1}
		};
		maximumLoad=0;
		mass = 15;
	};
    class 885th_medic_Jumppack : JLTS_Clone_jumppack_mc {
		author="AifeSupport";
        displayName="[885th] Emergency Descent Pack - Medical";
        JLTS_isJumppack=0;
		sc_jumppack=1;
		sc_particles[]=
		{
			{0,-0.3,-0.1}
		};
		maximumLoad=200;
		mass = 15;
	};
};
class CfgPatches
{
	class 885_Crates
	{
		requiredAddons[] = {};
		requiredVersion = 1.62;
		units[] =
			{
				"885_cis_box",
				"885_bss_box",
				"885_885_box",
				"885_mando_box",
				"885_medical",
				"885_explosive",
				"885_mortar",
				"885_grenadier",
				"885_rocket",
				"885_arsenalGonk",
			};
		weapons[] = {};
		author = "AifeSupport";
	};
};

class CfgFunctions
{
	class 885_Functions
	{
		tag = "BPD";
		class Logistics {
			class gnkInitialize 
			{
				file = "885_Crates\scripts\Arsenal\ServerCheck.sqf";
			};
			class gnkArsenal
			{
				file = "885_Crates\scripts\Arsenal\InitArsenal.sqf";
				recompile = 1;
			};
			class gnkArsenalBlacklist
			{
				file = "885_Crates\scripts\Arsenal\functions\arsenalblacklist.sqf";
				recompile = 1;
			};
			class gnkArsenalWhitelist
			{
				file = "885_Crates\scripts\Arsenal\functions\arsenalWhitelist.sqf";
				recompile = 1;
			};
			class gnkArsenalPerms
			{
				file = "885_Crates\scripts\Arsenal\functions\ArsenalPerms.sqf";
				recompile = 1;
			};
			class gnkArsenalMedical
			{
				file = "885_Crates\scripts\Arsenal\functions\MedicalTank.sqf";
				recompile = 1;
			};
		};
	};
};

class CfgEditorCategories
{
	class 885_Supplies // Category class, you point to it in editorCategory property
	{
		displayName = "[885th] Supply Props"; // Name visible in the list
	};
};
class CfgEditorSubcategories
{
	class Sub885Supplybox
	{
		displayName = "Supply Boxes";
	};
	class Sub885Statics
	{
		displayName = "Logistics";
	};
};

class CfgVehicles
{
	class ReammoBox_F;
	class 3as_GNK;
	class 885_arsenalGonk : 3as_GNK{
		class UserActions
		{
			class 885th_Treatment
			{
				userActonID = 1;
				displayName = "<t size='1.5' color='#FFA500'>Recieve Treatment</t>";
				radius = 10;
				priority = 99;
				onlyForPlayer=1;
				position="geometry";
				condition = "true";
				statement = "[player] call ACE_medical_treatment_fnc_fullHealLocal;";
			};
			class 885th_GiveMedicPerms
			{
				userActonID = 2;
				displayName = "<t color='#FF0000'>Get Med Perms</t>";
				radius = 10;
				priority = 98;
				onlyForPlayer=1;
				position="geometry";
				condition = "!(player getUnitTrait 'Medic')";
				statement = "player setUnitTrait['Medic', 1];";
			};
			class 885th_TakeMedicPerms
			{
				userActonID = 2;
				displayName = "<t color='#FF0000'>Remove Med Perms</t>";
				radius = 10;
				priority = 98;
				onlyForPlayer=1;
				position="geometry";
				condition = "(player getUnitTrait 'Medic')";
				statement = "player setUnitTrait['Medic', 0];";
			};
			class 885th_GiveEngineerPerms
			{
				userActonID = 4;
				displayName = "<t color='#FFFF00'>Get Engineer Perms</t>";
				radius = 10;
				priority = 97;
				onlyForPlayer=1;
				position="geometry";
				condition = "!(player getUnitTrait 'Engineer')";
				statement = "player setUnitTrait['Engineer', 1];";
			};
			class 885th_TakeEngineerPerms
			{
				userActonID = 5;
				displayName = "<t color='#FFFF00'>Remove Engineer Perms</t>";
				radius = 10;
				priority = 97;
				onlyForPlayer=1;
				position="geometry";
				condition = "(player getUnitTrait 'Engineer')";
				statement = "player setUnitTrait['Engineer', 0];";
			};
			class 885th_GiveEODPerms
			{
				userActonID = 2;
				displayName = "<t color='#00FF00'>Get EOD Perms</t>";
				radius = 10;
				priority = 96;
				onlyForPlayer=1;
				position="geometry";
				condition = "!(player getUnitTrait 'explosiveSpecialist')";
				statement = "player setUnitTrait['explosiveSpecialist', 1];";
			};
			class 885th_TakeEODPerms
			{
				userActonID = 3;
				displayName = "<t color='#00FF00'>Remove EOD Perms</t>";
				radius = 10;
				priority = 96;
				onlyForPlayer=1;
				position="geometry";
				condition = "(player getUnitTrait 'explosiveSpecialist')";
				statement = "player setUnitTrait['explosiveSpecialist', 0];";
			};
		};
		class EventHandlers
		{
			postInit = "[_this select 0] remoteExec ['BPD_fnc_gnkArsenal'];";
		};
		author="AifeSupport";
		ace_cargo_canLoad=0;
		ace_cargo_size=10;
		ace_dragging_canCarry=0;
		ace_dragging_canDrag=0;
		scope=2;
		scopeCurator=2;
		editorCategory="885_Supplies";
		editorSubCategory="Sub885Statics";
		displayName="Arsenal Gonk";
		icon="iconCrate";
	};

	class 885_box : ReammoBox_F {
		author = "AifeSupport";
		mapSize = 1.25;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.382;
			verticalOffsetWorld = 0;
			init = "''";
		};
		ace_cargo_canLoad = 1;
		ace_cargo_size = 2;
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_ignoreWeight = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		scope = 0;
		scopeCurator = 0;
		editorCategory = "885_Supplies";
		editorSubCategory = "Sub885Supplybox";
		displayName = "CIS Supply Box";
		model = "3as\3as_props\crates\models\supply_Large.p3d";
		icon = "iconCrate";
		maximumLoad = 9000;
		destrType = "DestructBuilding";
		armor = 200;
		hiddenSelections[] ={
			"camo1"
		};
		hiddenSelectionsTextures[] = {};
		class DestructionEffects
		{
			class Smoke2
			{
				simulation = "particles";
				type = "AmmoSmokeParticles2";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 2;
			};
			class Bullets
			{
				simulation = "particles";
				type = "AmmoBulletCore";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1.2;
			};
			class HouseDestr
			{
				simulation = "destroy";
				type = "DelayedDestructionAmmoBox";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 10;
			};
		};
		class TransportItems
		{};
	};

	class 885_cis_box : 885_box{
		scope = 0;
		scopeCurator = 2;
		displayName = "CIS Supply Box";
		maximumLoad = 9000;
		destrType = "DestructBuilding";
		armor = 200;
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"885_Crates\textures\supply_large_cis.paa"
		};
		class TransportItems
		{
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 100;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 10;
			};
			class _xx_885th_e_cell_red
			{
				name = "885th_e_cell_red";
				count = 50;
			};
			class _xx_885th_e_cell_red_pistol
			{
				name = "885th_e_cell_red_pistol";
				count = 20;
			};
			class _xx_885th_e_battery_red_high
			{
				name = "885th_e_battery_red_high";
				count = 10;
			};
			class _xx_885th_e_cell_red_amp
			{
				name = "885th_e_cell_red_amp";
				count = 10;
			};
			class _xx_IDA_grenade_Detonator_mag
			{
				name = "IDA_grenade_Detonator_mag";
				count = 25;
			};
		};
	};

	class 885_bss_box : 885_box{
		scope = 0;
		scopeCurator = 2;
		displayName = "BSS Supply Box";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"885_Crates\textures\supply_large_bss.paa"
		};
		class TransportItems
		{
			class _xx_885th_cell_green_pistol
			{
				name = "885th_cell_green_pistol";
				count = 10;
			};
			class _xx_885th_cell_green_high
			{
				name = "885th_cell_green_high";
				count = 20;
			};
			class _xx_885th_dc_cell_green
			{
				name = "885th_dc_cell_green";
				count = 50;
			};
			class _xx_IDA_grenade_Smoke_mag
			{
				name = "IDA_grenade_Smoke_mag";
				count = 5;
			};
			class _xx_IDA_grenade_Detonator_mag
			{
				name = "IDA_grenade_Detonator_mag";
				count = 5;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 100;
			};
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 100;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 100;
			};
			class _xx_LFP_item_injector_red
			{
				name = "LFP_item_injector_red";
				count = 20;
			};
			class _xx_LFP_item_injector_blue
			{
				name = "LFP_item_injector_blue";
				count = 20;
			};
			class _xx_ACE_painkillers
			{
				name = "ACE_painkillers";
				count = 25;
			};
			class _xx_ACE_splint
			{
				name = "ACE_splint";
				count = 40;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 45;
			};
			class _xx_IDA_BattleStim
			{
				name = "IDA_BattleStim";
				count = 50;
			};
			class _xx_IDA_Cauterizer
			{
				name = "IDA_Cauterizer";
				count = 10;
			};
			class _xx_GW_Vasko250
			{
				name = "GW_Vasko250";
				count = 30;
			};
		};
	};

	class 885_885_box : 885_box{
		ace_dragging_ignoreWeightCarry = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "885th Supply Box";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"885_Crates\textures\supply_large_bpd.paa"
		};
		class TransportItems
		{
			class _xx_885th_dc_cell_blue_pistol
			{
				name = "885th_dc_cell_blue_pistol";
				count = 10;
			};
			class _xx_885th_dc_cell_blue_pistol_extended
			{
				name= "885th_dc_cell_blue_pistol_extended";
				count = 10;
			};
			class _xx_885th_Dc17s_Dual_Pistol_Mag
			{
				name = "885th_Dc17s_Dual_Pistol_Mag";
				count = 15;
			};
			class _xx_885th_dc15sa_pistol_mag_blue
			{
				name = "885th_dc15sa_pistol_mag_blue";
				count = 15;
			};
			class _xx_885th_dc_cell_blue_high
			{
				name = "885th_dc_cell_blue_high";
				count = 20;
			};
			class _xx_885th_dc_cell_blue
			{
				name = "885th_dc_cell_blue";
				count = 50;
			};
			class _xx_885th_dc_cell_blue_amp
			{
				name = "885th_dc_cell_blue_amp";
				count = 5;
			};
			class _xx_885th_dc_cell_blue_over
			{
				name = "885th_dc_cell_blue_over";
				count = 5;
			};
			class _xx_885th_battery_low_blue
			{
				name = "885th_battery_low_blue";
				count = 15;
			};
			class _xx_885th_battery_high_blue
			{
				name = "885th_battery_high_blue";
				count = 10;
			};
			class _xx_885th_battery_ampHR_blue
			{
				name = "885th_battery_ampHR_blue";
				count = 15;
			};
			class _xx_885th_dc_cell_blue_Omega
			{
				name = "885th_dc_cell_blue_Omega";
				count = 15;
			};
			class _xx_885th_dp23_scattershot_mag
			{
				name = "885th_dp23_scattershot_mag";
				count = 15;
			};
			class _xx_885th_dp23_slug_mag
			{
				name = "885th_dp23_slug_mag"
				count = 15;
			};
			class _xx_885th_DX23_scattershot_mag
			{
				name = "885th_DX23_scattershot_mag"
				count = 15;
			};
			class _xx_885th_DX23_Doomsday_slug_Mag
			{
				name = "885th_DX23_Doomsday_slug_Mag"
				count =15;
			};
			class _xx_885th_774_Flame_Cell
			{
				name =  " 885th_774_Flame_Cell"
				count = 15;
			};
			class _xx_885th_battery_ampm41_green
			{
				name = "885th_battery_ampm41_green";
				count = 15;
			};
			class _xx_885th_battery_ampAR_blue
			{
				name = "885th_battery_ampAR_blue";
				count = 15;
			};
			class _xx_885_dc_cell_AP
			{
				name = "885_dc_cell_AP";
				count = 25;
			};
			class _xx_885_dc_cell_sniper
			{
				name = "885_dc_cell_sniper";
				count = 20;
			};
			class _xx_885th_RC_AAD
			{
				name = "885th_RC_AAD";
				count = 20;
			};
			class _xx_885th_DC15BR_battery_blue
			{
				name = "885th_DC15BR_battery_blue";
				count = 15;
			};
			class _xx_885th_DC15LEMKII_battery_high_blue
			{
				name = "885th_DC15LEMKII_battery_high_blue";
				count = 15;
			};
			class _xx_885th_DC15CMKII_cell_blue_apex
			{
				name = "885th_DC15CMKII_cell_blue_apex";
				count = 20;
			};
			class _xx_885th_DC15LEMKII_He_Battery_Blue
			{
				name = "885th_DC15LEMKII_He_Battery_Blue";
				count = 20;
			};
			class _xx_JLTS_clone_comlink
			{
				name = "JLTS_clone_comlink";
				count = 20;
			};
			class _xx_SquadShieldMagazine
			{
				name = "SquadShieldMagazine";
				count = 5;
			};
			class _xx_IDA_grenade_Detonator_mag
			{
				name = "IDA_grenade_Detonator_mag";
				count = 20;
			};
			class _xx_IDA_BactaBandage
			{
				name = "IDA_BactaBandage";
				count = 50;
			};
			class _xx_ACE_painkillers
			{
				name = "ACE_painkillers";
				count = 20;
			};
			class _xx_ACE_splint
			{
				name = "ACE_splint";
				count = 20;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 20;
			};
			class _xx_GW_Vasko250
			{
				name = "GW_Vasko250";
				count = 30;
			};
			class _xx_GW_Vasko500
			{
				name = "GW_Vasko500";
				count = 15;
			};
		};
	};

	class 885_mando_box : 885_box{
		scope = 0;
		scopeCurator = 2;
		displayName = "Mandalorian Supply Box";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"885_Crates\textures\supply_large_mando.paa"
		};
		class TransportItems
		{
			class _xx_885th_mando_cell_yellow_pistol
			{
				name = "885th_mando_cell_yellow_pistol";
				count = 10;
			};
			class _xx_885th_mando_cell_yellow_high
			{
				name = "885th_mando_cell_yellow_high";
				count = 20;
			};
			class _xx_885th_mando_cell_yellow
			{
				name = "885th_mando_cell_yellow";
				count = 50;
			};
			class _xx_885th_mando_battery_yellow_high
			{
				name = "885th_mando_battery_yellow_high";
				count = 5;
			};
			class _xx_IDA_grenade_Detonator_mag
			{
				name = "IDA_grenade_Detonator_mag";
				count = 5;
			};
			class _xx_IDA_wrist_rocket
			{
				name = "IDA_wrist_rocket";
				count = 5;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 100;
			};
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 100;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 100;
			};
			class _xx_LFP_item_injector_red
			{
				name = "LFP_item_injector_red";
				count = 20;
			};
			class _xx_LFP_item_injector_blue
			{
				name = "LFP_item_injector_blue";
				count = 20;
			};
			class _xx_ACE_painkillers
			{
				name = "ACE_painkillers";
				count = 25;
			};
			class _xx_ACE_splint
			{
				name = "ACE_splint";
				count = 40;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 45;
			};
			class _xx_IDA_BattleStim
			{
				name = "IDA_BattleStim";
				count = 50;
			};
			class _xx_IDA_Cauterizer
			{
				name = "IDA_Cauterizer";
				count = 10;
			};
			class _xx_GW_Vasko500
			{
				name = "GW_Vasko500";
				count = 30;
			};
		};
	};

	class 885_medical : 885_box{
		ace_dragging_ignoreWeightCarry = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "Medical Supply Box";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"
		};
		class TransportItems
		{
			class _xx_IDA_BactaBandage
			{
				name = "IDA_BactaBandage";
				count = 250;
			};
			class _xx_bacta_nade
			{
				name = "bacta_nade";
				count = 50;
			};
			class _xx_kat_chestSeal
			{
				name = "kat_chestSeal";
				count = 100;
			};
			class _xx_kat_IO_FAST
			{
				name = "kat_IO_FAST";
				count = 50;
			};
			class _xx_kat_IV_16
			{
				name = "kat_IV_16";
				count = 50;
			};
			class _xx_kat_larynx
			{
				name = "kat_larynx";
				count = 10;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 50;
			};
			class _xx_ACE_epinepherine
			{
				name = "ACE_epinepherine";
				count = 50;
			};
			class _xx_IDA_BattleStim
			{
				name = "IDA_BattleStim";
				count = 50;
			};
			class _xx_GW_Stim_Perigen
			{
				name = "GW_Stim_Perigen";
				count = 50;
			};
			class _xx_GW_Stim_Enkephalin
			{
				name = "GW_Stim_Enkephalin";
				count = 50;
			};
			class _xx_GW_Stim_Kyrprax
			{
				name = "GW_Stim_Kyrprax";
				count = 50;
			};
			class _xx_GW_Injector_Polybiotics
			{
				name = "GW_Injector_Polybiotics";
				count = 50;
			};
			class _xx_GW_Stim_Myocaine
			{
				name = "GW_Stim_Myocaine";
				count = 50;
			};
			class _xx_kat_naloxone
			{
				name = "kat_naloxone";
				count = 50;
			};
			class _xx_kat_Carbonate
			{
				name = "ACE_kat_Carbonate";
				count = 25;
			};
			class _xx_ACE_splint
			{
				name = "ACE_splint";
				count = 50;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 50;
			};
			class _xx_IDA_Cauterizer
			{
				name = "IDA_Cauterizer";
				count = 5;
			};
			class _xx_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 5;
			};
			class _xx_kat_X_AED
			{
				name = "AED-X Series";
				count = 2;
			};
			class _xx_GW_Vasko250
			{
				name = "GW_Vasko250";
				count = 25;
			};
			class _xx_GW_Vasko500
			{
				name = "GW_Vasko500";
				count = 25;
			};
			class _xx_GW_Vasko1000
			{
				name = "GW_Vasko1000";
				count = 25;
			};
			class _xx_ACE_bloodIV
			{
				name = "ACE_bloodIV";
				count = 25;
			};
			class _xx_ACE_bloodIV_250
			{
				name = "ACE_bloodIV_250";
				count = 25;
			};
			class _xx_ACE_bloodIV_500
			{
				name = "ACE_bloodIV_500";
				count = 25;
			};
			class _xx_ACE_salineIV
			{
				name = "ACE_salineIV";
				count = 25;
			};
			class _xx_ACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 25;
			};
			class _xx_ACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 25;
			};
			class _xx_SquadShieldMagazine
			{
				name = "SquadShieldMagazine";
				count = 10;
			};
			class _xx_kat_CarryStretcherBag
			{
				name = "kat_CarryStretcherBag";
				count = 10;
			};
		};
	};

	class 885_explosive : 885_box{
		scope = 2;
		scopeCurator = 2;
		displayName = "Explosive Supply Box";
		armor = 500;
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red_co.paa"
		};
		class TransportItems
		{
			class _xx_IDA_grenade_Detonator_mag
			{
				name = "IDA_grenade_Detonator_mag";
				count = 50;
			};
			class _xx_IDA_explosive_Detpack_mag
			{
				name = "IDA_explosive_Detpack_mag";
				count = 15;
			};
			class _xx_IDA_explosive_Detpack2_mag
			{
				name = "IDA_explosive_Detpack2_mag";
				count = 10;
			};
			class _xx_APERSMineDispenser_Mag
			{
				name = "APERSMineDispenser_Mag";
				count = 5;
			};
			class _xx_3AS_DetPack
			{
				name = "3AS_DetPack";
				count = 20;
			};
			class _xx_HX_AT_Mine_Mag
			{
				name = "HX_AT_Mine_Mag";
				count = 10;
			};
			class _xx_JLTS_explosive_emp_10_mag
			{
				name = "JLTS_explosive_emp_10_mag";
				count = 15;
			};
			class _xx_JLTS_explosive_emp_20_mag
			{
				name = "JLTS_explosive_emp_20_mag";
				count = 10;
			};
			class _xx_JLTS_explosive_emp_50_mag
			{
				name = "JLTS_explosive_emp_50_mag";
				count = 5;
			};
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 10;
			};
			class _xx_ACE_M26_Clacker
			{
				name = "ACE_M26_Clacker";
				count = 10;
			};
		};
	};
	
	class 885_grenadier : 885_explosive {
		displayName = "Genadier Supply Box";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_Orange_co.paa"
		};
		class TransportItems
		{
			class _xx_3Rnd_HE_Grenade_shell
			{
				name = "3Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				name = "1Rnd_HE_Grenade_shell";
				count = 15;
			};
			class _xx_3AS_3UGL_MK54_HE_shell
			{
				name = "3AS_3UGL_MK54_HE_shell";
				count = 10;
			};
			class _xx_3AS_1UGL_MK54_HE_shell
			{
				name = "3AS_1UGL_MK54_HE_shell";
				count = 15;
			};
			class _xx_3AS_3UGL_MK55_Smoke_Blue_shell
			{
				name = "3AS_3UGL_MK55_Smoke_Blue_shell";
				count = 10;
			};
			class _xx_3AS_1UGL_MK55_Smoke_Blue_shell
			{
				name = "3AS_1UGL_MK55_Smoke_Blue_shell";
				count = 10;
			};
			class _xx_3AS_3UGL_MK55_Smoke_Red_shell
			{
				name = "3AS_3UGL_MK55_Smoke_Red_shell";
				count = 10;
			};
			class _xx_3AS_1UGL_MK55_Smoke_Red_shell
			{
				name = "3AS_1UGL_MK55_Smoke_Red_shell";
				count = 10;
			};
			class _xx_3AS_3UGL_MK55_Smoke_White_shell
			{
				name = "3AS_3UGL_MK55_Smoke_White_shell";
				count = 10;
			};
			class _xx_3AS_1UGL_MK55_Smoke_White_shell
			{
				name = "3AS_1UGL_MK55_Smoke_White_shell";
				count = 10;
			};
			class _xx_885th_MPL_3rnd_HE_Grenade
			{
				name = "885th_MPL_3rnd_HE_Grenade";
				count = 10;
			};
			class _xx_885th_MPL_3rnd_AP_Grenade
			{
				name = "885th_MPL_3rnd_AP_Grenade";
				count = 10;
			};
			class _xx_885th_MPL_3rnd_Cluster_Grenade
			{
				name = "885th_MPL_3rnd_Cluster_Grenade";
				count = 10; 
			};
			class _xx_885th_MPL_3rnd_AP_Micro_Rocket
			{
				name = "885th_MPL_3rnd_AP_Micro_Rocket";
				count = 10;
			};
			class _xx_ACE_40mm_Flare_white
			{
				name = "ACE_40mm_Flare_white";
				count = 10;
			};
			class _xx_ACE_40mm_Flare_red
			{
				name = "ACE_40mm_Flare_red";
				count = 10;
			};
		};
	};
	
	class 885_mortar : 885_explosive {
		ace_dragging_ignoreWeightCarry = 1;
		displayName = "Mortarmen Supply Box";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Green\Supply_Large_Green_co.paa"
		};
		class TransportItems
		{
			class _xx_3AS_Republic_Mortar_Bag
			{
				name = "3AS_Republic_Mortar_Bag";
				count = 4;
			};
			class _xx_3AS_8Rnd_82mm_Mo_shells
			{
				name = "3AS_8Rnd_82mm_Mo_shells";
				count = 20;
			};
			class _xx_3AS_8Rnd_82mm_Mo_LG
			{
				name = "3AS_8Rnd_82mm_Mo_LG";
				count = 10;
			};
			class _xx_3AS_8Rnd_82mm_Mo_guided
			{
				name = "3AS_8Rnd_82mm_Mo_guided";
				count = 10;
			};
			class _xx_3AS_8Rnd_82mm_Mo_Smoke_White
			{
				name = "3AS_8Rnd_82mm_Mo_Smoke_White";
				count = 10;
			};
			class _xx_3AS_8Rnd_82mm_Mo_Flare_White
			{
				name = "3AS_8Rnd_82mm_Mo_Flare_White";
				count = 10;
			};
			class _xx_3AS_8Rnd_82mm_Mo_Flare_Red
			{
				name = "3AS_8Rnd_82mm_Mo_Flare_Red";
				count = 10;
			};
		};
	};

	class 885_rocket : 885_explosive {
		ace_dragging_ignoreWeightCarry = 1;
		displayName = "AT Supply Box";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_Props\Crates\Data\Supply_Large_Black\Supply_Large_Black_co.paa"
		};
		class TransportItems
		{
			class _xx_IDA_RPS6_rocket
			{
				name = "IDA_RPS6_rocket";
				count = 15;
			};
			class _xx_IDA_PLX1_Rocket
			{
				name = "IDA_PLX1_Rocket";
				count = 10;
			};
			class _xx_885th_PLX1_AT_Rocket
			{
				name = "885th_PLX1_AT_Rocket";
				count = 10;
			};
			class _xx_885th_PLX1_HE_Rocket
			{
				name = "885th_PLX1_HE_Rocket";
				count = 10;
			};
			class _xx_3AS_JLTS_MK39_AA
			{
				name = "3AS_JLTS_MK39_AA";
				count = 10;
			};
			class _xx_3AS_JLTS_MK43_AT
			{
				name = "3AS_JLTS_MK43_AT";
				count = 10;
			};
			class _xx_3AS_JLTS_MK44_HE
			{
				name = "3AS_JLTS_MK44_HE";
				count = 10;
			};
			class _xx_3AS_MK41_AT
			{
				name = "3AS_MK41_AT";
				count = 15;
			};
			class _xx_3AS_MK40_AT
			{
				name = "3AS_MK40_AT";
				count = 10;
			};
			class _xx_3AS_MK42_HE
			{
				name = "3AS_MK42_HE";
				count = 15;
			};
		};
	};
};
#include "ACEX_Fortify_Presets.hpp"
#include "AIFE_Spawner_Presets.hpp"

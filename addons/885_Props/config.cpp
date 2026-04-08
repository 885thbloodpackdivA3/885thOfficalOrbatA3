class CfgPatches
{
	class 885_Props
	{
		requiredAddons[] = {};
		requiredVersion = 1.62;
		units[] =
			{
				"885_hyperspace_tube",
			};
		weapons[] = {};
		author = "AifeSupport";
	};
};

class CfgEditorCategories
{
	class 885_Props // Category class, you point to it in editorCategory property
	{
		displayName = "[885th] Props"; // Name visible in the list
	};
};
class CfgEditorSubcategories
{
	class Sub885Effects
	{
		displayName = "Effects";
	};
};
class CfgVehicles
{
	class House;
	class 885_hyperspace_tube : House {
		class  SimpleObject {
			eden = 1;
		};
		author="AifeSupport";
		ace_cargo_canLoad=0;
		ace_cargo_size=0;
		ace_dragging_canCarry=0;
		ace_dragging_canDrag=0;
		scope=2;
		scopeCurator=2;
		editorCategory="885_Props";
		editorSubCategory="Sub885Effects";
		faction="prop";
		displayName="Hyperspace Tube";
		icon="iconCrate";
		model="885_props\hyperspace.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"885_props\textures\hyperspace_co.paa",
		};
	};
};
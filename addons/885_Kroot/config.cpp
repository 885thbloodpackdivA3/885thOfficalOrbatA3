class CfgPatches {
    class 885_Kroot {
        units[] = {
			"885_Warrior",
			"885_Carnivore",
			"885_Shaper",
            "885_Warrior_Outworlder",
			"885_Carnivore_Outworlder",
			"885_Shaper_Outworlder",
            "885_Warrior_Shade",
			"885_Carnivore_Shade",
			"885_Shaper_Shade",
		};
        weapons[] = {
        };
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "AifeSupport";
    };
};

class CfgFactionClasses {
    class 885_Kroot_faction 
	{
        displayName = "[885th] Kroot";
        side = 2;
        priority = 0;
    };
};

class CfgEditorCategories
{
    class 885_Kroot_category
    {
        author = "AifeSupport";
        displayName = "[885th] Kroot";
        priority = -6;
        side = 2;
    };
};

class CFgEditorSubcategories
{
	class 885_Kroot_Soldiers
	{
		side = 2;
        scope = 2;
        scopeCurator = 2;
		displayName = "Soldiers";
	};
};

class CfgVehicles {
    class Kroot_Kroot_Warrior;
    class Kroot_Kroot_Carnivore;
    class Kroot_Kroot_Shaper;
    class Kroot_Kroot_Warrior_Outworlder;
    class Kroot_Kroot_Carnivore_Outworlder;
    class Kroot_Kroot_Shaper_Outworlder;
    class Kroot_Kroot_Warrior_Shade;
    class Kroot_Kroot_Carnivore_Shade;
    class Kroot_Kroot_Shaper_Shade;

	class 885_Warrior : Kroot_Kroot_Warrior {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.8;
	};

    class 885_Carnivore : Kroot_Kroot_Carnivore {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.8;
	};

    class 885_Shaper : Kroot_Kroot_Shaper {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.8;
	};

    class 885_Warrior_Outworlder : Kroot_Kroot_Warrior_Outworlder {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.6;
	};

    class 885_Carnivore_Outworlder : Kroot_Kroot_Carnivore_Outworlder {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.6;
	};

    class 885_Shaper_Outworlder : Kroot_Kroot_Shaper_Outworlder {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.6;
	};

    class 885_Warrior_Shade : Kroot_Kroot_Warrior_Shade {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.5;
	};

    class 885_Carnivore_Shade : Kroot_Kroot_Carnivore_Shade {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.5;
	};

    class 885_Shaper_Shade : Kroot_Kroot_Shaper_Shade {
		author = "AifeSupport";
        scope = 2;
        scopeCurator = 2;
		isMan = 1;
		side = 2;
		faction = "885_Kroot_faction";
        editorCategory = "885_Kroot_category";
		editorSubcategory = "885_Kroot_Soldiers";
		camouflage = 0.5;
	};
};
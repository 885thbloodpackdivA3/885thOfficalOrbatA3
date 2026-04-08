/*
	Extend this list by adding your own AIFE_Spawner_Presets file using this format
	Readable displayName
	list of object class names, with a cost (not yet implemented).

	Add the following line to your config.cpp
	#include "AIFE_Spawner_Presets.hpp"
*/
class AIFE_Spawner_Presets {
	class 885_supply {
		displayName = "Supply Crates";
		objects[] = {
			{"885_885_box", 0},
			{"885_medical", 0},
			{"885_explosive", 0},
			{"885_mortar", 0},
			{"885_grenadier", 0},
			{"885_rocket", 0}
		};
	};
	class 885_air {
		displayName = "Standard Air Vehicles";
		objects[] = {
			{"885th_LAAT_Gunship", 0},
			{"3AS_LAAT_Mk2Lights", 0},
			{"885th_LAAT_C", 0},
			{"3AS_Patrol_LAAT_Republic", 0},
			{"3AS_ARC_170_Red", 0},
			{"3AS_BTLB_Bomber", 0},
			{"3AS_Vwing_base", 0},
			{"3AS_Z95_Republic", 0}
		};
	};
	class 885_ground {
		displayName = "Standard Ground";
		objects[] = {
			{"885th_ITT", 0},
			{"3AS_ITT_Medical", 0},
			{"885th_LSV_EWeb", 0},
			{"3AS_Barc", 0},
			{"3AS_ISP", 0},
			{"3AS_ISP_Transport", 0},
			{"3AS_PX10_REP_R3", 0},
			{"3AS_PX10_REP_UP", 0},
			{"3AS_Saber_M1", 0},
			{"3as_atte_base", 0}
		};
	};
	class 885_armor {
		displayName = "Armor";
		objects[] = {
			{"3AS_PX10_REP_UP", 0},
			{"3AS_Saber_M1", 0},
			{"3AS_Saber_M1Recon", 0},
			{"3AS_Saber_Super", 0},
			{"3AS_Saber_M1G", 0},
			{"3as_atte_base", 0},
			{"3AS_RX200_Base", 0}
		};
	};
	class 885_transport {
		displayName = "Transport Vehicles";
		objects[] = {
			{"885th_LAAT_Gunship", 0},
			{"3AS_LAAT_Mk2Lights", 0},
			{"885th_LAAT_C", 0},
			{"3AS_Patrol_LAAT_Republic", 0},
			{"3AS_Barc", 0},
			{"3AS_ISP_Transport", 0},
			{"885th_ITT", 0},
			{"3AS_ITT_Logistics", 0},
			{"3AS_ITT_Medical", 0},
			{"3AS_Rho_REP_F", 0},
			{"3AS_Rho_REP_Medical", 0}
		};
	};
	class 885_basebuild {
		displayName = "Base Building Vehicles";
		objects[] = {
			{"3AS_Rho_REP_F", 0},
			{"885th_LAAT_C", 0},
			{"3AS_Republic_FCP", 0},
			{"3AS_Keeradak_F", 0},
			{"3AS_Rho_Crate_REP_Barracks", 0},
			{"3AS_Rho_Crate_REP_Medical", 0},
			{"3AS_Rho_Crate_REP_Transport", 0}
		};
	};
	class 885_emplacement {
		displayName = "Emplacements";
		objects[] = {
			{"3AS_HeavyRepeater_Unarmored", 0},
			{"3AS_HeavyRepeater_Armored", 0},
			{"3AS_AV7", 0}
		};
	};
};

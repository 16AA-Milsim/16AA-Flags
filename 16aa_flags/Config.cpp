#include "BIS_AddonInfo.hpp"
class CfgPatches {
  class 16aa_flags {
    units[] = {};
    weapons[] = {};
    requiredAddons[] = {};
    author = "16AA";
    authors[] = {"16AA"};
    url = "https://16aa.net";
  };
};

class CfgVehicles {
	class FlagCarrier; //Base class for flags
	
	class 1PlatoonFlag: FlagCarrier {
    author = "16AA";
		editorPreview="\16aa_flags\icon\1pl.jpg";
    scope = 2;
		scopeCurator = 2;
    displayName = "16AA 1 Platoon Flag";
    class EventHandlers {
      init = "(_this select 0) setFlagTexture '\16aa_flags\icon\1pl.paa'";
    };
  };

	class 1Platoon1SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\1pl1sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 1 Platoon 1 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\1pl1sc.paa'";
		};
	};

	class 1Platoon2SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\1pl2sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 1 Platoon 2 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\1pl2sc.paa'";
		};
	};

	class 1Platoon3SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\1pl3sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 1 Platoon 3 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\1pl3sc.paa'";
		};
	};

	class 1PlatoonHQFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\1plhq.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 1 Platoon HQ Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\1plhq.paa'";
		};
	};
	
	class 2PlatoonFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\2pl.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 2 Platoon Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\2pl.paa'";
		};
	};

	class 2Platoon1SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\2pl1sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 2 Platoon 1 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\2pl1sc.paa'";
		};
	};

	class 2Platoon2SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\2pl2sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 2 Platoon 2 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\2pl2sc.paa'";
		};
	};

	class 2Platoon3SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\2pl3sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 2 Platoon 3 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\2pl3sc.paa'";
		};
	};

	class 2PlatoonHQFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\2plhq.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 2 Platoon HQ Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\2plhq.paa'";
		};
	};

	class 3PlatoonFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\3pl.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 3 Platoon Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\3pl.paa'";
		};
	};

	class 3Platoon1SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\3pl1sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 3 Platoon 1 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\3pl1sc.paa'";
		};
	};

	class 3Platoon2SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\3pl2sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 3 Platoon 2 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\3pl2sc.paa'";
		};
	};

	class 3Platoon3SectionFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\3pl3sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 3 Platoon 3 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\3pl3sc.paa'";
		};
	};

	class 3PlatoonHQFlag: FlagCarrier	{
		author = "16AA";
		editorPreview="\16aa_flags\icon\3plhq.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 3 Platoon HQ Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\3plhq.paa'";
		};
	};

	class 4PlatoonFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\4pl.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 4 Platoon Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\4pl.paa'";
		};
	};

	class 4Platoon1SectionFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\4pl1sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 4 Platoon 1 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\4pl1sc.paa'";
		};
	};

	class 4Platoon2SectionFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\4pl2sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 4 Platoon 2 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\4pl2sc.paa'";
		};
	};

	class 4Platoon3SectionFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\4pl3sc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 4 Platoon 3 Section Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\4pl3sc.paa'";
		};
	};

	class 16AAHQv2Flag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\16aahqv2.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA HQ Flag v2";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\16aahqv2.paa'";
		};
	};

	class 13AirAssaultSupportRegimentFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\13aasr.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 13 Air Assault Support Regiment Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\13aasr.paa'";
		};
	};

	class 16AirAssaultBrigadeFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\16aa.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Main Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\16aa.paa'";
		};
	};

	class 16CloseSupportMedicalRegimentCrestedFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\16csmr_crested.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 16 Close Support Medical Regiment Crested Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\16csmr_crested.paa'";
		};
	};

	class 216ParaSignalsFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\216ps.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 216 Para Signals Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\216ps.paa'";
		};
	};

	class 16AAHQFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\16aahq.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA HQ Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\16aahq.paa'";
		};
	};

  class 16CloseSupportMedicalRegimentFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\16csmr.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA 16 Close Support Medical Regiment Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\16csmr.paa'";
		};
	};

	class InfantryTrainingCentreFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\itc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Infantry Training Centre Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\itc.paa'";
		};
	};

	class JointHelicopterCommandFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\jhc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Joint Helicopter Command Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\jhc.paa'";
		};
	};

	class MilitaryIntelligenceFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\mi.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Military Intelligence Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\mi.paa'";
		};
	};

	class PathfindersFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\pf.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Pathfinders Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\pf.paa'";
		};
	};

	class PathfinderPlatoonCrestedFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\pf_crested.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Pathfinder Platoon Crested Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\pf_crested.paa'";
		};
	};

	class RegimentalHQFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\reghq.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Regimental HQ Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\reghq.paa'";
		};
	};

	class RoyalElectricalAndMechanicalEngineersFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\reme.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Royal Electrical and Mechanical Engineers Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\reme.paa'";
		};
	};

	class RoyalLogisticCorpsFlag: FlagCarrier {
		author = "16AA";
		editorPreview="\16aa_flags\icon\rlc.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "16AA Royal Logistic Corps Flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\16aa_flags\icon\rlc.paa'";
		};
	};
};
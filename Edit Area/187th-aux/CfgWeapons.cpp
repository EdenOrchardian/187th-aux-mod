class CfgWeapons
{
// main import
	class UniformItem;
	class Uniform_Base;
	
	
/***********************************************************************************************************
--------------------------------------------------------------Uniforms---------------------------------------
************************************************************************************************************/
// Other Uniform stuff imports
	class JLTS_CloneArmor;	
	
	class 187th_Clone_Recruit: JLTS_CloneArmor //Current issue... GOD ARMOR
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[187th] Clone Armor (Recruit)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "187th_CloneArmor_Recruit";
			containerClass = "Supply150";
			mass = 40;
		};
		
	};
	
	class 187th_Clone_Trooper: JLTS_CloneArmor
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Armor (Trooper)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "187th_CloneArmor_Trooper";
			containerClass	= "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Clone_Medic: JLTS_CloneArmor
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Armor (Medic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "187th_CloneArmor_Medic";
			containerClass	= "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Clone_Airborne: JLTS_CloneArmor
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Armor (Airborne)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "187th_CloneArmor_Airborne";
			containerClass	= "Supply150";
			mass = 40;
		};
	};
	
	
/***********************************************************************************************************
--------------------------------------------------------------Vests------------------------------------------
************************************************************************************************************/
	class JLTS_CloneVestHolster;
	class VestItem;
	class 187_Clone_Holster: JLTS_CloneVestHolster
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Sidearm Holster";
		picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"};
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};
	class JLTS_CloneVestReconNCO;
	class 187_Clone_Vest_CPL: JLTS_CloneVestReconNCO
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (Corporal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass = 80;
		};
	};
	class JLTS_CloneVestReconOfficer;
	class 187_Clone_Vest_SGT: JLTS_CloneVestReconOfficer
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (SGT/SGM)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass=80;
		};
	};
	class JLTS_CloneVestOfficer;
	class 187_Clone_Vest_LT: JLTS_CloneVestOfficer
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (Lieutenant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};
	class 187_Clone_Vest_CPT: 187_Clone_Vest_LT
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (Captain)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};


/***********************************************************************************************************
--------------------------------------------------------------Helmets------------------------------------------
************************************************************************************************************/
	class JLTS_CloneHelmetP2;
	class HeadgearItem;
	class 187_Clone_Helmet: JLTS_CloneHelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Trooper Helmet (P2)";
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_helmet_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 2;
					hitpointName = "HitFace";
					passThrough = 0.03;
				};
				class Head
				{
					armor = 2;
					hitPointName = "HitHead";
					passThrough = 0.03;
				};
				class Neck
				{
					armor = 2;
					hitpointName = "HitNeck";
					passThrough = 0.03;
				};
			};
		};
		allowedFacewear[] = {};
	};
	class 187_Clone_Helmet_Recruit: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Recruit Helmet (P2)";
		hiddenSelectionsTextures[]={"MRC\JLTS\characters\CloneArmor\data\Clone_Helmet_P2_co.paa"};
		
	};
	class 187_Clone_Helmet_Airborne: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Trooper Helmet (Airborne)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_helmet_co.paa"
		};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		subItems[]=
		{
			"JLTS_CloneNVG_spec"
		};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.03;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.03;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.03;
				};
			};
		};
		allowedFacewear[] = {};
	};

	class 187_Pilot_HelmetP2: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Pilot Helmet (P2)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		model = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Characters\Clones\Headgear\Textures\Phase2\Pilot_Unmarked_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.03;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.03;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.03;
				};
			};
		};
		allowedFacewear[] = {};
	};
	class 187_Pilot_HelmetP1: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Pilot Helmet (P1)";
		model = "\3AS\3AS_Characters\Clones\Headgear\3AS_P1_Pilot.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Characters\Clones\Headgear\Textures\Phase1\Helmet_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_P1_Pilot.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.03;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.03;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.03;
				};
			};
		};
		allowedFacewear[] = {};
	};
    
    //--------------------------------------------------------------------------------------------
    //-----------------------------------Medical Stuff--------------------------------------------
    //--------------------------------------------------------------------------------------------
    
    class ACE_Morphine;
    class CBA_MiscItem_ItemInfo;
    class ACE_fieldDressing;
    class ItemInfo;
    
    class 187th_Stimpack : ACE_Morphine
    {
        scope = 2;
        author = "PraetorPanda";
        displayName = "[187th] Stimpack";
        descriptionShort = "Inject for less pain";
		descriptionUse = "Use instead of Morphine";
        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
    };
    
    
    class 187th_Bacta_Injection : ACE_fieldDressing
    {
        scope = 2;
        displayName = "[187th] Bacta Spray";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
			mass = 0.2;
        };
    };

	//--------------------------------------------------------------------------------------------
    //-----------------------------------CIS Stuff------------------------------------------------
    //--------------------------------------------------------------------------------------------
    
  class JLTS_E5;
  class JLTS_RG4D;
  class JLTS_RPS6;
  class JLTS_E5S;
  class SWOP_E5C;
  class JLTS_DP23;
  class SWOP_b2gun;
  class WBK_Dutch_Vibro;
  class DpSword;
  class SWOP_DTL20BlasterRifle_Scoped;
  class SWOP_rg4dPistol;
  class WBK_lightsaber_sith;
  class JLTS_DW32S;
  class JLTS_212th_E5_shield;
  class 212th_E5A;

  class 187th_JLTS_E5: JLTS_E5
  {
    displayName="E-5";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_JLTS_RG4D: JLTS_RG4D
  {
    displayName="RG-4D";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_JLTS_RPS6: JLTS_RPS6
  {
    displayName="RPS-6";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_JLTS_E5S: JLTS_E5S
  {
    displayName="E-5S";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_SWOP_E5C: SWOP_E5C
  {
    displayName="E5 C Heavy Blaster";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_JLTS_DP23: JLTS_DP23
  {
    displayName="DP-23";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_SWOP_b2gun: SWOP_b2gun
  {
    displayName="B2 HandBlaster";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_WBK_Dutch_Vibro: WBK_Dutch_Vibro
  {
    displayName="BX Commando Vibroblade";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_DpSword: DpSword
  {
    displayName="Vibroblade";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_SWOP_DTL20BlasterRifle_Scoped: SWOP_DTL20BlasterRifle_Scoped
  {
    displayName="DTL20a Pulse rifle";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_SWOP_rg4dPistol: SWOP_rg4dPistol
  {
    displayName="RG-4D Blaster Pistol";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_WBK_lightsaber_sith: WBK_lightsaber_sith
  {
    displayName="Lightsaber (Sii-Taa) (Red)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_JLTS_DW32S: JLTS_DW32S
  {
    displayName="DW-32S";
    scope=1;
    class LinkedItems
    {
    };
  };

  class 187th_JLTS_212th_E5_shield_JLTS_riot_shield_droid_attachment: JLTS_212th_E5_shield
  {
    displayName="[212th] E5 (Shield)";
    scope=1;
    class LinkedItems
    {

    };
  };

  class 187th_212th_E5A_SWOP_E5_HoloScope: 212th_E5A
  {
    displayName="[212th] E5A";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="SWOP_E5_HoloScope";
      };
    };
  };
      
};// END
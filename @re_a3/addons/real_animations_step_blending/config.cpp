#define _ARMA_

class CfgPatches
{
	class real_animations_step_blending
	{
		name = "Real Animations Step Blending";
		author = "taro8, amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_anims_f"};
	};
};

class CfgMovesBasic
{
	class StandBase;
	class TransAnimBase;
	class InjuredMovedBase;
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPknlMstpSrasWrflDnon;
		class AmovPknlMstpSrasWrflDnon_AmovPknlMrunSlowWrflDf: AmovPknlMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMwlkSrasWrflDf: AmovPknlMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMlmpSrasWrflDf: AmovPknlMwlkSrasWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMrunSrasWrflDf: AmovPknlMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMtacSrasWrflDf: AmovPknlMrunSrasWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPknlMstpSlowWpstDnon_G0S;
		class AmovPknlMwlkSlowWrflDf: AidlPknlMstpSlowWpstDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMlmpSlowWrflDf: AmovPknlMwlkSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMwlkSlowWpstDf: AidlPknlMstpSlowWpstDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMlmpSlowWpstDf: AmovPknlMwlkSlowWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMtacSlowWpstDf: AmovPknlMwlkSlowWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
			ragdoll = 0;
		};
		class AmovPknlMrunSlowWpstDf: AmovPknlMwlkSlowWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMstpSrasWlnrDnon;
		class AmovPpneMrunSrasWlnrDf: AmovPpneMstpSrasWlnrDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSlowWrflDf_ver2;
		class AidlPercMwlkSrasWrflDf: AmovPercMwlkSlowWrflDf_ver2
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSlowWrflDf: AmovPercMwlkSlowWrflDf_ver2
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMlmpSlowWrflDf: AmovPercMwlkSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMstpSlowWrflDnon;
		class AmovPercMrunSlowWrflDf: AmovPercMstpSlowWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPercMrunSrasWrflDf: AmovPercMrunSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMwlkSrasWrflDf_AdvePercMrunSnonWrflDf: AmovPercMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSrasWrflDf_AdvePercMrunSnonWnonDf: AmovPercMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSnonWnonDf_AdvePercMrunSnonWnonDf: AmovPercMwlkSrasWrflDf_AdvePercMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMlmpSrasWrflDf: AmovPercMwlkSrasWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMtacSrasWrflDf: AmovPercMwlkSrasWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMtacSlowWrflDf_ver2;
		class AmovPercMtacSlowWrflDf: AmovPercMtacSlowWrflDf_ver2
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPercMstpSnonWnonDnon_G0S;
		class AmovPercMwlkSnonWnonDf: AidlPercMstpSnonWnonDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMlmpSnonWnonDf: AmovPercMwlkSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMstpSnonWnonDnon;
		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPknlMstpSlowWrflDnon_G0S;
		class AmovPknlMrunSlowWrflDf: AidlPknlMstpSlowWrflDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSlowWrflDnon_AmovPknlMrunSlowWrflDf: AmovPknlMrunSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMtacSlowWrflDf: AmovPknlMrunSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMrunSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMrunSlowWpstDf: AmovPercMrunSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMlmpSrasWpstDf: AmovPercMwlkSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMtacSrasWpstDf: AmovPercMwlkSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSlowWpstDf: AmovPercMwlkSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMlmpSlowWpstDf: AmovPercMwlkSlowWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMtacSlowWpstDf: AmovPercMwlkSlowWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSrasWpstDnon;
		class AmovPknlMwlkSrasWpstDf: AmovPknlMstpSrasWpstDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMlmpSrasWpstDf: AmovPknlMwlkSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMtacSrasWpstDf: AmovPknlMwlkSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPknlMstpSrasWpstDnon_G0S;
		class AmovPknlMrunSrasWpstDf: AidlPknlMstpSrasWpstDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSlowWpstDnon_AmovPknlMrunSrasWpstDf: AmovPknlMrunSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPknlMstpSrasWlnrDnon_G0S;
		class AmovPknlMtacSrasWlnrDf: AidlPknlMstpSrasWlnrDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMwlkSrasWlnrDf: AidlPknlMstpSrasWlnrDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMlmpSrasWlnrDf: AmovPknlMwlkSrasWlnrDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMrunSlowWlnrDf: AidlPknlMstpSrasWlnrDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMrunSrasWlnrDf: AmovPercMrunSlowWlnrDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMevaSlowWlnrDf: AmovPercMrunSlowWlnrDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMevaSlowWlnrDf: AmovPercMrunSlowWlnrDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMrunSrasWlnrDf: AmovPercMrunSlowWlnrDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSnonWnonDnon;
		class AmovPknlMrunSnonWnonDf: AmovPknlMstpSnonWnonDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMwlkSnonWnonDf: AmovPknlMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMlmpSnonWnonDf: AmovPknlMwlkSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSnonWnonDnon_AmovPknlMrunSnonWnonDf: AmovPknlMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMstpSrasWrflDnon;
		class AmovPpneMrunSlowWrflDf: AmovPpneMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMsprSlowWrflDf: AmovPpneMrunSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMevaSlowWrflDf: AmovPpneMrunSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPpneMstpSrasWpstDnon_G0S;
		class AmovPpneMrunSlowWpstDf: AidlPpneMstpSrasWpstDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMsprSlowWpstDf: AmovPpneMrunSlowWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPpneMstpSnonWnonDnon_G0S;
		class AmovPpneMrunSnonWnonDf: AidlPpneMstpSnonWnonDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMsprSnonWnonDf: AmovPpneMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPincMstpSrasWrflDnon;
		class AmovPincMrunSlowWrflDf: AmovPincMstpSrasWrflDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPincMsprSlowWrflDf: AmovPincMrunSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPincMstpSrasWpstDnon;
		class AmovPincMrunSlowWpstDf: AmovPincMstpSrasWpstDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPincMstpSnonWnonDnon;
		class AmovPincMrunSnonWnonDf: AmovPincMstpSnonWnonDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSrasWrflDnon_AmovPknlMsprSrasWrflDf: TransAnimBase
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf: TransAnimBase
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf: TransAnimBase
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf: TransAnimBase
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf: TransAnimBase
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf: TransAnimBase
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class SprintBaseDf;
		class AmovPercMevaSrasWrflDf: SprintBaseDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMevaSrasWrflDf: AmovPercMevaSrasWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMevaSlowWrflDf: AmovPknlMevaSrasWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMevaSlowWrflDf: AmovPercMevaSrasWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPercMevaSrasWrflDf: AmovPercMevaSlowWrflDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class SprintCivilBaseDf;
		class AmovPercMevaSnonWnonDf: SprintCivilBaseDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMevaSnonWnonDf: SprintCivilBaseDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMevaSrasWpstDf: SprintCivilBaseDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMevaSrasWpstDf: AmovPercMevaSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMevaSlowWpstDf: AmovPercMevaSrasWpstDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AdvePercMstpSnonWnonDnon;
		class AdvePercMwlkSnonWnonDf: AdvePercMstpSnonWnonDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMstpSoptWbinDnon;
		class AmovPercMwlkSoptWbinDf: AmovPercMstpSoptWbinDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMlmpSoptWbinDf: AmovPercMwlkSoptWbinDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMrunSnonWbinDf: AmovPercMwlkSoptWbinDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMevaSnonWbinDf: AmovPercMrunSnonWbinDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMstpSoptWbinDnon;
		class AmovPknlMwlkSoptWbinDf: AmovPknlMstpSoptWbinDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMlmpSoptWbinDf: AmovPknlMwlkSoptWbinDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMrunSnonWbinDf: AmovPknlMwlkSoptWbinDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPknlMevaSnonWbinDf: AmovPknlMrunSnonWbinDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMstpSoptWbinDnon;
		class AmovPpneMwlkSoptWbinDf: AmovPpneMstpSoptWbinDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMrunSnonWbinDf: AmovPpneMwlkSoptWbinDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPpneMevaSnonWbinDf: AmovPpneMrunSnonWbinDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AcinPercMrunSrasWrflDf: InjuredMovedBase
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AcinPercMrunSnonWnonDf: InjuredMovedBase
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AcinPercMrunSnonWpstDf: AcinPercMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMstpSlowWlnrDnon;
		class AovrPercMstpSlowWlnrDf: AmovPercMstpSlowWlnrDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSlowWlnrDf: AmovPercMstpSlowWlnrDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AidlPercMstpSrasWlnrDnon_G0S;
		class AmovPercMtacSrasWlnrDf: AidlPercMstpSrasWlnrDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMwlkSrasWlnrDf: AidlPercMstpSrasWlnrDnon_G0S
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMlmpSrasWlnrDf: AmovPercMwlkSrasWlnrDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMrunSrasWrflDfl;
		class AmovPercMrunSrasWrflDfl_AmovPercMrunSrasWrflDf: AmovPercMrunSrasWrflDfl
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class AmovPercMrunSrasWrflDfr;
		class AmovPercMrunSrasWrflDfr_AmovPercMrunSrasWrflDf: AmovPercMrunSrasWrflDfr
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class Campaign_Base;
		class Acts_PercMwlkSlowWrflDf: Campaign_Base
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class ApanPercMstpSnonWnonDnon;
		class ApanPercMrunSnonWnonDf: ApanPercMstpSnonWnonDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class ApanPercMwlkSnonWnonDf: ApanPercMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class ApanPercMsprSnonWnonDf: ApanPercMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class ApanPknlMstpSnonWnonDnon;
		class ApanPknlMrunSnonWnonDf: ApanPknlMstpSnonWnonDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class ApanPknlMwlkSnonWnonDf: ApanPknlMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class ApanPknlMsprSnonWnonDf: ApanPknlMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class ApanPpneMstpSnonWnonDnon;
		class ApanPpneMrunSnonWnonDf: ApanPpneMstpSnonWnonDnon
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
		class ApanPpneMsprSnonWnonDf: ApanPpneMrunSnonWnonDf
		{
			minPlayTime = 0;
			canBlendStep = 1;
		};
	};
};
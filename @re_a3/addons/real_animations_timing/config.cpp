#define _ARMA_

class CfgPatches
{
	class real_animations_timing
	{
		name = "Real Animations Timing";
		author = "RCA3, amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_anims_f"};
	};
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			//speed = 0.7398;
		};
		class AmovPercMrunSrasWrflDf_ldst: AmovPercMrunSrasWrflDf
		{
			//speed = 0.7398;
		};
		class AmovPercMrunSrasWrflDfl: AmovPercMrunSrasWrflDf
		{
			//speed = 0.7;
		};
		class AmovPercMrunSrasWrflDfl_ldst: AmovPercMrunSrasWrflDfl
		{
			//speed = 0.7;
		};
		class AmovPercMrunSrasWrflDfr: AmovPercMrunSrasWrflDfl
		{
			//speed = 0.7;
		};
		class AmovPercMrunSrasWrflDfr_ldst: AmovPercMrunSrasWrflDfr
		{
			//speed = 0.7;
		};
		class AmovPercMrunSrasWrflDl: AmovPercMrunSrasWrflDfl
		{
			speed = 0.7515;
		};
		class AmovPercMrunSrasWrflDr: AmovPercMrunSrasWrflDfl
		{
			speed = 0.7911;
		};
		class AmovPercMrunSrasWrflDb: AmovPercMrunSrasWrflDfl
		{
			speed = 0.7;
		};
		class AmovPercMwlkSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			speed = 0.862;
		};
		class AmovPercMwlkSrasWrflDb: AmovPercMwlkSrasWrflDf
		{
			speed = 0.48;
		};
		class SprintBaseDf;
		class AmovPercMevaSrasWrflDf: SprintBaseDf
		{
			speed = 1.588;
		};
		class AmovPercMevaSlowWrflDf: AmovPercMevaSrasWrflDf
		{
			speed = 1.588;
		};
		class AmovPercMstpSlowWrflDnon;
		class AmovPercMrunSlowWrflDf: AmovPercMstpSlowWrflDnon
		{
			speed = 0.7398;
		};
		class AmovPercMrunSlowWrflDfl: AmovPercMrunSlowWrflDf
		{
			speed = 0.7;
		};
		class AmovPercMrunSlowWrflDfr: AmovPercMrunSlowWrflDfl
		{
			speed = 0.7;
		};
		class AmovPercMrunSlowWrflDl: AmovPercMrunSlowWrflDfl
		{
			speed = 0.7475;
		};
		class AmovPercMrunSlowWrflDr: AmovPercMrunSlowWrflDfl
		{
			speed = 0.789796;
		};
		class AmovPercMrunSlowWrflDb: AmovPercMrunSlowWrflDfl
		{
			speed = 0.7;
		};
		class AmovPercMrunSlowWrflDbl: AmovPercMrunSlowWrflDfl
		{
			speed = 0.6994;
		};
		class AmovPercMrunSlowWrflDbr: AmovPercMrunSlowWrflDfl
		{
			speed = 0.6994;
		};
		class AmovPercMwlkSlowWrflDf_ver2: AmovPercMstpSlowWrflDnon {};
		class AmovPercMwlkSlowWrflDb_ver2: AmovPercMwlkSlowWrflDf_ver2
		{
			speed = 0.292;
		};
		class AmovPercMwlkSlowWrflDl_ver2: AmovPercMwlkSlowWrflDf_ver2
		{
			speed = 0.21;
		};
		class AmovPercMwlkSlowWrflDr_ver2: AmovPercMwlkSlowWrflDf_ver2
		{
			speed = 0.294;
		};
		class AmovPercMwlkSlowWrflDbl_ver2: AmovPercMwlkSlowWrflDf_ver2
		{
			speed = 0.275;
		};
		class AmovPercMwlkSlowWrflDbr_ver2: AmovPercMwlkSlowWrflDf_ver2
		{
			speed = 0.275;
		};
		class AmovPercMtacSrasWrflDf: AmovPercMwlkSrasWrflDf
		{
			speed = 0.645;
		};
		class AmovPercMtacSrasWrflDb: AmovPercMtacSrasWrflDf
		{
			speed = 0.6213;
		};
		class AmovPercMtacSrasWrflDl: AmovPercMtacSrasWrflDf
		{
			speed = 0.6513;
		};
		class AmovPercMtacSrasWrflDr: AmovPercMtacSrasWrflDf
		{
			speed = 0.5907;
		};
		class AmovPknlMstpSrasWrflDnon;
		class AmovPknlMwlkSrasWrflDf: AmovPknlMstpSrasWrflDnon
		{
			speed = 0.36;
		};
		class AmovPknlMwlkSrasWrflDl: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.657;
		};
		class AmovPknlMwlkSrasWrflDr: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.677;
		};
		class AmovPknlMwlkSrasWrflDfr: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.345;
		};
		class AmovPknlMwlkSrasWrflDfl: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.345;
		};
		class AmovPknlMwlkSrasWrflDb: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.39;
		};
		class AidlPknlMstpSlowWpstDnon_G0S;
		class AmovPknlMwlkSlowWrflDf: AidlPknlMstpSlowWpstDnon_G0S
		{
			speed = 0.422;
		};
		class AmovPknlMwlkSlowWrflDl: AmovPknlMwlkSlowWrflDf
		{
			speed = 0.815;
		};
		class AmovPknlMwlkSlowWrflDr: AmovPknlMwlkSlowWrflDf
		{
			speed = 0.844;
		};
		class AmovPknlMwlkSlowWrflDb: AmovPknlMwlkSlowWrflDf
		{
			speed = 0.526;
		};
		class AmovPknlMwlkSlowWrflDbr: AmovPknlMwlkSlowWrflDf
		{
			speed = 0.505;
		};
		class AidlPknlMstpSlowWrflDnon_G0S;
		class AmovPknlMrunSlowWrflDf: AidlPknlMstpSlowWrflDnon_G0S
		{
			speed = 0.65;
		};
		class AmovPknlMrunSlowWrflDfl: AmovPknlMrunSlowWrflDf
		{
			speed = 0.6507;
		};
		class AmovPknlMrunSlowWrflDfr: AmovPknlMrunSlowWrflDfl
		{
			speed = 0.6507;
		};
		class AmovPknlMrunSlowWrflDl: AmovPknlMrunSlowWrflDfl
		{
			speed = 0.6938;
		};
		class AmovPknlMrunSlowWrflDr: AmovPknlMrunSlowWrflDfl
		{
			speed = 0.83664;
		};
		class AmovPknlMrunSlowWrflDb: AmovPknlMrunSlowWrflDfl
		{
			speed = 0.7;
		};
		class AmovPknlMrunSlowWrflDbl: AmovPknlMrunSlowWrflDfl
		{
			speed = 0.7;
		};
		class AmovPknlMrunSlowWrflDbr: AmovPknlMrunSlowWrflDfl
		{
			speed = 0.7;
		};
		class AmovPknlMrunSrasWrflDf: AmovPknlMstpSrasWrflDnon
		{
			//speed = 0.65;
		};
		class AmovPknlMrunSrasWrflDfl: AmovPknlMrunSrasWrflDf
		{
			//speed = 0.6;
		};
		class AmovPknlMrunSrasWrflDfr: AmovPknlMrunSrasWrflDfl
		{
			//speed = 0.6;
		};
		class AmovPknlMrunSrasWrflDb: AmovPknlMrunSrasWrflDfl
		{
			//speed = 0.7;
		};
		class AmovPknlMrunSrasWrflDl: AmovPknlMrunSrasWrflDfl
		{
			//speed = 0.6938;
		};
		class AmovPknlMrunSrasWrflDr: AmovPknlMrunSrasWrflDfl
		{
			//speed = 0.83664;
		};
		class AmovPknlMrunSrasWrflDbl: AmovPknlMrunSrasWrflDb
		{
			//speed = 0.7;
		};
		class AmovPknlMrunSrasWrflDbr: AmovPknlMrunSrasWrflDb
		{
			//speed = 0.7;
		};
		class AmovPknlMtacSlowWrflDf: AmovPknlMrunSlowWrflDf
		{
			speed = 1.3;
		};
		class AmovPknlMtacSlowWrflDl: AmovPknlMrunSlowWrflDl
		{
			speed = 1.2;
		};
		class AmovPknlMtacSlowWrflDr: AmovPknlMrunSlowWrflDr
		{
			speed = 1.35;
		};
		class AmovPknlMtacSlowWrflDfl: AmovPknlMrunSlowWrflDfl
		{
			speed = 1.28;
		};
		class AmovPknlMtacSlowWrflDfr: AmovPknlMrunSlowWrflDfr
		{
			speed = 1.3;
		};
		class AmovPknlMtacSlowWrflDb: AmovPknlMrunSlowWrflDb
		{
			speed = 1.5;
		};
		class AmovPknlMtacSlowWrflDbl: AmovPknlMrunSlowWrflDbl
		{
			speed = 1.45;
		};
		class AmovPknlMtacSlowWrflDbr: AmovPknlMrunSlowWrflDbr
		{
			speed = 1.5;
		};
		class AmovPknlMtacSrasWrflDf: AmovPknlMrunSrasWrflDf
		{
			speed = 0.509;
		};
		class AmovPknlMtacSrasWrflDb: AmovPknlMtacSrasWrflDf
		{
			speed = 0.5662;
		};
		class AmovPknlMtacSrasWrflDr: AmovPknlMtacSrasWrflDf
		{
			speed = 0.591;
		};
		class AmovPknlMtacSrasWrflDfr: AmovPknlMtacSrasWrflDf
		{
			speed = 0.5296;
		};
		class AmovPknlMtacSrasWrflDl: AmovPknlMtacSrasWrflDf
		{
			speed = 0.5736;
		};
		class AmovPknlMtacSrasWrflDfl: AmovPknlMtacSrasWrflDf
		{
			speed = 0.5296;
		};
		class AmovPknlMevaSrasWrflDf: AmovPercMevaSrasWrflDf
		{
			speed = 1.3095;
		};
		class AmovPknlMevaSlowWrflDf: AmovPknlMevaSrasWrflDf
		{
			speed = 1.3095;
		};
		class AmovPknlMevaSrasWrflDfl: AmovPknlMevaSrasWrflDf
		{
			speed = 1.3095;
		};
		class AmovPercMevaSrasWrflDfr;
		class AmovPknlMevaSrasWrflDfr: AmovPercMevaSrasWrflDfr
		{
			speed = 1.3095;
		};
		class AmovPknlMevaSlowWrflDfl: AmovPknlMevaSrasWrflDfl
		{
			speed = 1.3095;
		};
		class AmovPknlMevaSlowWrflDfr: AmovPknlMevaSrasWrflDfr
		{
			speed = 1.3095;
		};
		class AmovPpneMstpSrasWrflDnon;
		class AmovPpneMrunSlowWrflDf: AmovPpneMstpSrasWrflDnon
		{
			speed = 0.55;
		};
		class AmovPpneMrunSlowWrflDl: AmovPpneMrunSlowWrflDf
		{
			speed = 0.812;
		};
		class AmovPpneMrunSlowWrflDfl: AmovPpneMrunSlowWrflDf
		{
			speed = 0.96;
		};
		class AmovPpneMrunSlowWrflDb: AmovPpneMrunSlowWrflDf
		{
			speed = 0.55;
		};
		class AmovPpneMrunSlowWrflDfr: AmovPpneMrunSlowWrflDf
		{
			speed = 0.32;
		};
		class AmovPpneMsprSlowWrflDf;
		class AmovPpneMsprSlowWrflDfl: AmovPpneMsprSlowWrflDf
		{
			speed = 1.15;
		};
		class AmovPpneMsprSlowWrflDfr: AmovPpneMsprSlowWrflDf
		{
			speed = 0.38;
		};
		class AmovPpneMsprSlowWrflDl: AmovPpneMsprSlowWrflDf
		{
			speed = 0.966;
		};
		class AmovPpneMevaSlowWrflDf: AmovPpneMrunSlowWrflDf
		{
			//speed = 0.262;
		};
		class AmovPpneMrunSlowWrflDbl: AmovPpneMrunSlowWrflDf
		{
			speed = 0.55;
		};
		class AmovPpneMrunSlowWrflDbr: AmovPpneMrunSlowWrflDf
		{
			speed = 0.68;
		};
		class AmovPpneMsprSlowWrflDbl: AmovPpneMsprSlowWrflDf
		{
			speed = 0.68;
		};
		class AmovPpneMsprSlowWrflDbr: AmovPpneMsprSlowWrflDf
		{
			speed = 0.94;
		};
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl: AmovPpneMstpSrasWrflDnon
		{
			speed = 1.023;
		};
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr: AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl
		{
			speed = 1.023;
		};
		class AidlPercMstpSnonWnonDnon_G0S;
		class AmovPercMwlkSnonWnonDf: AidlPercMstpSnonWnonDnon_G0S
		{
			speed = 0.31;
		};
		class AmovPercMstpSnonWnonDnon;
		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			speed = 1.397;
		};
		class SprintCivilBaseDf;
		class AmovPercMevaSnonWnonDf: SprintCivilBaseDf
		{
			speed = 1.6284;
		};
		class AmovPercMrunSnonWnonDfl;
		class AmovPercMrunSnonWnonDl: AmovPercMrunSnonWnonDfl
		{
			speed = 0.6869;
		};
		class AmovPercMrunSnonWnonDr: AmovPercMrunSnonWnonDl
		{
			speed = 0.6552;
		};
		class AmovPercMrunSnonWnonDb: AmovPercMrunSnonWnonDl
		{
			speed = 0.652;
		};
		class AmovPercMrunSnonWnonDbl: AmovPercMrunSnonWnonDl
		{
			speed = 0.65;
		};
		class AmovPercMrunSnonWnonDbr: AmovPercMrunSnonWnonDl
		{
			speed = 0.65;
		};
		class AmovPercMwlkSnonWnonDl: AmovPercMwlkSnonWnonDf
		{
			speed = 0.483871;
		};
		class AmovPercMwlkSnonWnonDr: AmovPercMwlkSnonWnonDf
		{
			speed = 0.483871;
		};
		class AmovPknlMevaSnonWnonDf: SprintCivilBaseDf
		{
			speed = 1.54;
		};
		class AmovPknlMstpSnonWnonDnon;
		class AmovPknlMrunSnonWnonDf: AmovPknlMstpSnonWnonDnon
		{
			speed = 0.6271;
		};
		class AmovPknlMrunSnonWnonDfl: AmovPknlMrunSnonWnonDf
		{
			speed = 0.55;
		};
		class AmovPknlMrunSnonWnonDfr: AmovPknlMrunSnonWnonDf
		{
			speed = 0.55;
		};
		class AmovPknlMrunSnonWnonDl: AmovPknlMrunSnonWnonDf
		{
			speed = 0.58;
		};
		class AmovPknlMrunSnonWnonDr: AmovPknlMrunSnonWnonDf
		{
			speed = 0.575;
		};
		class AmovPknlMrunSnonWnonDb: AmovPknlMrunSnonWnonDf
		{
			speed = 0.68;
		};
		class AmovPknlMrunSnonWnonDbl: AmovPknlMrunSnonWnonDf
		{
			speed = 0.68;
		};
		class AmovPknlMrunSnonWnonDbr: AmovPknlMrunSnonWnonDf
		{
			speed = 0.68;
		};
		class AmovPknlMwlkSnonWnonDf: AmovPknlMrunSnonWnonDf
		{
			speed = 0.445;
		};
		class AmovPknlMwlkSnonWnonDr: AmovPknlMwlkSnonWnonDf
		{
			speed = 0.405;
		};
		class AmovPknlMwlkSnonWnonDfl: AmovPknlMwlkSnonWnonDf
		{
			speed = 0.44;
		};
		class AmovPknlMwlkSnonWnonDfr: AmovPknlMwlkSnonWnonDf
		{
			speed = 0.44;
		};
		class AmovPknlMwlkSnonWnonDb: AmovPknlMwlkSnonWnonDf
		{
			speed = 0.4;
		};
		class AmovPknlMwlkSnonWnonDbl: AmovPknlMwlkSnonWnonDf
		{
			speed = 0.4;
		};
		class AmovPknlMwlkSnonWnonDbr: AmovPknlMwlkSnonWnonDf
		{
			speed = 0.4;
		};
		class AidlPpneMstpSnonWnonDnon_G0S;
		class AmovPpneMrunSnonWnonDf: AidlPpneMstpSnonWnonDnon_G0S
		{
			speed = 0.75;
		};
		class AmovPpneMsprSnonWnonDf: AmovPpneMrunSnonWnonDf
		{
			//speed = 0.463;
		};
		class AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			speed = 1.2;
		};
		class AmovPpneMstpSnonWnonDnon;
		class AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon: AmovPpneMstpSnonWnonDnon
		{
			speed = 0.735;
		};
		class AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			speed = 1.1;
		};
		class AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon: AmovPpneMstpSnonWnonDnon
		{
			speed = 0.95;
		};
		class AmovPknlMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon: AmovPpneMstpSrasWrflDnon
		{
			speed = 0.85;
		};
		class AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon;
		class AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon
		{
			speed = 0.85;
		};
		class AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			speed = 0.6;
		};
		class AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			speed = 0.485;
		};
		class AmovPercMevaSrasWpstDf: SprintCivilBaseDf
		{
			speed = 1.52;
		};
		class AmovPercMevaSlowWpstDf: AmovPercMevaSrasWpstDf
		{
			speed = 1.52;
		};
		class AmovPknlMevaSrasWpstDf: AmovPercMevaSrasWpstDf
		{
			speed = 1.36668;
		};
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMwlkSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			speed = 0.463483;
		};
		class AmovPercMwlkSrasWpstDb: AmovPercMwlkSrasWpstDf
		{
			speed = 0.88;
		};
		class AmovPercMwlkSlowWpstDf: AmovPercMwlkSrasWpstDf
		{
			speed = 0.434;
		};
		class AmovPercMwlkSlowWpstDl: AmovPercMwlkSlowWpstDf
		{
			speed = 0.792;
		};
		class AmovPercMwlkSlowWpstDr: AmovPercMwlkSlowWpstDf
		{
			speed = 0.78;
		};
		class AmovPercMwlkSlowWpstDb: AmovPercMwlkSlowWpstDf
		{
			speed = 0.93;
		};
		class AmovPercMrunSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			speed = 0.693;
		};
		class AmovPercMrunSrasWpstDl: AmovPercMrunSrasWpstDf
		{
			speed = 1.2934;
		};
		class AmovPercMrunSrasWpstDr: AmovPercMrunSrasWpstDf
		{
			speed = 1.342;
		};
		class AmovPercMrunSrasWpstDb: AmovPercMrunSrasWpstDf
		{
			speed = 0.78556;
		};
		class AmovPercMtacSrasWpstDf: AmovPercMwlkSrasWpstDf
		{
			speed = 0.723;
		};
		class AmovPercMtacSrasWpstDl: AmovPercMtacSrasWpstDf
		{
			speed = 1.4344;
		};
		class AmovPercMtacSrasWpstDr: AmovPercMtacSrasWpstDf
		{
			speed = 1.2496;
		};
		class AmovPercMtacSrasWpstDb: AmovPercMtacSrasWpstDf
		{
			speed = 0.7036;
		};
		class AmovPercMtacSlowWpstDf: AmovPercMwlkSlowWpstDf
		{
			speed = 0.432;
		};
		class AmovPercMtacSlowWpstDl: AmovPercMtacSlowWpstDf
		{
			speed = 0.795;
		};
		class AmovPercMtacSlowWpstDr: AmovPercMtacSlowWpstDf
		{
			speed = 0.785;
		};
		class AmovPercMtacSlowWpstDb: AmovPercMtacSlowWpstDf
		{
			speed = 0.921;
		};
		class AmovPknlMstpSrasWpstDnon;
		class AmovPknlMwlkSrasWpstDf: AmovPknlMstpSrasWpstDnon
		{
			speed = 0.35;
		};
		class AmovPknlMwlkSrasWpstDl: AmovPknlMwlkSrasWpstDf
		{
			speed = 0.325;
		};
		class AmovPknlMwlkSrasWpstDr: AmovPknlMwlkSrasWpstDf
		{
			speed = 0.3126;
		};
		class AmovPknlMwlkSrasWpstDb: AmovPknlMwlkSrasWpstDf
		{
			speed = 0.3343;
		};
		class AmovPknlMwlkSlowWpstDf: AidlPknlMstpSlowWpstDnon_G0S
		{
			speed = 0.396;
		};
		class AmovPknlMwlkSlowWpstDl: AmovPknlMwlkSlowWpstDf
		{
			speed = 0.375;
		};
		class AmovPknlMwlkSlowWpstDr: AmovPknlMwlkSlowWpstDf
		{
			speed = 0.36;
		};
		class AmovPknlMwlkSlowWpstDb: AmovPknlMwlkSlowWpstDf
		{
			speed = 0.418;
		};
		class AmovPknlMwlkSlowWpstDbl: AmovPknlMwlkSlowWpstDf
		{
			speed = 0.396;
		};
		class AmovPknlMwlkSlowWpstDbr: AmovPknlMwlkSlowWpstDf
		{
			speed = 0.396;
		};
		class AidlPknlMstpSrasWpstDnon_G0S;
		class AmovPknlMrunSrasWpstDf: AidlPknlMstpSrasWpstDnon_G0S
		{
			speed = 0.5706;
		};
		class AmovPknlMrunSrasWpstDl: AmovPknlMrunSrasWpstDf
		{
			speed = 1.25246;
		};
		class AmovPknlMrunSrasWpstDr: AmovPknlMrunSrasWpstDf
		{
			speed = 1.1802;
		};
		class AmovPknlMrunSrasWpstDb: AmovPknlMrunSrasWpstDf
		{
			speed = 0.70646;
		};
		class AmovPknlMrunSlowWpstDf: AmovPknlMwlkSlowWpstDf
		{
			speed = 0.5706;
		};
		class AmovPknlMrunSlowWpstDl: AmovPknlMrunSlowWpstDf
		{
			speed = 1.254;
		};
		class AmovPknlMrunSlowWpstDr: AmovPknlMrunSlowWpstDf
		{
			speed = 1.18;
		};
		class AmovPknlMrunSlowWpstDb: AmovPknlMrunSlowWpstDf
		{
			speed = 0.70646;
		};
		class AmovPknlMrunSlowWpstDbl: AmovPknlMrunSlowWpstDf
		{
			speed = 0.7085;
		};
		class AmovPknlMrunSlowWpstDbr: AmovPknlMrunSlowWpstDf
		{
			speed = 0.71264;
		};
		class AmovPknlMtacSrasWpstDf: AmovPknlMwlkSrasWpstDf
		{
			speed = 0.61;
		};
		class AmovPknlMtacSrasWpstDl: AmovPknlMtacSrasWpstDf
		{
			speed = 1.289;
		};
		class AmovPknlMtacSrasWpstDr: AmovPknlMtacSrasWpstDf
		{
			speed = 1.2086;
		};
		class AmovPknlMtacSrasWpstDb: AmovPknlMtacSrasWpstDf
		{
			speed = 0.5869;
		};
		class AmovPpneMrunSlowWpstDf;
		class AmovPpneMsprSlowWpstDf: AmovPpneMrunSlowWpstDf
		{
			//speed = 0.443333;
		};
		class TransAnimBase;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon: TransAnimBase
		{
			speed = 2.34783;
		};
		class AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			speed = 4.636359;
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon: TransAnimBase
		{
			speed = 1.862064;
		};
		class AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon
		{
			speed = 3.923073;
		};
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			speed = 5.29413;
		};
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon
		{
			speed = 1.821431;
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon;
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon
		{
			speed = 5.29413;
		};
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end: AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon
		{
			speed = 1.821431;
		};
		class AmovPpneMwlkSoptWbinDf;
		class AmovPpneMwlkSoptWbinDfr: AmovPpneMwlkSoptWbinDf
		{
			speed = 0.6779;
		};
		class AmovPpneMrunSnonWbinDf;
		class AmovPpneMrunSnonWbinDfr: AmovPpneMrunSnonWbinDf
		{
			speed = 1;
		};
		class AmovPpneMevaSnonWbinDf: AmovPpneMrunSnonWbinDf
		{
			//speed = 0.775862;
		};
		class AmovPercMwlkSrasWlnrDf;
		class AmovPercMwlkSrasWlnrDl: AmovPercMwlkSrasWlnrDf
		{
			speed = 0.9785;
		};
		class AmovPercMwlkSrasWlnrDr: AmovPercMwlkSrasWlnrDf
		{
			speed = 0.88;
		};
		class AmovPercMwlkSrasWlnrDb: AmovPercMwlkSrasWlnrDf
		{
			speed = 0.7681;
		};
		class AmovPknlMwlkSrasWlnrDf;
		class AmovPknlMwlkSrasWlnrDl: AmovPknlMwlkSrasWlnrDf
		{
			speed = 0.8;
		};
		class AmovPknlMwlkSrasWlnrDr: AmovPknlMwlkSrasWlnrDf
		{
			speed = 0.7187;
		};
		class AmovPknlMwlkSrasWlnrDb: AmovPknlMwlkSrasWlnrDf
		{
			speed = 0.7;
		};
	};
};
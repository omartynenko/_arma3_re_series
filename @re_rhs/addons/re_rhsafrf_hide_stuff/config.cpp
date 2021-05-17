#define _ARMA_

class CfgPatches
{
	class re_rhsusf_hide_stuff
	{
		name = "RE: RHS USF Hide Stuff";
		author = "amartyn";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhs_c_weapons"};
	};
};
class CfgWeapons
{
    class rhs_weap_ak103_base;
    class rhs_weap_ak103_1: rhs_weap_ak103_base
	{
        scope =1;
    };
    class rhs_weap_ak103_2: rhs_weap_ak103_base
	{
        scope =1;
    };
};
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
		requiredAddons[] = {"re_rhsusf_fix_weapons"};
	};
};
class CfgWeapons
{
    class ItemCore;
    class rhs_xmas_antlers: ItemCore
	{
        scope = 1;
    };
    class rhs_weap_mk17_CQC;
    class rhs_weap_SCARH_USA_CQC: rhs_weap_mk17_CQC
	{
        scope = 1;
    };
    class rhs_weap_SCARH_USA_CQC_Folded: rhs_weap_SCARH_USA_CQC
	{
		scope = 1;
	};
    class rhs_weap_mk17_LB;
    class rhs_weap_SCARH_USA_LB: rhs_weap_mk17_LB
	{
        scope = 1;
    };
    class rhs_weap_SCARH_USA_LB_Folded: rhs_weap_SCARH_USA_LB
	{
		scope = 1;
	};
    class rhs_weap_mk17_STD;
    class rhs_weap_SCARH_USA_STD: rhs_weap_mk17_STD
	{
        scope = 1;
    };
    class rhs_weap_SCARH_USA_STD_Folded: rhs_weap_SCARH_USA_STD
	{
		scope = 1;
	};
    class rhsusf_hgu56p_visor_mask;
    class rhsusf_hgu56p_visor_mask_skull: rhsusf_hgu56p_visor_mask
    {
        scope = 1;
    };
    class rhsusf_hgu56p_visor_mask_mo: rhsusf_hgu56p_visor_mask
    {
        scope = 1;
    };
    class rhsusf_hgu56p_mask;
	class rhsusf_hgu56p_mask_skull: rhsusf_hgu56p_mask
    {
        scope = 1;
    };
    class rhsusf_hgu56p_mask_mo: rhsusf_hgu56p_mask
    {
        scope = 1;
    };
    class rhsusf_hgu56p;
    class rhsusf_hgu56p_mask_smiley: rhsusf_hgu56p
    {
        scope = 1;
    };
    class rhsusf_hgu56p_visor_mask_smiley: rhsusf_hgu56p_mask_smiley
    {
        scope = 1;
    };
    class rhsusf_hgu56p_visor_mask_black;
    class rhsusf_hgu56p_visor_mask_black_skull: rhsusf_hgu56p_visor_mask_black
    {
        scope = 1;
    };
    class rhsusf_hgu56p_mask_black_skull: rhsusf_hgu56p_visor_mask_black_skull
    {
        scope = 1;
    };
    class rhsusf_hgu56p_black;
    class rhsusf_hgu56p_visor_mask_Empire_black: rhsusf_hgu56p_black
    {
        scope = 1;
    };
    class rhsusf_hgu56p_mask_green;
    class rhsusf_hgu56p_mask_green_mo: rhsusf_hgu56p_mask_green
    {
        scope = 1;
    };
    class rhsusf_hgu56p_visor_mask_green;
    class rhsusf_hgu56p_visor_mask_green_mo: rhsusf_hgu56p_visor_mask_green
    {
        scope = 1;
    };
    class rhsusf_hgu56p_pink: rhsusf_hgu56p
    {
        scope = 1;
    };
    class rhsusf_hgu56p_usa: rhsusf_hgu56p
    {
        scope = 1;
    };
    class rhsusf_hgu56p_saf: rhsusf_hgu56p
    {
        scope = 1;
    };
};
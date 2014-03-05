/*****************************************************************************\

Copyright (C) 2013-2014 <fri.developing at gmail dot com>

This software is provided 'as-is', without any express or implied
warranty.  In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software. If you use this software
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.

\*****************************************************************************/

class CGTAVSpace_Item {
public:

	//enum eVItems {
	//	BM_burgershot_burg2,
	//	CJ_PROC_BEER_1,
	//	CJ_PROC_BEER_2,
	//	CJ_PROC_BRICK,
	//	CJ_PROC_BRICK4,
	//	CJ_PROC_BRICK5,
	//	CJ_PROC_BRICK6,
	//	CJ_PROC_BS_CUP,
	//	CJ_PROC_COFFEE1,
	//	CJ_PROC_Tin,
	//	cj_proc_tin2,
	//	CJ_PROC_Tin3,
	//	csChairPegoA,
	//	csChairPegoB,
	//	cscigarette,
	//	csdistance,
	//	csDoorPegoA,
	//	csDoorPegoB,
	//	CSX_SeaBed_Bldr3_,
	//	CSX_SeaBed_Bldr5_,
	//	CSX_SeaBed_Bldr7_,
	//	cs_beerbottle_01,
	//	cs_cigar_01,
	//	cs_container_01,
	//	cs_container_02,
	//	cs_door_01,
	//	cs_gym_bag_01,
	//	cs_keys_01,
	//	cs_phone_01,
	//	cs_remote_01,
	//	cs_rope_01,
	//	cs_syringe_01,
	//	physics_hat,
	//	proc_drkyel001
	//	proc_fern_02
	//	proc_flower1
	//	Proc_Flower_Wild_04
	//	proc_mntn_stone01
	//	proc_mntn_stone02
	//	proc_mntn_stone03
	//	PROC_PLNT_CORALGRASS_01
	//	proc_searock_01
	//	proc_searock_02
	//	proc_searock_03
	//	Proc_Sml_Stones01
	//	proc_trolley_lakebed
	//	Proc_Weeds01a
	//	Proc_Weeds01b
	//	Proc_Weeds01c
	//	Prop_ACC_Guitar_01
	//	Prop_Aircon_L_01
	//	Prop_Aircon_L_04
	//	Prop_Aircon_M_02
	//	Prop_Aircon_M_04
	//	Prop_AMB_40oz_02
	//	Prop_AMB_40oz_03
	//	Prop_AMB_Beer_Bottle
	//	Prop_AMB_Ciggy_01
	//	Prop_AMB_Donut
	//	Prop_AMB_Phone
	//	Prop_Am_Box_Wood_01
	//	Prop_Armour_Pickup
	//	Prop_Barbell_02
	//	prop_barrel_01a
	//	prop_barrel_02a
	//	prop_barriercrash_01
	//	prop_bar_stool_01
	//	prop_beachball_01
	//	Prop_Beach_LG_Float
	//	prop_beach_ring_01
	//	Prop_beach_volball01
	//	Prop_beach_volball02
	//	Prop_Beggers_Sign_01
	//	Prop_Beggers_Sign_02
	//	Prop_Beggers_Sign_03
	//	Prop_Beggers_Sign_04
	//	Prop_Billboard_01
	//	Prop_binoc_01
	//	prop_bin_12a
	//	Prop_Bongos_01
	//	Prop_BoxPile_02B
	//	Prop_BoxPile_02C
	//	Prop_BoxPile_06A
	//	prop_boxpile_06b
	//	Prop_BoxPile_07A
	//	Prop_BoxPile_07d
	//	Prop_Box_Wood01A
	//	Prop_Box_Wood03A
	//	Prop_Box_Wood04A
	//	Prop_Box_Wood06A
	//	Prop_Box_Wood07A
	//	prop_bskball_01
	//	prop_bush_gorse_dry
	//	prop_bush_gorse_lush
	//	Prop_Bush_Lrg_01
	//	Prop_Bush_Lrg_01b
	//	Prop_Bush_Lrg_02
	//	Prop_Bush_Lrg_02b
	//	Prop_Bush_Lrg_04b
	//	Prop_Bush_Lrg_04d
	//	Prop_Bush_Med_01
	//	Prop_Bush_Med_02
	//	prop_bush_med_03
	//	Prop_Bush_Med_07
	//	prop_byard_dingy
	//	Prop_Byard_float_01
	//	Prop_Byard_float_02
	//	prop_byard_rowboat2
	//	prop_byard_rowboat4
	//	prop_cablespool_01a
	//	prop_cablespool_01b
	//	Prop_cactus_02
	//	PROP_CASH_DEP_BAG_01
	//	prop_cash_pile_01
	//	Prop_CementBags01
	//	PROP_CHOC_PQ
	//	prop_coffin_01
	//	Prop_conc_Blocks01A
	//	Prop_conc_Blocks01B
	//	Prop_conc_Blocks01C
	//	Prop_cons_cements01
	//	prop_coral_01
	//	prop_coral_02
	//	prop_coral_03
	//	prop_coral_flat_01
	//	prop_coral_flat_02
	//	prop_coral_flat_brainy
	//	prop_coral_flat_clam
	//	prop_coral_pillar_02
	//	prop_coral_spikey_01
	//	prop_coral_sweed_01
	//	prop_coral_sweed_03
	//	Prop_Crate_10A
	//	Prop_CS_Ciggy_01
	//	prop_cs_fertilizer
	//	Prop_CS_Tablet
	//	Prop_CS_Trowel
	//	Prop_Cuff_Keys_01
	//	Prop_Curl_bar_01
	//	prop_dock_bouy_1
	//	prop_dock_bouy_2
	//	prop_dock_bouy_3
	//	prop_dock_bouy_5
	//	prop_dock_float_1
	//	Prop_Donut_02
	//	PROP_DRUG_PACKAGE
	//	Prop_Drug_package_02
	//	Prop_Fishing_Rod_01
	//	Prop_Fish_slice_01
	//	prop_flare_01
	//	prop_golf_ball
	//	Prop_Golf_Iron_01
	//	prop_hacky_sack_01
	//	Prop_Ind_light_01a
	//	Prop_Ind_light_03c
	//	prop_jetski_ramp_01
	//	prop_ld_ammo_pack_02
	//	Prop_LD_CASE_01
	//	prop_ld_health_pack
	//	Prop_LD_Purse_01
	//	Prop_LD_Wallet_01
	//	Prop_Leaf_Blower_01
	//	Prop_Med_Bag_01b
	//	Prop_MP_REPAIR
	//	Prop_Notepad_02
	//	Prop_Pallet_02A
	//	Prop_Pallet_03A
	//	Prop_Pallet_03B
	//	Prop_Pallet_pile_01
	//	Prop_Pallet_pile_02
	//	Prop_Palm_Fan_03_a
	//	Prop_Palm_Fan_03_b
	//	Prop_Palm_Fan_03_c
	//	Prop_Palm_Huge_01a
	//	Prop_Palm_Sm_01f
	//	Prop_Paper_Bag_01
	//	PROP_PAP_CAMERA_01
	//	Prop_Parking_Wand_01
	//	prop_patio_lounger1
	//	prop_patio_lounger_3
	//	Prop_Plant_Base_01
	//	prop_plant_palm_01c
	//	Prop_Plastic_cup_02
	//	Prop_Rag_01
	//	prop_rock_4_big
	//	prop_rock_5_c
	//	prop_rock_5_smash1
	//	Prop_Rock_5_smash2
	//	prop_rock_5_smash3
	//	prop_rub_binbag_01
	//	prop_rub_boxpile_08
	//	prop_rub_flotsam_01
	//	prop_rub_flotsam_02
	//	prop_rub_flotsam_03
	//	Prop_Rus_Olive
	//	Prop_Sandwich_01
	//	Prop_Sapling_Break_01
	//	Prop_Sapling_Break_02
	//	Prop_SCN_Police_Torch
	//	prop_seabrain_01
	//	prop_seagroup_02
	//	prop_sealife_01
	//	prop_sealife_02
	//	prop_sealife_03
	//	prop_sealife_04
	//	prop_sealife_05
	//	prop_seaweed_01
	//	prop_seaweed_02
	//	Prop_Security_case_01
	//	prop_skip_01a
	//	Prop_SolarPanel_01
	//	Prop_Space_Pistol
	//	Prop_Space_Rifle
	//	prop_starfish_01
	//	prop_starfish_02
	//	prop_starfish_03
	//	Prop_TankTrailer_01A
	//	prop_tennis_ball
	//	Prop_Tennis_Rack_01
	//	Prop_Tool_Broom
	//	Prop_tool_hammer
	//	Prop_Tool_JackHam
	//	Prop_Tree_Birch_03b
	//	Prop_Tree_Birch_04
	//	Prop_Tree_Eng_Oak_01
	//	Prop_TrukTrailer_01A
	//	Prop_Weld_Torch
	//	ptfx_model_afterburner
	//	ptfx_model_banknote
	//	ptfx_model_coins_leaves
	//	ptfx_model_feather
	//	ptfx_model_golf_tee
	//	ptfx_model_metal_panel
	//	ptfx_model_multi_objects_01
	//	ptfx_model_multi_objects_02
	//	ptfx_model_multi_objects_04
	//	ptfx_model_multi_objects_05
	//	ptfx_model_muzzle_1
	//	ptfx_model_muzzle_2
	//	ptfx_model_paper_torn
	//	ptfx_model_pistol_shell
	//	ptfx_model_shell_ends
	//	ptfx_model_shotgun_shell
	//	P_AMB_Bagel_01
	//	P_AMB_CoffeeCup_01
	//	P_CS_Bottle_01
	//	P_CS_Clipboard
	//	P_CS_Joint_01
	//	p_ld_am_ball_01
	//	p_pallet_02a_s
	//	P_Parachute1_MP_S
	//	P_Parachute1_SP_S
	//	p_parachute_s_shop
	//	P_tourist_map_01_S
	//	REWARD_AMMO_ADVANCEDRIFLE
	//	REWARD_AMMO_APPISTOL
	//	REWARD_AMMO_ASSAULTRIFLE
	//	REWARD_AMMO_ASSAULTSHOTGUN
	//	REWARD_AMMO_ASSAULTSMG
	//	REWARD_AMMO_BULLET_MP
	//	REWARD_AMMO_BULLPUPSHOTGUN
	//	REWARD_AMMO_CARBINERIFLE
	//	REWARD_AMMO_COMBATMG
	//	REWARD_AMMO_COMBATPISTOL
	//	REWARD_AMMO_FIREEXTINGUISHER
	//	REWARD_AMMO_GRENADE
	//	REWARD_AMMO_GRENADELAUNCHER
	//	REWARD_AMMO_GRENADELAUNCHER_MP
	//	REWARD_AMMO_HEAVYSNIPER
	//	REWARD_AMMO_MG
	//	REWARD_AMMO_MICROSMG
	//	REWARD_AMMO_MINIGUN
	//	REWARD_AMMO_MISSILE_MP
	//	REWARD_AMMO_MOLOTOV
	//	REWARD_AMMO_PETROLCAN
	//	REWARD_AMMO_PISTOL
	//	REWARD_AMMO_PISTOL50
	//	REWARD_AMMO_PUMPSHOTGUN
	//	REWARD_AMMO_RPG
	//	REWARD_AMMO_SAWNOFFSHOTGUN
	//	REWARD_AMMO_SMG
	//	REWARD_AMMO_SMOKEGRENADE
	//	REWARD_AMMO_SNIPERRIFLE
	//	REWARD_AMMO_STICKYBOMB
	//	REWARD_AMMO_STUNGUN
	//	REWARD_ARMOUR
	//	REWARD_HEALTH
	//	REWARD_MONEY_VARIABLE
	//	REWARD_PARACHUTE
	//	REWARD_STAT_HEALTH
	//	REWARD_STAT_WEAPON
	//	REWARD_VEHICLE_FIX
	//	REWARD_WEAPON_ADVANCEDRIFLE
	//	REWARD_WEAPON_APPISTOL
	//	REWARD_WEAPON_ASSAULTRIFLE
	//	REWARD_WEAPON_ASSAULTSHOTGUN
	//	REWARD_WEAPON_ASSAULTSMG
	//	REWARD_WEAPON_BAT
	//	REWARD_WEAPON_BULLPUPSHOTGUN
	//	REWARD_WEAPON_CARBINERIFLE
	//	REWARD_WEAPON_COMBATMG
	//	REWARD_WEAPON_COMBATPISTOL
	//	REWARD_WEAPON_CROWBAR
	//	REWARD_WEAPON_FIREEXTINGUISHER
	//	REWARD_WEAPON_GOLFCLUB
	//	)9f)EREWARD_WEAPON_GRENADE
	//	REWARD_WEAPON_GRENADELAUNCHER
	//	REWARD_WEAPON_HAMMER
	//	REWARD_WEAPON_HEAVYSNIPER
	//	REWARD_WEAPON_KNIFE
	//	REWARD_WEAPON_MG
	//	REWARD_WEAPON_MICROSMG
	//	REWARD_WEAPON_MINIGUN
	//	REWARD_WEAPON_MOLOTOV
	//	REWARD_WEAPON_NIGHTSTICK
	//	REWARD_WEAPON_PETROLCAN
	//	REWARD_WEAPON_PISTOL
	//	REWARD_WEAPON_PISTOL50
	//	REWARD_WEAPON_PUMPSHOTGUN
	//	REWARD_WEAPON_RPG
	//	REWARD_WEAPON_SAWNOFFSHOTGUN
	//	REWARD_WEAPON_SMG
	//	REWARD_WEAPON_SMOKEGRENADE
	//	REWARD_WEAPON_SNIPERRIFLE
	//	REWARD_WEAPON_STICKYBOMB
	//	REWARD_WEAPON_STUNGUN
	//	v_ind_cs_gascanister
	//	v_med_cor_divider
	//	V_RAY_END
	//	V_RAY_ROOT
	//	V_RAY_START
	//	w_am_baseball
	//	W_AM_BrfCase
	//	w_am_Case
	//	w_am_digiscanner
	//	W_AM_Fire_Exting
	//	w_am_Flare
	//	W_AM_Jerrycan
	//	W_AR_ADVANCEDRIFLE
	//	W_AR_AdvancedRifle_mag1
	//	W_AR_AdvancedRifle_mag2
	//	W_AR_ASSAULTRIFLE
	//	w_ar_assaultrifle_mag1
	//	W_AR_ASSAULTRIFLE_Mag2
	//	W_AR_CARBINERIFLE
	//	W_AR_CARBINERIFLE_Mag1
	//	W_AR_CARBINERIFLE_Mag2
	//	W_AT_AR_AFGrip
	//	W_AT_AR_Flsh
	//	W_AT_AR_Supp
	//	W_AT_AR_Supp_02
	//	W_AT_PI_Flsh
	//	W_AT_PI_Supp
	//	W_AT_Railcover_01
	//	W_AT_Scope_Large
	//	W_AT_Scope_Macro
	//	W_AT_Scope_Max
	//	W_AT_Scope_Medium
	//	W_AT_Scope_Small
	//	W_AT_SR_Supp
	//	W_EX_GRENADEFRAG
	//	W_EX_GRENADESMOKE
	//	W_EX_MOLOTOV
	//	W_EX_PE
	//	W_LR_40mm
	//	W_LR_GRENADELAUNCHER
	//	W_LR_RPG
	//	W_LR_RPG_Rocket
	//	W_ME_Bat
	//	w_me_crowbar
	//	W_ME_GClub
	//	W_ME_Hammer
	//	W_ME_knife_01
	//	W_ME_Nightstick
	//	W_MG_COMBATMG
	//	W_MG_COMBATMG_Mag1
	//	W_MG_COMBATMG_Mag2
	//	W_MG_MG
	//	W_MG_MG_Mag1
	//	W_MG_MG_Mag2
	//	W_MG_Minigun
	//	W_PI_APPISTOL
	//	W_PI_APPISTOL_Mag1
	//	W_PI_APPISTOL_Mag2
	//	W_PI_COMBATPISTOL
	//	W_PI_COMBATPISTOL_Mag1
	//	W_PI_COMBATPISTOL_Mag2
	//	W_PI_PISTOL
	//	W_PI_PISTOL50
	//	W_PI_PISTOL50_Mag1
	//	W_PI_PISTOL50_Mag2
	//	W_PI_PISTOL_Mag1
	//	W_PI_PISTOL_Mag2
	//	W_PI_STUNGUN
	//	W_SB_ASSAULTSMG
	//	W_SB_ASSAULTSMG_Mag1
	//	W_SB_ASSAULTSMG_Mag2
	//	W_SB_MICROSMG
	//	W_SB_MICROSMG_Mag1
	//	W_SB_MICROSMG_Mag2
	//	W_SB_SMG
	//	W_SB_SMG_Mag1
	//	W_SB_SMG_Mag2
	//	W_SG_ASSAULTSHOTGUN
	//	W_SG_ASSAULTSHOTGUN_Mag1
	//	W_SG_ASSAULTSHOTGUN_Mag2
	//	W_SG_BULLPUPSHOTGUN
	//	W_SG_PUMPSHOTGUN
	//	W_SG_SawnOff
	//	W_SR_HEAVYSNIPER
	//	W_SR_HEAVYSNIPER_Mag1
	//	W_SR_SNIPERRIFLE
	//	W_SR_SNIPERRIFLE_Mag1
	//};
};
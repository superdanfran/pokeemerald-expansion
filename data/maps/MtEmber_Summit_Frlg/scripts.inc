# 1 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 2 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_Frlg_MapScripts::
# 3 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Summit_OnTransition
# 4 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtEmber_Summit_OnResume
# 5 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 7 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_OnResume::
# 8 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MtEmber_Summit_EventScript_TryRemoveMoltres
# 9 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
# 10 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 11 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_TryRemoveMoltres::
# 12 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	return
# 16 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 17 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_OnTransition::
# 18 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	call_if_unset FLAG_FOUGHT_MOLTRES, MtEmber_Summit_EventScript_ShowMoltres
# 19 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
# 20 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 21 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_ShowMoltres::
# 22 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES
# 23 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	return
# 24 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 25 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_Moltres::
# 26 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	lock
# 27 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	faceplayer
# 28 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 50
# 29 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitse
# 30 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 31 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	message Text_Gyaoo
# 32 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitmessage
# 33 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitmoncry
# 34 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	delay 10
# 35 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 36 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitbuttonpress
# 37 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 39 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MtEmber_Summit_EventScript_DefeatedMoltres
# 42 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MtEmber_Summit_EventScript_RanFromMoltres
# 43 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MtEmber_Summit_EventScript_RanFromMoltres
# 44 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 45 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	release
# 46 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
# 47 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 48 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_DefeatedMoltres::
# 49 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 50 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 51 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end
# 52 "data/maps/MtEmber_Summit_Frlg/scripts.pory"

# 53 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
MtEmber_Summit_EventScript_RanFromMoltres::
# 54 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 55 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 56 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	end

# 1 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_Frlg_MapScripts::
# 3 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CeruleanCave_B1F_OnResume
# 4 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCave_B1F_OnTransition
# 5 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 7 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_OnResume::
# 8 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, CeruleanCave_B1F_EventScript_TryRemoveMewtwo
# 9 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 10 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 11 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_TryRemoveMewtwo::
# 12 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	return
# 16 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 17 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_OnTransition::
# 18 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	call_if_unset FLAG_FOUGHT_MEWTWO, CeruleanCave_B1F_EventScript_ShowMewtwo
# 19 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 20 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 21 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_ShowMewtwo::
# 22 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
# 23 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	return
# 24 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 25 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo::
# 26 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	lock
# 27 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	faceplayer
# 28 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitse
# 29 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 30 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	message CeruleanCave_B1F_Text_Mew
# 31 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitmessage
# 32 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitmoncry
# 33 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	delay 20
# 34 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 35 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitbuttonpress
# 36 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setwildbattle SPECIES_MEWTWO, 70
# 37 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 39 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CeruleanCave_B1F_EventScript_DefeatedMewtwo
# 42 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CeruleanCave_B1F_EventScript_RanFromMewtwo
# 43 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CeruleanCave_B1F_EventScript_RanFromMewtwo
# 44 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 45 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	release
# 46 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 47 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 48 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_DefeatedMewtwo::
# 49 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 50 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 51 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 52 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 53 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_RanFromMewtwo::
# 54 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 55 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 56 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 57 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 58 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_Text_Mew::
# 59 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	.string "Mew!$"

# 1 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 2 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_MapScripts::
# 3 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Base_Frlg_OnTransition
# 4 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Base_Frlg_OnResume
# 5 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 7 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_OnTransition::
# 8 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	call_if_set FLAG_FOUGHT_LUGIA, NavelRock_Base_Frlg_EventScript_HideLugia
# 9 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	call_if_unset FLAG_FOUGHT_LUGIA, NavelRock_Base_Frlg_EventScript_TryShowLugia
# 10 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	end
# 11 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 12 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_EventScript_HideLugia::
# 13 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setflag FLAG_HIDE_LUGIA
# 14 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	return
# 15 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 16 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_EventScript_TryShowLugia::
# 17 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_set FLAG_LUGIA_FLEW_AWAY, Common_EventScript_NopReturn
# 18 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LUGIA
# 19 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	return
# 20 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 21 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_OnResume::
# 22 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Base_Frlg_EventScript_TryRemoveLugia
# 23 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	end
# 24 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 25 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_EventScript_TryRemoveLugia::
# 26 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 28 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	removeobject LOCALID_NAVEL_ROCK_LUGIA
# 29 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	return
# 30 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 31 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_EventScript_Lugia::
# 32 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	lock
# 33 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	faceplayer
# 34 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	waitse
# 35 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 20
# 36 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 37 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8004, 0  @ Vertical pan
# 38 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8005, 3  @ Horizontal pan
# 39 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8006, 4  @ Num shakes
# 40 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8007, 2  @ Shake delay
# 41 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	special ShakeScreen
# 42 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 30
# 43 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 44 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8004, 0  @ Vertical pan
# 45 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8005, 3  @ Horizontal pan
# 46 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8006, 4  @ Num shakes
# 47 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8007, 2  @ Shake delay
# 48 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	special ShakeScreen
# 49 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 30
# 50 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 50
# 51 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	waitse
# 52 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 53 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	waitmoncry
# 54 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 20
# 55 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	seteventmon SPECIES_LUGIA, 70
# 56 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 57 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 58 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 59 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Base_Frlg_EventScript_DefeatedLugia
# 61 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Base_Frlg_EventScript_RanFromLugia
# 62 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Base_Frlg_EventScript_RanFromLugia
# 63 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_LUGIA
# 64 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	release
# 65 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	end
# 66 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 67 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_EventScript_DefeatedLugia::
# 68 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setflag FLAG_LUGIA_FLEW_AWAY
# 69 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 70 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 71 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	end
# 72 "data/maps/NavelRock_Base_Frlg/scripts.pory"

# 73 "data/maps/NavelRock_Base_Frlg/scripts.pory"
NavelRock_Base_Frlg_EventScript_RanFromLugia::
# 74 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 75 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 76 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	end

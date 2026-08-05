# 1 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 2 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_MapScripts::
# 3 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_Frlg_OnTransition
# 4 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_Frlg_OnResume
# 5 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_Frlg_OnReturnToField
# 6 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	.byte 0
# 7 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 8 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnReturnToField::
# 9 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special SetDeoxysRockPalette
# 10 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 11 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 12 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnTransition::
# 13 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BIRTH_ISLAND_EXTERIOR
# 14 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DEOXYS_N
# 15 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_STEP_COUNTER, 0
# 16 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_NUM, 0
# 17 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call_if_set FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_Frlg_EventScript_HideDeoxysAndPuzzle
# 18 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call_if_unset FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle
# 19 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 20 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 21 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_HideDeoxysAndPuzzle::
# 22 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 23 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 24 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	return
# 25 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 26 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_TryShowDeoxysPuzzle::
# 27 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_DEOXYS_FLEW_AWAY, Common_EventScript_NopReturn
# 28 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 29 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_DEOXYS_ROCK_COMPLETE
# 30 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	return
# 31 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 32 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_OnResume::
# 33 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys
# 34 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 35 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 36 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_TryRemoveDeoxys::
# 37 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 39 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_BIRTH_ISLAND_DEOXYS
# 40 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	return
# 41 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 42 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Triangle::
# 43 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	lock
# 44 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special DoDeoxysRockInteraction
# 46 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 0, BirthIsland_Exterior_EventScript_NotSolved1
# 48 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 1, BirthIsland_Exterior_EventScript_NotSolved2
# 49 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 2, BirthIsland_Exterior_Frlg_EventScript_Deoxys
# 50 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 3, BirthIsland_Exterior_EventScript_NotSolved3
# 51 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 52 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved1::
# 54 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
# 55 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 56 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 57 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved2::
# 58 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
# 59 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 60 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 61 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved3::
# 62 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
# 63 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 64 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 65 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys::
# 66 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	addobject LOCALID_BIRTH_ISLAND_DEOXYS
# 67 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitse
# 68 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
# 69 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_NUM(MAP_BIRTH_ISLAND_EXTERIOR_FRLG)
# 70 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP(MAP_BIRTH_ISLAND_EXTERIOR_FRLG)
# 71 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 72 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_DEOXYS, 0
# 73 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 74 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_BIRTH_ISLAND_DEOXYS, Movement_DeoxysApproach
# 75 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 76 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitse
# 77 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 78 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	delay 40
# 79 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitmoncry
# 80 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_BIRTH_ISLAND_DEOXYS
# 81 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	seteventmon SPECIES_DEOXYS, 30
# 82 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 83 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 84 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 86 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BirthIsland_Exterior_Frlg_EventScript_DefeatedDeoxys
# 87 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys
# 88 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys
# 89 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_DEOXYS
# 90 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release
# 91 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 92 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 93 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_DefeatedDeoxys::
# 94 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_DEOXYS_FLEW_AWAY
# 95 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 96 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 97 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 98 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 99 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_RanFromDeoxys::
# 100 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 101 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 102 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	end
# 103 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"

# 104 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
Movement_DeoxysApproach:
# 105 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 106 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 107 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 108 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 109 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 110 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 111 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	walk_slow_down
# 112 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	step_end

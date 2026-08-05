# 1 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_OnResume
# 4 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_OnLoad
# 5 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LoreleisRoom_OnTransition
# 6 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_OnWarp
# 7 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_OnFrame
# 8 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.byte 0
# 9 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 10 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnResume::
# 11 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 12 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 13 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 14 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 15 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad::
# 16 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen
# 17 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_LoreleisRoom_EventScript_CloseEntry
# 18 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 19 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 20 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_CloseEntry::
# 21 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 22 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 23 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 24 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen::
# 25 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 26 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 27 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 28 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnTransition::
# 29 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
# 30 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 31 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 32 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnWarp::
# 33 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth
# 34 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.2byte 0
# 35 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 36 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth::
# 37 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 38 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 39 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 40 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnFrame::
# 41 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, PokemonLeague_LoreleisRoom_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.2byte 0
# 43 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 44 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_EnterRoom::
# 45 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	lockall
# 46 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 47 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 48 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	releaseall
# 49 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 50 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 51 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei::
# 52 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	lock
# 53 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	faceplayer
# 54 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 55 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_PostBattle
# 56 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 0
# 57 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 1
# 58 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call_if_unset FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Intro
# 59 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_RematchIntro
# 60 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 61 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 62 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call_if_unset FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Battle
# 63 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Rematch
# 64 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 65 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei
# 66 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 67 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 68 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Intro::
# 69 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_Intro
# 70 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 71 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 72 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_RematchIntro::
# 73 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_RematchIntro
# 74 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 75 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 76 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Battle::
# 77 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI, PokemonLeague_LoreleisRoom_Text_Defeat
# 78 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 79 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 80 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Rematch::
# 81 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI_2, PokemonLeague_LoreleisRoom_Text_Defeat
# 82 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 83 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 84 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_PostBattle::
# 85 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 86 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	release
# 87 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 88 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 89 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei::
# 90 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LORELEI
# 91 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 92 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 93 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	release
# 94 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 95 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 96 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Text_Intro::
# 97 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE.\p"
# 98 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "I am LORELEI of the ELITE FOUR.\p"
# 99 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "No one can best me when it comes\n"
# 100 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "to icy POKéMON.\p"
# 101 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Freezing moves are powerful.\p"
# 102 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Your POKéMON will be at my mercy\n"
# 103 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "when they are frozen solid.\p"
# 104 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Hahaha!\n"
# 105 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Are you ready?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 106 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 107 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Text_RematchIntro::
# 108 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE.\p"
# 109 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "I, LORELEI of the ELITE FOUR,\n"
# 110 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "have returned!\p"
# 111 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "You know how it goes.\n"
# 112 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "No one can best me when it comes\l"
# 113 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "to icy POKéMON.\p"
# 114 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Freezing moves are powerful.\p"
# 115 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Your POKéMON will be at my mercy\n"
# 116 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "when they are frozen solid.\p"
# 117 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Hahaha!\n"
# 118 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Are you ready?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 119 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 120 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Text_Defeat::
# 121 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "…Things shouldn't be this way!$"
# 122 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 123 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Text_PostBattle::
# 124 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "You're better than I thought.\n"
# 125 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Go on ahead.\p"
# 126 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "You only got a taste of the\n"
# 127 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "POKéMON LEAGUE's power.$"

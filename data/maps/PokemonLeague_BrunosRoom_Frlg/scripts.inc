# 1 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
# 4 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
# 5 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_OnWarp
# 6 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_OnFrame
# 7 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 9 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnResume::
# 10 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 11 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 13 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 14 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad::
# 15 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
# 16 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_BrunosRoom_EventScript_CloseEntry
# 17 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 19 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_CloseEntry::
# 20 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 21 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 22 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 23 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
# 24 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 25 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 27 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnWarp::
# 28 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
# 29 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.2byte 0
# 30 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 31 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
# 32 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 33 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 34 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 35 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnFrame::
# 36 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_EventScript_EnterRoom
# 37 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 39 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 43 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	releaseall
# 44 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 45 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 46 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno::
# 47 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	lock
# 48 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	faceplayer
# 49 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 50 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_PostBattle
# 51 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 0
# 52 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 1
# 53 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Intro
# 54 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_RematchIntro
# 55 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 56 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 57 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_unset FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Battle
# 58 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Rematch
# 59 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 60 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
# 61 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 62 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 63 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Intro::
# 64 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_Intro
# 65 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 66 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 67 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_RematchIntro::
# 68 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
# 69 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 70 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 71 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Battle::
# 72 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
# 73 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 74 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 75 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Rematch::
# 76 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat
# 77 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 78 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 79 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle::
# 80 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 81 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	closemessage
# 82 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 83 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 84 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 85 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 86 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	release
# 87 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 88 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 89 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
# 90 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 91 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 92 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 93 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	closemessage
# 94 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 95 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 96 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 97 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 98 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	release
# 99 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 100 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 101 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft::
# 102 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterLeft
# 103 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
# 104 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 105 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 106 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight::
# 107 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
# 109 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 110 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 111 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown::
# 112 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterDown
# 113 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
# 114 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 115 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 116 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Text_Intro::
# 117 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I am BRUNO of the ELITE FOUR!\p"
# 118 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Through rigorous training, people\n"
# 119 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "and POKéMON can become stronger\l"
# 120 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "without limit.\p"
# 121 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I've lived and trained with my\n"
# 122 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "fighting POKéMON!\l"
# 123 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "And that will never change!\p"
# 124 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 125 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "We will grind you down with our\n"
# 126 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "superior power!\p"
# 127 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 128 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 129 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Text_RematchIntro::
# 130 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I am BRUNO of the ELITE FOUR!\p"
# 131 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Through rigorous training, people\n"
# 132 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "and POKéMON can become stronger\l"
# 133 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "without limit.\p"
# 134 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I've lived and trained with my\n"
# 135 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "fighting POKéMON!\l"
# 136 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "And that will never change!\p"
# 137 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 138 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "We will grind you down with our\n"
# 139 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "superior power!\p"
# 140 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 141 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 142 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Text_Defeat::
# 143 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Why?\n"
# 144 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "How could I lose?$"
# 145 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 146 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Text_PostBattle::
# 147 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "My job is done.\n"
# 148 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Go face your next challenge.$"

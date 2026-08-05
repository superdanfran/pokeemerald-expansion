# 1 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_AgathasRoom_OnResume
# 4 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AgathasRoom_OnLoad
# 5 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AgathasRoom_OnWarp
# 6 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AgathasRoom_OnFrame
# 7 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 9 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnResume::
# 10 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 11 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 13 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 14 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnLoad::
# 15 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_SetDoorOpen
# 16 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_AgathasRoom_EventScript_CloseEntry
# 17 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 19 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_CloseEntry::
# 20 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 21 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 22 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 23 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_SetDoorOpen::
# 24 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 25 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 27 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnWarp::
# 28 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth
# 29 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.2byte 0
# 30 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 31 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth::
# 32 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 33 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 34 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 35 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnFrame::
# 36 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_AgathasRoom_EventScript_EnterRoom
# 37 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 39 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 3
# 43 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	releaseall
# 44 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 45 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 46 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha::
# 47 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	lock
# 48 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	faceplayer
# 49 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 50 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_PostBattle
# 51 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 0
# 52 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 4
# 53 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 4
# 54 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Intro
# 55 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_RematchIntro
# 56 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 57 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 58 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call_if_unset FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Battle
# 59 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Rematch
# 60 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 61 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha
# 62 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 63 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 64 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Intro::
# 65 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_Intro
# 66 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 67 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 68 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_RematchIntro::
# 69 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_RematchIntro
# 70 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 71 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 72 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Battle::
# 73 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA, PokemonLeague_AgathasRoom_Text_Defeat
# 74 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 75 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 76 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Rematch::
# 77 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA_2, PokemonLeague_AgathasRoom_Text_Defeat
# 78 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 79 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 80 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_PostBattle::
# 81 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 82 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	release
# 83 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 84 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 85 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha::
# 86 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_AGATHA
# 87 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 88 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 89 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	release
# 90 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 91 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 92 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Text_Intro::
# 93 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I am AGATHA of the ELITE FOUR.\p"
# 94 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I hear OAK's taken a lot of\n"
# 95 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "interest in you, child.\p"
# 96 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "That old duff was once tough and\n"
# 97 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "handsome.\p"
# 98 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "But that was decades ago.\n"
# 99 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "He's a shadow of his former self.\p"
# 100 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Now he just wants to fiddle with\n"
# 101 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "his POKéDEX.\p"
# 102 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "He's wrong.\n"
# 103 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "POKéMON are for battling!\p"
# 104 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "{PLAYER}! I'll show you how a real\n"
# 105 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 106 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 107 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Text_RematchIntro::
# 108 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I am AGATHA of the ELITE FOUR.\p"
# 109 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "You're the child that OAK's taken\n"
# 110 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "under his wing, aren't you?\p"
# 111 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "That old duff was once tough and\n"
# 112 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "handsome.\p"
# 113 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "But that was decades ago.\n"
# 114 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "He's a shadow of his former self.\p"
# 115 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Now he just wants to fiddle with\n"
# 116 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "his POKéDEX.\p"
# 117 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "He's wrong.\n"
# 118 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "POKéMON are for battling!\p"
# 119 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "{PLAYER}! I'll show you how a real\n"
# 120 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 121 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 122 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Text_Defeat::
# 123 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Oh, my!\n"
# 124 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "You're something special, child!$"
# 125 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 126 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Text_PostBattle::
# 127 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "You win!\p"
# 128 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I see what the old duff sees in\n"
# 129 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "you now.\p"
# 130 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I have nothing else to say.\n"
# 131 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Run along now, child!$"

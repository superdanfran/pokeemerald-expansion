# 1 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LancesRoom_OnResume
# 4 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LancesRoom_OnLoad
# 5 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LancesRoom_OnWarp
# 6 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LancesRoom_OnFrame
# 7 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 9 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnResume::
# 10 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 11 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 13 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 14 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnLoad::
# 15 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 4, PokemonLeague_LancesRoom_EventScript_CloseEntry
# 16 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call_if_set FLAG_DEFEATED_LANCE, PokemonLeague_LancesRoom_EventScript_SetDoorOpen
# 17 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 19 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_CloseEntry::
# 20 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_SetEntryClosed
# 21 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 22 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 23 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_SetDoorOpen::
# 24 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpenLance
# 25 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 27 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnWarp::
# 28 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LancesRoom_EventScript_TurnPlayerNorth
# 29 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.2byte 0
# 30 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 31 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_TurnPlayerNorth::
# 32 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 33 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 34 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 35 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnFrame::
# 36 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_LancesRoom_EventScript_EnterRoom
# 37 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 39 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_LancesRoom_Movement_WalkThroughCorridor
# 42 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 44 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_SetEntryClosed
# 45 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	playse SE_UNLOCK
# 46 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	special DrawWholeMapView
# 47 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitse
# 48 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 4
# 49 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	releaseall
# 50 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 51 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 52 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_SetEntryClosed::
# 53 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 5, 14, METATILE_PokemonLeague_Entry_TopLeft_Closed, 1
# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 14, METATILE_PokemonLeague_Entry_TopMid_Closed, 1
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 14, METATILE_PokemonLeague_Entry_TopRight_Closed, 1
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 5, 15, METATILE_PokemonLeague_Entry_BottomLeft_Closed, 1
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 15, METATILE_PokemonLeague_Entry_BottomMid_Closed, 1
# 58 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 15, METATILE_PokemonLeague_Entry_BottomRight_Closed, 1
# 59 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 16, METATILE_PokemonLeague_Floor_ShadeFull_Lance, 0
# 60 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 16, METATILE_PokemonLeague_Floor_ShadeFull_Lance, 0
# 61 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 62 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 63 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Movement_WalkThroughCorridor::
# 64 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 65 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 66 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 67 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 68 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 69 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 70 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 71 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 73 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 74 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 76 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 77 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 78 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 80 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 81 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 82 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 83 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 84 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 85 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 86 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 87 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 88 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 89 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 90 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 91 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 92 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 93 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 94 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 95 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 96 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 97 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 98 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	step_end
# 99 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 100 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance::
# 101 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	lock
# 102 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	faceplayer
# 103 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 104 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LANCE, PokemonLeague_LancesRoom_EventScript_PostBattle
# 105 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, 0
# 106 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, 1
# 107 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_LancesRoom_EventScript_Intro
# 108 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LancesRoom_EventScript_RematchIntro
# 109 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 110 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 111 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call_if_unset FLAG_IS_CHAMPION, PokemonLeague_LancesRoom_EventScript_Battle
# 112 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, PokemonLeague_LancesRoom_EventScript_Rematch
# 113 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 114 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_EventScript_DefeatedLance
# 115 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 116 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 117 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Intro::
# 118 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_Intro
# 119 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 120 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 121 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_RematchIntro::
# 122 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_RematchIntro
# 123 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 124 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 125 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Battle::
# 126 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LANCE, PokemonLeague_LancesRoom_Text_Defeat
# 127 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 128 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 129 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Rematch::
# 130 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LANCE_2, PokemonLeague_LancesRoom_Text_Defeat
# 131 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 132 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 133 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_PostBattle::
# 134 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_PostBattle
# 135 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	release
# 136 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 137 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 138 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_DefeatedLance::
# 139 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 140 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	special Script_TryGainNewFanFromCounterFrlg
# 141 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LANCE
# 142 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoorLance
# 143 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_PostBattle
# 144 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	closemessage
# 145 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	release
# 146 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 147 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 148 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayLeft::
# 149 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_LANCE, PokemonLeague_LancesRoom_Movement_LanceMoveOutOfWayLeft
# 150 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
# 151 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 152 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 153 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayRight::
# 154 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_LANCE, PokemonLeague_LancesRoom_Movement_LanceMoveOutOfWayRight
# 155 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
# 156 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 157 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 158 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Movement_LanceMoveOutOfWayLeft::
# 159 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 160 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_in_place_faster_right
# 161 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	step_end
# 162 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 163 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Movement_LanceMoveOutOfWayRight::
# 164 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_right
# 165 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_in_place_faster_left
# 166 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	step_end
# 167 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 168 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Text_Intro::
# 169 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Ah! I've heard about you,\n"
# 170 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 171 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I lead the ELITE FOUR.\p"
# 172 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You can call me LANCE the dragon\n"
# 173 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "TRAINER.\p"
# 174 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You know that dragons are\n"
# 175 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "mythical POKéMON.\p"
# 176 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "They're hard to catch and raise,\n"
# 177 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "but their powers are superior.\p"
# 178 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "They're virtually indestructible.\n"
# 179 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "There's no being clever with them.\p"
# 180 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Well, are you ready to lose?\p"
# 181 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Your LEAGUE challenge ends with\n"
# 182 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "me, {PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 183 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 184 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Text_RematchIntro::
# 185 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Ah!\n"
# 186 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "So, you've returned, {PLAYER}!\p"
# 187 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I lead the ELITE FOUR.\p"
# 188 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You can call me LANCE the dragon\n"
# 189 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "TRAINER.\p"
# 190 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You know that dragons are\n"
# 191 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "mythical POKéMON.\p"
# 192 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "They're hard to catch and raise,\n"
# 193 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "but their powers are superior.\p"
# 194 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "They're virtually indestructible.\n"
# 195 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "There's no being clever with them.\p"
# 196 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Well, are you ready to lose?\p"
# 197 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Your LEAGUE challenge ends with\n"
# 198 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "me, {PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 199 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 200 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Text_Defeat::
# 201 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "That's it!\p"
# 202 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I hate to admit it, but you are a\n"
# 203 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "POKéMON master!$"
# 204 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 205 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Text_PostBattle::
# 206 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I still can't believe my dragons\n"
# 207 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "lost to you, {PLAYER}.\p"
# 208 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You are now the POKéMON LEAGUE\n"
# 209 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "CHAMPION!\p"
# 210 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "…Or, you would have been, but\n"
# 211 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "you have one more challenge left.\p"
# 212 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "There is one more TRAINER to face!\n"
# 213 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "His name is…\p"
# 214 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "{RIVAL}!\p"
# 215 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "He beat the ELITE FOUR before\n"
# 216 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "you.\p"
# 217 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "He is the real POKéMON LEAGUE\n"
# 218 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "CHAMPION.$"

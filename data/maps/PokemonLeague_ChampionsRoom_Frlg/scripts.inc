# 1 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_ChampionsRoom_OnWarp
# 4 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_ChampionsRoom_OnResume
# 5 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_ChampionsRoom_OnFrame
# 6 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.byte 0
# 7 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 8 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume::
# 9 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 10 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 11 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle
# 12 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur
# 13 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander
# 14 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	end
# 15 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 16 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle::
# 17 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 18 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 19 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 20 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 21 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur::
# 22 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 23 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 24 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 25 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 26 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander::
# 27 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 28 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 29 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 30 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 31 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger::
# 32 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 34 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 35 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnWarp::
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth
# 37 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 39 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth::
# 40 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 41 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	end
# 42 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 43 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_OnFrame::
# 44 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_EnterRoom
# 45 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.2byte 0
# 46 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 47 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom::
# 48 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	lockall
# 49 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 50 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 51 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerEnter
# 52 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 20
# 54 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_ChampionsRoom_EventScript_Intro
# 55 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_ChampionsRoom_EventScript_RematchIntro
# 56 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 57 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 58 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	savebgm MUS_VICTORY_GYM_LEADER
# 59 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_unset FLAG_IS_CHAMPION, PokemonLeague_ChampionsRoom_EventScript_Battle
# 60 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, PokemonLeague_ChampionsRoom_EventScript_Rematch
# 61 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_4
# 62 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 63 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_CHAMP
# 64 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_4
# 65 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_PostBattle
# 66 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	playbgm MUS_RG_SLOW_PALLET, 0
# 67 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_PROF_OAK
# 68 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayer
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter
# 71 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_KANTO_CHAMPIONS_ROOM_RIVAL, PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter
# 72 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakEnter
# 73 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 74 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 25
# 75 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetStarterPokemon
# 76 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_RESULT
# 77 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations
# 78 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, Common_Movement_WalkInPlaceFasterRight
# 79 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_KANTO_CHAMPIONS_ROOM_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 80 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 81 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival
# 82 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 83 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 85 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 20
# 86 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe
# 87 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 13
# 89 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakExit
# 90 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerExit
# 91 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 93 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME, 5, 12
# 94 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitstate
# 95 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	releaseall
# 96 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	end
# 97 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 98 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_QuestLogEnd::
# 99 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 100 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	releaseall
# 101 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	end
# 102 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 103 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle::
# 104 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle
# 105 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur
# 106 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_BattleCharmander
# 107 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 108 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 109 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch::
# 110 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle
# 111 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur
# 112 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_RematchCharmander
# 113 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 114 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 115 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Intro::
# 116 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_Intro
# 117 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 118 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 119 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchIntro::
# 120 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_RematchIntro
# 121 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 122 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 123 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle::
# 124 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
# 125 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 126 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 127 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur::
# 128 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
# 129 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 130 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 131 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleCharmander::
# 132 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
# 133 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 134 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 135 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle::
# 136 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
# 137 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 138 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 139 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur::
# 140 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
# 141 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 142 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 143 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchCharmander::
# 144 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
# 145 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	return
# 146 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 147 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerEnter::
# 148 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 149 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 150 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 151 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 152 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 153 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 154 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 155 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 156 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 157 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 159 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 160 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerExit::
# 161 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 162 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_left
# 163 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 164 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 165 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 166 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_right
# 167 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 168 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 169 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 171 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 172 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	set_invisible
# 173 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 174 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 175 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter::
# 176 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 177 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_down
# 178 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 179 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 180 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 181 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 182 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 183 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 184 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 185 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_left
# 186 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 187 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 188 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakEnter::
# 189 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 190 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 191 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 192 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 193 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 194 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 195 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 196 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_left
# 197 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 198 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 199 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_down
# 200 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 201 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 202 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 203 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakExit::
# 204 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 205 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_right
# 207 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 208 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 209 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 210 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 211 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 212 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	set_invisible
# 213 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 214 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 215 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter::
# 216 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 217 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 218 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 219 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 220 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 221 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 222 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 223 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 224 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 225 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_in_place_faster_left
# 226 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_end
# 227 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 228 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_Intro::
# 229 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
# 230 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I was looking forward to seeing\n"
# 231 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "you, {PLAYER}.\p"
# 232 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "My rival should be strong to keep\n"
# 233 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "me sharp.\p"
# 234 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "While working on my POKéDEX, I\n"
# 235 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "looked all over for POKéMON.\p"
# 236 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Not only that, I assembled teams\n"
# 237 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "that would beat any POKéMON type.\p"
# 238 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "And now…\p"
# 239 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'm the POKéMON LEAGUE CHAMPION!\p"
# 240 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 241 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Do you know what that means?\p"
# 242 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'll tell you.\p"
# 243 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I am the most powerful TRAINER in\n"
# 244 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "the world!$"
# 245 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 246 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_RematchIntro::
# 247 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
# 248 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You came back, {PLAYER}!\n"
# 249 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Hahah, that is so great!\p"
# 250 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "My rival should be strong to keep\n"
# 251 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "me sharp.\p"
# 252 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "While working on my POKéDEX, I\n"
# 253 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "looked all over for POKéMON.\p"
# 254 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Not only that, I assembled teams\n"
# 255 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "that would beat any POKéMON type.\p"
# 256 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "And now…\p"
# 257 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'm the POKéMON LEAGUE CHAMPION!\p"
# 258 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 259 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Do you know what that means?\p"
# 260 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'll tell you.\p"
# 261 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I am the most powerful TRAINER in\n"
# 262 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "the world!$"
# 263 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 264 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_Defeat::
# 265 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "NO!\n"
# 266 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "That can't be!\l"
# 267 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You beat me at my best!\p"
# 268 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "After all that work to become\n"
# 269 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "the LEAGUE CHAMP?\p"
# 270 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "My reign is over already?\n"
# 271 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "It's not fair!$"
# 272 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 273 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_Victory::
# 274 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "はーはッ！\n"
# 275 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "かった！　かった！　かった！\p"
# 276 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}に　まける　ような\n"
# 277 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "おれさま　では　なーい！\p"
# 278 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "ま！　ポケモンの\n"
# 279 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "てんさい　{RIVAL}さま　あいてに\l"
# 280 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "ここまで　よく　がんばった！\p"
# 281 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "ほめて　つかわす！\n"
# 282 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "はーッ！　はーはッはッ！$"
# 283 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 284 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_PostBattle::
# 285 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Why?\n"
# 286 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Why did I lose?\p"
# 287 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I never made any mistakes raising\n"
# 288 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "my POKéMON…\p"
# 289 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Darn it! You're the new POKéMON\n"
# 290 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "LEAGUE CHAMPION!\p"
# 291 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Although I don't like to admit it…$"
# 292 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 293 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_OakPlayer::
# 294 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {PLAYER}!$"
# 295 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 296 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_OakCongratulations::
# 297 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: So, you've won!\n"
# 298 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Sincerely, congratulations!\p"
# 299 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You're the new POKéMON LEAGUE\n"
# 300 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "CHAMPION!\p"
# 301 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You've grown up so much since you\n"
# 302 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "first left with {STR_VAR_1} to work\l"
# 303 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "on the POKéDEX.\p"
# 304 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}, you have come of age!$"
# 305 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 306 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival::
# 307 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {RIVAL}…\n"
# 308 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I'm disappointed in you.\p"
# 309 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "I came when I heard you'd beaten\n"
# 310 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "the ELITE FOUR.\p"
# 311 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "But, when I got here, you had\n"
# 312 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "already lost!\p"
# 313 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}, do you understand why\n"
# 314 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "you lost?\p"
# 315 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You have forgotten to treat your\n"
# 316 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "POKéMON with love and trust.\p"
# 317 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Without them, you will never\n"
# 318 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "become a CHAMP again!$"
# 319 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"

# 320 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe::
# 321 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {PLAYER}.\p"
# 322 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "You understand that your victory\n"
# 323 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "was not just your own doing.\p"
# 324 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "The bond you share with your\n"
# 325 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "POKéMON is marvelous.\p"
# 326 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 327 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Come with me!$"

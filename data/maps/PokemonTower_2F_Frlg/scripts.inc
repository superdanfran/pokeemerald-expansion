# 1 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 5 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Channeler::
# 6 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts, MSGBOX_NPC
# 7 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	end
# 8 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 9 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalTriggerRight::
# 10 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	lockall
# 11 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 12 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
# 13 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	end
# 14 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 15 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalTriggerDown::
# 16 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	lockall
# 17 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
# 19 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	end
# 20 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 21 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival::
# 22 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 23 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 24 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PokemonTower_2F_EventScript_RivalFacePlayerRight
# 25 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PokemonTower_2F_EventScript_RivalFacePlayerDown
# 26 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_ExclamationMark
# 27 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 28 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_Delay48
# 29 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalIntro
# 31 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_POKEMON_TOWER_RIVAL
# 32 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonTower_2F_EventScript_RivalSquirtle
# 33 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonTower_2F_EventScript_RivalBulbasaur
# 34 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonTower_2F_EventScript_RivalCharmander
# 35 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalPostBattle
# 36 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	closemessage
# 37 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 38 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PokemonTower_2F_EventScript_RivalExitRight
# 39 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PokemonTower_2F_EventScript_RivalExitDown
# 40 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	delay 25
# 42 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	fadedefaultbgm
# 43 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_RIVAL
# 44 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_2F, 1
# 45 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	releaseall
# 46 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	end
# 47 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 48 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalFacePlayerRight::
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 52 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 53 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 54 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalFacePlayerDown::
# 55 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 56 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 59 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 60 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalSquirtle::
# 61 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_SQUIRTLE, PokemonTower_2F_Text_RivalDefeat
# 62 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 63 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 64 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalBulbasaur::
# 65 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_BULBASAUR, PokemonTower_2F_Text_RivalDefeat
# 66 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 67 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 68 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalCharmander::
# 69 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_CHARMANDER, PokemonTower_2F_Text_RivalDefeat
# 70 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 71 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 72 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalExitRight::
# 73 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_Movement_RivalExitRight
# 74 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 75 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 76 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 77 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_RivalExitDown::
# 78 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_Movement_RivalExitDown
# 79 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 80 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	return
# 81 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 82 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Movement_RivalExitRight::
# 83 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 84 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 85 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 86 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 87 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 88 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 89 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 90 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 91 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	step_end
# 92 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 93 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Movement_RivalExitDown::
# 94 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 95 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 96 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 97 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 98 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 99 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 100 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 101 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 102 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	step_end
# 103 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 104 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Text_RivalIntro::
# 105 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\n"
# 106 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "What brings you here?\l"
# 107 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Is your POKéMON dead?\p"
# 108 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Hey! It's alive!\p"
# 109 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I can at least make them faint!\n"
# 110 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Let's go!$"
# 111 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 112 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Text_RivalDefeat::
# 113 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "What?\n"
# 114 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "You stinker!\p"
# 115 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I took it easy on you, too!$"
# 116 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 117 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Text_RivalPostBattle::
# 118 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "How's your POKéDEX coming?\n"
# 119 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I just caught a CUBONE!\p"
# 120 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I can't find the bigger MAROWAK.\n"
# 121 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Where could they be?\p"
# 122 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I bet there aren't any left!\p"
# 123 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Well, I better get going.\n"
# 124 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "I've got a lot to accomplish,\l"
# 125 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "unlike you.\p"
# 126 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Smell ya later!$"
# 127 "data/maps/PokemonTower_2F_Frlg/scripts.pory"

# 128 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts::
# 129 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Even we could not identify the\n"
# 130 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "wayward ghosts.\p"
# 131 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "A SILPH SCOPE might be able to\n"
# 132 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "unmask them.$"

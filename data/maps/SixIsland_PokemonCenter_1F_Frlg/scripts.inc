# 1 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SixIsland_PokemonCenter_1F_OnFrame
# 6 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 7 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 8 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 10 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_ShowRival
# 11 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 12 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 13 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_ShowRival::
# 14 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL
# 15 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 16 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 17 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_OnFrame::
# 18 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_RivalScene
# 19 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte 0
# 20 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 21 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_RivalScene::
# 22 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 23 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 24 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 25 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 27 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 28 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 29 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_Delay48
# 30 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 31 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 25
# 32 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalApproach
# 33 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere
# 35 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 36 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit
# 37 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalExit
# 38 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	fadedefaultbgm
# 40 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 35
# 42 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeobject LOCALID_SIX_ISLAND_RIVAL
# 43 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 1
# 44 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 45 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
# 46 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 47 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 48 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_RivalApproach::
# 49 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 50 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 51 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 52 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 53 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 54 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 55 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_RivalExit::
# 56 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 57 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_4
# 58 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 59 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 60 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 61 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit::
# 62 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 64 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 65 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 66 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_Nurse::
# 67 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 68 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 69 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 70 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 71 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 72 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 73 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_Hiker::
# 74 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland, MSGBOX_NPC
# 75 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 76 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 77 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_OldMan::
# 78 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem, MSGBOX_NPC
# 79 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 80 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 81 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland::
# 82 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "For ten years, I've searched for\n"
# 83 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "RUINS.\p"
# 84 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "No, make that twenty years.\p"
# 85 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I get this feeling that there's\n"
# 86 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "something hidden on this island.$"
# 87 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 88 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem::
# 89 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You know of POKéMON that evolve\n"
# 90 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "only upon trading, yes?\p"
# 91 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But did you know that there are\n"
# 92 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "still others?\p"
# 93 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Some POKéMON evolve only when\n"
# 94 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "traded while holding specific items.$"
# 95 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 96 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere::
# 97 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\n"
# 98 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How's your POKéDEX filling up?\p"
# 99 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It looks like it's impossible to get\n"
# 100 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "all the POKéMON by hanging around\l"
# 101 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "just these parts.\p"
# 102 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Maybe there are POKéMON we don't\n"
# 103 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "know about somewhere far away…\p"
# 104 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "… … …  … … …  … … …\p"
# 105 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Well, if I can't do it, there's no\n"
# 106 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "way for you to get it done.\p"
# 107 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm not going to get all desperate\n"
# 108 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "over this.\p"
# 109 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'll keep collecting POKéMON at my\n"
# 110 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "own pace while I train them.\p"
# 111 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That's what I'll do.\n"
# 112 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So there's no point staying here.\l"
# 113 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I may as well leave for home.\p"
# 114 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That's that, then!\n"
# 115 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Smell ya later!$"

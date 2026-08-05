# 1 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FiveIsland_LostCave_Room10_OnResume
# 4 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_LostCave_Room10_OnFrame
# 5 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 7 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_OnResume::
# 8 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call_if_defeated TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_EventScript_StopSelphySceneTrigger
# 9 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	end
# 10 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 11 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_StopSelphySceneTrigger::
# 12 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
# 13 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	return
# 14 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 15 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_OnFrame::
# 16 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 0, FiveIsland_LostCave_Room10_EventScript_FindSelphyScene
# 17 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.2byte 0
# 18 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 19 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_FindSelphyScene::
# 20 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	lockall
# 21 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 22 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyWander
# 23 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitmovement 0
# 24 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay 100
# 25 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyApproach
# 26 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_SelphyIntro
# 28 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_Text_SelphyDefeat
# 29 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome
# 30 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	closemessage
# 31 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 32 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	warp MAP_FIVE_ISLAND_RESORT_GORGEOUS, 39, 10
# 33 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitstate
# 34 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	releaseall
# 35 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	end
# 36 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 37 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_SetSelphyFound::
# 38 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setflag FLAG_HIDE_LOST_CAVE_SELPHY
# 39 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_SELPHY
# 40 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
# 41 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1
# 42 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	return
# 43 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 44 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_SelphyQuestLog::
# 45 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	settrainerflag TRAINER_LADY_SELPHY
# 46 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 47 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	releaseall
# 48 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	end
# 49 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 50 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyWander::
# 51 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_left
# 52 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 53 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_right
# 54 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 55 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_in_place_faster_up
# 56 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 57 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_in_place_faster_down
# 58 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	step_end
# 59 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 60 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyApproach::
# 61 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_down
# 62 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_down
# 63 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	step_end
# 64 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 65 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Text_SelphyIntro::
# 66 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "W-what do you intend to do with\n"
# 67 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "me?$"
# 68 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 69 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Text_SelphyDefeat::
# 70 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "Oh… I was afraid that you meant to\n"
# 71 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "harm me.$"
# 72 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"

# 73 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome::
# 74 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "I am so glad that you happened\n"
# 75 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "here.\p"
# 76 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "I grew rather bored of walking,\n"
# 77 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "and I am feeling fatigued.\p"
# 78 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "May I ask you to take me home\n"
# 79 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "from here?$"

# 1 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room2_OnTransition
# 4 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room2_OnFrame
# 5 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 7 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_OnTransition::
# 8 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special SetEReaderTrainerGfxId
# 9 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	end
# 10 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 11 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_OnFrame::
# 12 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer
# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	.2byte 0
# 14 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 15 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer::
# 16 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	lockall
# 17 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room2_Movement_PlayerEnterRoom
# 18 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special CopyEReaderTrainerGreeting
# 20 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	msgbox gStringVar4
# 21 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	closemessage
# 22 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 23 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_0x8005, 0
# 24 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special DoSpecialTrainerBattle
# 25 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, 3, SevenIsland_House_Room2_EventScript_BattleTie
# 26 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, 1, SevenIsland_House_Room2_EventScript_BattleWon
# 27 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, 2, SevenIsland_House_Room2_EventScript_BattleLost
# 28 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	closemessage
# 29 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special HealPlayerParty
# 30 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room2_Movement_PlayerExitRoom
# 31 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmovement 0
# 32 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special LoadPlayerParty
# 33 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM1, 4, 1
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitstate
# 36 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	releaseall
# 37 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	end
# 38 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 39 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleTie::
# 40 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3
# 41 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_MatchEndedUpDraw
# 42 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	return
# 43 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 44 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleWon::
# 45 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1
# 46 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special ShowFieldMessageStringVar4
# 47 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmessage
# 48 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitbuttonpress
# 49 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	return
# 50 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 51 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleLost::
# 52 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2
# 53 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special ShowFieldMessageStringVar4
# 54 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmessage
# 55 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitbuttonpress
# 56 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	return
# 57 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 58 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_Movement_PlayerEnterRoom::
# 59 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 61 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 62 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_right
# 63 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_right
# 64 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	step_end
# 65 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"

# 66 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_Movement_PlayerExitRoom::
# 67 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_left
# 68 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_left
# 69 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 70 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 71 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 72 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	delay_8
# 74 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	step_end

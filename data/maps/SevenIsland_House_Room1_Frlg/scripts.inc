# 1 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
.equ TRAINER_VISITING, VAR_TEMP_1
# 3 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 4 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Frlg_MapScripts::
# 5 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room1_OnTransition
# 6 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room1_OnFrame
# 7 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 9 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_OnTransition::
# 10 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ValidateEReaderTrainer
# 11 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout
# 12 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_ne VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0, SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor
# 13 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 14 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 15 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout::
# 16 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setvar TRAINER_VISITING, TRUE
# 17 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 4, 2
# 18 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN
# 19 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_SEVEN_ISLAND_HOUSE_ROOM1_DOOR_OPEN
# 20 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 21 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 22 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor::
# 23 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 3, 2
# 24 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 25 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 26 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 27 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_OnFrame::
# 28 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 29 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 30 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 31 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.2byte 0
# 32 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 33 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle::
# 34 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	lockall
# 35 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 36 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerReEnterRoom
# 37 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer
# 39 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN
# 41 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_BattleWonComment
# 44 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_BattleLostComment
# 45 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_BattleTiedComment
# 46 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 47 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
# 48 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	releaseall
# 49 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 50 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 51 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleWonComment::
# 52 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_AstoundingBattle
# 53 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 54 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 55 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleLostComment::
# 56 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_FeelYourDisappointment
# 57 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 58 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 59 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleTiedComment::
# 60 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DrawWasIt
# 61 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 62 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 63 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerReEnterRoom::
# 64 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_down
# 65 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 66 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 67 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer::
# 68 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 69 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_in_place_faster_down
# 70 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 71 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 72 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWoman::
# 73 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	lock
# 74 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	faceplayer
# 75 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ValidateEReaderTrainer
# 76 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, 1, SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer
# 77 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq TRAINER_VISITING, TRUE, SevenIsland_House_Room1_EventScript_TrainerVisiting
# 78 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 79 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	release
# 80 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 81 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 82 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer::
# 83 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 84 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	release
# 85 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 86 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 87 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting::
# 88 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special SavePlayerParty
# 89 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special BufferEReaderTrainerName
# 90 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
# 91 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_House_Room1_EventScript_DeclineBattle
# 92 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_ChooseParty
# 93 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_DeclineBattle
# 94 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
# 95 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_House_Room1_EventScript_DeclineBattle
# 96 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 97 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call Common_EventScript_SaveGame
# 98 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_DeclineBattle
# 99 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special SavePlayerParty
# 100 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 101 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DontHoldAnythingBack
# 102 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	closemessage
# 103 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth
# 104 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SevenIsland_House_Room1_EventScript_EnterBattleRoomEast
# 105 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SevenIsland_House_Room1_EventScript_EnterBattleRoomWest
# 106 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM2, 3, 1
# 107 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitstate
# 108 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	release
# 109 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 110 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 111 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_DeclineBattle::
# 112 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 113 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OhYouWontBattle
# 114 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	release
# 115 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 116 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 117 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_ChooseParty::
# 118 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_LimitThreeMonsPerSide
# 119 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 120 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ChooseHalfPartyForBattle
# 121 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 122 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 123 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth::
# 124 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
# 125 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth
# 126 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 127 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 128 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 129 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomEast::
# 130 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight
# 131 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast
# 132 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 133 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 134 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 135 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomWest::
# 136 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
# 137 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest
# 138 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 139 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 140 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 141 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth::
# 142 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 143 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 144 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 145 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 146 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 147 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast::
# 148 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 149 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 150 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 151 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 152 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 153 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest::
# 154 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 155 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_left
# 156 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 157 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 158 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 159 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft::
# 160 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_left
# 161 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_in_place_faster_right
# 162 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 163 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 164 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight::
# 165 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 166 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_in_place_faster_left
# 167 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 168 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 169 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_Box::
# 170 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SlightBreezeAroundBox, MSGBOX_SIGN
# 171 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 172 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 173 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles::
# 174 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I may not look like much now,\n"
# 175 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "but when I was younger…\p"
# 176 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I flew everywhere, challenging\n"
# 177 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "TRAINERS wherever I found them.\p"
# 178 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Now, my only source of enjoyment\n"
# 179 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "is reminiscing about the past while\l"
# 180 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "watching battles.$"
# 181 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 182 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_SlightBreezeAroundBox::
# 183 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "There is a slight breeze blowing\n"
# 184 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "around the box.$"
# 185 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 186 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_ChallengeVisitingTrainer::
# 187 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Ah!\n"
# 188 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Welcome, my friend!\p"
# 189 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Let me tell you something. There's\n"
# 190 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "a hidden room in the basement.\p"
# 191 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "A TRAINER named {STR_VAR_1} is\n"
# 192 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "waiting there now.\p"
# 193 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Tell me, you did come to challenge\n"
# 194 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}, am I right?$"
# 195 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 196 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_OhYouWontBattle::
# 197 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Oh…\n"
# 198 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "You won't battle…\p"
# 199 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I see, I see.\n"
# 200 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "… …\p"
# 201 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Well, perhaps if you change your\n"
# 202 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "mind, do come back.$"
# 203 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 204 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_LimitThreeMonsPerSide::
# 205 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Ah!\n"
# 206 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "You will battle for me?\p"
# 207 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "It was worth my time moving the\n"
# 208 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "box aside, then.\p"
# 209 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "… …\n"
# 210 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "But there is one slight problem.\p"
# 211 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "This hidden room is not built very\n"
# 212 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "sturdy.\p"
# 213 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Can I get you to limit it to\n"
# 214 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "battles of three POKéMON per side?$"
# 215 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 216 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_SaveProgressBeforeBattle::
# 217 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Fine! Before your battle, would\n"
# 218 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "you like to save your game?$"
# 219 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 220 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_DontHoldAnythingBack::
# 221 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "All right.\n"
# 222 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Don't hold anything back!$"
# 223 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 224 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
@ Unused
# 225 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_StrVar1_1::
# 226 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"
# 227 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 228 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room2_Text_MatchEndedUpDraw::
# 229 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "The match ended up a draw.$"
# 230 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 231 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_DrawWasIt::
# 232 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "A draw, was it?\p"
# 233 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "However, let me say that it was\n"
# 234 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "a worthy spectacle.\p"
# 235 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I'd say it was a wonderful battle\n"
# 236 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "with a real sense of depth!$"
# 237 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 238 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
@ Unused
# 239 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_StrVar1_2::
# 240 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"
# 241 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 242 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_AstoundingBattle::
# 243 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Bravo!\p"
# 244 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Bravo, indeed!\n"
# 245 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "What an astounding battle!\p"
# 246 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "It was so astounding, why, it keeps\n"
# 247 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "filling my eyes with tears!\p"
# 248 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "The thrust and parry of expertly\n"
# 249 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "used techniques!\p"
# 250 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "The clash of power upon power!\p"
# 251 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Yes!\n"
# 252 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "It was sheer magnificence!$"
# 253 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 254 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
@ Unused
# 255 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_StrVar1_3::
# 256 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"
# 257 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 258 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_FeelYourDisappointment::
# 259 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Too bad!\n"
# 260 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I feel your disappointment.\p"
# 261 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "However, that disappointment is\n"
# 262 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "what will make you better.\p"
# 263 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Use it, learn from it, and make it\n"
# 264 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "motivate you to seek greatness.\p"
# 265 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Forget not this disappointment\n"
# 266 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "and redouble your training!$"

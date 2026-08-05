# 1 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Frlg_MapScripts::
# 3 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_JoyfulGameCorner_OnTransition
# 4 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwoIsland_JoyfulGameCorner_OnWarp
# 5 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwoIsland_JoyfulGameCorner_OnFrame
# 6 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad_Frlg
# 7 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 9 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_OnTransition::
# 10 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	call_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos
# 11 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 12 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 13 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos::
# 14 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectxyperm LOCALID_JOYFUL_GAME_CORNER_DADDY, 6, 2
# 15 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_DADDY, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, MOVEMENT_TYPE_LOOK_AROUND
# 17 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
# 18 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	return
# 19 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 20 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_OnWarp::
# 21 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth
# 22 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant_Frlg
# 23 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.2byte 0
# 24 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 25 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth::
# 26 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 27 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 28 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 29 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_OnFrame::
# 30 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 0, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene
# 31 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene
# 32 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
# 33 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.2byte 0
# 34 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 35 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene::
# 36 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lockall
# 37 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 38 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle
# 39 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 40 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 41 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy
# 42 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 43 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, Common_Movement_WalkInPlaceFasterDown
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
# 46 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	releaseall
# 47 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 48 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 49 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene::
# 50 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lockall
# 51 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyPacing
# 53 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 54 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo
# 55 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 56 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_WalkInPlaceFasterDown
# 57 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_PIN
# 59 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_ExclamationMark
# 60 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_Delay48
# 62 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer
# 64 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 66 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle
# 68 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 69 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_DOOR
# 70 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitse
# 71 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy
# 72 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 74 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	addobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 75 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, TwoIsland_JoyfulGameCorner_Movement_BikerLookAround
# 76 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 77 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland
# 78 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterRight
# 79 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 80 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt
# 81 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing
# 82 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 83 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 85 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	removeobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 87 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay 60
# 89 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor
# 90 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	clearflag FLAG_HIDE_THREE_ISLAND_LONE_BIKER
# 91 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 2
# 92 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 1
# 93 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	releaseall
# 94 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 95 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 96 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyPacing::
# 97 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_left
# 98 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_right
# 99 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_right
# 100 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 101 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_up
# 102 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_16
# 103 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end
# 104 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 105 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer::
# 106 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 107 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 108 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 109 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_left
# 110 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end
# 111 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 112 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy::
# 113 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_left
# 114 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_right
# 115 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end
# 116 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 117 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_BikerLookAround::
# 118 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_left
# 119 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 120 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_right
# 121 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 122 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_up
# 123 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end
# 124 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 125 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_InfoMan::
# 126 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 127 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 128 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4, JoyfulGameCorner_EventScript_InfoMan2_Frlg
# 129 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon
# 130 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday
# 131 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 132 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 133 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 134 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon::
# 135 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon
# 136 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 137 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 138 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 139 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
@ Only referred to as Lostelles Daddy in text
# 140 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy::
# 141 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 142 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 143 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4, JoyfulGameCorner_EventScript_MinigameAttendant_Frlg
# 144 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning
# 145 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3, TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite
# 146 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland
# 147 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 148 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 149 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 150 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite::
# 151 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE, TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
# 152 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsForMe
# 153 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
# 154 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 155 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 156 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	message TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy
# 157 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmessage
# 158 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitfanfare
# 159 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 160 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	removeitem ITEM_METEORITE
# 161 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill
# 162 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
# 163 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 164 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 165 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone::
# 166 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	checkitemspace ITEM_MOON_STONE
# 167 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone
# 168 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	additem ITEM_MOON_STONE
# 169 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER
# 170 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgreceiveditem TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy, ITEM_MOON_STONE
# 171 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 172 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 173 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 174 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning::
# 175 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning
# 176 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 177 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 178 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 179 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone::
# 180 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE
# 181 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag
# 182 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 183 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 184 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 185 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_Lostelle::
# 186 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 187 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 188 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool
# 189 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 190 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 191 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 192 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo::
# 193 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Now, where's LOSTELLE gotten to\n"
# 194 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "today?\p"
# 195 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "She always brings me lunch every\n"
# 196 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "day right about now…$"
# 197 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 198 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle::
# 199 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hm? You, there!\n"
# 200 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Are you a friend of LOSTELLE's?\p"
# 201 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Have you seen LOSTELLE around?\n"
# 202 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I don't know where she might be.\l"
# 203 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "She should've been here long ago.\p"
# 204 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE's a cutie - she got my\n"
# 205 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "looks - so what if someone…\p"
# 206 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "What if something's happened to\n"
# 207 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "my LOSTELLE?!\p"
# 208 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Please, help me find her!\n"
# 209 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Please go search THREE ISLAND!$"
# 210 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 211 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland::
# 212 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hah? What is this GAME CORNER?\n"
# 213 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "How much sadder can this get?\p"
# 214 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Those clowns…\p"
# 215 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "They said they'd be waiting on the\n"
# 216 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "island, so where are they?\p"
# 217 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hey, you! Is this the only THREE\n"
# 218 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "ISLAND around here?$"
# 219 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 220 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt::
# 221 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Try waking up before you crawl out\n"
# 222 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "of bed, you punk.\p"
# 223 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "This is TWO ISLAND!\p"
# 224 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Move it! Get your filthy motorbike\n"
# 225 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "out of my place!$"
# 226 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 227 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing::
# 228 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Huh…\n"
# 229 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, oh, gotcha.\p"
# 230 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Tch…\n"
# 231 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "These islands are confusing…$"
# 232 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 233 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor::
# 234 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Would you look at that?\n"
# 235 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "That punk scuffed up my floor.$"
# 236 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 237 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland::
# 238 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hey, but listen! I'm begging you,\n"
# 239 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "you have to go to THREE ISLAND.\p"
# 240 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "If anything were to happen to my\n"
# 241 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE…\p"
# 242 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "My place is the house with the red\n"
# 243 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "roof on THREE ISLAND.\p"
# 244 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "She may just show up late here,\n"
# 245 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "so I can't run off anywhere.\p"
# 246 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "That's why I have to get you to do\n"
# 247 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "me this big favor.$"
# 248 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 249 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday::
# 250 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I'm sorry.\n"
# 251 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "We're not running any games today.$"
# 252 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 253 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon::
# 254 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "We'll get the games going soon\n"
# 255 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "for you!$"
# 256 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 257 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle::
# 258 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "So you rescued LOSTELLE?\n"
# 259 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "How can I thank you?\p"
# 260 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE, darling, forgive me!\p"
# 261 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Daddy didn't know you were scared\n"
# 262 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "and in trouble!$"
# 263 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 264 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy::
# 265 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE: It's okay, Daddy.\n"
# 266 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I got to be friends with {PLAYER}!$"
# 267 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 268 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_ThisIsForMe::
# 269 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, what's that?\n"
# 270 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You're saying that this is for me?\p"
# 271 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "How did you know that I love rare\n"
# 272 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "rocks and gems?\p"
# 273 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You sure know how to make a guy\n"
# 274 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "happy.$"
# 275 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 276 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy::
# 277 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "{PLAYER} handed the METEORITE\n"
# 278 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "to LOSTELLE's daddy.$"
# 279 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 280 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill::
# 281 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, I see, this is from BILL!\n"
# 282 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You have to thank him for me!\p"
# 283 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You know, you've been fantastic.\n"
# 284 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I want you to have this.$"
# 285 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 286 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy::
# 287 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received a MOON STONE\n"
# 288 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "from LOSTELLE's daddy.$"
# 289 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 290 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag::
# 291 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Your BAG's not going to fit another\n"
# 292 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "thing…$"
# 293 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 294 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning::
# 295 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "All right, I'll get the GAME CORNER\n"
# 296 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "running right away.\p"
# 297 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You have to come visit with a\n"
# 298 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "friend.$"
# 299 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 300 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool::
# 301 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Listen, listen!\p"
# 302 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Please show me you being cool\n"
# 303 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "again!$"

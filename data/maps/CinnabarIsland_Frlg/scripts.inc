# 1 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
# 4 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_OnFrame
# 5 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 7 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnTransition::
# 8 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 9 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_CheckUnlockGym
# 10 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland
# 11 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands
# 12 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter
# 13 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 14 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 15 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter::
# 16 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 17 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 18 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 15, 12
# 19 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_LEFT
# 20 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
# 21 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 22 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 23 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland::
# 24 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 25 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, 18, CinnabarIsland_EventScript_MoveSeagallopDown
# 26 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 27 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 18, 12
# 28 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
# 30 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 31 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 32 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_MoveSeagallopDown::
# 33 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 8
# 34 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 35 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 36 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands::
# 37 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 21, 8
# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 39 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 40 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 41 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_CheckUnlockGym::
# 42 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY, CinnabarIsland_EventScript_UnlockGym
# 43 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 44 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 45 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_UnlockGym::
# 46 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 48 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 49 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnFrame::
# 50 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ExitPokeCenterForOneIsland
# 51 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_BillScene
# 52 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReturnFromSeviiIslands
# 53 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.2byte 0
# 54 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 55 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ExitPokeCenterForOneIsland::
# 56 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 57 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 58 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 59 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 2
# 61 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 20
# 62 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 63 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 64 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 65 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 66 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReturnFromSeviiIslands::
# 67 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 68 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 69 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain
# 70 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 71 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExit
# 72 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 74 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 4
# 75 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LOSTELLE_IN_HER_HOME
# 77 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 78 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 79 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 80 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillExit::
# 81 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 82 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 83 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 84 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 85 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 86 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 87 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 88 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 89 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene::
# 90 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 91 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 92 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer1
# 93 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer2
# 94 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	playse SE_PIN
# 95 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_ExclamationMark
# 96 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 97 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_Delay48
# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 99 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer1
# 100 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer2
# 101 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_HeyIfItIsntPlayer
# 102 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_ComeWithMeToOneIsland, MSGBOX_YESNO
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_EventScript_AgreeSailToOneIsland
# 104 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_EventScript_DeclineSailToOneIsland
# 105 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 106 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 107 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer1::
# 108 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterUp
# 109 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 110 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 111 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 112 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer2::
# 113 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterLeft
# 114 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 115 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 116 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer1::
# 118 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer1
# 119 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 120 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 121 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 122 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer2::
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer2
# 124 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 125 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 126 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 127 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 128 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 129 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_AgreeSailToOneIsland::
# 130 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 131 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 134 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 136 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland::
# 137 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 138 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 139 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillExitToPokeCenter
# 140 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillReturnToPokeCenter
# 141 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 142 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 143 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 144 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 145 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 146 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 147 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillExitToPokeCenter::
# 148 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExitToPokeCenter
# 149 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 151 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 152 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillExitToPokeCenter::
# 153 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 154 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 155 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 156 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 157 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 158 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 159 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 161 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 162 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillReturnToPokeCenter::
# 163 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerWatchBillExit
# 164 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachDoor
# 165 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 166 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	opendoor 14, 11
# 167 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitdooranim
# 168 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillReEnterPokeCenter
# 169 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 170 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closedoor 14, 11
# 171 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitdooranim
# 172 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 173 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 174 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerWatchBillExit::
# 175 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 176 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 177 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 178 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 179 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachDoor::
# 180 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 181 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 182 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_up
# 183 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 184 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 185 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillReEnterPokeCenter::
# 186 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_up
# 187 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 188 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 189 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 190 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 191 "data/maps/CinnabarIsland_Frlg/scripts.pory"
@ Can be triggered outside, or after talking to Bill in the poke center
# 192 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland::
# 193 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_ApproachShore
# 194 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	addobject LOCALID_CINNABAR_SEAGALLOP
# 195 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArrive
# 196 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArriveExitedPokeCenter
# 197 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 198 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 199 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoat
# 200 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoatExitedPokeCenter
# 201 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 202 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 203 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 40
# 204 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 205 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 206 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 207 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 208 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto EventScript_SetSail
# 209 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 210 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 211 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ApproachShore::
# 212 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_ApproachShore
# 213 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ApproachShore
# 214 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 215 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 216 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 217 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BoatArrive::
# 218 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillFaceBoat
# 219 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 220 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 221 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 222 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 223 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BoatArriveExitedPokeCenter::
# 224 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 225 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 226 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 227 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 228 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BoardBoat::
# 229 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoat
# 230 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
# 231 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 232 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 233 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 234 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BoardBoatExitedPokeCenter::
# 235 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoatFromShore
# 236 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoatFromShore
# 237 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 238 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 239 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 240 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BoatArrive::
# 241 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 242 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 243 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_fast_left
# 244 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_fast_left
# 245 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_slow_left
# 247 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_slow_left
# 248 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 249 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 250 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillBoardBoat::
# 251 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 252 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 253 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 254 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 255 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 256 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 257 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 258 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 259 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer1::
# 260 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_up
# 261 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 262 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 263 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer2::
# 264 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 265 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 266 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 267 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 268 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 269 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillFaceBoat::
# 270 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 271 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 272 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_8
# 273 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 274 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 275 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 276 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_ApproachShore::
# 277 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 278 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 279 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 280 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 281 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 282 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 283 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 284 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 285 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillBoardBoatFromShore::
# 286 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 287 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 288 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 289 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 290 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 291 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat::
# 292 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 293 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 294 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 295 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 296 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 297 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 298 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 299 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 300 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 301 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 302 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 303 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoatFromShore::
# 304 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 305 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 306 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 307 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 308 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 309 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 310 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 311 "data/maps/CinnabarIsland_Frlg/scripts.pory"
@ Triggered when VAR_TEMP_1 is 0
# 312 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_GymDoorLocked::
# 313 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 314 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 316 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 20
# 317 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 318 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 319 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ForcePlayerFromDoor
# 320 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 321 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 322 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 323 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 324 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_ForcePlayerFromDoor::
# 325 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 326 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 327 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 328 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_Woman::
# 329 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lock
# 330 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	faceplayer
# 331 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 332 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
# 333 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	release
# 334 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 335 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 336 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_OldMan::
# 337 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
# 338 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 339 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 340 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_IslandSign::
# 341 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
# 342 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 343 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 344 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_PokemonLabSign::
# 345 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
# 346 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 347 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 348 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_GymSign::
# 349 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 350 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 351 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 352 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 353 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 354 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 355 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_DoorIsLocked::
# 356 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The door is locked…$"
# 357 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 358 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab::
# 359 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR GYM's BLAINE is quite the\n"
# 360 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "odd fellow.\p"
# 361 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "He's lived on the island since way\n"
# 362 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "before the LAB was built.$"
# 363 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 364 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_ScientistsExperimentInMansion::
# 365 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Scientists conduct experiments \n"
# 366 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "in the burned-out building.\p"
# 367 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "You know, the one they call the\n"
# 368 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "POKéMON MANSION.$"
# 369 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 370 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_IslandSign::
# 371 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR ISLAND\n"
# 372 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The Fiery Town of Burning Desire$"
# 373 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 374 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_PokemonLab::
# 375 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "POKéMON LAB$"
# 376 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 377 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_GymSign::
# 378 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR ISLAND POKéMON GYM\n"
# 379 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "LEADER: BLAINE\l"
# 380 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The Hotheaded Quiz Master!$"
# 381 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 382 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_HeyIfItIsntPlayer::
# 383 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Huh?\n"
# 384 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Hey, if it isn't {PLAYER}!$"
# 385 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 386 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_ComeWithMeToOneIsland::
# 387 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Look, it's me, BILL.\n"
# 388 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Long time no see!\p"
# 389 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "I hope you're still using my\n"
# 390 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "PC system.\p"
# 391 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Well, listen, since we met up here,\n"
# 392 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "how about spending time with me?\p"
# 393 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "There's this little island in the far\n"
# 394 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "south called ONE ISLAND.\p"
# 395 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "A friend invited me, so I'm on my\n"
# 396 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "way out there.\p"
# 397 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "How about it?\n"
# 398 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Do you feel like coming with me?$"
# 399 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 400 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_AllRightLetsGo::
# 401 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "All right, then.\n"
# 402 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Let's go!$"
# 403 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 404 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_IllBeWaitingInPokeCenter::
# 405 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "What, are you too busy?\p"
# 406 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Well, all right.\n"
# 407 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The boat hasn't arrived yet anyway.\p"
# 408 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "I'll be waiting at the POKéMON\n"
# 409 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CENTER over there.\p"
# 410 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Come see me when you're done with\n"
# 411 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "your business here.$"
# 412 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 413 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_MyPalsBoatArrived::
# 414 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Looks like my pal's boat arrived,\n"
# 415 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "too.\p"
# 416 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "He sent it specially here to\n"
# 417 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR to pick me up.$"
# 418 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 419 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain::
# 420 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Hey, wasn't that a long cruise?\p"
# 421 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "My buddy CELIO seemed to enjoy\n"
# 422 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "your company.\p"
# 423 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "I'm sure he'd welcome you if you\n"
# 424 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "were to visit him again.\p"
# 425 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "If you have a TRI-PASS, you can\n"
# 426 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "always take a ferry there from\l"
# 427 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "VERMILION PORT.\p"
# 428 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "All right, thanks for your company!$"

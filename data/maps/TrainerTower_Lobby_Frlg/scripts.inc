# 1 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 2 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Frlg_MapScripts::
# 3 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_Lobby_OnResume
# 4 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerTower_Lobby_OnReturnToField
# 5 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_Lobby_OnTransition
# 6 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerTower_Lobby_OnLoad
# 7 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_Lobby_OnFrame
# 8 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.byte 0
# 9 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 10 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnResume::
# 11 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 12 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_resumetimer
# 13 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_shouldexit
# 14 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_Lobby_OnResumeEnd
# 15 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	@ Never reached, above always FALSE
# 16 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_0, 0
# 17 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 7
# 18 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 19 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnResumeEnd::
# 20 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 21 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 22 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnReturnToField::
# 23 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_NURSE
# 24 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_MART_CLERK
# 25 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_RECEPTIONIST
# 26 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_COOLTRAINER_F
# 27 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_BALDING_MAN
# 28 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 29 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 30 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnLoad::
# 31 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerTower_Lobby_OpenCounterBarrier
# 32 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 33 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 34 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OpenCounterBarrier::
# 35 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_Floor_ShadeBottomLeft, 0
# 36 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 37 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 38 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnTransition::
# 39 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
# 40 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 41 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 42 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 43 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnFrame::
# 44 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerTower_Lobby_EventScript_Enter
# 45 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerTower_Lobby_EventScript_ExitElevator
# 46 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte 0
# 47 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 48 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ExitElevator::
# 49 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 50 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_ExitElevator
# 51 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 52 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_CounterBarrier, 1
# 53 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special DrawWholeMapView
# 54 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	playse SE_CLICK
# 55 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitse
# 56 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_D, 0
# 57 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
# 58 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 59 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 60 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Movement_ExitElevator::
# 61 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	walk_down
# 62 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	walk_down
# 63 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	step_end
# 64 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 65 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Enter::
# 66 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_0, 1
# 67 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getchallengestatus
# 68 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case TT_CHALLENGE_STATUS_LOST, TrainerTower_Lobby_EventScript_LostChallenge
# 70 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case TT_CHALLENGE_STATUS_UNK, TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist
# 71 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case TT_CHALLENGE_STATUS_NORMAL, TrainerTower_Lobby_EventScript_EnterEnd
# 72 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 73 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_LostChallenge::
# 74 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 75 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 76 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 77 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 78 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TooBadComeBackTryAgain
# 79 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ExitChallenge
# 80 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 81 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
@ Presumably E-Reader related
# 82 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist::
# 83 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 84 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 85 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 86 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 87 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch
# 88 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ExitChallenge::
# 89 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	closemessage
# 90 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
# 91 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
# 93 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 94 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_EnterEnd::
# 95 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 96 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 97 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Nurse::
# 98 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 99 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 100 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 101 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 102 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 103 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 104 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Receptionist::
# 105 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 106 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 107 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getbeatchallenge
# 108 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerTower_Lobby_EventScript_ThanksForCompeting
# 109 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_GiveItYourBest
# 110 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ReceptionistEnd
# 111 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 112 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ThanksForCompeting::
# 113 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ThanksForCompeting
# 114 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ReceptionistEnd::
# 115 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 116 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 117 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 118 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_MartClerk::
# 119 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 120 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 121 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 122 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmessage
# 123 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	pokemart TrainerTower_Lobby_Mart_Items
# 124 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 125 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 126 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 127 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 128 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.align 2
# 129 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Mart_Items::
# 130 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 131 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 132 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 133 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 134 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 135 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 136 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 137 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 138 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 139 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 140 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 141 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 142 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 143 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_EntryTrigger::
# 144 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 145 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 146 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 147 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WelcomeToTrainerTower
# 148 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getnumfloors
# 149 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_Lobby_EventScript_AllFloorsUsed
# 150 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpToFloorNum
# 151 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
# 152 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 153 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AllFloorsUsed::
# 154 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpEighthFloor
# 155 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge::
# 156 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	message TrainerTower_Lobby_Text_LikeToChallengeTrainers
# 157 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmessage
# 158 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	multichoice 18, 6, MULTI_YESNOINFO, FALSE
# 159 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 0, TrainerTower_Lobby_EventScript_ChooseChallenge
# 161 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 1, TrainerTower_Lobby_EventScript_DeclineChallenge
# 162 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 2, TrainerTower_Lobby_EventScript_ChallengeInfo
# 163 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case MULTI_B_PRESSED, TrainerTower_Lobby_EventScript_DeclineChallenge
# 164 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 165 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 166 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChallengeInfo::
# 167 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ExplainTrainerTower
# 168 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
# 169 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 170 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 171 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge::
# 172 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	multichoice 13, 3, MULTI_TRAINER_TOWER_MODE, FALSE
# 173 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	switch VAR_RESULT
# 174 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 0, TrainerTower_Lobby_EventScript_BeginChallenge
# 175 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 1, TrainerTower_Lobby_EventScript_BeginChallenge
# 176 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 2, TrainerTower_Lobby_EventScript_BeginChallenge
# 177 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 3, TrainerTower_Lobby_EventScript_BeginChallenge
# 178 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 4, TrainerTower_Lobby_EventScript_DeclineChallenge
# 179 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case MULTI_B_PRESSED, TrainerTower_Lobby_EventScript_DeclineChallenge
# 180 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 181 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 182 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_BeginChallenge::
# 183 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 184 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 1
# 185 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special HealPlayerParty
# 186 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StartClockGetSetGo
# 187 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_startchallenge
# 188 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
# 189 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 190 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 191 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_DeclineChallenge::
# 192 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_PleaseVisitUsAgain
# 193 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	closemessage
# 194 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
# 195 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 196 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
# 197 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 198 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 199 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Movement_FaceReceptionist::
# 200 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	face_right
# 201 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	step_end
# 202 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 203 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Movement_WalkDown::
# 204 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	walk_down
# 205 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	step_end
# 206 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 207 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ShowRecords::
# 208 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 209 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 211 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special ShowTrainerHillRecords
# 212 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
# 213 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 214 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 215 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_CooltrainerF::
# 216 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers, MSGBOX_NPC
# 217 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 218 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 219 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_BaldingMan::
# 220 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StairsTougherThanAnyBattle, MSGBOX_NPC
# 221 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 222 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 223 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
@ All Trainer Tower text (Lobby and Roof) is interleaved here
# 224 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 225 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_WelcomeToTrainerTower::
# 226 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Hello!\p"
# 227 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Welcome to TRAINER TOWER where\n"
# 228 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "TRAINERS gather from all over!$"
# 229 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 230 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_TrainersUpToFloorNum::
# 231 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "TRAINERS from all over the world\n"
# 232 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "gather here to battle.\p"
# 233 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Let me see…\p"
# 234 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Right now, there are TRAINERS only\n"
# 235 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "up to Floor {STR_VAR_1}.$"
# 236 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 237 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_TrainersUpEighthFloor::
# 238 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "TRAINERS are awaiting your\n"
# 239 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "challenge up to the eighth floor.$"
# 240 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 241 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_LikeToChallengeTrainers::
# 242 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Would you like to challenge the\n"
# 243 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "waiting TRAINERS?$"
# 244 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 245 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_StartClockGetSetGo::
# 246 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Okay, I'll get the clock started,\n"
# 247 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "so give it everything you have.\p"
# 248 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "On your marks…\p"
# 249 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Get set…\p"
# 250 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Go!$"
# 251 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 252 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_PleaseVisitUsAgain::
# 253 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Please do visit us again!$"
# 254 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 255 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_TooBadComeBackTryAgain::
# 256 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "That was too bad.\p"
# 257 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I think you put in a tremendous\n"
# 258 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "effort in your battling.\p"
# 259 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Please come back and try again!$"
# 260 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 261 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_GiveItYourBest::
# 262 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I hope you give it your best.$"
# 263 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 264 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch::
# 265 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 266 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "the movement can be hectic.\p"
# 267 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 268 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "the reception counter here.\p"
# 269 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 270 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 271 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_ImOwnerBattledPerfectly::
# 272 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Hello…\p"
# 273 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I am the owner of this TOWER…\p"
# 274 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "How the sky soars above this\n"
# 275 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "rooftop…\p"
# 276 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "The caress of the winds up here…\p"
# 277 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "It's all so perfect…\p"
# 278 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "The way you battled…\n"
# 279 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "It, too, was perfection…$"
# 280 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 281 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_ThisIsForYou::
# 282 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "This is for you…$"
# 283 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 284 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_DoneItInRecordTime::
# 285 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Oh!\n"
# 286 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Stupendous!\p"
# 287 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "It's marvelous how you've come up\n"
# 288 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "here so quickly.\p"
# 289 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "The fact is, you've done it in\n"
# 290 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "record time…\p"
# 291 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'll have your record posted at\n"
# 292 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "the reception counter.$"
# 293 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 294 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_TookSweetTimeGettingHere::
# 295 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You seem to have taken your sweet\n"
# 296 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "time getting here…$"
# 297 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 298 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_IdLikeToSeeBetterTime::
# 299 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "What I would like to see is a\n"
# 300 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "better time out of you…\p"
# 301 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'm counting on you.\p"
# 302 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Until then, farewell…$"
# 303 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 304 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Text_XMinYZSec::
# 305 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 306 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 307 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_HereAreTheResults::
# 308 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "せいせきひょうです$"
# 309 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 310 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_NeedTwoMonsForDouble::
# 311 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "This is a two-on-two battle.\p"
# 312 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You may not battle unless you have\n"
# 313 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "at least two POKéMON.$"
# 314 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 315 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_ExplainTrainerTower::
# 316 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Here at TRAINER TOWER, there is an\n"
# 317 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "event called TIME ATTACK.\p"
# 318 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You will be timed on how quickly\n"
# 319 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "you can get from the reception\l"
# 320 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "counter to the OWNER on the roof.\p"
# 321 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "The best times will be recorded on\n"
# 322 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "the Time Board.\p"
# 323 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Try competing with friends to see\n"
# 324 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "who can beat it the fastest.\p"
# 325 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You will not earn any EXP. Points\n"
# 326 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "or money by beating TRAINERS here.$"
# 327 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 328 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_ThanksForCompeting::
# 329 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Thank you for competing!$"
# 330 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 331 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers::
# 332 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'm here to see how good I am.\p"
# 333 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I wonder what kinds of TRAINERS\n"
# 334 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "are waiting for me?\p"
# 335 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "It's nerve-racking!$"
# 336 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 337 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_StairsTougherThanAnyBattle::
# 338 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Gasp, gasp…\n"
# 339 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Gasp…\p"
# 340 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Never mind battling! These stairs…\n"
# 341 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "They're tougher than any battle…$"

# 1 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_OnLoad
# 4 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_7F_OnTransition
# 5 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnLoad::
# 8 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_1, EventScript_Close7FDoor1
# 9 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_2, EventScript_Close7FDoor2
# 10 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_3, EventScript_Close7FDoor3
# 11 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 12 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 13 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnTransition::
# 14 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_SetObjRocketsGone
# 15 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 16 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 17 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_SetObjRocketsGone::
# 18 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SILPH_CO_7F_WORKER_M2, MOVEMENT_TYPE_FACE_UP
# 19 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 20 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 21 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalTriggerTop::
# 22 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lockall
# 23 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 24 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
# 25 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 26 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 27 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalTriggerBottom::
# 28 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lockall
# 29 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 30 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
# 31 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 32 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 33 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene::
# 34 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 35 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 36 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_ExclamationMark
# 37 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 39 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_Delay48
# 40 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalWhatKeptYou
# 42 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_7F_EventScript_RivalApproachTop
# 43 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_7F_EventScript_RivalApproachBottom
# 44 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalIntro
# 45 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_RIVAL
# 46 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, SilphCo_7F_EventScript_RivalSquirtle
# 47 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, SilphCo_7F_EventScript_RivalBulbasaur
# 48 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, SilphCo_7F_EventScript_RivalCharmander
# 49 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalPostBattle
# 50 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	closemessage
# 51 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 52 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_7F_EventScript_RivalExitTop
# 53 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_7F_EventScript_RivalExitBottom
# 54 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playse SE_WARP_IN
# 55 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	fadedefaultbgm
# 56 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_RIVAL
# 57 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitse
# 58 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_7F, 1
# 59 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	releaseall
# 60 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalApproachTop::
# 63 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	closemessage
# 64 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalApproachTop
# 65 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 66 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 67 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 68 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalApproachBottom::
# 69 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 70 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalSquirtle::
# 72 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_SQUIRTLE, SilphCo_7F_Text_RivalDefeat
# 73 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 74 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 75 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalBulbasaur::
# 76 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_BULBASAUR, SilphCo_7F_Text_RivalDefeat
# 77 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 78 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 79 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalCharmander::
# 80 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_CHARMANDER, SilphCo_7F_Text_RivalDefeat
# 81 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 82 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 83 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalExitTop::
# 84 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalExitTop
# 85 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 86 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 87 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 88 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalExitBottom::
# 89 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalExitBottom
# 90 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 92 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 93 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Movement_RivalApproachTop::
# 94 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 95 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	step_end
# 96 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 97 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Movement_RivalExitTop::
# 98 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 99 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 100 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 101 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 102 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	delay_16
# 103 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	step_end
# 104 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 105 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Movement_RivalExitBottom::
# 106 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_left
# 107 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 108 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 109 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 110 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 111 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 112 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 113 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	delay_16
# 114 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	step_end
# 115 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 116 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy::
# 117 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock
# 118 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	faceplayer
# 119 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_LAPRAS_FROM_SILPH, SilphCo_7F_EventScript_AlreadyGotLapras
# 120 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_HaveMonForSavingUs
# 121 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LAPRAS
# 122 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	givemon SPECIES_LAPRAS, 25
# 123 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SilphCo_7F_EventScript_ReceiveLaprasParty
# 124 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SilphCo_7F_EventScript_ReceiveLaprasPC
# 125 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Common_EventScript_NoMoreRoomForPokemon
# 126 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 127 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 128 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 129 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasParty::
# 130 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 131 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 132 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 133 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmessage
# 134 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitfanfare
# 135 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 136 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 137 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_7F_EventScript_EndReceiveLapras
# 138 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 139 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 140 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
# 141 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 142 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 143 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasPC::
# 144 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 145 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 146 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 147 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmessage
# 148 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitfanfare
# 149 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 150 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 151 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_7F_EventScript_LaprasTransferredToPC
# 152 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 153 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasTransferredToPC
# 154 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 155 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 156 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasTransferredToPC::
# 157 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 158 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
# 159 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 160 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 161 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_EndReceiveLapras::
# 162 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 163 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ExplainLapras
# 164 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setflag FLAG_GOT_LAPRAS_FROM_SILPH
# 165 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 166 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 167 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 168 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_AlreadyGotLapras::
# 169 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RocketBossWentToBoardroom
# 170 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 171 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 172 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 173 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM1::
# 174 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock
# 175 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	faceplayer
# 176 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerM1RocketsGone
# 177 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RocketsAfterMasterBall
# 178 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 179 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 180 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 181 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM1RocketsGone::
# 182 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_CanceledMasterBallProject
# 183 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 184 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 185 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 186 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM2::
# 187 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock
# 188 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	faceplayer
# 189 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerM2RocketsGone
# 190 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_BadIfTeamRocketTookOver
# 191 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 192 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 193 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 194 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM2RocketsGone::
# 195 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_WowYouChasedOffTeamRocket
# 196 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 197 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 198 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 199 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerF::
# 200 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock
# 201 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	faceplayer
# 202 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerFRocketsGone
# 203 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ReallyDangerousHere
# 204 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 205 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 206 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 207 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerFRocketsGone::
# 208 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ThankYouSoMuch
# 209 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 210 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 211 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 212 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_FloorSign::
# 213 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_FloorSign, MSGBOX_SIGN
# 214 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 215 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 216 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_Joshua::
# 217 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSHUA, SilphCo_7F_Text_JoshuaIntro, SilphCo_7F_Text_JoshuaDefeat
# 218 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 220 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 221 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_Grunt1::
# 222 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_33, SilphCo_7F_Text_Grunt1Intro, SilphCo_7F_Text_Grunt1Defeat
# 223 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 225 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 226 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_Grunt2::
# 227 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_34, SilphCo_7F_Text_Grunt2Intro, SilphCo_7F_Text_Grunt2Defeat
# 228 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 230 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 231 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_Grunt3::
# 232 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_35, SilphCo_7F_Text_Grunt3Intro, SilphCo_7F_Text_Grunt3Defeat
# 233 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 235 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 236 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_HaveMonForSavingUs::
# 237 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Oh! Hi! You're not a ROCKET!\n"
# 238 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You came to save us?\l"
# 239 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Why, thank you!\p"
# 240 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I want you to have this POKéMON\n"
# 241 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "for saving us.$"
# 242 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 243 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_ObtainedLaprasFromEmployee::
# 244 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{PLAYER} obtained a LAPRAS from\n"
# 245 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "the SILPH employee!$"
# 246 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 247 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_ExplainLapras::
# 248 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's a LAPRAS.\n"
# 249 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's a very intelligent POKéMON.\p"
# 250 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "We kept it in our lab, but it will\n"
# 251 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "be much better off with you.\p"
# 252 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I think you will be a good TRAINER\n"
# 253 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "for LAPRAS!\p"
# 254 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's a good swimmer.\n"
# 255 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It'll give you a lift across water!$"
# 256 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 257 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RocketBossWentToBoardroom::
# 258 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "TEAM ROCKET's BOSS went to the\n"
# 259 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "boardroom!\p"
# 260 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Is our PRESIDENT okay?\n"
# 261 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm worried.$"
# 262 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 263 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RocketsAfterMasterBall::
# 264 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "TEAM ROCKET was after the MASTER\n"
# 265 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "BALL, which catches any POKéMON.$"
# 266 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 267 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_CanceledMasterBallProject::
# 268 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "We canceled the MASTER BALL\n"
# 269 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "project because of TEAM ROCKET.$"
# 270 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 271 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_BadIfTeamRocketTookOver::
# 272 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It would be bad if TEAM ROCKET\n"
# 273 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "took over SILPH or our POKéMON.$"
# 274 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 275 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_WowYouChasedOffTeamRocket::
# 276 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Wow!\p"
# 277 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You chased off TEAM ROCKET all by\n"
# 278 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "yourself?$"
# 279 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 280 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_ReallyDangerousHere::
# 281 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You!\n"
# 282 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's really dangerous here!\p"
# 283 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You came to save me?\n"
# 284 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You can't!$"
# 285 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 286 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_ThankYouSoMuch::
# 287 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Thank you so much!$"
# 288 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 289 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt3Intro::
# 290 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Uh-oh!\n"
# 291 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I smell a little mouse!$"
# 292 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 293 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt3Defeat::
# 294 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Lights out!$"
# 295 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 296 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt3PostBattle::
# 297 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You won't find my BOSS by just\n"
# 298 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "scurrying around!$"
# 299 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 300 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_JoshuaIntro::
# 301 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Heheh!\p"
# 302 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You mistook me for a SILPH worker?$"
# 303 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 304 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_JoshuaDefeat::
# 305 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm done!$"
# 306 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 307 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_JoshuaPostBattle::
# 308 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Despite your age, you are a\n"
# 309 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "skilled TRAINER!$"
# 310 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 311 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt1Intro::
# 312 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
# 313 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "BROTHERS!$"
# 314 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 315 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt1Defeat::
# 316 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Aack!\n"
# 317 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Brothers, I lost!$"
# 318 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 319 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt1PostBattle::
# 320 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Doesn't matter.\n"
# 321 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "My brothers will repay the favor!$"
# 322 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 323 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt2Intro::
# 324 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "A child intruder?\n"
# 325 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "That must be you!$"
# 326 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 327 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt2Defeat::
# 328 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Fine!\n"
# 329 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I lost!$"
# 330 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 331 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt2PostBattle::
# 332 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Go on home before my BOSS gets\n"
# 333 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "ticked off!$"
# 334 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 335 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RivalWhatKeptYou::
# 336 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{RIVAL}: What kept you, {PLAYER}?$"
# 337 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 338 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RivalIntro::
# 339 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{RIVAL}: Hahaha! I thought you'd\n"
# 340 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "turn up if I waited here!\p"
# 341 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I guess TEAM ROCKET slowed you\n"
# 342 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "down! Not that I care!\p"
# 343 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I saw you in SAFFRON, so I decided\n"
# 344 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "to see if you got better!$"
# 345 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 346 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RivalDefeat::
# 347 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Oh, man!\n"
# 348 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "So, you are ready for BOSS\l"
# 349 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "ROCKET!$"
# 350 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 351 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RivalPostBattle::
# 352 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Well, {PLAYER}!\n"
# 353 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm moving on up and ahead!\p"
# 354 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "By checking my POKéDEX, I'm\n"
# 355 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "starting to see what's strong and\l"
# 356 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "how they evolve!\p"
# 357 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Am I a genius or what?\p"
# 358 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm going to the POKéMON LEAGUE to\n"
# 359 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "boot out the ELITE FOUR.\p"
# 360 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'll become the world's most\n"
# 361 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "powerful TRAINER!\p"
# 362 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{PLAYER}, well, good luck to you!\n"
# 363 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Don't sweat it!\l"
# 364 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Smell ya!$"
# 365 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 366 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_FloorSign::
# 367 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 368 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "7F$"

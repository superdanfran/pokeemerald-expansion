# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_Arven::
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArvenHi, MSGBOX_DEFAULT
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setfollowernpc LOCALID_ARVEN_FALLS, FNPC_ALL, 0, PARTNER_ARVEN
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_Delay48
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_ARCHIE
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_1
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_2
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_ARCHIE
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	facefollowernpc
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	destroyfollowernpc
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle::
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
    special SavePlayerParty
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special ChooseHalfPartyForBattle
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MeteorFalls_1F_1R_EventScript_DoArvenMultiBattle
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special LoadPlayerParty
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_DoArvenMultiBattle::
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_COURTNEY_METEOR_FALLS, MeteorFalls_1F_1R_Text_Courtney_Lost, TRAINER_GRUNT_METEOR_FALLS, MeteorFalls_1F_1R_Text_Grunt_Lost, PARTNER_ARVEN
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you before?\n"
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your name is {PLAYER}.\p"
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were one\n"
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're one odd kid.\p"
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, you should keep\n"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "an eye out for TEAM MAGMA, too.\p"
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArvenHi:
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're here!\n"
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Let's go, quickly.$"
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_Courtney_Lost:
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ahahahaha! You're disgustingly strong!$"
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_Grunt_Lost:
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ouch!$"

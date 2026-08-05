# 5 "data/maps/PetalburgWoods/scripts.pory"

# 6 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 7 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgWoods/scripts.pory"

# 9 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 10 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 11 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 12 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 13 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 14 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 15 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 16 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 17 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 18 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 19 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 20 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 21 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 22 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 23 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 24 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 25 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 27 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 28 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 35 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 38 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 39 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 40 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 41 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 42 "data/maps/PetalburgWoods/scripts.pory"
	end
# 43 "data/maps/PetalburgWoods/scripts.pory"

# 44 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 45 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 46 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 47 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 48 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 49 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 50 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 51 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 53 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 54 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 55 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 57 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 59 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 62 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 64 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 65 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 66 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 68 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 69 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 70 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 71 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 72 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 73 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 74 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 75 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 76 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_LevelCapUp, MSGBOX_DEFAULT
# 78 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 79 "data/maps/PetalburgWoods/scripts.pory"
	end
# 80 "data/maps/PetalburgWoods/scripts.pory"

# 81 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 82 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 83 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 84 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 86 "data/maps/PetalburgWoods/scripts.pory"
	return
# 87 "data/maps/PetalburgWoods/scripts.pory"

# 88 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 89 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 90 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 91 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 92 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 94 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 95 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 96 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 97 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 98 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 99 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 100 "data/maps/PetalburgWoods/scripts.pory"
	end
# 101 "data/maps/PetalburgWoods/scripts.pory"

# 102 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 103 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 104 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 105 "data/maps/PetalburgWoods/scripts.pory"
	end
# 106 "data/maps/PetalburgWoods/scripts.pory"

# 107 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 108 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 109 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 110 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 113 "data/maps/PetalburgWoods/scripts.pory"
	return
# 114 "data/maps/PetalburgWoods/scripts.pory"

# 115 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 116 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 117 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 118 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 119 "data/maps/PetalburgWoods/scripts.pory"
	end
# 120 "data/maps/PetalburgWoods/scripts.pory"

# 121 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 122 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 123 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 125 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 131 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 133 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 134 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 135 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 136 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 137 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 138 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 139 "data/maps/PetalburgWoods/scripts.pory"

# 140 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 144 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 145 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 147 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 148 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 149 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 150 "data/maps/PetalburgWoods/scripts.pory"

# 151 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 152 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 153 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 154 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 155 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 157 "data/maps/PetalburgWoods/scripts.pory"

# 158 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 159 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 160 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 165 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 166 "data/maps/PetalburgWoods/scripts.pory"

# 167 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 174 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 177 "data/maps/PetalburgWoods/scripts.pory"

# 178 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 179 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 180 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 182 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 183 "data/maps/PetalburgWoods/scripts.pory"

# 184 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 190 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 191 "data/maps/PetalburgWoods/scripts.pory"

# 192 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 193 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 194 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 195 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 197 "data/maps/PetalburgWoods/scripts.pory"

# 198 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 199 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 200 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 201 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 203 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 204 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 205 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 206 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 207 "data/maps/PetalburgWoods/scripts.pory"

# 208 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 209 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 210 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 211 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 212 "data/maps/PetalburgWoods/scripts.pory"

# 213 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 214 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 217 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 218 "data/maps/PetalburgWoods/scripts.pory"

# 219 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 220 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 221 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 222 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 225 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 226 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 227 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 228 "data/maps/PetalburgWoods/scripts.pory"

# 229 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 233 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 234 "data/maps/PetalburgWoods/scripts.pory"

# 235 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 236 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 238 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 239 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 240 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 241 "data/maps/PetalburgWoods/scripts.pory"

# 242 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 243 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 244 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 245 "data/maps/PetalburgWoods/scripts.pory"

# 246 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 247 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 248 "data/maps/PetalburgWoods/scripts.pory"
	end
# 249 "data/maps/PetalburgWoods/scripts.pory"

# 250 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 251 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 252 "data/maps/PetalburgWoods/scripts.pory"
	end
# 253 "data/maps/PetalburgWoods/scripts.pory"

# 254 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 255 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 256 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 257 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 258 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 259 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 260 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 261 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 262 "data/maps/PetalburgWoods/scripts.pory"
	release
# 263 "data/maps/PetalburgWoods/scripts.pory"
	end
# 264 "data/maps/PetalburgWoods/scripts.pory"

# 265 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 266 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 267 "data/maps/PetalburgWoods/scripts.pory"
	release
# 268 "data/maps/PetalburgWoods/scripts.pory"
	end
# 269 "data/maps/PetalburgWoods/scripts.pory"

# 270 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 271 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 272 "data/maps/PetalburgWoods/scripts.pory"
	end
# 273 "data/maps/PetalburgWoods/scripts.pory"

# 274 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 275 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 276 "data/maps/PetalburgWoods/scripts.pory"
	end
# 277 "data/maps/PetalburgWoods/scripts.pory"

# 278 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 279 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 280 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 281 "data/maps/PetalburgWoods/scripts.pory"
	end
# 282 "data/maps/PetalburgWoods/scripts.pory"

# 283 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 284 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 285 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 286 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 287 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 288 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 289 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 290 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 291 "data/maps/PetalburgWoods/scripts.pory"
	release
# 292 "data/maps/PetalburgWoods/scripts.pory"
	end
# 293 "data/maps/PetalburgWoods/scripts.pory"

# 294 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 295 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 296 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 298 "data/maps/PetalburgWoods/scripts.pory"
	release
# 299 "data/maps/PetalburgWoods/scripts.pory"
	end
# 300 "data/maps/PetalburgWoods/scripts.pory"

# 301 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 302 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 303 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 304 "data/maps/PetalburgWoods/scripts.pory"
	release
# 305 "data/maps/PetalburgWoods/scripts.pory"
	end
# 306 "data/maps/PetalburgWoods/scripts.pory"

# 307 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 308 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 309 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 310 "data/maps/PetalburgWoods/scripts.pory"
	release
# 311 "data/maps/PetalburgWoods/scripts.pory"
	end
# 312 "data/maps/PetalburgWoods/scripts.pory"

# 313 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 314 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 315 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 316 "data/maps/PetalburgWoods/scripts.pory"
	release
# 317 "data/maps/PetalburgWoods/scripts.pory"
	end
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 320 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 321 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 322 "data/maps/PetalburgWoods/scripts.pory"
	end
# 323 "data/maps/PetalburgWoods/scripts.pory"

# 324 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 325 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 327 "data/maps/PetalburgWoods/scripts.pory"

# 328 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 330 "data/maps/PetalburgWoods/scripts.pory"
	.string "called APPLIN around here?\p"
# 331 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 332 "data/maps/PetalburgWoods/scripts.pory"

# 333 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 335 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 336 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 338 "data/maps/PetalburgWoods/scripts.pory"

# 339 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 342 "data/maps/PetalburgWoods/scripts.pory"

# 343 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 344 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 347 "data/maps/PetalburgWoods/scripts.pory"

# 348 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\n"
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "Step aside!\p"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "You asked for this!$"
# 355 "data/maps/PetalburgWoods/scripts.pory"

# 356 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 358 "data/maps/PetalburgWoods/scripts.pory"

# 359 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "You need to watch yourself.\p"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "TEAM AQUA are ruthless and we won't\n"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "stop until you're washed away…\p"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hey, look, TEAM AQUA are also\n"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 368 "data/maps/PetalburgWoods/scripts.pory"

# 369 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you some WISE GLASSES as\n"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 376 "data/maps/PetalburgWoods/scripts.pory"

# 377 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 378 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you these WISE GLASSES.$"
# 389 "data/maps/PetalburgWoods/scripts.pory"

# 390 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 402 "data/maps/PetalburgWoods/scripts.pory"

# 403 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 406 "data/maps/PetalburgWoods/scripts.pory"

# 407 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 409 "data/maps/PetalburgWoods/scripts.pory"

# 410 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 413 "data/maps/PetalburgWoods/scripts.pory"

# 414 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 418 "data/maps/PetalburgWoods/scripts.pory"

# 419 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 427 "data/maps/PetalburgWoods/scripts.pory"

# 428 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 430 "data/maps/PetalburgWoods/scripts.pory"

# 431 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 435 "data/maps/PetalburgWoods/scripts.pory"

# 436 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 442 "data/maps/PetalburgWoods/scripts.pory"

# 443 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 448 "data/maps/PetalburgWoods/scripts.pory"

# 449 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 454 "data/maps/PetalburgWoods/scripts.pory"

# 455 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 462 "data/maps/PetalburgWoods/scripts.pory"

# 463 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 472 "data/maps/PetalburgWoods/scripts.pory"

# 473 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"

PetalburgWoods_Text_LevelCapUp::
# 1 "data/maps/PetalburgWoods/scripts.pory"
	.string "The level cap has been raised to 15!$"

# 1 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Frlg_MapScripts::
# 3 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_OnTransition
# 4 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 6 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_OnTransition::
# 7 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1, FourIsland_IcefallCave_Back_EventScript_HideLorelei
# 8 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	end
# 9 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 10 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_HideLorelei::
# 11 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setflag FLAG_HIDE_ICEFALL_CAVE_LORELEI
# 12 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	return
# 13 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 14 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
# 15 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	lockall
# 16 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 17 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons
# 18 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 19 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 20 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 21 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe
# 22 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 23 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playse SE_PIN
# 24 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_ExclamationMark
# 25 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 26 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 27 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 28 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_Delay48
# 29 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 31 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut
# 32 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 33 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterRight
# 34 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 18
# 36 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 35
# 39 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei
# 40 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiToRockets
# 41 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerToRockets
# 42 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 44 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 46 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 47 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_GruntIntro
# 48 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ICEFALL_ROCKET3
# 49 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_45, FourIsland_IcefallCave_Back_Text_GruntDefeat
# 50 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp
# 51 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 52 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 53 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons
# 54 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 55 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NotTellingYouThat
# 56 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 57 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	message FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou
# 58 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmessage
# 59 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitse
# 60 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
# 61 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitbuttonpress
# 62 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmoncry
# 63 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit
# 69 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit
# 70 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1Exit
# 71 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_Rocket2Exit
# 72 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3Exit
# 73 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 74 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET1
# 75 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET2
# 76 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET3
# 77 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 50
# 78 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer
# 79 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 80 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 82 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 83 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful
# 84 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setflag FLAG_HIDE_RUIN_VALLEY_SCIENTIST
# 85 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 86 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
# 87 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	releaseall
# 88 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	end
# 89 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 90 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerToRockets::
# 91 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 92 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 93 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 94 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 95 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 96 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 97 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit::
# 98 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 99 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_left
# 100 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 101 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 102 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_down
# 103 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 104 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 105 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown::
# 106 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_down
# 107 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 108 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 109 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedPushRight::
# 110 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	lock_facing_direction
# 111 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 112 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	unlock_facing_direction
# 113 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 114 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 115 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat::
# 116 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_fast_down
# 117 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 118 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 119 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1Exit::
# 120 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 121 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 122 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 123 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 124 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 125 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 126 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 127 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 128 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 129 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 130 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 131 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket2Exit::
# 132 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 133 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 134 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 135 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 136 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 137 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 138 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 139 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 140 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 141 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 142 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 143 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 144 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3Exit::
# 145 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 146 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 147 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 148 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 149 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_right
# 150 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_right
# 151 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 152 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 153 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 154 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 155 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 156 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 157 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 158 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei::
# 159 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 160 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_8
# 161 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_right
# 162 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 163 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 164 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft::
# 165 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 166 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 167 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 168 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 169 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiToRockets::
# 170 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 172 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 173 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 174 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp::
# 175 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_up
# 176 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 177 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 178 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit::
# 179 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_8
# 180 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_right
# 181 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 182 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 183 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_down
# 184 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 185 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 186 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer::
# 187 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 188 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 189 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 190 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_Lorelei::
# 191 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
# 192 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	end
# 193 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 194 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons::
# 195 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: Keep your filthy hands\n"
# 196 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "off the POKéMON in the cave!\p"
# 197 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Do as I say, or you'll have me to\n"
# 198 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "answer to!$"
# 199 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 200 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe::
# 201 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Aww, shut it, lady, and leave\n"
# 202 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "us be.\p"
# 203 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Don't let your glasses get all\n"
# 204 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "steamed up!$"
# 205 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 206 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut::
# 207 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: {PLAYER}?!\n"
# 208 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "What are you doing here?\p"
# 209 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "No, we can catch up later.\n"
# 210 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Right now, I need your help.\p"
# 211 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Help me kick these poachers out\n"
# 212 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "before they do anything else.\p"
# 213 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "They've been catching POKéMON\n"
# 214 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "here, then selling them off!\p"
# 215 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Are you ready?\n"
# 216 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "You take that one, please!$"
# 217 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 218 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_GruntIntro::
# 219 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "W-what?!\p"
# 220 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Who says we can't do what we want\n"
# 221 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "with the POKéMON we catch?$"
# 222 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 223 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_GruntDefeat::
# 224 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "We didn't plan on this!$"
# 225 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 226 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons::
# 227 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: Humph.\n"
# 228 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "So despicably weak.\p"
# 229 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "You!\n"
# 230 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Tell me!\p"
# 231 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Where have you taken the captured\n"
# 232 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "POKéMON?\p"
# 233 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I'm smashing your ring once and\n"
# 234 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "for all!$"
# 235 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 236 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_NotTellingYouThat::
# 237 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "N-no way!\n"
# 238 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I'm not telling you that!$"
# 239 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 240 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou::
# 241 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: If you won't confess,\n"
# 242 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "we'll deep-freeze you.\p"
# 243 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "My LAPRAS is furious for what\n"
# 244 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "you've done to its friends.\p"
# 245 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Go, LAPRAS!\n"
# 246 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "ICE BEAM…$"
# 247 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 248 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland::
# 249 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Wawaah! Okay!\n"
# 250 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I'll talk!\p"
# 251 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "The POKéMON are in the ROCKET\n"
# 252 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "WAREHOUSE on FIVE ISLAND.\p"
# 253 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "There! I said it!\n"
# 254 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "We'll be going now!\p"
# 255 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "…But I doubt you'll ever make it\n"
# 256 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "into the ROCKET WAREHOUSE!\p"
# 257 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Heheheheh!$"
# 258 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 259 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful::
# 260 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 261 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "But this is awful…\p"
# 262 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I was born and raised here on\n"
# 263 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "these islands.\p"
# 264 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I had no idea that those horrible\n"
# 265 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "criminals were loose here…$"

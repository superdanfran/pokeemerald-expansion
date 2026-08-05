# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 3 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 4 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 7 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 8 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 9 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 10 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 11 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 12 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 13 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 14 "data/maps/MauvilleCity/scripts.pory"
	end
# 15 "data/maps/MauvilleCity/scripts.pory"

# 16 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 17 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 18 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 19 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 20 "data/maps/MauvilleCity/scripts.pory"
	return
# 21 "data/maps/MauvilleCity/scripts.pory"

# 22 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 23 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 24 "data/maps/MauvilleCity/scripts.pory"
	end
# 25 "data/maps/MauvilleCity/scripts.pory"

# 26 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 27 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 28 "data/maps/MauvilleCity/scripts.pory"
	end
# 29 "data/maps/MauvilleCity/scripts.pory"

# 30 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 31 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 32 "data/maps/MauvilleCity/scripts.pory"
	end
# 33 "data/maps/MauvilleCity/scripts.pory"

# 34 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 35 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 36 "data/maps/MauvilleCity/scripts.pory"
	end
# 37 "data/maps/MauvilleCity/scripts.pory"

# 38 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 39 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 40 "data/maps/MauvilleCity/scripts.pory"
	end
# 41 "data/maps/MauvilleCity/scripts.pory"

# 42 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 43 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 44 "data/maps/MauvilleCity/scripts.pory"
	end
# 45 "data/maps/MauvilleCity/scripts.pory"

# 46 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 47 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 48 "data/maps/MauvilleCity/scripts.pory"
	end
# 49 "data/maps/MauvilleCity/scripts.pory"

# 50 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 51 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 52 "data/maps/MauvilleCity/scripts.pory"
	end
# 53 "data/maps/MauvilleCity/scripts.pory"

# 54 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 55 "data/maps/MauvilleCity/scripts.pory"
	lock
# 56 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 57 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 58 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 59 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 60 "data/maps/MauvilleCity/scripts.pory"
	release
# 61 "data/maps/MauvilleCity/scripts.pory"
	end
# 62 "data/maps/MauvilleCity/scripts.pory"

# 63 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 64 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 65 "data/maps/MauvilleCity/scripts.pory"
	release
# 66 "data/maps/MauvilleCity/scripts.pory"
	end
# 67 "data/maps/MauvilleCity/scripts.pory"

# 68 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 69 "data/maps/MauvilleCity/scripts.pory"
	lock
# 70 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 71 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_WALLY_PRE_GYM, MauvilleCity_EventScript_UncleWallyNotHere
# 72 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 73 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 74 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 75 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 76 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/MauvilleCity/scripts.pory"
	release
# 78 "data/maps/MauvilleCity/scripts.pory"
	end
# 79 "data/maps/MauvilleCity/scripts.pory"

# 80 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 81 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 82 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 83 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 84 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/MauvilleCity/scripts.pory"
	release
# 86 "data/maps/MauvilleCity/scripts.pory"
	end
# 87 "data/maps/MauvilleCity/scripts.pory"

# 88 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleWallyNotHere::
# 89 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouFindWally, MSGBOX_DEFAULT
# 90 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 91 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 92 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/MauvilleCity/scripts.pory"
	release
# 94 "data/maps/MauvilleCity/scripts.pory"
	end
# 95 "data/maps/MauvilleCity/scripts.pory"

# 96 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 97 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 98 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 99 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 100 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 102 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 103 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 104 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 105 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 107 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 108 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 110 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 112 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 113 "data/maps/MauvilleCity/scripts.pory"
	end
# 114 "data/maps/MauvilleCity/scripts.pory"

# 115 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 116 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 117 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 118 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 119 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 120 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 121 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 122 "data/maps/MauvilleCity/scripts.pory"
	end
# 123 "data/maps/MauvilleCity/scripts.pory"

# 124 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 125 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 127 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 128 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 130 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 132 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 134 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 136 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 137 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 138 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 140 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 141 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 142 "data/maps/MauvilleCity/scripts.pory"
	end
# 143 "data/maps/MauvilleCity/scripts.pory"

# 144 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 145 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 148 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 150 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 151 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 153 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 155 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 156 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 157 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
# 159 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 161 "data/maps/MauvilleCity/scripts.pory"
	end
# 162 "data/maps/MauvilleCity/scripts.pory"

# 163 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 164 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 165 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 166 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 167 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 168 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 169 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 170 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 171 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 172 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 173 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 174 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 175 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 176 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 177 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 178 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 179 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 180 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 181 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 182 "data/maps/MauvilleCity/scripts.pory"
	end
# 183 "data/maps/MauvilleCity/scripts.pory"

# 184 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 185 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 186 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 187 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 188 "data/maps/MauvilleCity/scripts.pory"
	return
# 189 "data/maps/MauvilleCity/scripts.pory"

# 190 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 191 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 192 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 193 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 194 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 195 "data/maps/MauvilleCity/scripts.pory"
	return
# 196 "data/maps/MauvilleCity/scripts.pory"

# 197 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 198 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 199 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 200 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 201 "data/maps/MauvilleCity/scripts.pory"
	return
# 202 "data/maps/MauvilleCity/scripts.pory"

# 203 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 204 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 205 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 206 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 207 "data/maps/MauvilleCity/scripts.pory"
	return
# 208 "data/maps/MauvilleCity/scripts.pory"

# 209 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 210 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 211 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 212 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 213 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 214 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 216 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 218 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 219 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 221 "data/maps/MauvilleCity/scripts.pory"
	return
# 222 "data/maps/MauvilleCity/scripts.pory"

# 223 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 224 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 225 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 226 "data/maps/MauvilleCity/scripts.pory"
	release
# 227 "data/maps/MauvilleCity/scripts.pory"
	end
# 228 "data/maps/MauvilleCity/scripts.pory"

# 229 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 230 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 231 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 233 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 234 "data/maps/MauvilleCity/scripts.pory"
	end
# 235 "data/maps/MauvilleCity/scripts.pory"

# 236 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 237 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 238 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 239 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 240 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 241 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 242 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 243 "data/maps/MauvilleCity/scripts.pory"

# 244 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 251 "data/maps/MauvilleCity/scripts.pory"

# 252 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 253 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 254 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 260 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 264 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 265 "data/maps/MauvilleCity/scripts.pory"

# 266 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 267 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 268 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 269 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 270 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 274 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 275 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 278 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 279 "data/maps/MauvilleCity/scripts.pory"

# 280 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 281 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 282 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 283 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 284 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 285 "data/maps/MauvilleCity/scripts.pory"

# 286 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 287 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 288 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 289 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 290 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 291 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 292 "data/maps/MauvilleCity/scripts.pory"

# 293 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 294 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 295 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 296 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 297 "data/maps/MauvilleCity/scripts.pory"

# 298 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 299 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 300 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 301 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 302 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 303 "data/maps/MauvilleCity/scripts.pory"

# 304 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 305 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 306 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 307 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 308 "data/maps/MauvilleCity/scripts.pory"

# 309 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 310 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 311 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 312 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 313 "data/maps/MauvilleCity/scripts.pory"

# 314 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 317 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 318 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 320 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 321 "data/maps/MauvilleCity/scripts.pory"

# 322 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 325 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 328 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 329 "data/maps/MauvilleCity/scripts.pory"

# 330 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 331 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 332 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 333 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 335 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 336 "data/maps/MauvilleCity/scripts.pory"

# 337 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 341 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 342 "data/maps/MauvilleCity/scripts.pory"

# 343 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 346 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 347 "data/maps/MauvilleCity/scripts.pory"

# 348 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 357 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 358 "data/maps/MauvilleCity/scripts.pory"

# 359 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 369 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 370 "data/maps/MauvilleCity/scripts.pory"

# 371 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 383 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 384 "data/maps/MauvilleCity/scripts.pory"

# 385 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 397 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 398 "data/maps/MauvilleCity/scripts.pory"

# 399 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 410 "data/maps/MauvilleCity/scripts.pory"

# 411 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 418 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 419 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 420 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 422 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 423 "data/maps/MauvilleCity/scripts.pory"

# 424 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 425 "data/maps/MauvilleCity/scripts.pory"
	lock
# 426 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 427 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 428 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 429 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 430 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 431 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 432 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 433 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 434 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 435 "data/maps/MauvilleCity/scripts.pory"
	release
# 436 "data/maps/MauvilleCity/scripts.pory"
	end
# 437 "data/maps/MauvilleCity/scripts.pory"

# 438 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 439 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 440 "data/maps/MauvilleCity/scripts.pory"
	release
# 441 "data/maps/MauvilleCity/scripts.pory"
	end
# 442 "data/maps/MauvilleCity/scripts.pory"

# 443 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 444 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 445 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 446 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 447 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 448 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 449 "data/maps/MauvilleCity/scripts.pory"
	release
# 450 "data/maps/MauvilleCity/scripts.pory"
	end
# 451 "data/maps/MauvilleCity/scripts.pory"

# 452 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 453 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 454 "data/maps/MauvilleCity/scripts.pory"
	release
# 455 "data/maps/MauvilleCity/scripts.pory"
	end
# 456 "data/maps/MauvilleCity/scripts.pory"

# 457 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 458 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 459 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 460 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 461 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 462 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 463 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 464 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 465 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 466 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 467 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 468 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 469 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 470 "data/maps/MauvilleCity/scripts.pory"
	end
# 471 "data/maps/MauvilleCity/scripts.pory"

# 472 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Rika::
# 473 "data/maps/MauvilleCity/scripts.pory"
	lock
# 474 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 475 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_MAUVILLE_RIKA_MET, MauvilleCity_EventScript_RikaMet
# 476 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_RikaChallenge
# 477 "data/maps/MauvilleCity/scripts.pory"
	release
# 478 "data/maps/MauvilleCity/scripts.pory"
	end
# 479 "data/maps/MauvilleCity/scripts.pory"

# 480 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RikaChallenge::
# 481 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RikaHeyKid, MSGBOX_DEFAULT
# 482 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 483 "data/maps/MauvilleCity/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 0, FALSE
# 484 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 485 "data/maps/MauvilleCity/scripts.pory"
	case 0, MauvilleCity_EventScript_RikaBattle
# 486 "data/maps/MauvilleCity/scripts.pory"
	case 1, MauvilleCity_EventScript_RikaBattleLater
# 487 "data/maps/MauvilleCity/scripts.pory"
	release
# 488 "data/maps/MauvilleCity/scripts.pory"
	end
# 489 "data/maps/MauvilleCity/scripts.pory"

# 490 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RikaBattle::
# 491 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RikaChallengeYes, MSGBOX_DEFAULT
# 492 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIKA_1, MauvilleCity_Text_RikaDefeated
# 493 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_RikaDefeated
# 494 "data/maps/MauvilleCity/scripts.pory"
	end
# 495 "data/maps/MauvilleCity/scripts.pory"

# 496 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RikaBattleLater::
# 497 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RikaChallengeNo, MSGBOX_DEFAULT
# 498 "data/maps/MauvilleCity/scripts.pory"
	release
# 499 "data/maps/MauvilleCity/scripts.pory"
	end
# 500 "data/maps/MauvilleCity/scripts.pory"

# 501 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RikaDefeated::
# 502 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RikaGift, MSGBOX_DEFAULT
# 503 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_RIKA_BATTLE
# 504 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_RikaTeraGift
# 505 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_MAUVILLE_RIKA_MET
# 506 "data/maps/MauvilleCity/scripts.pory"
	release
# 507 "data/maps/MauvilleCity/scripts.pory"
	end
# 508 "data/maps/MauvilleCity/scripts.pory"

# 509 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RikaTeraGift::
# 510 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_GROUND_TERA_SHARD
# 511 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 512 "data/maps/MauvilleCity/scripts.pory"
	return
# 513 "data/maps/MauvilleCity/scripts.pory"

# 514 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RikaMet::
# 515 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RikaGoodLuck, MSGBOX_DEFAULT
# 516 "data/maps/MauvilleCity/scripts.pory"
	release
# 517 "data/maps/MauvilleCity/scripts.pory"
	end
# 518 "data/maps/MauvilleCity/scripts.pory"

# 519 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 523 "data/maps/MauvilleCity/scripts.pory"

# 524 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 529 "data/maps/MauvilleCity/scripts.pory"

# 530 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 536 "data/maps/MauvilleCity/scripts.pory"

# 537 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with KIRLIA,\n"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 541 "data/maps/MauvilleCity/scripts.pory"

# 542 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 550 "data/maps/MauvilleCity/scripts.pory"

# 551 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 555 "data/maps/MauvilleCity/scripts.pory"

# 556 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 562 "data/maps/MauvilleCity/scripts.pory"

# 563 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouFindWally:
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Ah, {PLAYER}{KUN}!\p"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY wanted to see you, \n"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "but he's at my home in VERDANTURF.\p"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "Could you go and say hi to him?\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "He has something he wants to say.$"
# 569 "data/maps/MauvilleCity/scripts.pory"

# 570 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 573 "data/maps/MauvilleCity/scripts.pory"

# 574 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 577 "data/maps/MauvilleCity/scripts.pory"

# 578 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 582 "data/maps/MauvilleCity/scripts.pory"

# 583 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 586 "data/maps/MauvilleCity/scripts.pory"

# 587 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 593 "data/maps/MauvilleCity/scripts.pory"

# 594 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 601 "data/maps/MauvilleCity/scripts.pory"

# 602 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 610 "data/maps/MauvilleCity/scripts.pory"

# 611 "data/maps/MauvilleCity/scripts.pory"

# 612 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 622 "data/maps/MauvilleCity/scripts.pory"

# 623 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 626 "data/maps/MauvilleCity/scripts.pory"

# 627 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 639 "data/maps/MauvilleCity/scripts.pory"

# 640 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 654 "data/maps/MauvilleCity/scripts.pory"

# 655 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 662 "data/maps/MauvilleCity/scripts.pory"

# 663 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 664 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 670 "data/maps/MauvilleCity/scripts.pory"

# 671 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 673 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 675 "data/maps/MauvilleCity/scripts.pory"

# 676 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 679 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 680 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 681 "data/maps/MauvilleCity/scripts.pory"

# 682 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 683 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 684 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 685 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 686 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 687 "data/maps/MauvilleCity/scripts.pory"

# 688 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 689 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 690 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 691 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 692 "data/maps/MauvilleCity/scripts.pory"

# 693 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 694 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 695 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 696 "data/maps/MauvilleCity/scripts.pory"

# 697 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 698 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 699 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 700 "data/maps/MauvilleCity/scripts.pory"

# 701 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 702 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 703 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 704 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 705 "data/maps/MauvilleCity/scripts.pory"

# 706 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 707 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 708 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 709 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 710 "data/maps/MauvilleCity/scripts.pory"

# 711 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 712 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 713 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 714 "data/maps/MauvilleCity/scripts.pory"

# 715 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 716 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 717 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 718 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 719 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 720 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 721 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 722 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 723 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 724 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 725 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 726 "data/maps/MauvilleCity/scripts.pory"

# 727 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 728 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
# 729 "data/maps/MauvilleCity/scripts.pory"

# 730 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RikaHeyKid:
# 731 "data/maps/MauvilleCity/scripts.pory"
	.string "Hey kiddo! You're {PLAYER}{KUN},\n"
# 732 "data/maps/MauvilleCity/scripts.pory"
	.string "right? I heard you're a big shot.\p"
# 733 "data/maps/MauvilleCity/scripts.pory"
	.string "My boss has sent me here to test you\n"
# 734 "data/maps/MauvilleCity/scripts.pory"
	.string "a little.\p"
# 735 "data/maps/MauvilleCity/scripts.pory"
	.string "Now, I know I'm not just a pretty face\n"
# 736 "data/maps/MauvilleCity/scripts.pory"
	.string "but there's no need to be intimidated.\p"
# 737 "data/maps/MauvilleCity/scripts.pory"
	.string "I bet you're strong enough. Besides,\n"
# 738 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll make it worth your while.\p"
# 739 "data/maps/MauvilleCity/scripts.pory"
	.string "Beat me, and I'll give you a GROUND\n"
# 740 "data/maps/MauvilleCity/scripts.pory"
	.string "TERA SHARD. We got a deal?$"
# 741 "data/maps/MauvilleCity/scripts.pory"

# 742 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RikaChallengeYes:
# 743 "data/maps/MauvilleCity/scripts.pory"
	.string "Sounds good, kiddo. But I'll warn you,\n"
# 744 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm not going to go easy on you.$"
# 745 "data/maps/MauvilleCity/scripts.pory"

# 746 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RikaChallengeNo:
# 747 "data/maps/MauvilleCity/scripts.pory"
	.string "Ah, shame.\p"
# 748 "data/maps/MauvilleCity/scripts.pory"
	.string "Well, I'll be here for a little while\n"
# 749 "data/maps/MauvilleCity/scripts.pory"
	.string "in case you change your mind.$"
# 750 "data/maps/MauvilleCity/scripts.pory"

# 751 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RikaGift:
# 752 "data/maps/MauvilleCity/scripts.pory"
	.string "Wow. You're something else, kiddo.\p"
# 753 "data/maps/MauvilleCity/scripts.pory"
	.string "The Chairwoman was right to have\n"
# 754 "data/maps/MauvilleCity/scripts.pory"
	.string "her eye on you.\p"
# 755 "data/maps/MauvilleCity/scripts.pory"
	.string "She's got a good eye for talent.\p"
# 756 "data/maps/MauvilleCity/scripts.pory"
	.string "Well, a deal's a deal!$"
# 757 "data/maps/MauvilleCity/scripts.pory"

# 758 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RikaDefeated:
# 759 "data/maps/MauvilleCity/scripts.pory"
	.string "Not bad, kiddo.$"
# 760 "data/maps/MauvilleCity/scripts.pory"
	end
# 761 "data/maps/MauvilleCity/scripts.pory"

# 762 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RikaGoodLuck:
# 763 "data/maps/MauvilleCity/scripts.pory"
	.string "When you fight Wattson,\n"
# 764 "data/maps/MauvilleCity/scripts.pory"
	.string "remember to stay grounded. Heh.$"

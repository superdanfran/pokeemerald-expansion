# 1 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_OnFrame
# 4 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_OnTransition
# 5 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 7 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnFrame::
# 8 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 9 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.2byte 0
# 10 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 11 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 12 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lockall
# 13 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 14 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_WalkInPlaceFasterDown
# 15 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 16 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	playse SE_PIN
# 17 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_ExclamationMark
# 18 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_Delay48
# 20 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 21 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
# 22 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	closemessage
# 23 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 24 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 26 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
# 28 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
# 29 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	releaseall
# 30 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 31 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 32 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
# 33 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_16
# 34 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_8
# 35 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_down
# 36 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_16
# 37 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_down
# 38 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_8
# 39 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	step_end
# 41 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 42 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnTransition::
# 43 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting
# 44 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2, SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 45 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 46 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 47 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 48 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_TryLoseFansFromPlayTime
# 49 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 50 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 51 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 52 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 53 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 54 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 55 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 56 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 57 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 58 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 59 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 60 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 61 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 62 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 63 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 64 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 65 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 66 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 67 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 68 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 69 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 70 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 71 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 72 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 73 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 74 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 75 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 76 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, 5, 2
# 77 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
# 78 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 79 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 80 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 81 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, 7, 4
# 82 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
# 83 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 84 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 85 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 86 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, 2, 2
# 87 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
# 88 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 89 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 90 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 91 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 3, 4
# 92 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
# 93 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 94 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 95 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 96 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_ROCKER, 4, 6
# 97 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_ROCKER, MOVEMENT_TYPE_FACE_UP
# 98 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 99 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 100 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 101 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 10, 3
# 102 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_WOMAN, MOVEMENT_TYPE_FACE_UP
# 103 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 104 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 105 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 106 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BEAUTY, 7, 5
# 107 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
# 108 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 109 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 110 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 111 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, 9, 6
# 112 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
# 113 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	return
# 114 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 115 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting::
# 116 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 117 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 118 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 119 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 120 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 121 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 122 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 123 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl::
# 124 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 125 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 126 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 127 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 128 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion
# 129 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 130 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan
# 131 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 132 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan
# 133 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
# 134 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 135 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 136 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 137 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan::
# 138 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 139 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan
# 140 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
# 141 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 142 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 143 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 144 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan::
# 145 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
# 146 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 147 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 148 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 149 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan::
# 150 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
# 151 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 152 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 153 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 154 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion::
# 155 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
# 156 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 157 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 158 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 159 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 160 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 161 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 162 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 163 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 164 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 165 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 166 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 167 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 168 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 169 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
# 170 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 171 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 172 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 173 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 174 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 175 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 176 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
# 177 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 178 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 179 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 180 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 181 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
# 182 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 183 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 184 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 185 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 186 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
# 187 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 188 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 189 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 190 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 191 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
# 192 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 193 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 194 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 195 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
# 196 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 197 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 198 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 199 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 200 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion
# 201 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 202 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan
# 203 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 204 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan
# 205 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
# 206 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 207 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 208 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 209 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan::
# 210 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 211 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan
# 212 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
# 213 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 214 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 215 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 216 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan::
# 217 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
# 218 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 219 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 220 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 221 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan::
# 222 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
# 223 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 224 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 225 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 226 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion::
# 227 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
# 228 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 229 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 230 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 231 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
# 232 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 233 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 234 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 235 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 236 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion
# 237 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 238 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan
# 239 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 240 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan
# 241 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
# 242 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 243 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 244 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 245 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan::
# 246 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 247 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan
# 248 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
# 249 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 250 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 251 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 252 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan::
# 253 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
# 254 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 255 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 256 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 257 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan::
# 258 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
# 259 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 260 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 261 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 262 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion::
# 263 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
# 264 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 265 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 266 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 267 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
# 268 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 269 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 270 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 271 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 272 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 273 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 274 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 275 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 276 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
# 277 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 278 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 279 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 280 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 281 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 282 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 283 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
# 284 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 285 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 286 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 287 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 288 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
# 289 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 290 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 291 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 292 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 293 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
# 294 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 295 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 296 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 297 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
# 298 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 299 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 300 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 301 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 302 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 303 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan
# 304 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 305 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan
# 306 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
# 307 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 308 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 309 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 310 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan::
# 311 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 312 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan
# 313 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
# 314 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 315 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 316 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 317 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan::
# 318 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
# 319 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 320 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 321 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 322 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan::
# 323 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
# 324 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 325 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 326 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 327 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
# 328 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 329 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 330 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 331 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 332 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 333 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan
# 334 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 335 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan
# 336 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
# 337 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 338 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 339 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 340 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan::
# 341 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 342 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan
# 343 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
# 344 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 345 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 346 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 347 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan::
# 348 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
# 349 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 350 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 351 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 352 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan::
# 353 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
# 354 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 355 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 356 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 357 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
# 358 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock
# 359 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	faceplayer
# 360 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 361 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 362 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 363 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan
# 364 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 365 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan
# 366 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
# 367 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 368 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 369 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 370 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan::
# 371 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 372 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan
# 373 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
# 374 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 375 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 376 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 377 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan::
# 378 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
# 379 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 380 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 381 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 382 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan::
# 383 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
# 384 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	release
# 385 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	end
# 386 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 387 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_HuhYou::
# 388 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Huh?\n"
# 389 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You…$"
# 390 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 391 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow::
# 392 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Are you maybe…\n"
# 393 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "… …\p"
# 394 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You are!\n"
# 395 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You are {PLAYER}!\p"
# 396 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "We were just talking about you!\p"
# 397 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "We were talking about how an\n"
# 398 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "incredibly good TRAINER appeared.\p"
# 399 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "And that someone is you!\n"
# 400 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You're so cool!\p"
# 401 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "So, we decided that we'll become\n"
# 402 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "your FAN CLUB!\p"
# 403 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "We all hope you'll keep battling\n"
# 404 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "and show us how cool you are.\p"
# 405 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "That way, maybe other people will\n"
# 406 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "become fans just like me.$"
# 407 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 408 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou::
# 409 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll always be cheering for you!\p"
# 410 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Go, {PLAYER}, go!$"
# 411 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 412 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou::
# 413 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll always believe in you,\n"
# 414 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}.\p"
# 415 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Please show the others what you're\n"
# 416 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "like when you battle seriously.$"
# 417 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 418 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore::
# 419 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm sorry.\n"
# 420 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I was your fan before.\p"
# 421 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But now, you seem to have lost\n"
# 422 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "the drive you had before.\p"
# 423 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Lately, I think {STR_VAR_1} has been\n"
# 424 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "a lot cooler.$"
# 425 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 426 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe::
# 427 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh!\n"
# 428 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 429 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Everyone's been all excited about\n"
# 430 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "you recently.\p"
# 431 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I can understand why.\n"
# 432 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I know that you're strong.\p"
# 433 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But, do you know what?\p"
# 434 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Once I became {STR_VAR_1}'s fan,\n"
# 435 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I can't just stop being a fan.$"
# 436 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 437 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling::
# 438 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I think TRAINERS are so cool when\n"
# 439 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "they're battling.\p"
# 440 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Don't you think so, too?$"
# 441 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 442 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts::
# 443 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh! It's {PLAYER}!\n"
# 444 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Too cool!\p"
# 445 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh!\n"
# 446 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, yeah!\p"
# 447 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Can you autograph something?\n"
# 448 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "How about my shorts?$"
# 449 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 450 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou::
# 451 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "However hot it's been…\p"
# 452 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "And however cold it may get…\p"
# 453 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I've always believed in, and worn,\n"
# 454 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "shorts!\p"
# 455 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm counting on you to keep\n"
# 456 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "winning!\p"
# 457 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I believe in you just as much as\n"
# 458 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I believe in shorts!$"
# 459 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 460 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero::
# 461 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "BROCK's my hero!\n"
# 462 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "He's a man among men!\p"
# 463 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Heheh, I got my mom to do\n"
# 464 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "something for me.\p"
# 465 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I got her to embroider “BROCK”\n"
# 466 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "on my shorts!$"
# 467 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 468 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd::
# 469 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…  …\p"
# 470 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…  …\n"
# 471 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm BROCK's fan!\p"
# 472 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Even if I were his only fan,\n"
# 473 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I swear it on my rock-hard will,\l"
# 474 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "and on my shorts!\p"
# 475 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll be his fan to the bitter end!$"
# 476 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 477 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool::
# 478 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "BROCK's the last word on cool,\n"
# 479 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "end of story!\p"
# 480 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Now there's a guy who I want to\n"
# 481 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "be like!$"
# 482 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 483 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle::
# 484 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}, I've had the pleasure of\n"
# 485 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "watching you battle.\p"
# 486 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It brings back sweet memories of\n"
# 487 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "my own long-lost youth.\p"
# 488 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "May you continue to find success.\n"
# 489 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You have a fan in me!$"
# 490 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 491 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence::
# 492 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I have journeyed far and wide\n"
# 493 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "across the lands.\p"
# 494 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But never have I seen a TRAINER\n"
# 495 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "of your magnificence.\p"
# 496 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Take courage in your abilities\n"
# 497 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "and keep battling on!\p"
# 498 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Make that a promise to me,\n"
# 499 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "my young idol!$"
# 500 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 501 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre::
# 502 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hmm…\n"
# 503 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "And you are?\p"
# 504 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Were you hoping to sign up for\n"
# 505 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "a membership in our FAN CLUB?$"
# 506 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 507 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo::
# 508 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Ah, so you are the much-\n"
# 509 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "talked-about {PLAYER}.\p"
# 510 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You certainly do have the look of\n"
# 511 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "a winner.\p"
# 512 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But for me to accept you as\n"
# 513 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "a true POKéMON great…\p"
# 514 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "… …\p"
# 515 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You've still a ways to go!$"
# 516 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 517 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning::
# 518 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "All of us gathered here are fans\n"
# 519 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "of POKéMON TRAINERS.\p"
# 520 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "The way they look in battle…\n"
# 521 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "They are the picture of coolness.\p"
# 522 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Perhaps you will be talked about\n"
# 523 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "here, too, if you keep winning.$"
# 524 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 525 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay::
# 526 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It's {PLAYER}!\n"
# 527 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It's {PLAYER}!\p"
# 528 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I want to be like {PLAYER} one day!$"
# 529 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 530 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan::
# 531 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Everyone stopped being {PLAYER}'s\n"
# 532 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "fan…\p"
# 533 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But that means I can have {PLAYER}\n"
# 534 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "all to myself!\p"
# 535 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Yay! Go for it!\n"
# 536 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "My one and only {PLAYER}!$"
# 537 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 538 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina::
# 539 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Do you know what?\n"
# 540 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I want to be like SABRINA!\p"
# 541 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I want to be a psychic girl just\n"
# 542 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "like her!$"
# 543 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 544 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan::
# 545 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Even if I'm the only one, I won't\n"
# 546 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "stop being SABRINA's fan.\p"
# 547 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "My dream is to be like SABRINA,\n"
# 548 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "cute, but cool.\p"
# 549 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I want to be a psychic girl just\n"
# 550 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "like her!$"
# 551 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 552 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay::
# 553 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I wonder if I can become a cool\n"
# 554 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "TRAINER one day?$"
# 555 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 556 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool::
# 557 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, man, oh, man!\n"
# 558 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Cool! Too cool!\p"
# 559 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…Huh?\n"
# 560 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "No, not you.\p"
# 561 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Just the way you battle.\n"
# 562 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "That's cool.$"
# 563 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 564 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans::
# 565 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Yo, {PLAYER}!\p"
# 566 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Looks like I'm the only one left\n"
# 567 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "out of your fans.\p"
# 568 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But, you know, I like being an only\n"
# 569 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "fan… It's less stressful.\p"
# 570 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Keep up and at it!$"
# 571 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 572 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks::
# 573 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{STR_VAR_1}'s cool, huh?\n"
# 574 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I love the way he talks.\p"
# 575 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'd really relish a chance to meet\n"
# 576 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "him in person once.$"
# 577 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 578 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan::
# 579 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Huh, can you believe it?\n"
# 580 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Everyone turned into your fans.\p"
# 581 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "So after all we've been through,\n"
# 582 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm the lone {STR_VAR_1} fan?\p"
# 583 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Eh, being the one and only\n"
# 584 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{STR_VAR_1} fan's my style, anyway.$"
# 585 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 586 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle::
# 587 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, my goodness!\n"
# 588 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Is it really you, {PLAYER}?\p"
# 589 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I have to tell you, I adore the\n"
# 590 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "way you battle.\p"
# 591 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I hope you'll keep at it.\n"
# 592 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll be your number one fan!$"
# 593 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 594 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan::
# 595 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, my goodness!\n"
# 596 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "If it isn't {PLAYER}!\p"
# 597 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It's so disappointing… I realized\n"
# 598 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm your number-one-and-only fan!\p"
# 599 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Well, it can't be helped!\n"
# 600 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Let me cheer you on, at least!\p"
# 601 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hurray, hurray, {PLAYER}!$"
# 602 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 603 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire::
# 604 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Recently, {STR_VAR_1} has been on\n"
# 605 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "fire.\p"
# 606 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "The way he battles… It's just \n"
# 607 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "the way that I like it!$"
# 608 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 609 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou::
# 610 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, hello!\n"
# 611 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "If it isn't {PLAYER}!\p"
# 612 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Lately, all everyone talks about\n"
# 613 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "is you.\p"
# 614 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm feeling lonesome because I\n"
# 615 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "prefer {STR_VAR_1}.$"
# 616 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 617 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing::
# 618 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Amazing!\n"
# 619 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}, you really are amazing!\p"
# 620 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Instead of just watching, maybe\n"
# 621 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I should become a TRAINER, too.$"
# 622 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 623 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan::
# 624 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm your only fan…\n"
# 625 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Sigh… This is lonely…\p"
# 626 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Can't you try harder and make the\n"
# 627 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "others take notice of you?$"
# 628 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 629 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity::
# 630 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Master {STR_VAR_1} is so dignified…\n"
# 631 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "He is so my type.\p"
# 632 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Why can't the others see the\n"
# 633 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "dignity he simply oozes?$"
# 634 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 635 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart::
# 636 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I believe in Master {STR_VAR_1}\n"
# 637 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "with all my heart.\p"
# 638 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Even if I am the only one to\n"
# 639 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "believe in him.\p"
# 640 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I won't ever feel lonesome, though.\p"
# 641 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Not if I keep thinking about Master\n"
# 642 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{STR_VAR_1}.$"
# 643 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 644 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational::
# 645 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah!\p"
# 646 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Your battling style is most\n"
# 647 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "educational.\p"
# 648 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I hope that you will keep plugging\n"
# 649 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "away at success, hiyah!$"
# 650 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 651 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan::
# 652 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Instead of just watching others\n"
# 653 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "battle, battle yourself!\p"
# 654 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…My DOJO's MASTER chewed me out\n"
# 655 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "like that…\p"
# 656 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "But I won't let that stop me from\n"
# 657 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "being your fan!\p"
# 658 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I can't stop being your fan!$"
# 659 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 660 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect::
# 661 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah! There is but one TRAINER\n"
# 662 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "who has my respect.\p"
# 663 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "And that is none other than my\n"
# 664 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "MASTER at the FIGHTING DOJO.\p"
# 665 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "You should become a fan of my\n"
# 666 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "MASTER like me! Hiyah!$"
# 667 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"

# 668 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster::
# 669 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah! I respect my MASTER at the\n"
# 670 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "FIGHTING DOJO.\p"
# 671 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I will never become a fan of\n"
# 672 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "anyone other than my MASTER!\p"
# 673 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I will even sneak out of the DOJO\n"
# 674 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "to spread word of his greatness.\p"
# 675 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah!$"

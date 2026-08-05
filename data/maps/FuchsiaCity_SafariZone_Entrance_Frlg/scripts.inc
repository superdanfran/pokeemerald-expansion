# 1 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FuchsiaCity_SafariZone_Entrance_OnFrame
# 4 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 6 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_OnFrame::
# 7 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 1, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWarpIn
# 8 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 2, FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly
# 9 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 3, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn
# 10 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.2byte 0
# 11 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 12 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
@ When player runs out of balls mid-battle
# 13 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn::
# 14 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 15 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 16 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ApproachCounter
# 17 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 18 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain
# 19 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 20 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit2
# 21 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special ExitSafariMode
# 23 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 24 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
# 25 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 26 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 27 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
@ When player runs of out balls after catching a pokemon, or runs out of steps
# 28 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitWarpIn::
# 29 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 30 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain
# 32 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 33 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit
# 34 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special ExitSafariMode
# 36 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 37 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
# 38 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 39 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 40 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
@ When player re-enters the entrance building with balls/steps remaining
# 41 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly::
# 42 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 43 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 44 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_GoingToLeaveSafariZoneEarly, MSGBOX_YESNO
# 45 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_SafariZone_Entrance_EventScript_ReturnToSafariZone
# 46 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_PleaseReturnSafariBalls
# 47 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit
# 49 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special ExitSafariMode
# 51 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 52 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
# 53 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 54 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 55 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ReturnToSafariZone::
# 56 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_GoodLuck
# 57 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 58 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ReEnter
# 59 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 60 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	warp MAP_SAFARI_ZONE_CENTER, 26, 30
# 61 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitstate
# 62 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 63 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 64 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_Exit::
# 65 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 66 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 67 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 68 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 69 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ReEnter::
# 70 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 71 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 72 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 73 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_Exit2::
# 74 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 76 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 77 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 78 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ApproachCounter::
# 79 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 80 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	delay_8
# 81 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 82 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 83 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerMid::
# 84 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 85 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 86 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
# 87 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 88 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 89 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerRight::
# 90 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 91 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1
# 92 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
# 93 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 94 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 95 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerLeft::
# 96 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 97 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2
# 98 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
# 99 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 100 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 101 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone::
# 102 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 103 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_WelcomeToSafariZone
# 104 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 105 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 106 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	showmoneybox 0, 0
# 107 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_PlaySafariGameFor500, MSGBOX_YESNO
# 108 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone
# 109 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OkayPleaseComeAgain
# 110 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
# 111 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 112 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 113 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone::
# 114 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons
# 115 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	checkmoney 500
# 116 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_SafariZone_Entrance_EventScript_NotEnoughMoney
# 117 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	removemoney 500
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	updatemoneybox
# 119 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls
# 120 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 121 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 122 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	message FuchsiaCity_SafariZone_Entrance_Text_PlayerReceived30SafariBalls
# 123 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitfanfare
# 124 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 125 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CallYouOnPAWhenYouRunOut
# 126 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 127 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	hidemoneybox
# 128 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 0, FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneMid
# 129 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneRight
# 130 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneLeft
# 131 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special EnterSafariMode
# 132 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 2
# 133 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	warp MAP_SAFARI_ZONE_CENTER, 255, 26, 30
# 134 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitstate
# 135 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 136 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 137 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneRight::
# 138 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneRight
# 139 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	return
# 141 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 142 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneMid::
# 143 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneMid
# 144 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 145 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	return
# 146 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 147 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneLeft::
# 148 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneLeft
# 149 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	return
# 151 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 152 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons::
# 153 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	getpartysize
# 154 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, PARTY_SIZE, Common_EventScript_NopReturn
# 155 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 156 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NopReturn
# 157 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull
# 158 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
# 159 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 160 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 161 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_NotEnoughMoney::
# 162 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OopsNotEnoughMoney
# 163 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
# 164 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 165 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 166 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack::
# 167 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 168 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	hidemoneybox
# 169 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ForceBack
# 170 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 171 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
# 172 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 173 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 174 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ForceBack::
# 175 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 176 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 177 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 178 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneMid::
# 179 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 180 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 181 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 182 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 183 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneRight::
# 184 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 185 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_left
# 186 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 187 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 188 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 189 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneLeft::
# 190 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 191 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_right
# 192 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 193 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 194 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 195 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant::
# 196 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lock
# 197 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	faceplayer
# 198 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_FirstTimeAtSafariZone, MSGBOX_YESNO
# 199 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_SafariZone_Entrance_EventScript_ExplainSafariZone
# 200 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_SorryYoureARegularHere
# 201 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	release
# 202 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 203 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 204 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExplainSafariZone::
# 205 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_ExplainSafariZone
# 206 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	release
# 207 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 208 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 209 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_WelcomeToSafariZone::
# 210 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Welcome to the SAFARI ZONE!$"
# 211 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 212 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_PlaySafariGameFor500::
# 213 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "For just ¥500, you can play the\n"
# 214 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "SAFARI GAME.\p"
# 215 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "You can roam the wide-open safari\n"
# 216 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "and catch what you like.\p"
# 217 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Would you like to play?$"
# 218 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 219 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls::
# 220 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "That'll be ¥500, please!\p"
# 221 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "We only use a special kind of \n"
# 222 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "POKé BALLS here.$"
# 223 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 224 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_PlayerReceived30SafariBalls::
# 225 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "{PLAYER} received 30 SAFARI BALLS\n"
# 226 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "from the attendant.$"
# 227 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 228 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_CallYouOnPAWhenYouRunOut::
# 229 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "We'll call you on the PA when you\n"
# 230 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "run out of time or SAFARI BALLS.\p"
# 231 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Well, I'll wish you the best of\n"
# 232 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "luck!$"
# 233 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 234 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_OkayPleaseComeAgain::
# 235 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Okay.\n"
# 236 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Please come again!$"
# 237 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 238 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_OopsNotEnoughMoney::
# 239 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Oops!\n"
# 240 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Not enough money!$"
# 241 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 242 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_GoingToLeaveSafariZoneEarly::
# 243 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Are you going to leave the\n"
# 244 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "SAFARI ZONE early?$"
# 245 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 246 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_PleaseReturnSafariBalls::
# 247 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Please return any SAFARI BALLS\n"
# 248 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "you may have left.$"
# 249 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 250 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_GoodLuck::
# 251 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Good luck!$"
# 252 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 253 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain::
# 254 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Did you catch your fair share?\n"
# 255 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Come again!$"
# 256 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 257 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_FirstTimeAtSafariZone::
# 258 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Hi! Is it your first time here at\n"
# 259 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "the SAFARI ZONE?$"
# 260 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 261 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_ExplainSafariZone::
# 262 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "The SAFARI ZONE actually has\n"
# 263 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "four zones in it.\p"
# 264 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Each zone has different kinds of\n"
# 265 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "POKéMON, even some rare ones.\p"
# 266 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Use the supplied SAFARI BALLS to\n"
# 267 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "catch them.\p"
# 268 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "You can also throw BAIT or ROCKS\n"
# 269 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "besides the SAFARI BALLS.\p"
# 270 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "If you throw BAIT, the POKéMON\n"
# 271 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "becomes less likely to flee, but\l"
# 272 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "harder to catch.\p"
# 273 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "If you throw ROCKS, the POKéMON\n"
# 274 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "becomes more likely to flee, but\l"
# 275 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "easier to catch.\p"
# 276 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "When you run out of time or SAFARI\n"
# 277 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "BALLS, it's game over for you!$"
# 278 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 279 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_SorryYoureARegularHere::
# 280 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Sorry, you're a regular here!$"

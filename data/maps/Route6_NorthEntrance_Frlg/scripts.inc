# 1 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 2 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Frlg_MapScripts::
# 3 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 5 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_Guard::
# 6 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	msgbox Route6_NorthEntrance_Text_HiHowsItGoing, MSGBOX_NPC
# 7 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	end
# 8 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 9 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerLeft::
# 10 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	lockall
# 11 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 12 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 13 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	end
# 14 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 15 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerMid::
# 16 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	lockall
# 17 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 19 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	end
# 20 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 21 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerRight::
# 22 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	lockall
# 23 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 24 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 25 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	end
# 26 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 27 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTrigger::
# 28 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 29 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 30 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route6_NorthEntrance_EventScript_GiveTea
# 32 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThirstyOnGuardDuty
# 33 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	closemessage
# 34 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 35 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	releaseall
# 37 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	end
# 38 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 39 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTea::
# 40 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	removeitem ITEM_TEA
# 41 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkTea
# 42 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	end
# 43 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 44 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkTea::
# 45 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThatTeaLooksTasty
# 46 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	closemessage
# 47 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route6_NorthEntrance_EventScript_WalkToGuardLeft
# 48 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route6_NorthEntrance_EventScript_WalkToGuardMid
# 49 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route6_NorthEntrance_EventScript_WalkToGuardRight
# 50 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThanksIllShareTeaWithGuards
# 51 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 52 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	releaseall
# 53 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	end
# 54 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 55 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardLeft::
# 56 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardLeft
# 57 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	return
# 59 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 60 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardMid::
# 61 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardMid
# 62 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	return
# 64 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 65 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardRight::
# 66 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardRight
# 67 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	return
# 69 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 70 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardLeft::
# 71 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	walk_right
# 72 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	walk_right
# 73 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	step_end
# 74 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 75 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardMid::
# 76 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	walk_right
# 77 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	step_end
# 78 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 79 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardRight::
# 80 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	walk_in_place_right
# 81 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	step_end
# 82 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 83 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Movement_BlockPlayerEntry::
# 84 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	walk_down
# 85 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	step_end
# 86 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 87 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Text_ThirstyOnGuardDuty::
# 88 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "I'm on guard duty.\n"
# 89 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "Gee, I'm thirsty, though!\p"
# 90 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "Oh, wait there, the road's closed.$"
# 91 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 92 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Text_ThatTeaLooksTasty::
# 93 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "Oh, that TEA…\n"
# 94 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "It looks awfully tasty…$"
# 95 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 96 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Text_ThanksIllShareTeaWithGuards::
# 97 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "Huh? I can have this drink?\n"
# 98 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "Gee, thanks!\l"
# 99 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "… …\l"
# 100 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "Glug, glug…\l"
# 101 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "… …\l"
# 102 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "Gulp…\l"
# 103 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "If you want to go to SAFFRON\l"
# 104 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "CITY…\l"
# 105 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "… …\l"
# 106 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "You can go on through.\p"
# 107 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "I'll share this TEA with the other\n"
# 108 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "guards!$"
# 109 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"

# 110 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
Route6_NorthEntrance_Text_HiHowsItGoing::
# 111 "data/maps/Route6_NorthEntrance_Frlg/scripts.pory"
	.string "Hi, how's it going?$"

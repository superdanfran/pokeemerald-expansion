# 1 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 2 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Frlg_MapScripts::
# 3 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 5 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_LeftBinoculars::
# 6 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TheresManFishing, MSGBOX_SIGN
# 7 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 8 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 9 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_RightBinoculars::
# 10 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ItsPokemonTower, MSGBOX_SIGN
# 11 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 12 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 13 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_Lass::
# 14 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	lock
# 15 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM27, Route12_NorthEntrance_2F_EventScript_ExplainTM27
# 17 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	checkplayergender
# 18 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route12_NorthEntrance_2F_EventScript_TakeTMMale
# 19 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route12_NorthEntrance_2F_EventScript_TakeTMFemale
# 20 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	checkitemspace ITEM_TM27
# 21 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_NorthEntrance_2F_EventScript_NoRoomForTM27
# 22 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl, ITEM_TM27
# 23 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
# 24 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_TM27
# 25 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 26 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 27 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 28 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_TakeTMMale::
# 29 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale
# 30 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	return
# 31 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 32 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_TakeTMFemale::
# 33 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale
# 34 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	return
# 35 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 36 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_NoRoomForTM27::
# 37 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_DontHaveRoomForThis
# 38 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 39 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 40 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 41 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_EventScript_ExplainTM27::
# 42 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
# 43 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 44 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 45 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 46 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
@ Male and female text identical, differ (presumably) in JP
# 47 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale::
# 48 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "My POKéMON's ashes are stored in\n"
# 49 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "POKéMON TOWER.\p"
# 50 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "You can have this TM.\n"
# 51 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I don't need it anymore…$"
# 52 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 53 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale::
# 54 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "My POKéMON's ashes are stored in\n"
# 55 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "POKéMON TOWER.\p"
# 56 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "You can have this TM.\n"
# 57 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I don't need it anymore…$"
# 58 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 59 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl::
# 60 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received TM27\n"
# 61 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "from the little girl.$"
# 62 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 63 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_ExplainTM27::
# 64 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "TM27 is a move called RETURN…\p"
# 65 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "If you treat your POKéMON good,\n"
# 66 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "it will return your love by working\l"
# 67 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "its hardest in battle.$"
# 68 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 69 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_DontHaveRoomForThis::
# 70 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "You don't have room for this.$"
# 71 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 72 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_TheresManFishing::
# 73 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 74 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 75 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "There's a man fishing!$"
# 76 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"

# 77 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
Route12_NorthEntrance_2F_Text_ItsPokemonTower::
# 78 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 79 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 80 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "It's POKéMON TOWER!$"

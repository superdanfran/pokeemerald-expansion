# 1 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_MrPsychic::
# 6 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	lock
# 7 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM29_FROM_MR_PSYCHIC, SaffronCity_MrPsychicsHouse_EventScript_AlreadyGotTM29
# 9 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouWantedThis
# 10 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	checkitemspace ITEM_TM29
# 11 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_MrPsychicsHouse_EventScript_NoRoomForTM29
# 12 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	giveitem_msg SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic, ITEM_TM29
# 13 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 14 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_TM29_FROM_MR_PSYCHIC
# 15 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
# 16 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	end
# 17 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 18 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_NoRoomForTM29::
# 19 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouveNoRoom
# 20 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
# 21 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	end
# 22 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 23 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_EventScript_AlreadyGotTM29::
# 24 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 25 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	release
# 26 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	end
# 27 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 28 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Text_YouWantedThis::
# 29 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "…Wait! Don't say a word!\p"
# 30 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "You wanted this!$"
# 31 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 32 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic::
# 33 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "{PLAYER} received TM29\n"
# 34 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "from MR. PSYCHIC.$"
# 35 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 36 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Text_ExplainTM29::
# 37 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "You already know, don't you?\n"
# 38 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "TM29 is PSYCHIC.\p"
# 39 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "It's an attack that may also lower\n"
# 40 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "the target's special stats.$"
# 41 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"

# 42 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
SaffronCity_MrPsychicsHouse_Text_YouveNoRoom::
# 43 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "Where do you plan to put this?\n"
# 44 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "You've no room.$"

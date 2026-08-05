# 1 "data/maps/Route16_House_Frlg/scripts.pory"

# 2 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Frlg_MapScripts::
# 3 "data/maps/Route16_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route16_House_Frlg/scripts.pory"

# 5 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_Woman::
# 6 "data/maps/Route16_House_Frlg/scripts.pory"
	lock
# 7 "data/maps/Route16_House_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/Route16_House_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM02, Route16_House_EventScript_AlreadyGotHM02
# 9 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_FoundMySecretRetreat
# 10 "data/maps/Route16_House_Frlg/scripts.pory"
	checkitemspace ITEM_HM02
# 11 "data/maps/Route16_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route16_House_EventScript_NoRoomForHM02
# 12 "data/maps/Route16_House_Frlg/scripts.pory"
	giveitem_msg Route16_House_Text_ReceivedHM02FromGirl, ITEM_HM02
# 13 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_ExplainHM02
# 14 "data/maps/Route16_House_Frlg/scripts.pory"
	setflag FLAG_GOT_HM02
# 15 "data/maps/Route16_House_Frlg/scripts.pory"
	release
# 16 "data/maps/Route16_House_Frlg/scripts.pory"
	end
# 17 "data/maps/Route16_House_Frlg/scripts.pory"

# 18 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_NoRoomForHM02::
# 19 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_DontHaveAnyRoomForThis
# 20 "data/maps/Route16_House_Frlg/scripts.pory"
	release
# 21 "data/maps/Route16_House_Frlg/scripts.pory"
	end
# 22 "data/maps/Route16_House_Frlg/scripts.pory"

# 23 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_AlreadyGotHM02::
# 24 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_ExplainHM02
# 25 "data/maps/Route16_House_Frlg/scripts.pory"
	release
# 26 "data/maps/Route16_House_Frlg/scripts.pory"
	end
# 27 "data/maps/Route16_House_Frlg/scripts.pory"

# 28 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_EventScript_Fearow::
# 29 "data/maps/Route16_House_Frlg/scripts.pory"
	lock
# 30 "data/maps/Route16_House_Frlg/scripts.pory"
	faceplayer
# 31 "data/maps/Route16_House_Frlg/scripts.pory"
	waitse
# 32 "data/maps/Route16_House_Frlg/scripts.pory"
	playmoncry SPECIES_FEAROW, CRY_MODE_NORMAL
# 33 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_Fearow
# 34 "data/maps/Route16_House_Frlg/scripts.pory"
	waitmoncry
# 35 "data/maps/Route16_House_Frlg/scripts.pory"
	release
# 36 "data/maps/Route16_House_Frlg/scripts.pory"
	end
# 37 "data/maps/Route16_House_Frlg/scripts.pory"

# 38 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_FoundMySecretRetreat::
# 39 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "Oh, dear.\n"
# 40 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "You've found my secret retreat.\p"
# 41 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "Please don't tell anyone I'm here.\n"
# 42 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "I'll make it up to you with this!$"
# 43 "data/maps/Route16_House_Frlg/scripts.pory"

# 44 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_ReceivedHM02FromGirl::
# 45 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "{PLAYER} received HM02\n"
# 46 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "from the girl.$"
# 47 "data/maps/Route16_House_Frlg/scripts.pory"

# 48 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_ExplainHM02::
# 49 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "HM02 is FLY.\n"
# 50 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "It's a wonderfully convenient move.\p"
# 51 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "Please, put it to good use.$"
# 52 "data/maps/Route16_House_Frlg/scripts.pory"

# 53 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_DontHaveAnyRoomForThis::
# 54 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "You don't have any room for this.$"
# 55 "data/maps/Route16_House_Frlg/scripts.pory"

# 56 "data/maps/Route16_House_Frlg/scripts.pory"
Route16_House_Text_Fearow::
# 57 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "FEAROW: Kyueen!$"

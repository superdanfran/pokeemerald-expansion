# 1 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_Chef::
# 6 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
# 7 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 8 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 9 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_Woman::
# 10 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_OftenGoToDrugstore, MSGBOX_NPC
# 11 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 12 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 13 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_CoinCaseMan::
# 14 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase
# 17 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
# 18 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	checkitemspace ITEM_COIN_CASE
# 19 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
# 20 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
# 21 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	setflag FLAG_GOT_COIN_CASE
# 22 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
# 23 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 24 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 25 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_NoRoomForCoinCase::
# 26 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
# 27 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
# 28 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 29 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 30 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase::
# 31 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
# 32 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
# 33 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 34 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 35 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_WorkerM::
# 36 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
# 37 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 38 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 39 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_FatMan::
# 40 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
# 41 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 42 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 43 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_TakingBreakRightNow::
# 44 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Hi!\p"
# 45 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Sorry, but we're taking a break\n"
# 46 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "right now.$"
# 47 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 48 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_OftenGoToDrugstore::
# 49 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "My POKéMON are weak, so I often\n"
# 50 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "have to go to the DRUGSTORE.$"
# 51 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 52 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner::
# 53 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Psst! There's a basement under the\n"
# 54 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "GAME CORNER, I hear.$"
# 55 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 56 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_ManLostItAllAtSlots::
# 57 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Munch…\p"
# 58 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "The man at that table lost it all\n"
# 59 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "at the slots.$"
# 60 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 61 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_TakeThisImBusted::
# 62 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Go ahead! Laugh!\n"
# 63 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I'm flat-out busted!\p"
# 64 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "No more slots for me!\n"
# 65 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I'm going straight!\p"
# 66 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Here!\n"
# 67 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I won't be needing this anymore!$"
# 68 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 69 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan::
# 70 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "{PLAYER} received a COIN CASE\n"
# 71 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "from the man.$"
# 72 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 73 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_MakeRoomForThis::
# 74 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Make room for this!$"
# 75 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 76 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_ThoughtIdWinItBack::
# 77 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I always thought I was going to\n"
# 78 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "win it back…$"

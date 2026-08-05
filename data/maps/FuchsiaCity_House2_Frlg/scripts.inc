# 1 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_FishingGurusBrother::
# 6 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	lock
# 7 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_GOOD_ROD, FuchsiaCity_House2_EventScript_AlreadyGotGoodRod
# 9 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_DoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House2_EventScript_GiveGoodRod
# 11 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_OhThatsDisappointing
# 12 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	release
# 13 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	end
# 14 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 15 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_AlreadyGotGoodRod::
# 16 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_HowAreTheFishBiting
# 17 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	release
# 18 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	end
# 19 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 20 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_GiveGoodRod::
# 21 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_LikeYourStyleTakeThis
# 22 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	checkitemspace ITEM_GOOD_ROD
# 23 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_House2_EventScript_NoRoomForGoodRod
# 24 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_House2_Text_ReceivedGoodRod, ITEM_GOOD_ROD
# 25 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons
# 26 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	setflag FLAG_GOT_GOOD_ROD
# 27 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	release
# 28 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	end
# 29 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 30 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_NoRoomForGoodRod::
# 31 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_YouHaveNoRoomForGift
# 32 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	release
# 33 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	end
# 34 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 35 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_DoYouLikeToFish::
# 36 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I'm the FISHING GURU's older\n"
# 37 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "brother.\p"
# 38 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I simply looove fishing!\n"
# 39 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I can't bear to go without.\p"
# 40 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Tell me, do you like to fish?$"
# 41 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 42 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_LikeYourStyleTakeThis::
# 43 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
# 44 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I think we can be friends.\p"
# 45 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Take this and fish, young friend!$"
# 46 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 47 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_ReceivedGoodRod::
# 48 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "{PLAYER} received a GOOD ROD from\n"
# 49 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "the FISHING GURU's brother.$"
# 50 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 51 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons::
# 52 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
# 53 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "It is like the finest poetry.\p"
# 54 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "A crummy OLD ROD could only catch\n"
# 55 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "MAGIKARP, yes?\p"
# 56 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "But with a GOOD ROD, you can\n"
# 57 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "catch much better POKéMON.$"
# 58 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 59 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_OhThatsDisappointing::
# 60 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Oh…\n"
# 61 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "That's so disappointing…$"
# 62 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 63 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_HowAreTheFishBiting::
# 64 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\p"
# 65 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "How are the fish biting?$"
# 66 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 67 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_YouHaveNoRoomForGift::
# 68 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Oh, no!\p"
# 69 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I had a gift for you, but you have\n"
# 70 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "no room for it!$"

# 1 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_FishingGuru::
# 6 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	lock
# 7 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_AlreadyGotOldRod
# 9 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_House1_EventScript_GiveOldRod
# 11 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
# 12 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 13 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 14 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 15 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_AlreadyGotOldRod::
# 16 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
# 17 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 18 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 19 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 20 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_GiveOldRod::
# 21 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	checkitemspace ITEM_OLD_ROD
# 22 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_House1_EventScript_NoRoomForOldRod
# 23 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	additem ITEM_OLD_ROD
# 24 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_TakeThisAndFish
# 25 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
# 26 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 27 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
# 28 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 29 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 30 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 31 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_NoRoomForOldRod::
# 32 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
# 33 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 34 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 35 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 36 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish::
# 37 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I'm the FISHING GURU!\p"
# 38 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I simply looove fishing!\n"
# 39 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I can't bear to go without.\p"
# 40 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Tell me, do you like to fish?$"
# 41 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 42 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_TakeThisAndFish::
# 43 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
# 44 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I think we can be friends.\p"
# 45 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Take this and fish, young friend!$"
# 46 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 47 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru::
# 48 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "{PLAYER} received an OLD ROD from\n"
# 49 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "the FISHING GURU.$"
# 50 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 51 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_FishingIsAWayOfLife::
# 52 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
# 53 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "It is like the finest poetry.\p"
# 54 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "From the seas to rivers, go out\n"
# 55 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "and land the big one, my friend.$"
# 56 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 57 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_OhThatsSoDisappointing::
# 58 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh…\n"
# 59 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "That's so disappointing…$"
# 60 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 61 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_HowAreTheFishBiting::
# 62 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\p"
# 63 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "How are the fish biting?$"
# 64 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 65 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_NoRoomForNiceGift::
# 66 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh, no!\p"
# 67 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I had a nice gift for you, but you\n"
# 68 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "have no room for it!$"

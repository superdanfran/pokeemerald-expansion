# 1 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_EventScript_Clerk::
# 6 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	lock
# 7 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	pokemart FourIsland_Mart_Items
# 11 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 12 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	release
# 13 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	end
# 14 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 15 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.align 2
# 16 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Items::
# 17 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 19 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 20 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 21 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 22 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 23 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 25 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 26 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	release
# 27 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	end
# 28 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 29 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_EventScript_Camper::
# 30 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	msgbox FourIsland_Mart_Text_IcefallCaveIsFrigid, MSGBOX_NPC
# 31 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	end
# 32 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 33 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Text_LoreleiGrewUpOnThisIsland::
# 34 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "We've had a great and powerful\n"
# 35 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "TRAINER grow up on this island.\p"
# 36 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "I bet even you'd know her.\n"
# 37 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "It's LORELEI of the ELITE FOUR!\p"
# 38 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "When LORELEI was just a tyke,\n"
# 39 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "I taught her about POKéMON.$"
# 40 "data/maps/FourIsland_Mart_Frlg/scripts.pory"

# 41 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Text_IcefallCaveIsFrigid::
# 42 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "The SEVII ISLANDS are in a warm\n"
# 43 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "region overall.\p"
# 44 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "But there is one exception you\n"
# 45 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "need to know about.\p"
# 46 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "The ICEFALL CAVE is frigid because\n"
# 47 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "of the POKéMON that live in it.$"

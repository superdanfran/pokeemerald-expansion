# 1 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_EventScript_Clerk::
# 6 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	lock
# 7 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	pokemart SevenIsland_Mart_Items
# 11 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 12 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	release
# 13 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 14 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 15 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.align 2
# 16 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Items::
# 17 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 20 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 21 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 22 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 23 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 24 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 25 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 26 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 27 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	release
# 28 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 29 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 30 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_EventScript_Lass::
# 31 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn, MSGBOX_NPC
# 32 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 33 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 34 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_EventScript_Hiker::
# 35 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_PreparationsCompleteForRuins, MSGBOX_NPC
# 36 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 37 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 38 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_EventScript_Fisher::
# 39 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_NeedToFishOnSevenIsland, MSGBOX_NPC
# 40 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	end
# 41 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 42 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn::
# 43 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "POKéMON have personalities of their\n"
# 44 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "own, just like people.\p"
# 45 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "My PIKACHU has a HASTY nature,\n"
# 46 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "so it grew to be a speedy POKéMON.$"
# 47 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 48 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Text_PreparationsCompleteForRuins::
# 49 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "Okay, preparations are complete\n"
# 50 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "for me to explore the RUINS.$"
# 51 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"

# 52 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Text_NeedToFishOnSevenIsland::
# 53 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "I need to fish on SEVEN ISLAND.\p"
# 54 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "That will complete my fishing tour\n"
# 55 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "of the SEVII ISLANDS.\p"
# 56 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "I'd better stock up on some\n"
# 57 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "POKé BALLS first, though.$"

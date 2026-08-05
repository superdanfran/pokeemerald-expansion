# 1 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_EventScript_Clerk::
# 6 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	lock
# 7 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	pokemart SixIsland_Mart_Items
# 11 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 12 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	release
# 13 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	end
# 14 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 15 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.align 2
# 16 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Items::
# 17 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 19 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 20 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 21 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 22 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 23 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 24 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_DREAM_MAIL
# 25 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 26 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	release
# 27 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	end
# 28 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 29 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_EventScript_Picnicker::
# 30 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	msgbox SixIsland_Mart_Text_ShouldBuyMailAndWriteLetter, MSGBOX_NPC
# 31 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	end
# 32 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 33 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Text_AgathaOldestEverEliteFourMember::
# 34 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "Play with POKéMON lots and live\n"
# 35 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "a long life!\p"
# 36 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "Take AGATHA, for example.\p"
# 37 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "She set a record for being the\n"
# 38 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "oldest-ever ELITE FOUR member.\p"
# 39 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "She spurs me to do bigger things.$"
# 40 "data/maps/SixIsland_Mart_Frlg/scripts.pory"

# 41 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Text_ShouldBuyMailAndWriteLetter::
# 42 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "I should buy some MAIL and write\n"
# 43 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "him a letter…$"

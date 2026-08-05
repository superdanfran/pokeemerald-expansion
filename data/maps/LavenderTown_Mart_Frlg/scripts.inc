# 1 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_EventScript_BaldingMan::
# 6 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_SearchingForStatRaiseItems, MSGBOX_NPC
# 7 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 8 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 9 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_EventScript_Rocker::
# 10 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_DidYouBuyRevives, MSGBOX_NPC
# 11 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 12 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 13 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_EventScript_Youngster::
# 14 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_TrainerDuosCanChallengeYou, MSGBOX_NPC
# 15 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 16 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 17 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_EventScript_Clerk::
# 18 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	lock
# 19 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	faceplayer
# 20 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	pokemart LavenderTown_Mart_Items
# 23 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 24 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	release
# 25 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 26 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 27 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.align 2
# 28 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Items::
# 29 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 30 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 31 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 32 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 33 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 34 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 35 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 36 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 37 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 38 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 39 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	release
# 40 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 41 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 42 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Text_SearchingForStatRaiseItems::
# 43 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "I'm searching for items that raise\n"
# 44 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "the stats of POKéMON.\p"
# 45 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "They're effective over the course\n"
# 46 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "of a single battle.\p"
# 47 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "X ATTACK, X DEFEND, X SPEED, \n"
# 48 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "and X SPECIAL are what I'm after.\p"
# 49 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "Do you know where I can get them?$"
# 50 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 51 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Text_DidYouBuyRevives::
# 52 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "Did you buy some REVIVES?\n"
# 53 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "They revive any fainted POKéMON!$"
# 54 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 55 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Text_TrainerDuosCanChallengeYou::
# 56 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "Sometimes, a TRAINER duo will\n"
# 57 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "challenge you with two POKéMON\l"
# 58 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "at the same time.\p"
# 59 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "If that happens, you have to send\n"
# 60 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "out two POKéMON to battle, too.$"
# 61 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 62 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Text_SoldNuggetFromMountainsFor5000::
# 63 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "この　あいだ　やまおくで\n"
# 64 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "きんのたまを　ひろい　ましてね！\p"
# 65 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "つかえない　しなもの　ですが\n"
# 66 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "うったら　なんと　5000¥でした$"

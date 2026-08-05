# 1 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_EventScript_Youngster::
# 6 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox CeruleanCity_Mart_Text_RepelWorksOnWeakMons, MSGBOX_NPC
# 7 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	end
# 8 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 9 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_EventScript_Woman::
# 10 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy, MSGBOX_NPC
# 11 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	end
# 12 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 13 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_EventScript_Clerk::
# 14 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	pokemart CeruleanCity_Mart_Items
# 19 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 23 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.align 2
# 24 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Items::
# 25 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 26 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 27 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POTION
# 28 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 29 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 30 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_AWAKENING
# 31 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 32 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 33 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REPEL
# 34 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 35 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	release
# 36 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	end
# 37 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 38 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Text_RepelWorksOnWeakMons::
# 39 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "REPEL not only keeps bugs away,\n"
# 40 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "it also works on weak POKéMON.\p"
# 41 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "Put your strongest POKéMON at the\n"
# 42 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "left of the POKéMON LIST.\p"
# 43 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "If your first POKéMON is strong,\n"
# 44 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "REPEL's effect is boosted.$"
# 45 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"

# 46 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy::
# 47 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "Do you know about RARE CANDY?\n"
# 48 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "They don't sell it in shops.\p"
# 49 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "I think it makes POKéMON grow\n"
# 50 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "very quickly all of a sudden.$"

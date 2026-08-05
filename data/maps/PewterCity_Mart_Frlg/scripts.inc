# 1 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_EventScript_Youngster::
# 6 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy, MSGBOX_NPC
# 7 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	end
# 8 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 9 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_EventScript_Boy::
# 10 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently, MSGBOX_NPC
# 11 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	end
# 12 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 13 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_EventScript_Clerk::
# 14 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	lock
# 15 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	pokemart PewterCity_Mart_Items
# 19 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 23 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.align 2
# 24 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Items::
# 25 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 26 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POTION
# 27 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 28 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 29 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_AWAKENING
# 30 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 32 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 34 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	release
# 35 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	end
# 36 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 37 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy::
# 38 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "A shady old guy sucked me into\n"
# 39 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "buying this weird fish POKéMON!\p"
# 40 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "It's totally weak and it cost ¥500!$"
# 41 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 42 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently::
# 43 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "Good things can happen if you raise\n"
# 44 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "POKéMON diligently.\p"
# 45 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "Even the weak ones can surprise\n"
# 46 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "you if you don't give up on them.$"

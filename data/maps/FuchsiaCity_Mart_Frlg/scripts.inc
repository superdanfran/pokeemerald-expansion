# 1 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_EventScript_CooltrainerF::
# 6 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox FuchsiaCity_Mart_Text_DidYouTryXSpeed, MSGBOX_NPC
# 7 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	end
# 8 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 9 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_EventScript_Gentleman::
# 10 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants, MSGBOX_NPC
# 11 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	end
# 12 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 13 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_EventScript_Clerk::
# 14 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	lock
# 15 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	pokemart FuchsiaCity_Mart_Items
# 19 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 23 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.align 2
# 24 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Items::
# 25 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 26 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 27 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 28 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 29 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 30 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 31 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 32 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	release
# 33 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 35 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants::
# 36 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "Don't they have any pennants\n"
# 37 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "promoting the SAFARI ZONE?\p"
# 38 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "How about some paper lanterns?\n"
# 39 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "Aren't there even any calendars?$"
# 40 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 41 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Text_DidYouTryXSpeed::
# 42 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "Did you try X SPEED?\n"
# 43 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "It speeds up a POKéMON in battle.$"

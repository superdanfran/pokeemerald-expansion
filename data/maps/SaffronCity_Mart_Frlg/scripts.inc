# 1 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_EventScript_Lass::
# 6 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox SaffronCity_Mart_Text_ReviveIsCostly, MSGBOX_NPC
# 7 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	end
# 8 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 9 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_EventScript_Youngster::
# 10 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper, MSGBOX_NPC
# 11 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	end
# 12 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 13 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_EventScript_Clerk::
# 14 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	lock
# 15 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	pokemart SaffronCity_Mart_Items
# 19 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 23 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.align 2
# 24 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Items::
# 25 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 26 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 27 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 28 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 29 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 30 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 31 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 32 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	release
# 33 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 35 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper::
# 36 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "MAX REPEL keeps weaker POKéMON\n"
# 37 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "from appearing.\p"
# 38 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "MAX REPEL stays effective longer\n"
# 39 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "than SUPER REPEL.$"
# 40 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 41 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Text_ReviveIsCostly::
# 42 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "REVIVE is costly, but it revives\n"
# 43 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "fainted POKéMON!$"

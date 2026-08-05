# 1 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_EventScript_Woman::
# 6 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox CinnabarIsland_Mart_Text_DontTheyHaveXAttack, MSGBOX_NPC
# 7 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	end
# 8 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 9 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_EventScript_Scientist::
# 10 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox CinnabarIsland_Mart_Text_ExtraItemsNeverHurt, MSGBOX_NPC
# 11 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	end
# 12 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 13 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_EventScript_Clerk::
# 14 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	lock
# 15 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	pokemart CinnabarIsland_Mart_Items
# 19 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 23 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.align 2
# 24 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Items::
# 25 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 26 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 27 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 28 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 29 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 30 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 31 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 32 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 33 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	release
# 34 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	end
# 35 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 36 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Text_DontTheyHaveXAttack::
# 37 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "Don't they have X ATTACK?\p"
# 38 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "I like it because it raises the\n"
# 39 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "ATTACK stat in battle.$"
# 40 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 41 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Text_ExtraItemsNeverHurt::
# 42 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "It never hurts to have extra items.\n"
# 43 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "You never know what might happen.$"

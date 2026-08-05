# 1 "data/maps/MauvilleCity_Mart/scripts.pory"

# 2 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_MapScripts::
# 3 "data/maps/MauvilleCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"

# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Clerk::
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 11 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"

# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart:
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_TERA_BLAST
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 23 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 29 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 30 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 31 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 35 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 36 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 38 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 39 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 40 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 41 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 42 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 43 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 44 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemartlistend
# 45 "data/maps/MauvilleCity_Mart/scripts.pory"

# 46 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_ExpertM::
# 47 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
# 48 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 49 "data/maps/MauvilleCity_Mart/scripts.pory"

# 50 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Man::
# 51 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
# 52 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 53 "data/maps/MauvilleCity_Mart/scripts.pory"

# 54 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
# 55 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "elevate the stats of POKéMON.\p"
# 57 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The ones I know you use in battle\n"
# 58 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "are X ATTACK and X DEFEND…\p"
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "I do believe that there are others\n"
# 60 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "like them.$"
# 61 "data/maps/MauvilleCity_Mart/scripts.pory"

# 62 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_DecisionsDetermineBattle:
# 63 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
# 64 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "instead…\p"
# 65 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The TRAINER's decisions determine how\n"
# 66 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "battles turn out, I think.$"

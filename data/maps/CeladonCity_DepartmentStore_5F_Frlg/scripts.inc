# 1 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_EventScript_Gentleman::
# 6 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers, MSGBOX_NPC
# 7 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	end
# 8 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 9 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_EventScript_Sailor::
# 10 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers, MSGBOX_NPC
# 11 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	end
# 12 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 13 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_Drugstore, MSGBOX_SIGN
# 15 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	end
# 16 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 17 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_EventScript_ClerkXItems::
# 18 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	lock
# 19 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	faceplayer
# 20 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_5F_XItems
# 23 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 24 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	release
# 25 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	end
# 26 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 27 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.align 2
# 28 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_XItems::
# 29 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_ATTACK
# 30 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_DEFEND
# 31 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_SPEED
# 32 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 33 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 34 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 35 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 36 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 37 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	release
# 38 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	end
# 39 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 40 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_EventScript_ClerkVitamins::
# 41 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	lock
# 42 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	faceplayer
# 43 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 44 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	waitmessage
# 45 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_5F_Vitamins
# 46 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 47 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	release
# 48 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	end
# 49 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 50 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.align 2
# 51 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_Vitamins::
# 52 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_HP_UP
# 53 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_PROTEIN
# 54 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_IRON
# 55 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_CALCIUM
# 56 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_ZINC
# 57 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_CARBOS
# 58 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 59 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	release
# 60 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	end
# 61 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 62 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers::
# 63 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "POKéMON stat enhancers can be\n"
# 64 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "bought only here.\p"
# 65 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "HP UP increases the base HP of a\n"
# 66 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 67 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "CALCIUM raises the base SP. ATK\n"
# 68 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "stat of one POKéMON.\p"
# 69 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "ZINC boosts the base SP. DEF stat\n"
# 70 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "of one POKéMON.\p"
# 71 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "CARBOS enhances the base SPEED\n"
# 72 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "stat.$"
# 73 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 74 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers::
# 75 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "I'm here for POKéMON stat\n"
# 76 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "enhancers.\p"
# 77 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "PROTEIN increases the base ATTACK\n"
# 78 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "power.\p"
# 79 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "IRON increases the base DEFENSE\n"
# 80 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "stat.$"
# 81 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"

# 82 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_Text_Drugstore::
# 83 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "5F: DRUGSTORE$"

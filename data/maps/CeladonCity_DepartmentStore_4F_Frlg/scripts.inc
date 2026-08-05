# 1 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_EventScript_Man::
# 6 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent, MSGBOX_NPC
# 7 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 8 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 9 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_EventScript_Youngster::
# 10 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll, MSGBOX_NPC
# 11 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 12 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 13 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_FloorSign, MSGBOX_SIGN
# 15 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 16 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 17 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_EventScript_Clerk::
# 18 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	lock
# 19 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	faceplayer
# 20 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_4F_Items
# 23 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 24 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	release
# 25 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 26 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 27 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.align 2
# 28 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Items::
# 29 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 30 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 31 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 32 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 33 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_WATER_STONE
# 34 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 35 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 36 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	release
# 37 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 38 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 39 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent::
# 40 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "I'm getting a present for my\n"
# 41 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "girlfriend.\p"
# 42 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "I guess a POKé DOLL will be it.\n"
# 43 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "It's the popular thing.$"
# 44 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 45 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll::
# 46 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "I heard something useful.\p"
# 47 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "If a wild POKéMON appears, you can\n"
# 48 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "distract it with a POKé DOLL.\p"
# 49 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "You can run away while the wild\n"
# 50 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "POKéMON is distracted.$"
# 51 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 52 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Text_FloorSign::
# 53 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "Express yourself with gifts!\n"
# 54 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "4F: WISE MAN GIFTS\p"
# 55 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "Evolution Special!\n"
# 56 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "Element STONES on sale now!$"

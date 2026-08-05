# 1 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_EventScript_UnusedNPC::
# 6 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel, MSGBOX_NPC
# 7 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	end
# 8 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 9 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_EventScript_Lass::
# 10 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings, MSGBOX_NPC
# 11 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	end
# 12 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 13 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_FloorSign, MSGBOX_SIGN
# 15 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	end
# 16 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 17 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_EventScript_ClerkItems::
# 18 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	lock
# 19 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	faceplayer
# 20 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_2F_Items
# 23 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 24 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	release
# 25 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	end
# 26 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 27 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.align 2
# 28 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_Items::
# 29 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 30 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 31 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 32 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 33 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 34 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_AWAKENING
# 35 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 36 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 37 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 38 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 39 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	release
# 40 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	end
# 41 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 42 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_EventScript_ClerkTMs::
# 43 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	lock
# 44 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 46 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	waitmessage
# 47 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_2F_TMs
# 48 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 49 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	release
# 50 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	end
# 51 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 52 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.align 2
# 53 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_TMs::
# 54 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM05
# 55 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM15
# 56 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM28
# 57 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM31
# 58 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM43
# 59 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM45
# 60 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 61 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	release
# 62 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	end
# 63 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 64 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel::
# 65 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "SUPER REPEL keeps weak POKéMON at\n"
# 66 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "bay…\p"
# 67 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "Hmm, it's a more powerful REPEL.$"
# 68 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 69 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings::
# 70 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "For long outings, you should buy\n"
# 71 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "REVIVE.$"
# 72 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 73 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_Text_FloorSign::
# 74 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "Top-Grade Items for TRAINERS!\p"
# 75 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "2F: TRAINER'S MARKET$"
# 76 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"

# 77 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_Text_LanceComesToBuyCapes::
# 78 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "We have a customer, LANCE, who\n"
# 79 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "occasionally comes.\p"
# 80 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "He always buys capes.\p"
# 81 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "I wonder… Does he have many\n"
# 82 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "identical capes at home?$"

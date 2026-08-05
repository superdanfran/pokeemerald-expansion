# 1 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman::
# 6 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 7 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 9 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy
# 10 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 11 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
# 12 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_TEA
# 13 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	giveitem ITEM_TEA
# 14 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 15 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
# 16 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 17 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 18 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 19 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea::
# 20 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
# 21 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 22 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 23 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 24 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy::
# 25 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 4
# 26 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
# 27 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
# 28 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 29 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 30 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 31 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Meowth::
# 32 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 33 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 34 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 35 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 36 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
# 37 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 38 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 39 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 40 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 41 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Clefairy::
# 42 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 43 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 44 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 45 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 46 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 47 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 48 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 49 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 50 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 51 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Nidoran::
# 52 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock
# 53 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	faceplayer
# 54 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 55 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 56 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 57 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
# 58 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	release
# 59 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 60 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 61 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_SuiteSign::
# 62 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
# 63 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	end
# 64 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 65 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_Meowth::
# 66 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "MEOWTH: Meow!$"
# 67 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 68 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead::
# 69 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "You shouldn't spend all your money\n"
# 70 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "on drinks.\p"
# 71 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Try this instead.$"
# 72 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 73 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea::
# 74 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Nothing beats thirst like some hot\n"
# 75 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "TEA.\p"
# 76 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "It really is the best.$"
# 77 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 78 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany::
# 79 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "My dear POKéMON keep me company.\n"
# 80 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "MEOWTH even brings money home!$"
# 81 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 82 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea::
# 83 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Oh, hello, dearie.\n"
# 84 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Did you enjoy my TEA?\p"
# 85 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "By the way, dear. Are you, by any\n"
# 86 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "chance, from PALLET TOWN?\p"
# 87 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "A girl from PALLET TOWN, DAISY,\n"
# 88 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "she enjoys TEA every day.\p"
# 89 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "She visits the CELADON DEPT. STORE\n"
# 90 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "to buy some TEA.$"
# 91 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 92 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_Clefairy::
# 93 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "CLEFAIRY: Pi pippippi!$"
# 94 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 95 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_Nidoran::
# 96 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "NIDORAN♀: Kya kyaoo!$"
# 97 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"

# 98 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
CeladonCity_Condominiums_1F_Text_ManagersSuite::
# 99 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "CELADON MANSION\n"
# 100 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Manager's Suite$"

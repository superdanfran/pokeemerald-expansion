# 1 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa::
# 6 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	lock
# 7 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 9 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 10 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto_if_set FLAG_DID_CH_DING_TRADE, VermilionCity_House2_EventScript_AlreadyTraded
# 11 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon, MSGBOX_YESNO
# 12 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_House2_EventScript_DeclineTrade
# 13 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 14 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, VermilionCity_House2_EventScript_DeclineTrade
# 15 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 16 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, VermilionCity_House2_EventScript_NotRequestedMon
# 17 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 18 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_ThankYou
# 19 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	setflag FLAG_DID_CH_DING_TRADE
# 20 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	release
# 21 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	end
# 22 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 23 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_DeclineTrade::
# 24 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_ThatsTooBad
# 25 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	release
# 26 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	end
# 27 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 28 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_NotRequestedMon::
# 29 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 30 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_ThisIsNoMon
# 31 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	release
# 32 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	end
# 33 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 34 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_AlreadyTraded::
# 35 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_HowIsMyOldMon
# 36 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	release
# 37 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	end
# 38 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 39 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon::
# 40 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "Hi!\n"
# 41 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "Do you have a {STR_VAR_1}?\p"
# 42 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "Want to trade it for my\n"
# 43 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "{STR_VAR_2}?$"
# 44 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 45 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_ThatsTooBad::
# 46 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "That's too bad.$"
# 47 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 48 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_ThisIsNoMon::
# 49 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "…This is no {STR_VAR_1}.\p"
# 50 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "If you get one, please trade it\n"
# 51 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "to me!$"
# 52 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 53 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_ThankYou::
# 54 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "Thank you!$"
# 55 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 56 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_HowIsMyOldMon::
# 57 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "How is my old {STR_VAR_2}?\p"
# 58 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "My {STR_VAR_1} is doing great!$"

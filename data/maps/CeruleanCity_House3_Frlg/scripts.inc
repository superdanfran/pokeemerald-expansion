# 1 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_OldWoman::
# 6 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox CeruleanCity_House3_Text_PleaseTradeWithMyHusband, MSGBOX_NPC
# 7 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 8 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 9 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae::
# 10 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	lock
# 11 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	faceplayer
# 12 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_JYNX
# 13 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 14 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_set FLAG_DID_ZYNX_TRADE, CeruleanCity_House3_EventScript_AlreadyTraded
# 15 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 16 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House3_EventScript_DeclineTrade
# 17 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 18 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CeruleanCity_House3_EventScript_DeclineTrade
# 19 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 20 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CeruleanCity_House3_EventScript_NotRequestedMon
# 21 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 22 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_Thanks
# 23 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	setflag FLAG_DID_ZYNX_TRADE
# 24 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
# 25 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 26 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 27 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_DeclineTrade::
# 28 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 29 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
# 30 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 31 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 32 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_NotRequestedMon::
# 33 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 34 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 35 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
# 36 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 37 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 38 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_AlreadyTraded::
# 39 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 40 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
# 41 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 42 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 43 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_Text_PleaseTradeWithMyHusband::
# 44 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "My husband likes trading POKéMON.\p"
# 45 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "You're collecting POKéMON for your\n"
# 46 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "POKéDEX, aren't you?\p"
# 47 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "Would you please trade with him?$"

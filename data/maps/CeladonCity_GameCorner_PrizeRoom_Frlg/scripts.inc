# 1 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_BaldingMan::
# 6 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon, MSGBOX_NPC
# 7 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 8 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 9 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_OldMan::
# 10 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday, MSGBOX_NPC
# 11 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 12 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 13 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons::
# 14 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 17 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 18 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 19 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon
# 20 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 21 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 22 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon::
# 23 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 24 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 25 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_GAME_CORNER_POKEMON_PRIZES, FALSE
# 26 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_Abra
# 28 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy
# 29 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir
# 30 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini
# 31 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon
# 32 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 33 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 34 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 35 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 36 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange::
# 37 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 38 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
# 39 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 40 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 41 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Abra::
# 42 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 43 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 44 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 180
# 45 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 46 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 47 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 48 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 120
# 49 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 50 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 51 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 52 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 53 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 54 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy::
# 55 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 56 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 57 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 500
# 58 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 59 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 60 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 61 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 750
# 62 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 63 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 64 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 65 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 66 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 67 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir::
# 68 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 69 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 70 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2800
# 71 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 72 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 73 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PINSIR
# 74 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2500
# 75 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 76 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 77 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 78 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 79 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 80 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini::
# 81 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 82 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SCYTHER
# 83 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 5500
# 84 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 85 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 86 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 87 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4600
# 88 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 89 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 90 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 91 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 92 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 93 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon::
# 94 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 95 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 96 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 9999
# 97 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 98 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 99 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 100 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 6500
# 101 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 102 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 103 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 104 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 105 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 106 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
# 107 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 108 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 109 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 110 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkcoins VAR_RESULT
# 111 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_lt VAR_RESULT, VAR_TEMP_2, CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
# 112 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 113 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 114 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_ABRA,     CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra
# 115 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_CLEFAIRY, CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy
# 116 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_DRATINI,  CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini
# 117 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_SCYTHER,  CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther
# 118 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_PORYGON,  CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon
# 119 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_PINSIR,   CeladonCity_GameCorner_PrizeRoom_EventScript_GivePinsir
# 120 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 121 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 122 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra::
# 123 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 124 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 9
# 125 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 126 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 127 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 7
# 128 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 129 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 130 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 131 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 132 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 133 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy::
# 134 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 135 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 8
# 136 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 137 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 138 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 12
# 139 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 140 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 141 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 142 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 143 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 144 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini::
# 145 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 146 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 147 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 148 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 149 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 24
# 150 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 151 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 152 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 153 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 154 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 155 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther::
# 156 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 25
# 157 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 158 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 159 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 160 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon::
# 161 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 162 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 26
# 163 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 164 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 165 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 166 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 167 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 168 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 169 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 170 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 171 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GivePinsir::
# 172 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 173 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 174 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 175 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 176 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon::
# 177 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty
# 178 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC
# 179 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull
# 180 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 181 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 182 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull::
# 183 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 184 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NoMoreRoomForPokemon
# 185 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 186 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
# 187 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 188 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 189 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon::
# 190 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	getpartysize
# 191 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	subvar VAR_RESULT, 1
# 192 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 193 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 194 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 195 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 196 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 197 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase::
# 198 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 199 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired
# 200 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
# 201 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 202 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 203 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins::
# 204 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins
# 205 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 206 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 207 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 208 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty::
# 209 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 210 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 211 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 212 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 213 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message gText_PlayerObtainedTheMon
# 214 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 215 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitfanfare
# 216 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 217 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon
# 218 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 219 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 220 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 221 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC::
# 222 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 223 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 224 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 225 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 226 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message gText_PlayerObtainedTheMon
# 227 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 228 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitfanfare
# 229 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 230 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
# 231 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 232 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
# 233 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 234 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 235 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC::
# 236 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 237 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 238 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 239 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 240 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs::
# 241 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 242 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 243 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 244 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 245 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 246 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM
# 247 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 248 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 249 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM::
# 250 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 251 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 252 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_GAME_CORNER_TMPRIZES, FALSE
# 253 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 254 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_TM13
# 255 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_TM23
# 256 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_TM24
# 257 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_TM30
# 258 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_TM35
# 259 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 260 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 261 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 262 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 263 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM13::
# 264 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM13
# 265 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 266 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BEAM
# 267 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 268 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 269 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 270 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM23::
# 271 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM23
# 272 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 3500
# 273 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_IRON_TAIL
# 274 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 275 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 276 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 277 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM24::
# 278 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM24
# 279 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 280 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_THUNDERBOLT
# 281 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 282 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 283 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 284 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM30::
# 285 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM30
# 286 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4500
# 287 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_SHADOW_BALL
# 288 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 289 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 290 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 291 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM35::
# 292 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM35
# 293 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 294 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FLAMETHROWER
# 295 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 296 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 297 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 298 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM::
# 299 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM, MSGBOX_YESNO
# 300 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 301 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
# 302 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 303 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 304 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem::
# 305 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 306 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 307 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 308 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
# 309 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 310 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 311 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize::
# 312 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 313 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkcoins VAR_RESULT
# 314 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_lt VAR_RESULT, VAR_TEMP_2, CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
# 315 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkitemspace VAR_TEMP_1
# 316 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull
# 317 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 318 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 319 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	giveitem VAR_TEMP_1
# 320 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 321 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 322 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 323 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull::
# 324 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 325 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_TooBadBagIsFull
# 326 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 327 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
# 328 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 329 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 330 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems::
# 331 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 332 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 333 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 334 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 335 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 336 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem
# 337 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 338 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 339 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem::
# 340 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 341 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 342 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 10, 0, MULTI_GAME_CORNER_BATTLE_ITEM_PRIZES, FALSE
# 343 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 344 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall
# 345 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed
# 346 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal
# 347 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater
# 348 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute
# 349 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 350 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 351 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 352 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 353 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall::
# 354 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SMOKE_BALL
# 355 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 800
# 356 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 357 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 358 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 359 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed::
# 360 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MIRACLE_SEED
# 361 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 362 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 363 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 364 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 365 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal::
# 366 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_CHARCOAL
# 367 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 368 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 369 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 370 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 371 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater::
# 372 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MYSTIC_WATER
# 373 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 374 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 375 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 376 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 377 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute::
# 378 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_YELLOW_FLUTE
# 379 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1600
# 380 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 381 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 382 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 383 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon::
# 384 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "I sure do fancy that PORYGON!\n"
# 385 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "But, it's hard to win at slots!$"
# 386 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 387 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday::
# 388 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Gahaha! I raked it in today!\n"
# 389 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "If only every day were like this…$"
# 390 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 391 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired::
# 392 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "A COIN CASE is required…$"
# 393 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 394 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes::
# 395 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "We exchange your COINS for prizes.$"
# 396 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 397 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize::
# 398 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Which prize would you like?$"
# 399 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 400 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_HereYouGo::
# 401 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "はい どうぞ$"
# 402 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 403 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize::
# 404 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "So, you want the {STR_VAR_1}?$"
# 405 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 406 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM::
# 407 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Okay, a TM of {STR_VAR_2}\n"
# 408 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "is what you want?$"
# 409 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 410 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins::
# 411 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Sorry, you'll need more COINS\n"
# 412 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "than that.$"
# 413 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 414 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_OopsNotEnoughRoom::
# 415 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "おきゃくさん もう もてないよ$"
# 416 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 417 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_OhFineThen::
# 418 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "あっ そう$"

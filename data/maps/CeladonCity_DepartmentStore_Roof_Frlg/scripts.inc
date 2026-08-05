# 1 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl::
# 6 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	lock
# 7 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks
# 9 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, CeladonCity_DepartmentStore_Roof_EventScript_IWantDrink
# 10 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink
# 11 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 12 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 13 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks::
# 14 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 15 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitem ITEM_FRESH_WATER
# 16 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasFreshWater
# 17 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitem ITEM_SODA_POP
# 18 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasSodaPop
# 19 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitem ITEM_LEMONADE
# 20 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasLemonade
# 21 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 22 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 23 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasFreshWater::
# 24 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 1
# 25 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 26 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 27 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasSodaPop::
# 28 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 2
# 29 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 30 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 31 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasLemonade::
# 32 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 4
# 33 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 34 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 35 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink::
# 36 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyGiveHerDrink, MSGBOX_YESNO
# 37 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 38 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 39 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_GiveWhichDrink
# 40 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 41 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 42 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 43 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater
# 44 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop
# 45 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop
# 46 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 4, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade
# 47 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 5, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade
# 48 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 6, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade
# 49 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 7, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks
# 50 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 51 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 52 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater::
# 53 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_FRESH_WATER, FALSE
# 54 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 56 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 57 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 58 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 59 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 60 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop::
# 61 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_SODA_POP, FALSE
# 62 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 64 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 65 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 66 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 67 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 68 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop::
# 69 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_FRESH_WATER_SODA_POP, FALSE
# 70 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 72 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 73 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 74 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 75 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 76 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 77 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade::
# 78 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_LEMONADE, FALSE
# 79 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 81 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 82 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 83 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 84 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 85 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade::
# 86 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_FRESH_WATER_LEMONADE, FALSE
# 87 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 89 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 90 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 91 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 92 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 93 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 94 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade::
# 95 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_SODA_POP_LEMONADE, FALSE
# 96 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 98 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 99 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 100 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 101 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 102 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 103 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks::
# 104 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_FRESH_WATER_SODA_POP_LEMONADE, FALSE
# 105 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 107 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 108 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 109 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 110 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 111 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 112 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 113 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater::
# 114 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_FRESH_WATER
# 115 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8009, ITEM_TM16
# 116 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM16_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 117 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayFreshWaterHaveThis
# 118 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 119 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 120 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 121 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop::
# 122 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_SODA_POP
# 123 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8009, ITEM_TM20
# 124 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM20_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 125 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YaySodaPopHaveThis
# 126 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 127 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 128 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 129 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade::
# 130 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_LEMONADE
# 131 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8009, ITEM_TM33
# 132 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM33_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 133 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayLemonadeHaveThis
# 134 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 135 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 136 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 137 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink::
# 138 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 139 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8009
# 140 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removeitem VAR_0x8008
# 141 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitemspace VAR_0x8009
# 142 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForReward
# 143 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	additem VAR_0x8009
# 144 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 145 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 146 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message Text_ReceivedItemFromLittleGirl
# 147 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 148 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitfanfare
# 149 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	putitemaway VAR_0x8009
# 150 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 151 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_FRESH_WATER, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM16
# 152 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_SODA_POP, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM20
# 153 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_LEMONADE, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM33
# 154 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 155 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 156 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 157 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM16::
# 158 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM16_FROM_THIRSTY_GIRL
# 159 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM16
# 160 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 161 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 162 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM20::
# 163 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM20_FROM_THIRSTY_GIRL
# 164 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM20
# 165 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 166 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 167 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM33::
# 168 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM33_FROM_THIRSTY_GIRL
# 169 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM33
# 170 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 171 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 172 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForReward::
# 173 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DontHaveSpaceForThis
# 174 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 175 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 176 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 177 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink::
# 178 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 179 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 180 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 181 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_IWantDrink::
# 182 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyIWantDrink
# 183 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 184 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 185 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 186 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll::
# 187 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImNotThirstyAfterAll
# 188 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 189 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 190 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 191 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CooltrainerM::
# 192 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_MySisterIsImmature, MSGBOX_NPC
# 193 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 194 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 195 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_FloorSign::
# 196 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_FloorSign, MSGBOX_SIGN
# 197 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 198 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 199 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_VendingMachine::
# 200 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	lockall
# 201 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 202 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 203 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	showmoneybox 0, 0
# 204 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
# 205 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 206 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 207 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink::
# 208 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 12, 0, MULTI_CELADON_VENDING_MACHINE, FALSE
# 209 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 210 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 211 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_BuyFreshWater
# 212 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_BuySodaPop
# 213 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_BuyLemonade
# 214 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotThirsty
# 215 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 216 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 217 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 218 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuyFreshWater::
# 219 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 220 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkmoney 200
# 221 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 222 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 223 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 224 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuySodaPop::
# 225 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 226 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkmoney 300
# 227 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 228 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 229 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 230 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuyLemonade::
# 231 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 232 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkmoney 350
# 233 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 234 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 235 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 236 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyFreshWater::
# 237 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removemoney 200
# 238 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 239 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 240 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneySodaPop::
# 241 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removemoney 300
# 242 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 243 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 244 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyLemonade::
# 245 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removemoney 350
# 246 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 247 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 248 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink::
# 249 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NotEnoughMoney
# 250 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitemspace VAR_TEMP_0
# 251 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForDrink
# 252 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyFreshWater
# 253 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneySodaPop
# 254 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyLemonade
# 255 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	updatemoneybox
# 256 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 257 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	playse SE_VEND
# 258 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DrinkCanPoppedOut
# 259 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	additem VAR_TEMP_0
# 260 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseNewDrink
# 261 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 262 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 263 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseNewDrink::
# 264 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 265 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 266 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
# 267 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 268 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 269 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NotEnoughMoney::
# 270 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotEnoughMoney
# 271 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 272 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 273 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 274 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForDrink::
# 275 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NoMoreRoomForStuff
# 276 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 277 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 278 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 279 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine::
# 280 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	hidemoneybox
# 281 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	releaseall
# 282 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 283 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 284 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ImThirstyGiveHerDrink::
# 285 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I'm thirsty!\n"
# 286 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I want something to drink!\p"
# 287 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "{FONT_NORMAL}Give her a drink?$"
# 288 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 289 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_GiveWhichDrink::
# 290 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Give her which drink?$"
# 291 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 292 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_YayFreshWaterHaveThis::
# 293 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
# 294 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "FRESH WATER!\p"
# 295 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Thank you!\n"
# 296 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You can have this from me!$"
# 297 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 298 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
Text_ReceivedItemFromLittleGirl::
# 299 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "{PLAYER} received a {STR_VAR_2}\n"
# 300 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "from the little girl.$"
# 301 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 302 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ExplainTM16::
# 303 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM16 contains LIGHT SCREEN.\p"
# 304 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "It's a move that weakens the power\n"
# 305 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "of special attacks by your foe.$"
# 306 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 307 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_YaySodaPopHaveThis::
# 308 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
# 309 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "SODA POP!\p"
# 310 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Thank you!\n"
# 311 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You can have this from me!$"
# 312 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 313 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ExplainTM20::
# 314 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM20 contains SAFEGUARD.\p"
# 315 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "It's a move that prevents status\n"
# 316 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "problems among your POKéMON.$"
# 317 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 318 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_YayLemonadeHaveThis::
# 319 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
# 320 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "LEMONADE!\p"
# 321 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Thank you!\n"
# 322 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You can have this from me!$"
# 323 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 324 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ExplainTM33::
# 325 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM33 contains REFLECT.\p"
# 326 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "It's a move that weakens the power\n"
# 327 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "of physical attacks by your foe.$"
# 328 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 329 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_DontHaveSpaceForThis::
# 330 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You don't have space for this!$"
# 331 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 332 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ImNotThirstyAfterAll::
# 333 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "No, thank you!\n"
# 334 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I'm not thirsty after all!$"
# 335 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 336 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_MySisterIsImmature::
# 337 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "My sister is a TRAINER, believe it\n"
# 338 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "or not.\p"
# 339 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "But, she's so immature, she drives\n"
# 340 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "me nuts!$"
# 341 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 342 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ImThirstyIWantDrink::
# 343 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I'm thirsty!\n"
# 344 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I want something to drink!$"
# 345 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 346 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_FloorSign::
# 347 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "ROOFTOP SQUARE:\n"
# 348 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "VENDING MACHINES$"
# 349 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 350 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave::
# 351 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "A vending machine!\n"
# 352 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "What does it have?$"
# 353 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 354 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_NotEnoughMoney::
# 355 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Oops, not enough money!$"
# 356 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 357 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_DrinkCanPoppedOut::
# 358 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "A can of {STR_VAR_1} popped out!$"
# 359 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 360 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_NoMoreRoomForStuff::
# 361 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "There's no more room for stuff!$"
# 362 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 363 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_NotThirsty::
# 364 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Not thirsty!$"

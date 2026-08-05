# 1 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan::
# 6 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	lock
# 7 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POWDER_JAR, CeruleanCity_House5_EventScript_AskToExchangePowder
# 9 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AnyInterestInBerries, MSGBOX_YESNO
# 10 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House5_EventScript_NoInterestInBerries
# 11 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GOT_BERRY_POUCH, CeruleanCity_House5_EventScript_NoBerries
# 12 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveJustTheThing
# 13 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setflag FLAG_GOT_POWDER_JAR
# 14 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 15 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 16 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner
# 17 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 18 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 19 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 20 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_NoBerries::
# 21 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_WhyMustYouLieNoBerries
# 22 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 23 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 24 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 25 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_NoInterestInBerries::
# 26 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings
# 27 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 28 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 29 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 30 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_AskToExchangePowder::
# 31 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 32 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveYouBroughtBerryPowder
# 33 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
# 34 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 35 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 36 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem::
# 37 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	message CeruleanCity_House5_Text_ExchangeWithWhat
# 38 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	waitmessage
# 39 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 40 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 41 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 0, CeruleanCity_House5_EventScript_EnergyPowder
# 43 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 1, CeruleanCity_House5_EventScript_EnergyRoot
# 44 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 2, CeruleanCity_House5_EventScript_HealPowder
# 45 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 3, CeruleanCity_House5_EventScript_RevivalHerb
# 46 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 4, CeruleanCity_House5_EventScript_Protein
# 47 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 5, CeruleanCity_House5_EventScript_Iron
# 48 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 6, CeruleanCity_House5_EventScript_Carbos
# 49 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 7, CeruleanCity_House5_EventScript_Calcium
# 50 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 8, CeruleanCity_House5_EventScript_Zinc
# 51 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 9, CeruleanCity_House5_EventScript_HPUp
# 52 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 10, CeruleanCity_House5_EventScript_PPUp
# 53 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 11, CeruleanCity_House5_EventScript_ExitMenu
# 54 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 127, CeruleanCity_House5_EventScript_ExitMenu
# 55 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 56 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 57 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_EnergyPowder::
# 58 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 59 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 60 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 50
# 61 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 62 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 63 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 64 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_EnergyRoot::
# 65 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 66 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 67 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 80
# 68 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 69 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 70 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 71 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_HealPowder::
# 72 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 73 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 74 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 50
# 75 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 76 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 77 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 78 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_RevivalHerb::
# 79 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 80 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 81 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 300
# 82 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 83 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 84 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 85 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Protein::
# 86 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 87 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 88 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 89 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 90 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 91 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 92 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Iron::
# 93 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 94 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 95 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 96 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 97 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 98 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 99 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Carbos::
# 100 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 101 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 102 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 103 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 104 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 105 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 106 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Calcium::
# 107 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 108 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 109 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 110 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 111 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 112 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 113 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Zinc::
# 114 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 115 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 116 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 117 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 118 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 119 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 120 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_HPUp::
# 121 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 122 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 123 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 124 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 125 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 126 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 127 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_PPUp::
# 128 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 129 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 130 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 3000
# 131 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 132 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 133 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 134 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExitMenu::
# 135 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder
# 136 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 137 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 138 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 139 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 140 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem::
# 141 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem, MSGBOX_YESNO
# 142 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House5_EventScript_ChooseExchangeItem
# 143 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 144 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 145 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House5_EventScript_NotEnoughBerryPowder
# 146 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	giveitem VAR_0x8008
# 147 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House5_EventScript_BagIsFull
# 148 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 149 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special TakeBerryPowder
# 150 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 151 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_TradeMoreBerryPowder, MSGBOX_YESNO
# 152 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CeruleanCity_House5_EventScript_ChooseExchangeItem
# 153 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HopeToSeeYouAgain
# 154 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 155 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 156 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 157 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 158 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BagIsFull::
# 159 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox gText_TheBagIsFull
# 160 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 161 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 162 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 163 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 164 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_NotEnoughBerryPowder::
# 165 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DontHaveEnoughBerryPowder
# 166 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
# 167 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 168 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 169 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryCrushRankings::
# 170 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	lockall
# 171 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special ShowBerryCrushRankings
# 172 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	releaseall
# 173 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 174 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 175 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_AnyInterestInBerries::
# 176 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I concoct a variety of medicine\n"
# 177 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "from BERRY POWDER.\p"
# 178 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Using good BERRY POWDER, I can\n"
# 179 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "make any kind of medicine.\p"
# 180 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Now tell me, have you any interest\n"
# 181 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "in BERRIES?$"
# 182 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 183 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_HaveJustTheThing::
# 184 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Ah, good! For you, then, I have\n"
# 185 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "just the thing.$"
# 186 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 187 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner::
# 188 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "There's something new on the second\n"
# 189 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "floor of POKéMON CENTERS, at the\l"
# 190 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "DIRECT CORNER.\p"
# 191 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "They installed a Wireless Adapter\n"
# 192 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "machine for crushing BERRIES.\p"
# 193 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "This is where you come in.\p"
# 194 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I have a favor to ask, one that\n"
# 195 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I can entrust only to you.\p"
# 196 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 197 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "me using that machine?\p"
# 198 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Don't forget, the machine is at the\n"
# 199 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "DIRECT CORNER of POKéMON CENTERS.\p"
# 200 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I'll concoct medicine for you if\n"
# 201 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "you bring me some BERRY POWDER.\p"
# 202 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Don't forget, crush BERRIES into\n"
# 203 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "BERRY POWDER and bring it to me.$"
# 204 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 205 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_WhyMustYouLieNoBerries::
# 206 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Why must you lie to me?\p"
# 207 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "How many BERRIES do you have?\n"
# 208 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Not a one!$"
# 209 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 210 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings::
# 211 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "You have no interest in BERRIES?\p"
# 212 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Young one, it's important to take an\n"
# 213 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "interest in all sorts of things.$"
# 214 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 215 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_HaveYouBroughtBerryPowder::
# 216 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Er-hem! Have you brought me some\n"
# 217 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "BERRY POWDER?$"
# 218 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 219 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_Text_ExchangeWithWhat::
# 220 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "With what would you like to \n"
# 221 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "exchange it?$"
# 222 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 223 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem::
# 224 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Fine, you'll exchange your BERRY\n"
# 225 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "POWDER for one {STR_VAR_1}?$"
# 226 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 227 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_DontHaveEnoughBerryPowder::
# 228 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Hm? You don't have enough\n"
# 229 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "BERRY POWDER.$"
# 230 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 231 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_TradeMoreBerryPowder::
# 232 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "This is fine BERRY POWDER indeed.\n"
# 233 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "It will make excellent medicine.\p"
# 234 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Would you like to trade more BERRY\n"
# 235 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "POWDER for something else?$"
# 236 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 237 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_HopeToSeeYouAgain::
# 238 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "That's fine, then.\n"
# 239 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I'll hope to see you back again.$"
# 240 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 241 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder::
# 242 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Come see me if you'd like to trade\n"
# 243 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "your BERRY POWDER.$"

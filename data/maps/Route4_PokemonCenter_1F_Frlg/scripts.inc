# 1 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
.equ MAGIKARP_PRICE, 500
# 3 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 4 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Frlg_MapScripts::
# 5 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_1F_OnTransition
# 6 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_OnTransition::
# 10 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 11 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE4
# 12 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 13 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 14 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Boy::
# 15 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou, MSGBOX_NPC
# 16 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 20 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean
# 21 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 22 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 23 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 24 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman::
# 25 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 26 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 27 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BOUGHT_MAGIKARP, Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp
# 28 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	showmoneybox 0, 0
# 29 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	checkplayergender
# 30 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale
# 31 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale
# 32 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale::
# 35 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500, MSGBOX_YESNO
# 36 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
# 37 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale::
# 40 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500, MSGBOX_YESNO
# 41 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
# 42 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 43 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 44 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp::
# 45 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_DeclineMagikarp
# 46 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	checkmoney MAGIKARP_PRICE
# 47 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route4_PokemonCenter_1F_EventScript_NotEnoughMoney
# 48 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 49 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MAGIKARP
# 50 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 51 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty
# 52 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC
# 53 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp
# 54 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 55 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 56 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty::
# 57 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 58 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 59 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 60 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 61 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 63 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	special ChangePokemonNickname
# 64 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 65 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 66 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 67 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC::
# 68 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 69 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 70 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox
# 71 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 73 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	special ChangePokemonNickname
# 74 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 75 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 76 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TransferMagikarp
# 77 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 78 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 79 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox::
# 80 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 81 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 82 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 83 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 84 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TransferMagikarp::
# 85 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 86 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 87 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 88 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 89 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp::
# 90 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 91 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 92 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 93 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 94 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BoughtMagikarp::
# 95 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_BOUGHT_MAGIKARP
# 96 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 97 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 98 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 99 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_PayForMagikarp::
# 100 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	removemoney MAGIKARP_PRICE
# 101 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	updatemoneybox
# 102 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 103 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	message Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp
# 104 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 105 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 106 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 107 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 108 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 109 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_DeclineMagikarp::
# 110 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou
# 111 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 112 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 113 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 114 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 115 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_NotEnoughMoney::
# 116 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney
# 117 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 118 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 119 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 120 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 121 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp::
# 122 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_IDontGiveRefunds
# 123 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 124 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 125 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 126 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp::
# 127 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 128 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon
# 129 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 130 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 131 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 132 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 133 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Nurse::
# 134 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 135 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 136 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 137 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 138 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 139 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 140 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Youngster::
# 141 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC, MSGBOX_NPC
# 142 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 143 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 144 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Newspaper::
# 145 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 146 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ItsANewspaper
# 147 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 148 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 149 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 150 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou::
# 151 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Okay, set six POKé BALLS in my\n"
# 152 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "belt…\p"
# 153 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Yeah, that'll do it. At most, you\n"
# 154 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "can have six POKéMON with you.$"
# 155 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 156 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean::
# 157 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET attacks CERULEAN\n"
# 158 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "citizens…\p"
# 159 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Not a day goes by without TEAM\n"
# 160 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "ROCKET being in the news.$"
# 161 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 162 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500::
# 163 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Hello there, laddie!\n"
# 164 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have I got a deal just for you!\p"
# 165 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'll let you have a secret POKéMON\n"
# 166 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "- a MAGIKARP - for just ¥500!\p"
# 167 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, you'll buy it, am I right?$"
# 168 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 169 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500::
# 170 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Hello there, sweetie pie!\n"
# 171 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have I got a deal just for you!\p"
# 172 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'll let you have a secret POKéMON\n"
# 173 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "- a MAGIKARP - for just ¥500!\p"
# 174 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, you'll buy it, am I right?$"
# 175 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 176 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp::
# 177 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} paid an outrageous ¥500\n"
# 178 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "and bought the MAGIKARP…$"
# 179 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 180 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou::
# 181 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "No? You say no? I'm only doing this\n"
# 182 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "as a favor to you!$"
# 183 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 184 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon::
# 185 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's no more room for any more\n"
# 186 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON, it looks like.$"
# 187 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 188 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney::
# 189 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You'll need more money than that!$"
# 190 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 191 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_IDontGiveRefunds::
# 192 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Well, I don't give refunds.\n"
# 193 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You knew what you were getting!$"
# 194 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 195 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC::
# 196 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Sometimes, you'll have too many\n"
# 197 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON with you to add any more.\p"
# 198 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "In that case, you should just\n"
# 199 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "store some using any PC.$"
# 200 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 201 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_ItsANewspaper::
# 202 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's a newspaper.$"

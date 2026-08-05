# 1 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CeladonCity_GameCorner_OnLoad
# 4 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_OnLoad::
# 7 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_HideRocketHideout
# 8 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 9 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 10 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_HideRocketHideout::
# 11 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 12 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 13 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 14 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 15 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 16 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	return
# 17 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 18 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_InfoClerk::
# 19 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor, MSGBOX_NPC
# 20 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 21 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 22 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_CoinsClerk::
# 23 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 24 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	showmoneybox 0, 0
# 26 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	showcoinsbox 1, 6
# 27 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	message CeladonCity_GameCorner_Text_WelcomeBuySomeCoins
# 28 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmessage
# 29 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	multichoice 13, 0, MULTI_GAME_CORNER_COIN_PURCHASE_COUNTER, FALSE
# 30 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 31 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_EventScript_BuyCoins
# 33 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_EventScript_BuyCoins
# 34 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
# 35 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
# 36 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 37 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 38 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins::
# 39 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_ClerkNoCoinCase
# 40 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_0x8009, 0, CeladonCity_GameCorner_EventScript_Buy50Coins
# 41 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_0x8009, 1, CeladonCity_GameCorner_EventScript_Buy500Coins
# 42 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 43 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 44 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy500Coins::
# 45 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 46 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 500, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 47 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkmoney 10000
# 48 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
# 49 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 500
# 50 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removemoney 10000
# 51 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
# 52 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 53 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 54 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy50Coins::
# 55 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 56 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 50, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 57 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkmoney 1000
# 58 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
# 59 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 50
# 60 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removemoney 1000
# 61 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
# 62 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 63 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 64 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BoughtCoins::
# 65 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	updatemoneybox
# 66 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 67 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 68 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreYourCoins
# 69 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 70 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 71 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 72 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkEnd::
# 73 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	hidemoneybox
# 74 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	hidecoinsbox 0, 5
# 75 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
# 76 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 77 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 78 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkDeclineBuy::
# 79 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ComePlaySometime
# 80 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 81 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 82 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 83 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNoCoinCase::
# 84 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SorryDontHaveCoinCase
# 85 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 86 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 87 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 88 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins::
# 89 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsFull
# 90 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 91 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 92 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 93 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney::
# 94 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CantAffordCoins
# 95 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 96 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 97 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 98 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BaldingMan::
# 99 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 100 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 101 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace
# 102 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 103 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 104 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 105 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_FaceSlotMachine::
# 106 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	closemessage
# 107 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 108 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
# 109 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
# 110 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 111 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 112 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Woman1::
# 113 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 114 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 115 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds
# 116 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 117 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 118 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 119 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Fisher::
# 120 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 121 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 122 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_10_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins
# 123 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DoYouWantToPlay
# 124 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 125 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 126 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 10, CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins
# 127 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 10
# 128 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 129 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received10CoinsFromMan
# 130 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 131 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 132 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_10_COINS_FROM_GAMBLER
# 133 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 134 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 135 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 136 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins::
# 137 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontNeedMyCoins
# 138 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 139 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 140 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 141 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GamblerNoCoinCase::
# 142 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 143 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontHaveCoinCase
# 144 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 145 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 146 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 147 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins::
# 148 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinsComeAndGo
# 149 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 150 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 151 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 152 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GymGuy::
# 153 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 154 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 155 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_GameCorner_EventScript_GymGuyPostVictory
# 156 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GymGuyAdvice
# 157 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 158 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 159 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 160 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GymGuyPostVictory::
# 161 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RareMonsForCoins
# 162 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 163 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 164 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 165 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Woman2::
# 166 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 167 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 168 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck
# 169 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 170 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 171 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 172 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_OldMan::
# 173 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 174 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 175 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SoEasyToGetHooked
# 176 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 177 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 178 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 179 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Scientist::
# 180 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 181 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 182 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins
# 183 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WantSomeCoins
# 184 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 185 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 186 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 20, CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins
# 187 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 20
# 188 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 189 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy
# 190 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 191 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 192 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER
# 193 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 194 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 195 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 196 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins::
# 197 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouHaveLotsOfCoins
# 198 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 199 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 200 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 201 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins::
# 202 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant
# 203 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 204 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 205 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 206 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Gentleman::
# 207 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 208 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 209 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER_2, CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins
# 210 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo
# 211 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 212 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 213 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 20, CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins
# 214 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 20
# 215 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 216 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromMan
# 217 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 218 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 219 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER_2
# 220 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 221 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 222 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 223 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins::
# 224 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouveGotPlentyCoins
# 225 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 226 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 227 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 228 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins::
# 229 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WatchReelsClosely
# 230 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 231 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 232 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 233 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine0::
# 234 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 235 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 236 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 237 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 238 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 239 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_DontPlaySlotMachine::
# 240 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 241 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 242 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 243 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine::
# 244 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase
# 245 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SlotMachineWantToPlay, MSGBOX_YESNO
# 246 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_EventScript_DontPlaySlotMachine
# 247 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 0, LOCALID_PLAYER
# 248 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
#ifdef BUGFIX
# 249 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_NUM(MAP_CELADON_CITY_GAME_CORNER)
# 250 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP(MAP_CELADON_CITY_GAME_CORNER)
# 251 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
#else
# 252 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	@ Map num/group were provided in the wrong order
# 253 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_GROUP(MAP_CELADON_CITY_GAME_CORNER)
# 254 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_NUM(MAP_CELADON_CITY_GAME_CORNER)
# 255 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
#endif
# 256 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	dofieldeffect FLDEFF_SMILEY_FACE_ICON
# 257 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_SMILEY_FACE_ICON
# 258 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetRandomSlotMachineId
# 259 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playslotmachine VAR_RESULT
# 260 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 261 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 262 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 263 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine1::
# 264 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 265 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 266 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 267 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 268 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 269 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine2::
# 270 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 271 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 272 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 273 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 274 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 275 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine3::
# 276 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 277 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 278 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 279 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 280 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 281 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine4::
# 282 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 283 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 284 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 285 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 286 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 287 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine5::
# 288 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 289 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 5
# 290 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 291 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 292 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 293 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine6::
# 294 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 295 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 296 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 297 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 298 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 299 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine7::
# 300 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 301 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 7
# 302 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 303 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 304 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 305 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine8::
# 306 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 307 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 8
# 308 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 309 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 310 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 311 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine9::
# 312 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 313 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 9
# 314 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 315 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 316 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 317 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine10::
# 318 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 319 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 10
# 320 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 321 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 322 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 323 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine11::
# 324 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 325 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 11
# 326 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 327 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 328 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 329 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine12::
# 330 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 331 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 12
# 332 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 333 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 334 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 335 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine13::
# 336 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 337 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 13
# 338 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 339 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 340 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 341 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine14::
# 342 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 343 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 14
# 344 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 345 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 346 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 347 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine15::
# 348 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 349 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 15
# 350 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 351 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 352 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 353 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine16::
# 354 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 355 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 16
# 356 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 357 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 358 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 359 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine17::
# 360 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 361 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 17
# 362 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 363 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 364 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 365 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine18::
# 366 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 367 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 18
# 368 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 369 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 370 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 371 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine19::
# 372 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 373 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 19
# 374 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 375 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 376 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 377 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine20::
# 378 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 379 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 20
# 380 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 381 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 382 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 383 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine21::
# 384 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 385 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 21
# 386 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 387 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 388 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 389 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase::
# 390 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsRequired
# 391 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 392 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 393 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 394 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Poster::
# 395 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 396 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt
# 397 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_OpenRocketHideout
# 398 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 399 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 400 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 401 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_OpenRocketHideout::
# 402 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_UNLOCK
# 403 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_StairsTop, 0
# 404 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_StairsTop, 1
# 405 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_StairsBottom, 1
# 406 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_StairsTop, 1
# 407 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_stairsBottom, 1
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	special DrawWholeMapView
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_OPENED_ROCKET_HIDEOUT
# 410 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	return
# 411 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 412 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_RocketGrunt::
# 413 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_7, CeladonCity_GameCorner_Text_GruntIntro, CeladonCity_GameCorner_Text_GruntDefeat, CeladonCity_GameCorner_Text_DefeatedGrunt
# 414 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 415 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 416 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 417 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DefeatedGrunt::
# 418 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle
# 419 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	closemessage
# 420 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CeladonCity_GameCorner_Text_GruntExitWest
# 421 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call_if_ne VAR_FACING, DIR_WEST, CeladonCity_GameCorner_Text_GruntExit
# 422 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removeobject LOCALID_GAME_CORNER_GRUNT
# 423 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
# 424 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 425 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 426 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntExitWest::
# 427 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExitWest
# 428 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
# 429 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	return
# 430 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 431 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntExit::
# 432 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExit
# 433 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
# 434 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	return
# 435 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 436 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExitWest::
# 437 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_down
# 438 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 439 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 440 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_up
# 441 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 442 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 443 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 444 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 445 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	step_end
# 446 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 447 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExit::
# 448 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 449 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 450 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 451 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 452 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 453 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 454 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	step_end
# 455 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 456 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine1::
# 457 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutOfOrder, MSGBOX_SIGN
# 458 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 459 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 460 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine2::
# 461 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutToLunch, MSGBOX_SIGN
# 462 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 463 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 464 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine3::
# 465 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SomeonesKeys, MSGBOX_SIGN
# 466 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 467 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 468 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor::
# 469 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Welcome!\p"
# 470 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You can exchange your COINS for\n"
# 471 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "fabulous prizes next door.$"
# 472 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 473 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WelcomeBuySomeCoins::
# 474 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Welcome to ROCKET GAME CORNER!\p"
# 475 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Do you need some game COINS?\n"
# 476 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Would you like to buy some?$"
# 477 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 478 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_ComePlaySometime::
# 479 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "No?\n"
# 480 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Please come play sometime!$"
# 481 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 482 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SorryDontHaveCoinCase::
# 483 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Oh, I'm sorry.\n"
# 484 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You don't have a COIN CASE.$"
# 485 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 486 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_CoinCaseIsFull::
# 487 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Whoops!\n"
# 488 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Your COIN CASE is full.$"
# 489 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 490 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_CantAffordCoins::
# 491 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You can't afford the COINS.$"
# 492 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 493 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_HereAreYourCoins::
# 494 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Thank you.\n"
# 495 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Here are your COINS!$"
# 496 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 497 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace::
# 498 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Keep this quiet.\p"
# 499 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "It's rumored that this place is run\n"
# 500 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "by TEAM ROCKET.$"
# 501 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 502 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds::
# 503 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I think these machines have\n"
# 504 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "different odds.$"
# 505 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 506 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DoYouWantToPlay::
# 507 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Kid, do you want to play?$"
# 508 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 509 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_Received10CoinsFromMan::
# 510 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 10 COINS\n"
# 511 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "from the man.$"
# 512 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 513 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DontNeedMyCoins::
# 514 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You don't need my COINS!$"
# 515 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 516 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WinsComeAndGo::
# 517 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Wins seem to come and go.\n"
# 518 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Nothing's a sure thing.$"
# 519 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 520 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck::
# 521 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "These slot games…\n"
# 522 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 523 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 524 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GymGuyAdvice::
# 525 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey!\p"
# 526 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You have better things to do,\n"
# 527 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "champ in the making!\p"
# 528 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "CELADON GYM's LEADER is ERIKA.\p"
# 529 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "She is a user of GRASS-type\n"
# 530 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "POKéMON, and at one with nature.\p"
# 531 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "She might appear docile because of\n"
# 532 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "her flower arranging…\p"
# 533 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "But she's not one to be taken\n"
# 534 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "lightly!$"
# 535 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 536 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_RareMonsForCoins::
# 537 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "They offer rare POKéMON that can\n"
# 538 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "be exchanged for your COINS.\p"
# 539 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "But, I just can't seem to win!$"
# 540 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 541 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SoEasyToGetHooked::
# 542 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Games are scary!\n"
# 543 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "It's so easy to get hooked!$"
# 544 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 545 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WantSomeCoins::
# 546 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "What's up?\n"
# 547 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Want some COINS?$"
# 548 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 549 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy::
# 550 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 20 COINS\n"
# 551 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "from the nice guy.$"
# 552 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 553 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_YouHaveLotsOfCoins::
# 554 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You have lots of COINS!$"
# 555 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 556 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant::
# 557 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Darn! I need more COINS for the\n"
# 558 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "POKéMON I want!$"
# 559 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 560 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo::
# 561 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey, what? You're throwing me off!\n"
# 562 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Here are some COINS, so shoo!$"
# 563 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 564 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_Received20CoinsFromMan::
# 565 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 20 COINS\n"
# 566 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "from the man.$"
# 567 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 568 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_YouveGotPlentyCoins::
# 569 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You've got plenty of your own\n"
# 570 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "COINS!$"
# 571 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 572 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WatchReelsClosely::
# 573 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "The trick is to watch the reels\n"
# 574 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "closely.$"
# 575 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 576 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntIntro::
# 577 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I'm guarding this poster!\n"
# 578 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Go away, or else!$"
# 579 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 580 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntDefeat::
# 581 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Dang!$"
# 582 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 583 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntPostBattle::
# 584 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "The TEAM ROCKET HIDEOUT might\n"
# 585 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "be discovered!\p"
# 586 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I better tell BOSS!$"
# 587 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 588 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt::
# 589 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey!\p"
# 590 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A switch behind the poster!?\n"
# 591 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Let's push it!$"
# 592 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 593 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_CoinCaseIsRequired::
# 594 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A COIN CASE is required…$"
# 595 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 596 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DontHaveCoinCase::
# 597 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Oops!\n"
# 598 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Don't have the COIN CASE!$"
# 599 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 600 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SlotMachineWantToPlay::
# 601 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A slot machine!\n"
# 602 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Want to play?$"
# 603 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 604 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_OutOfOrder::
# 605 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "OUT OF ORDER\n"
# 606 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "This is broken.$"
# 607 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 608 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_OutToLunch::
# 609 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "OUT TO LUNCH\n"
# 610 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "This is reserved.$"
# 611 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 612 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SomeonesKeys::
# 613 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Someone's keys!\n"
# 614 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "They'll be back.$"

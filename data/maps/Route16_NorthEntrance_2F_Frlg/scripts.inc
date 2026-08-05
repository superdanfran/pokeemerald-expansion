# 1 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 2 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
.equ REQUIRED_CAUGHT_MONS, 40
# 3 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 4 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Frlg_MapScripts::
# 5 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 7 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_LittleBoy::
# 8 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend, MSGBOX_NPC
# 9 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 10 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 11 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_LittleGirl::
# 12 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes, MSGBOX_NPC
# 13 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 14 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 15 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_LeftBinoculars::
# 16 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore, MSGBOX_SIGN
# 17 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 18 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 19 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_RightBinoculars::
# 20 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_LongPathOverWater, MSGBOX_SIGN
# 21 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 22 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 23 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_Aide::
# 24 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	lock
# 25 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 26 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
# 27 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE, Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin
# 28 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40, MSGBOX_YESNO
# 29 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 30 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 31 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 32 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 33 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
# 34 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
# 35 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_GreatHereYouGo
# 36 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	checkitemspace ITEM_AMULET_COIN
# 37 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 38 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide, ITEM_AMULET_COIN
# 39 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE
# 40 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
# 41 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 42 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 43 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 44 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin::
# 45 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
# 46 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	release
# 47 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	end
# 48 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 49 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo::
# 50 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
# 51 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_AMULET_COIN
# 52 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	return
# 53 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 54 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend::
# 55 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I'm on a relaxing ride on my new\n"
# 56 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "bike with my girlfriend.$"
# 57 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 58 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes::
# 59 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "We're going riding together on our\n"
# 60 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "new bikes.$"
# 61 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 62 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore::
# 63 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 64 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 65 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "It's the CELADON DEPT. STORE!$"
# 66 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 67 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_LongPathOverWater::
# 68 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 69 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 70 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "There's a long path over water far\n"
# 71 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "away.$"
# 72 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 73 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40::
# 74 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
# 75 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I'm one of PROF. OAK's AIDES.\p"
# 76 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 77 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "on 40 species, I'm supposed to\l"
# 78 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "give you a reward.\p"
# 79 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "PROF. OAK entrusted me with an\n"
# 80 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "AMULET COIN for you.\p"
# 81 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 82 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 83 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "40 kinds of POKéMON?$"
# 84 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 85 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_GreatHereYouGo::
# 86 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 87 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 88 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 89 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Here you go!$"
# 90 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 91 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide::
# 92 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the AMULET COIN\n"
# 93 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 94 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"

# 95 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
Route16_NorthEntrance_2F_Text_ExplainAmuletCoin::
# 96 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "An AMULET COIN is an item to be\n"
# 97 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "held by a POKéMON.\p"
# 98 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "If the POKéMON appears in a winning\n"
# 99 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "battle, you will earn more money.$"

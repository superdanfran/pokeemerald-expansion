# 1 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 2 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
.equ REQUIRED_SEEN_MONS, 10
# 3 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 4 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Frlg_MapScripts::
# 5 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 7 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Aide::
# 8 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	lock
# 9 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	faceplayer
# 10 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 11 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM05, Route2_EastBuilding_EventScript_AlreadyGotHM05
# 12 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_GiveHM05IfSeen10Mons, MSGBOX_YESNO
# 13 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 14 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 15 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 16 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 17 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 18 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_SEEN_MONS, Aide_EventScript_HaventCaughtEnough
# 19 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_GreatHereYouGo
# 20 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	checkitemspace ITEM_HM05
# 21 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 22 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	giveitem_msg Route2_EastBuilding_Text_ReceivedHM05FromAide, ITEM_HM05
# 23 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	setflag FLAG_GOT_HM05
# 24 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainHM05
# 25 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	release
# 26 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	end
# 27 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 28 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_AlreadyGotHM05::
# 29 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainHM05
# 30 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	release
# 31 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	end
# 32 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 33 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_GetAideRequestInfo::
# 34 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_SEEN_MONS
# 35 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM05
# 36 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	return
# 37 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 38 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_EventScript_Rocker::
# 39 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_CanGetThroughRockTunnel, MSGBOX_NPC
# 40 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	end
# 41 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 42 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_GiveHM05IfSeen10Mons::
# 43 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
# 44 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "I'm one of PROF. OAK's AIDES.\p"
# 45 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 46 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "on ten species, I'm supposed to\l"
# 47 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "give you a reward.\p"
# 48 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "PROF. OAK entrusted me with\n"
# 49 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "HM05 for you.\p"
# 50 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 51 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 52 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "ten kinds of POKéMON?$"
# 53 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 54 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_GreatHereYouGo::
# 55 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 56 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 57 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 58 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Here you go!$"
# 59 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 60 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_ReceivedHM05FromAide::
# 61 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "{PLAYER} received HM05\n"
# 62 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 63 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 64 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_ExplainHM05::
# 65 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "HM05 contains the hidden move\n"
# 66 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "FLASH.\p"
# 67 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "FLASH lights up even the darkest\n"
# 68 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "of caves and dungeons.$"
# 69 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"

# 70 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
Route2_EastBuilding_Text_CanGetThroughRockTunnel::
# 71 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Once a POKéMON learns FLASH, you\n"
# 72 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "can get through ROCK TUNNEL.$"

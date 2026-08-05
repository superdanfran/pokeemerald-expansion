# 1 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 2 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
.equ REQUIRED_CAUGHT_MONS, 50
# 3 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 4 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Frlg_MapScripts::
# 5 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 7 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_LeftBinoculars::
# 8 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	lockall
# 9 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_LargeShiningBird
# 10 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	showmonpic SPECIES_ARTICUNO, 10, 3
# 11 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	delay 20
# 12 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	waitbuttonpress
# 13 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	hidemonpic
# 14 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 15 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	special SetSeenMon
# 16 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	releaseall
# 17 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	end
# 18 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 19 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_RightBinoculars::
# 20 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_SmallIslandOnHorizon, MSGBOX_SIGN
# 21 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	end
# 22 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 23 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide::
# 24 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	lock
# 25 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 26 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 27 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE, Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare
# 28 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough, MSGBOX_YESNO
# 29 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 30 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 31 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 32 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 33 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 34 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
# 35 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GreatHereYouGo
# 36 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	checkitemspace ITEM_EXP_SHARE
# 37 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 38 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route15_WestEntrance_2F_Text_ReceivedItemFromAide, ITEM_EXP_SHARE
# 39 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE
# 40 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 41 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	release
# 42 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	end
# 43 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 44 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare::
# 45 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 46 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	release
# 47 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	end
# 48 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 49 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_EventScript_GetAideRequestInfo::
# 50 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
# 51 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_EXP_SHARE
# 52 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	return
# 53 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 54 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough::
# 55 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
# 56 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "I'm one of PROF. OAK's AIDES.\p"
# 57 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 58 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "on {STR_VAR_1} species, I'm supposed to\l"
# 59 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "give you a reward.\p"
# 60 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "PROF. OAK entrusted me with the\n"
# 61 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_2} for you.\p"
# 62 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 63 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 64 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_1} kinds of POKéMON?$"
# 65 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 66 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_GreatHereYouGo::
# 67 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 68 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 69 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 70 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Here you go!$"
# 71 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 72 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_ReceivedItemFromAide::
# 73 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_2}\n"
# 74 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 75 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 76 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_ExplainExpShare::
# 77 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "EXP. SHARE is an item to be held\n"
# 78 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "by a POKéMON.\p"
# 79 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "The POKéMON will receive a share\n"
# 80 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "of the EXP. Points without having\l"
# 81 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "to battle.$"
# 82 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 83 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_LargeShiningBird::
# 84 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 85 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 86 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "A large, shining bird is flying\n"
# 87 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "toward the sea.$"
# 88 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"

# 89 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
Route15_WestEntrance_2F_Text_SmallIslandOnHorizon::
# 90 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 91 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 92 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "It looks like a small island on\n"
# 93 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "the horizon!$"

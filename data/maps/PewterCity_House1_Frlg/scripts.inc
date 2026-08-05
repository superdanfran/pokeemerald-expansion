# 1 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_Frlg_MapScripts::
# 3 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_EventScript_BaldingMan::
# 6 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_TradeMonsAreFinicky, MSGBOX_NPC
# 7 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	end
# 8 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 9 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_EventScript_LittleBoy::
# 10 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	lock
# 11 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_NidoranSit
# 12 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 13 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	release
# 14 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	end
# 15 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 16 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_EventScript_Nidoran::
# 17 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	lock
# 18 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	faceplayer
# 19 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 20 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_HOUSE_NIDORAN, Common_Movement_FaceOriginalDirection
# 21 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	release
# 23 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	end
# 24 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 25 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_EventScript_DoNidoranCry::
# 26 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 27 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitse
# 28 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 29 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 30 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitmoncry
# 31 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 32 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	return
# 33 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 34 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_Text_Nidoran::
# 35 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "NIDORAN♂: Bowbow!$"
# 36 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 37 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_Text_NidoranSit::
# 38 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "NIDORAN, sit!$"
# 39 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 40 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_Text_TradeMonsAreFinicky::
# 41 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "Our POKéMON's an outsider, so it's\n"
# 42 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "finicky and hard to handle.\p"
# 43 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "An outsider is a POKéMON that you\n"
# 44 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "get in a trade.\p"
# 45 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "It grows fast, but it may ignore an\n"
# 46 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "unskilled TRAINER in battle.\p"
# 47 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "If only we had some BADGES…$"

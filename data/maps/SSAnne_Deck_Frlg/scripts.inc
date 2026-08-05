# 1 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Frlg_MapScripts::
# 3 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_EventScript_Youngster::
# 6 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	msgbox SSAnne_Deck_Text_ShipDepartingSoon, MSGBOX_NPC
# 7 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	end
# 8 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 9 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_EventScript_BaldingMan::
# 10 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	msgbox SSAnne_Deck_Text_FeelSeasick, MSGBOX_NPC
# 11 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	end
# 12 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 13 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_EventScript_Sailor::
# 14 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	msgbox SSAnne_Deck_Text_ScrubbingDecksHardWork, MSGBOX_NPC
# 15 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	end
# 16 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 17 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_EventScript_Edmond::
# 18 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_EDMOND, SSAnne_Deck_Text_EdmondIntro, SSAnne_Deck_Text_EdmondDefeat
# 19 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	msgbox SSAnne_Deck_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	end
# 21 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 22 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_EventScript_Trevor::
# 23 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_TREVOR, SSAnne_Deck_Text_TrevorIntro, SSAnne_Deck_Text_TrevorDefeat
# 24 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	msgbox SSAnne_Deck_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	end
# 26 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 27 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_ShipDepartingSoon::
# 28 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "The party's over.\n"
# 29 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "The ship will be departing soon.$"
# 30 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 31 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_ScrubbingDecksHardWork::
# 32 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "Whew!\n"
# 33 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "Scrubbing decks is hard work!$"
# 34 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 35 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_FeelSeasick::
# 36 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "Urf… I feel ill…\p"
# 37 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "I got seasick, so I stepped out to\n"
# 38 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "get some air…$"
# 39 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 40 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_EdmondIntro::
# 41 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "Hey, matey!\p"
# 42 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "Let's do a little jig!$"
# 43 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 44 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_EdmondDefeat::
# 45 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "You're impressive!$"
# 46 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 47 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_EdmondPostBattle::
# 48 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "How many kinds of POKéMON do you\n"
# 49 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "think there are in this big world?$"
# 50 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 51 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_TrevorIntro::
# 52 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "Ahoy, there!\n"
# 53 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "Are you seasick?$"
# 54 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 55 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_TrevorDefeat::
# 56 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "I was just careless!$"
# 57 "data/maps/SSAnne_Deck_Frlg/scripts.pory"

# 58 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
SSAnne_Deck_Text_TrevorPostBattle::
# 59 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "My pa said there are 100 kinds of\n"
# 60 "data/maps/SSAnne_Deck_Frlg/scripts.pory"
	.string "POKéMON. I think there are more.$"

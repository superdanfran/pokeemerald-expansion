# 1 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_EventScript_Lass::
# 6 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_DontLookAtMyLetter, MSGBOX_NPC
# 7 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	end
# 8 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 9 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_EventScript_Youngster::
# 10 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_GettingCopycatPokeDoll, MSGBOX_NPC
# 11 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	end
# 12 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 13 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_EventScript_Pidgey::
# 14 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	lock
# 15 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	waitse
# 17 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
# 18 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_Pidgey
# 19 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	release
# 21 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	end
# 22 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 23 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_EventScript_Letter::
# 24 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	msgbox SaffronCity_House_Text_ExplainPPUp, MSGBOX_SIGN
# 25 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	end
# 26 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 27 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Text_DontLookAtMyLetter::
# 28 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "…Thank you for writing.\n"
# 29 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I hope to see you soon!\p"
# 30 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "…Hey!\n"
# 31 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "Don't look at my letter!$"
# 32 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 33 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Text_Pidgey::
# 34 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "PIDGEY: Kurukkoo!$"
# 35 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 36 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Text_GettingCopycatPokeDoll::
# 37 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "The COPYCAT is cute!\n"
# 38 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I'm getting her a POKé DOLL.$"
# 39 "data/maps/SaffronCity_House_Frlg/scripts.pory"

# 40 "data/maps/SaffronCity_House_Frlg/scripts.pory"
SaffronCity_House_Text_ExplainPPUp::
# 41 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I was given a PP UP as a gift.\p"
# 42 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "It's used to increase the PP of\n"
# 43 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "a POKéMON's move.\p"
# 44 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "I should use it on a powerful move\n"
# 45 "data/maps/SaffronCity_House_Frlg/scripts.pory"
	.string "with only a few PP.$"

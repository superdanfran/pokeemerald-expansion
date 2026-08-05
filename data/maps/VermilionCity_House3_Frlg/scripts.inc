# 1 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_EventScript_Boy::
# 6 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_PidgeyFlyLetterToSaffron, MSGBOX_NPC
# 7 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	end
# 8 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 9 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_EventScript_Lass::
# 10 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_SendMyPidgeyToUnionRoom, MSGBOX_NPC
# 11 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	end
# 12 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 13 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_EventScript_Pidgey::
# 14 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	lock
# 15 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	waitse
# 17 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
# 18 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_Pidgey
# 19 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	release
# 21 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	end
# 22 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 23 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_EventScript_Letter::
# 24 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_DearPippiLetter, MSGBOX_SIGN
# 25 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	end
# 26 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 27 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Text_PidgeyFlyLetterToSaffron::
# 28 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I'm getting my PIDGEY to fly a\n"
# 29 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "letter to SAFFRON in the north.$"
# 30 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 31 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Text_Pidgey::
# 32 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "PIDGEY: Kurukkoo!$"
# 33 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 34 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Text_DearPippiLetter::
# 35 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "Dear PIPPI,\n"
# 36 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I hope to see you soon.\p"
# 37 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I heard SAFFRON has problems with\n"
# 38 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "TEAM ROCKET.\p"
# 39 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "VERMILION appears to be safe.$"
# 40 "data/maps/VermilionCity_House3_Frlg/scripts.pory"

# 41 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
VermilionCity_House3_Text_SendMyPidgeyToUnionRoom::
# 42 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I want to exchange MAIL with all\n"
# 43 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "sorts of people.\p"
# 44 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I send my PIDGEY to a UNION ROOM\n"
# 45 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "to exchange MAIL for me.$"

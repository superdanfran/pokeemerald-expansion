# 1 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_Hiker::
# 6 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	lock
# 7 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_House2_EventScript_HikerGotTM28
# 9 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_RocketsStoleTMForDig
# 10 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	release
# 11 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	end
# 12 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 13 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_HikerGotTM28::
# 14 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeachDiglettDigWithoutTM
# 15 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	release
# 16 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	end
# 17 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 18 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_Lass::
# 19 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood, MSGBOX_NPC
# 20 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	end
# 21 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 22 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_EventScript_WallHole::
# 23 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeamRocketLeftWayOut, MSGBOX_SIGN
# 24 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	end
# 25 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 26 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Text_RocketsStoleTMForDig::
# 27 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "Those miserable ROCKETS!\p"
# 28 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "Look what they've done to my\n"
# 29 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "house!\p"
# 30 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "They stole a TM for teaching\n"
# 31 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "POKéMON how to DIG holes!\p"
# 32 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "I was going to use it on a\n"
# 33 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "MANKEY or a SANDSHREW…\p"
# 34 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "That cost me a bundle, it did!$"
# 35 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 36 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Text_TeachDiglettDigWithoutTM::
# 37 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "I figure what's lost is lost.\p"
# 38 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "I decided to teach DIGLETT how to\n"
# 39 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "DIG without a TM.$"
# 40 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 41 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood::
# 42 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "TEAM ROCKET must be trying to DIG\n"
# 43 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "their way into no good!$"
# 44 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"

# 45 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
CeruleanCity_House2_Text_TeamRocketLeftWayOut::
# 46 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "TEAM ROCKET left a way out!$"

# 1 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 5 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_EventScript_BaldingMan::
# 6 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	msgbox ViridianCity_House_Text_NicknamingIsFun, MSGBOX_NPC
# 7 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	end
# 8 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 9 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_EventScript_LittleGirl::
# 10 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	msgbox ViridianCity_House_Text_MyDaddyLovesMonsToo, MSGBOX_NPC
# 11 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	end
# 12 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 13 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_EventScript_Speary::
# 14 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	lock
# 15 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	waitse
# 17 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 18 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	msgbox ViridianCity_House_Text_Speary
# 19 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	release
# 21 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	end
# 22 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 23 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_EventScript_NicknameSign::
# 24 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	msgbox ViridianCity_House_Text_SpearowNameSpeary, MSGBOX_SIGN
# 25 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	end
# 26 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 27 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_Text_NicknamingIsFun::
# 28 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "Coming up with nicknames is fun,\n"
# 29 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "but it's not so easy to do.\p"
# 30 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "Clever names are nice, but simple\n"
# 31 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "names are easier to remember.$"
# 32 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 33 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_Text_MyDaddyLovesMonsToo::
# 34 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "My daddy loves POKéMON, too.$"
# 35 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 36 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_Text_Speary::
# 37 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "SPEARY: Tetweet!$"
# 38 "data/maps/ViridianCity_House_Frlg/scripts.pory"

# 39 "data/maps/ViridianCity_House_Frlg/scripts.pory"
ViridianCity_House_Text_SpearowNameSpeary::
# 40 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "SPEAROW\n"
# 41 "data/maps/ViridianCity_House_Frlg/scripts.pory"
	.string "Name: SPEARY$"

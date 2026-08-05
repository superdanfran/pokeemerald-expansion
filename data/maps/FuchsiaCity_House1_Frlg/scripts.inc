# 1 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
FuchsiaCity_House1_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
FuchsiaCity_House1_EventScript_Woman::
# 6 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	msgbox FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth, MSGBOX_NPC
# 7 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	end
# 8 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"

# 9 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
FuchsiaCity_House1_EventScript_OldMan::
# 10 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	lock
# 11 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	faceplayer
# 12 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 2
# 13 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	msgbox FuchsiaCity_House1_Text_BillIsMyGrandson
# 14 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	release
# 15 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	end
# 16 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"

# 17 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
FuchsiaCity_House1_EventScript_LittleBoy::
# 18 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	msgbox FuchsiaCity_House1_Text_BillFilesHisOwnMonData, MSGBOX_NPC
# 19 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	end
# 20 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"

# 21 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth::
# 22 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "The SAFARI ZONE's WARDEN is old, \n"
# 23 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "but he's still very much active.\p"
# 24 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "All his teeth are false, though.$"
# 25 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"

# 26 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
FuchsiaCity_House1_Text_BillIsMyGrandson::
# 27 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "Hmm?\n"
# 28 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "You've met BILL?\p"
# 29 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "He's my grandson!\p"
# 30 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "He always liked collecting things,\n"
# 31 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "even as a child!$"
# 32 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"

# 33 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
FuchsiaCity_House1_Text_BillFilesHisOwnMonData::
# 34 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "BILL files his own POKéMON data on\n"
# 35 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "his PC.\p"
# 36 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "Did he show you?$"

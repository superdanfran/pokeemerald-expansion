# 1 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
SSAnne_1F_Room3_Frlg_MapScripts::
# 3 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
SSAnne_1F_Room3_EventScript_LittleGirl::
# 6 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_AlwaysTravelWithWigglytuff, MSGBOX_NPC
# 7 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	end
# 8 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"

# 9 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
SSAnne_1F_Room3_EventScript_BaldingMan::
# 10 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_CruiseIsElegantAndCozy, MSGBOX_NPC
# 11 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	end
# 12 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"

# 13 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
SSAnne_1F_Room3_EventScript_Wigglytuff::
# 14 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	lock
# 15 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	waitse
# 17 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	playmoncry SPECIES_WIGGLYTUFF, CRY_MODE_NORMAL
# 18 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room3_Text_Wigglytuff
# 19 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	release
# 21 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	end
# 22 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"

# 23 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
SSAnne_1F_Room3_Text_CruiseIsElegantAndCozy::
# 24 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.string "A world cruise is so elegant yet\n"
# 25 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.string "cozy!$"
# 26 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"

# 27 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
SSAnne_1F_Room3_Text_AlwaysTravelWithWigglytuff::
# 28 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.string "I always travel with WIGGLYTUFF.\n"
# 29 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.string "I never leave home without it.$"
# 30 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"

# 31 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
SSAnne_1F_Room3_Text_Wigglytuff::
# 32 "data/maps/SSAnne_1F_Room3_Frlg/scripts.pory"
	.string "WIGGLYTUFF: Puup pupuu!$"

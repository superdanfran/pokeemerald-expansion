# 1 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_Frlg_MapScripts::
# 3 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_EventScript_Woman::
# 6 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	lock
# 7 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	checkplayergender
# 9 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SSAnne_1F_Room4_EventScript_WomanPlayerMale
# 10 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room4_Text_WaitressCherryPiePlease
# 11 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	release
# 12 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	end
# 13 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 14 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_EventScript_WomanPlayerMale::
# 15 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room4_Text_WaiterCherryPiePlease
# 16 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	release
# 17 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	end
# 18 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 19 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_Text_WaiterCherryPiePlease::
# 20 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "Waiter, I would like a cherry pie,\n"
# 21 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "please!$"
# 22 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"

# 23 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
SSAnne_1F_Room4_Text_WaitressCherryPiePlease::
# 24 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "Waitress, I would like a cherry\n"
# 25 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "pie, please!$"

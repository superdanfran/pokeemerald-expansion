# 1 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
SSAnne_B1F_Room2_Frlg_MapScripts::
# 3 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
SSAnne_B1F_Room2_EventScript_Huey::
# 6 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_HUEY, SSAnne_B1F_Room2_Text_HueyIntro, SSAnne_B1F_Room2_Text_HueyDefeat
# 7 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room2_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	end
# 9 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"

# 10 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
SSAnne_B1F_Room2_Text_HueyIntro::
# 11 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	.string "Even us sailors have POKéMON, too!$"
# 12 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"

# 13 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
SSAnne_B1F_Room2_Text_HueyDefeat::
# 14 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	.string "Okay, you're not bad.$"
# 15 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"

# 16 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
SSAnne_B1F_Room2_Text_HueyPostBattle::
# 17 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	.string "We caught all our POKéMON while\n"
# 18 "data/maps/SSAnne_B1F_Room2_Frlg/scripts.pory"
	.string "we were out at sea.$"

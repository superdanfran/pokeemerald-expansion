# 1 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
SSAnne_1F_Room7_Frlg_MapScripts::
# 3 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
SSAnne_1F_Room7_EventScript_Thomas::
# 6 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_THOMAS, SSAnne_1F_Room7_Text_ThomasIntro, SSAnne_1F_Room7_Text_ThomasDefeat
# 7 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room7_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	end
# 9 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"

# 10 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
SSAnne_1F_Room7_Text_ThomasIntro::
# 11 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.string "I am but a solitary traveler…\p"
# 12 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.string "My sole companions and friends are\n"
# 13 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.string "POKéMON I caught on my journeys…$"
# 14 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"

# 15 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
SSAnne_1F_Room7_Text_ThomasDefeat::
# 16 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.string "My, my friends…$"
# 17 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"

# 18 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
SSAnne_1F_Room7_Text_ThomasPostBattle::
# 19 "data/maps/SSAnne_1F_Room7_Frlg/scripts.pory"
	.string "You should be nice to friends!$"

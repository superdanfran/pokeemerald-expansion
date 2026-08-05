# 1 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
SSAnne_1F_Room5_Frlg_MapScripts::
# 3 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
SSAnne_1F_Room5_EventScript_Arthur::
# 6 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_ARTHUR, SSAnne_1F_Room5_Text_ArthurIntro, SSAnne_1F_Room5_Text_ArthurDefeat
# 7 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room5_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	end
# 9 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"

# 10 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
SSAnne_1F_Room5_Text_ArthurIntro::
# 11 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "You insolent pup!\n"
# 12 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "How dare you barge in!$"
# 13 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"

# 14 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
SSAnne_1F_Room5_Text_ArthurDefeat::
# 15 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "Humph! You rude child!\n"
# 16 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "You have no sense of courtesy!$"
# 17 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"

# 18 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
SSAnne_1F_Room5_Text_ArthurPostBattle::
# 19 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "I wish to be left alone!\n"
# 20 "data/maps/SSAnne_1F_Room5_Frlg/scripts.pory"
	.string "Get out!$"

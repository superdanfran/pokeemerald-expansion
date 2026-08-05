# 1 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
SSAnne_B1F_Room3_Frlg_MapScripts::
# 3 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
SSAnne_B1F_Room3_EventScript_Dylan::
# 6 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DYLAN, SSAnne_B1F_Room3_Text_DylanIntro, SSAnne_B1F_Room3_Text_DylanDefeat
# 7 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room3_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	end
# 9 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"

# 10 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
SSAnne_B1F_Room3_Text_DylanIntro::
# 11 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.string "I like feisty kids like you!$"
# 12 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"

# 13 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
SSAnne_B1F_Room3_Text_DylanDefeat::
# 14 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.string "Argh!\n"
# 15 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.string "Lost it!$"
# 16 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"

# 17 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
SSAnne_B1F_Room3_Text_DylanPostBattle::
# 18 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.string "Sea POKéMON live in deep water.\n"
# 19 "data/maps/SSAnne_B1F_Room3_Frlg/scripts.pory"
	.string "You'll need a ROD to fish them up!$"

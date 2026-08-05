# 1 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
FiveIsland_LostCave_Room1_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
FiveIsland_LostCave_Room1_EventScript_Lawson::
# 6 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LAWSON, FiveIsland_LostCave_Room1_Text_LawsonIntro, FiveIsland_LostCave_Room1_Text_LawsonDefeat
# 7 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room1_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	end
# 9 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"

# 10 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
FiveIsland_LostCave_Room1_Text_LawsonIntro::
# 11 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "Aiyeeeeeh!\p"
# 12 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "I thought this was an ancient ruin.\n"
# 13 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "But it's teeming with ghosts!$"
# 14 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"

# 15 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
FiveIsland_LostCave_Room1_Text_LawsonDefeat::
# 16 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "Aiyeeeeeh!\n"
# 17 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "Mercy!$"
# 18 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"

# 19 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
FiveIsland_LostCave_Room1_Text_LawsonPostBattle::
# 20 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "I'm trying to get out of here, but\n"
# 21 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "I always end up at the same spot.\p"
# 22 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "Maybe the number of boulders is\n"
# 23 "data/maps/FiveIsland_LostCave_Room1_Frlg/scripts.pory"
	.string "a hint…$"

# 1 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
FiveIsland_LostCave_Room4_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
FiveIsland_LostCave_Room4_EventScript_Laura::
# 6 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_LAURA, FiveIsland_LostCave_Room4_Text_LauraIntro, FiveIsland_LostCave_Room4_Text_LauraDefeat
# 7 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room4_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	end
# 9 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"

# 10 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
FiveIsland_LostCave_Room4_Text_LauraIntro::
# 11 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	.string "I think there is a mysterious power\n"
# 12 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	.string "at work in this cave.$"
# 13 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"

# 14 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
FiveIsland_LostCave_Room4_Text_LauraDefeat::
# 15 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	.string "If you don't go into the right\n"
# 16 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	.string "tunnel, you won't get ahead.$"
# 17 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"

# 18 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
FiveIsland_LostCave_Room4_Text_LauraPostBattle::
# 19 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	.string "Earlier, a lady went into the caves\n"
# 20 "data/maps/FiveIsland_LostCave_Room4_Frlg/scripts.pory"
	.string "ahead.$"

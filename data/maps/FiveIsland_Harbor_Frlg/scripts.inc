# 1 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
FiveIsland_Harbor_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
FiveIsland_Harbor_EventScript_Sailor::
# 6 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	lock
# 7 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 9 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_FIVE_ISLAND
# 11 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromIsland
# 12 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	end

# 1 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"

# 2 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
BirthIsland_Harbor_Frlg_MapScripts::
# 3 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"

# 5 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
BirthIsland_Harbor_EventScript_Sailor_Frlg::
# 6 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	lock
# 7 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 9 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_BIRTH_ISLAND
# 11 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	multichoice 20, 8, MULTI_SEAGALLOP_VERMILION, FALSE
# 12 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	case 0, EventScript_SailToVermilionCity
# 14 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	case 1, EventScript_CancelSail
# 15 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	case 127, EventScript_CancelSail
# 16 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	end

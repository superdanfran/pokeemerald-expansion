# 1 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
ThreeIsland_Harbor_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"

# 5 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
ThreeIsland_Harbor_EventScript_Sailor::
# 6 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	lock
# 7 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 9 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_THREE_ISLAND
# 11 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromIsland
# 12 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	end

# 1 "data/maps/SixIsland_AlteringCave_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_AlteringCave_Frlg/scripts.pory"
SixIsland_AlteringCave_Frlg_MapScripts::
# 3 "data/maps/SixIsland_AlteringCave_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_AlteringCave_OnTransition
# 4 "data/maps/SixIsland_AlteringCave_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SixIsland_AlteringCave_Frlg/scripts.pory"

# 6 "data/maps/SixIsland_AlteringCave_Frlg/scripts.pory"
SixIsland_AlteringCave_OnTransition::
# 7 "data/maps/SixIsland_AlteringCave_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE
# 8 "data/maps/SixIsland_AlteringCave_Frlg/scripts.pory"
	end

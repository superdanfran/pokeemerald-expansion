# 1 "data/maps/FiveIsland_LostCave_Entrance_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Entrance_Frlg/scripts.pory"
FiveIsland_LostCave_Entrance_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Entrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_LostCave_Entrance_OnTransition
# 4 "data/maps/FiveIsland_LostCave_Entrance_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_LostCave_Entrance_Frlg/scripts.pory"

# 6 "data/maps/FiveIsland_LostCave_Entrance_Frlg/scripts.pory"
FiveIsland_LostCave_Entrance_OnTransition::
# 7 "data/maps/FiveIsland_LostCave_Entrance_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_LOST_CAVE_ENTRANCE
# 8 "data/maps/FiveIsland_LostCave_Entrance_Frlg/scripts.pory"
	end

# 1 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"

# 2 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"
UndergroundPath_EastWestTunnel_Frlg_MapScripts::
# 3 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UndergroundPath_EastWestTunnel_OnTransition
# 4 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"

# 6 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"
UndergroundPath_EastWestTunnel_OnTransition::
# 7 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_UNDERGROUND_PATH_EAST_WEST_TUNNEL
# 8 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"
	end

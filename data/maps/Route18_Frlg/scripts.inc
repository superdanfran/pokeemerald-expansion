# 1 "data/maps/Route18_Frlg/scripts.pory"

# 2 "data/maps/Route18_Frlg/scripts.pory"
Route18_Frlg_MapScripts::
# 3 "data/maps/Route18_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
# 4 "data/maps/Route18_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route18_OnWarp
# 5 "data/maps/Route18_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route18_Frlg/scripts.pory"

# 7 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnTransition::
# 8 "data/maps/Route18_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route18_OnTransitionCyclingRoad
# 9 "data/maps/Route18_Frlg/scripts.pory"
	end
# 10 "data/maps/Route18_Frlg/scripts.pory"

# 11 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnTransitionCyclingRoad::
# 12 "data/maps/Route18_Frlg/scripts.pory"
	setflag FLAG_SYS_ON_CYCLING_ROAD
# 13 "data/maps/Route18_Frlg/scripts.pory"
	return
# 14 "data/maps/Route18_Frlg/scripts.pory"

# 15 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnWarp::
# 16 "data/maps/Route18_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route18_OnWarpCyclingRoad
# 17 "data/maps/Route18_Frlg/scripts.pory"
	.2byte 0
# 18 "data/maps/Route18_Frlg/scripts.pory"

# 19 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnWarpCyclingRoad::
# 20 "data/maps/Route18_Frlg/scripts.pory"
	special ForcePlayerOntoBike
# 21 "data/maps/Route18_Frlg/scripts.pory"
	end
# 22 "data/maps/Route18_Frlg/scripts.pory"

# 23 "data/maps/Route18_Frlg/scripts.pory"
Route18_EventScript_RouteSign::
# 24 "data/maps/Route18_Frlg/scripts.pory"
	msgbox Route18_Text_RouteSign, MSGBOX_SIGN
# 25 "data/maps/Route18_Frlg/scripts.pory"
	end
# 26 "data/maps/Route18_Frlg/scripts.pory"

# 27 "data/maps/Route18_Frlg/scripts.pory"
Route18_EventScript_CyclingRoadSign::
# 28 "data/maps/Route18_Frlg/scripts.pory"
	msgbox Route18_Text_CyclingRoadSign, MSGBOX_SIGN
# 29 "data/maps/Route18_Frlg/scripts.pory"
	end
# 30 "data/maps/Route18_Frlg/scripts.pory"

# 31 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_WiltonIntro::
# 32 "data/maps/Route18_Frlg/scripts.pory"
	.string "I always check every grassy area\n"
# 33 "data/maps/Route18_Frlg/scripts.pory"
	.string "for new POKéMON.$"
# 34 "data/maps/Route18_Frlg/scripts.pory"

# 35 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_WiltonDefeat::
# 36 "data/maps/Route18_Frlg/scripts.pory"
	.string "Tch!$"
# 37 "data/maps/Route18_Frlg/scripts.pory"

# 38 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_WiltonPostBattle::
# 39 "data/maps/Route18_Frlg/scripts.pory"
	.string "I wish I had a BIKE!$"
# 40 "data/maps/Route18_Frlg/scripts.pory"

# 41 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_RamiroIntro::
# 42 "data/maps/Route18_Frlg/scripts.pory"
	.string "Kurukkoo!\n"
# 43 "data/maps/Route18_Frlg/scripts.pory"
	.string "How do you like my birdcall?$"
# 44 "data/maps/Route18_Frlg/scripts.pory"

# 45 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_RamiroDefeat::
# 46 "data/maps/Route18_Frlg/scripts.pory"
	.string "I had to bug you!$"
# 47 "data/maps/Route18_Frlg/scripts.pory"

# 48 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_RamiroPostBattle::
# 49 "data/maps/Route18_Frlg/scripts.pory"
	.string "I collect sea POKéMON on weekends\n"
# 50 "data/maps/Route18_Frlg/scripts.pory"
	.string "because the sea is so close.$"
# 51 "data/maps/Route18_Frlg/scripts.pory"

# 52 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_JacobIntro::
# 53 "data/maps/Route18_Frlg/scripts.pory"
	.string "This is my turf!\n"
# 54 "data/maps/Route18_Frlg/scripts.pory"
	.string "Get out of here!$"
# 55 "data/maps/Route18_Frlg/scripts.pory"

# 56 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_JacobDefeat::
# 57 "data/maps/Route18_Frlg/scripts.pory"
	.string "Darn!$"
# 58 "data/maps/Route18_Frlg/scripts.pory"

# 59 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_JacobPostBattle::
# 60 "data/maps/Route18_Frlg/scripts.pory"
	.string "This is my fave area for catching\n"
# 61 "data/maps/Route18_Frlg/scripts.pory"
	.string "POKéMON.$"
# 62 "data/maps/Route18_Frlg/scripts.pory"

# 63 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_RouteSign::
# 64 "data/maps/Route18_Frlg/scripts.pory"
	.string "ROUTE 18\n"
# 65 "data/maps/Route18_Frlg/scripts.pory"
	.string "CELADON CITY - FUCHSIA CITY$"
# 66 "data/maps/Route18_Frlg/scripts.pory"

# 67 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_CyclingRoadSign::
# 68 "data/maps/Route18_Frlg/scripts.pory"
	.string "CYCLING ROAD\n"
# 69 "data/maps/Route18_Frlg/scripts.pory"
	.string "No pedestrians permitted!$"

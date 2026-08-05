# 1 "data/maps/FiveIsland_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
# 4 "data/maps/FiveIsland_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_Frlg/scripts.pory"

# 6 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_OnTransition::
# 7 "data/maps/FiveIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND
# 8 "data/maps/FiveIsland_Frlg/scripts.pory"
	end
# 9 "data/maps/FiveIsland_Frlg/scripts.pory"

# 10 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_EventScript_IslandSign::
# 11 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
# 12 "data/maps/FiveIsland_Frlg/scripts.pory"
	end
# 13 "data/maps/FiveIsland_Frlg/scripts.pory"

# 14 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_EventScript_BugCatcher::
# 15 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
# 16 "data/maps/FiveIsland_Frlg/scripts.pory"
	end
# 17 "data/maps/FiveIsland_Frlg/scripts.pory"

# 18 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_EventScript_Fisher::
# 19 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
# 20 "data/maps/FiveIsland_Frlg/scripts.pory"
	end
# 21 "data/maps/FiveIsland_Frlg/scripts.pory"

# 22 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_Text_IslandSign::
# 23 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "FIVE ISLAND\n"
# 24 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "Chrono Island: Where Time Goes$"
# 25 "data/maps/FiveIsland_Frlg/scripts.pory"

# 26 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_Text_WeirdBuildingInMeadow::
# 27 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "Oh, this stinks. I wanted to play in\n"
# 28 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "the MEADOW.\p"
# 29 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "But they put up a weird building\n"
# 30 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "on it, so I can't play there.$"
# 31 "data/maps/FiveIsland_Frlg/scripts.pory"

# 32 "data/maps/FiveIsland_Frlg/scripts.pory"
FiveIsland_Text_BeenGettingBusierAroundHere::
# 33 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "It's been getting busier around\n"
# 34 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "these parts lately.\p"
# 35 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "I haven't been catching many good\n"
# 36 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "fish lately, either.$"

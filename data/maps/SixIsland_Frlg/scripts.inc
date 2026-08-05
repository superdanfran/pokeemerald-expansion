# 1 "data/maps/SixIsland_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_Frlg_MapScripts::
# 3 "data/maps/SixIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
# 4 "data/maps/SixIsland_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SixIsland_Frlg/scripts.pory"

# 6 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_OnTransition::
# 7 "data/maps/SixIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
# 8 "data/maps/SixIsland_Frlg/scripts.pory"
	end
# 9 "data/maps/SixIsland_Frlg/scripts.pory"

# 10 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_EventScript_Hiker::
# 11 "data/maps/SixIsland_Frlg/scripts.pory"
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
# 12 "data/maps/SixIsland_Frlg/scripts.pory"
	end
# 13 "data/maps/SixIsland_Frlg/scripts.pory"

# 14 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_EventScript_Boy::
# 15 "data/maps/SixIsland_Frlg/scripts.pory"
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
# 16 "data/maps/SixIsland_Frlg/scripts.pory"
	end
# 17 "data/maps/SixIsland_Frlg/scripts.pory"

# 18 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_EventScript_IslandSign::
# 19 "data/maps/SixIsland_Frlg/scripts.pory"
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
# 20 "data/maps/SixIsland_Frlg/scripts.pory"
	end
# 21 "data/maps/SixIsland_Frlg/scripts.pory"

# 22 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_Text_IslandSign::
# 23 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "SIX ISLAND\n"
# 24 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "Fortune Island of Aged Wisdom$"
# 25 "data/maps/SixIsland_Frlg/scripts.pory"

# 26 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_Text_ThatWayToWaterPathRuinValley::
# 27 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "Keep going this way and you'll get\n"
# 28 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "to the WATER PATH.\p"
# 29 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "Stay on that and you'll get to\n"
# 30 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "the RUIN VALLEY.$"
# 31 "data/maps/SixIsland_Frlg/scripts.pory"

# 32 "data/maps/SixIsland_Frlg/scripts.pory"
SixIsland_Text_SkyAtNightIsFantastic::
# 33 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "When you're this far away from the\n"
# 34 "data/maps/SixIsland_Frlg/scripts.pory"
	.string "city, the sky at night is fantastic.$"

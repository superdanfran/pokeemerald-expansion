# 1 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
SixIsland_DottedHole_1F_Frlg_MapScripts::
# 3 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_DottedHole_1F_OnTransition
# 4 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"

# 6 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
SixIsland_DottedHole_1F_OnTransition::
# 7 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F
# 8 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	end
# 9 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"

# 10 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
SixIsland_DottedHole_B1F_EventScript_BrailleUp::
# 11 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 12 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Up
# 13 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
# 14 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	end
# 15 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"

# 16 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
SixIsland_DottedHole_B4F_EventScript_BrailleDown::
# 17 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 18 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Down
# 19 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
# 20 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"

# 22 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
SixIsland_DottedHole_B3F_EventScript_BrailleRight::
# 23 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 24 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Right
# 25 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
# 26 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	end
# 27 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"

# 28 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
SixIsland_DottedHole_B2F_EventScript_BrailleLeft::
# 29 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 30 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Left
# 31 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
# 32 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	end

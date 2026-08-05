# 1 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
ThreeIsland_House1_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"

# 5 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
ThreeIsland_House1_EventScript_Lostelle::
# 6 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	lock
# 7 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 9 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	msgbox ThreeIsland_House1_Text_YoureAlwaysSoCool
# 10 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	release
# 11 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	end
# 12 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"

# 13 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
ThreeIsland_House1_EventScript_DisplayCase::
# 14 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
# 15 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	end
# 16 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"

# 17 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
ThreeIsland_House1_Text_YoureAlwaysSoCool::
# 18 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	.string "LOSTELLE: Hi, {PLAYER}!\n"
# 19 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	.string "You're always so cool!\p"
# 20 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	.string "I'll make lunch for you, too, one\n"
# 21 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	.string "day, {PLAYER}.$"
# 22 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"

# 23 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
ThreeIsland_House1_Text_RareRocksGemsDisplayed::
# 24 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	.string "Rare rocks and gems are displayed.$"

# 1 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 5 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_EventScript_LittleGirl::
# 6 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	lock
# 7 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_House5_EventScript_LittleGirlLostelleFound
# 9 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	msgbox ThreeIsland_House5_Text_ImNotLostelle
# 10 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	release
# 11 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	end
# 12 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 13 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_EventScript_LittleGirlLostelleFound::
# 14 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	msgbox ThreeIsland_House5_Text_IllGoPlayWithLostelle
# 15 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	release
# 16 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	end
# 17 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 18 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_Text_ImNotLostelle::
# 19 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "Me?\n"
# 20 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "I'm not LOSTELLE.\p"
# 21 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "She's probably gone to the\n"
# 22 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "BERRY FOREST, I think.\p"
# 23 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "She picks BERRIES there for making\n"
# 24 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "lunch.$"
# 25 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 26 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_Text_IllGoPlayWithLostelle::
# 27 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "I think I'll go play with LOSTELLE\n"
# 28 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "today.$"

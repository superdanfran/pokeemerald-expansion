# 1 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_OnTransition::
# 8 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
# 9 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Sailor::
# 19 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
# 20 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Lass::
# 23 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
# 24 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Rocker::
# 27 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
# 28 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto::
# 31 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Hey, did you hear the news?\p"
# 32 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The PC network here can now link\n"
# 33 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "with PCs in KANTO.\p"
# 34 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I don't know how that came about,\n"
# 35 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "but it's fantastic!$"
# 36 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 37 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands::
# 38 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's impossible to SURF between the\n"
# 39 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "islands around these parts.\p"
# 40 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The tides are too fast and\n"
# 41 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "treacherous.$"
# 42 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 43 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest::
# 44 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Let's crush BERRIES!\n"
# 45 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…That'd be wasting BERRIES?\p"
# 46 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You can always find some BERRIES\n"
# 47 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "on the ground in BERRY FOREST.$"

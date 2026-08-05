# 1 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_OnTransition::
# 8 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
# 9 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_GBAKid::
# 19 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
# 20 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_BugCatcher::
# 23 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
# 24 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner::
# 27 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you visited the GAME CORNER\n"
# 28 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "already?\p"
# 29 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's no good to go alone.\n"
# 30 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You have to take a friend along.$"
# 31 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 32 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape::
# 33 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Not many people live on\n"
# 34 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TWO ISLAND.\p"
# 35 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There is this old lady who lives\n"
# 36 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "out on the cape.\p"
# 37 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "She's been there since I don't know\n"
# 38 "data/maps/TwoIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "when.$"

# 1 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_OnTransition::
# 8 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
# 9 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_OldMan::
# 19 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
# 20 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Sailor::
# 23 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
# 24 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Beauty::
# 27 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
# 28 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections::
# 31 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "On this island, different events\n"
# 32 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "occur depending on connections.\p"
# 33 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "What are those connections?\p"
# 34 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "They are for you to discover on\n"
# 35 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "your own.$"
# 36 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 37 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere::
# 38 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Did you ride a SEAGALLOP ferry\n"
# 39 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to get here?\p"
# 40 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There are at least ten of those\n"
# 41 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "high-speed ships.\p"
# 42 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I don't know where they all go,\n"
# 43 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "though.$"
# 44 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower::
# 46 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you're confident, you should\n"
# 47 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "check out TRAINER TOWER.$"

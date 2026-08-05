# 1 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CELADON_CITY
# 9 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons, MSGBOX_NPC
# 20 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 23 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia, MSGBOX_NPC
# 24 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike, MSGBOX_NPC
# 28 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons::
# 31 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "A POKé FLUTE awakens sleeping\n"
# 32 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON. You know that.\p"
# 33 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It does so with a sound that only\n"
# 34 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "they can hear.$"
# 35 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 36 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia::
# 37 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I rode here from FUCHSIA.\p"
# 38 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's an uphill ride on CYCLING\n"
# 39 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "ROAD, so I'm exhausted.$"
# 40 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"

# 41 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike::
# 42 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If I had a BIKE, I would go to\n"
# 43 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CYCLING ROAD!$"

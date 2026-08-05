# 1 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SAFFRON_CITY
# 9 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame, MSGBOX_NPC
# 20 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Woman::
# 23 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies, MSGBOX_NPC
# 24 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 28 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SILPH_CO_11F, 1, SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone
# 30 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets
# 31 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 32 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone::
# 35 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff
# 36 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 37 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies::
# 40 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON growth rates differ from\n"
# 41 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "species to species.$"
# 42 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 43 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame::
# 44 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "SILPH CO. is widely known to all.\p"
# 45 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's a victim of its own fame - it\n"
# 46 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "attracted TEAM ROCKET.$"
# 47 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 48 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets::
# 49 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Sigh…\n"
# 50 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Wouldn't this be great?\p"
# 51 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If the ELITE FOUR came and\n"
# 52 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "stomped TEAM ROCKET?$"
# 53 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"

# 54 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff::
# 55 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET took off!\n"
# 56 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We can go out safely again!\l"
# 57 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That's great!$"

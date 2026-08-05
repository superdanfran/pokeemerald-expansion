# 1 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_OnTransition::
# 8 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
# 9 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney, MSGBOX_NPC
# 20 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_EventScript_Lass::
# 23 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets, MSGBOX_NPC
# 24 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls, MSGBOX_NPC
# 28 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney::
# 31 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET will do anything for\n"
# 32 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "the sake of money!\p"
# 33 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There is no job too dirty, no deed\n"
# 34 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "too heinous, no crime too wicked!$"
# 35 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 36 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets::
# 37 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I saw CUBONE's mother trying to\n"
# 38 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "escape from TEAM ROCKET.\p"
# 39 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "She was killed trying to get away…$"
# 40 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 41 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls::
# 42 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You know how the CUBONE species\n"
# 43 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "wears skulls, right?\p"
# 44 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "People will pay a lot for one.$"

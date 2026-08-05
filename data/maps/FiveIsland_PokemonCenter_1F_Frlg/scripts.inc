# 1 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_OnTransition::
# 8 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
# 9 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_Chef::
# 19 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
# 20 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 23 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
# 24 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal::
# 27 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm on my way to prepare a meal\n"
# 28 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "for a certain high-society person.$"
# 29 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon::
# 31 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You're on a quest to catch every\n"
# 32 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "single kind of POKéMON?\p"
# 33 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…How incredible. Please tell me if\n"
# 34 "data/maps/FiveIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "you catch a strong one!$"

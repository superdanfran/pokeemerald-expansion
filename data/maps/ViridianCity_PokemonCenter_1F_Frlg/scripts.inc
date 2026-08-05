# 1 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
# 9 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Boy::
# 19 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
# 20 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
# 24 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
# 28 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC::
# 31 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Please feel free to use that PC in\n"
# 32 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "the corner.\p"
# 33 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The receptionist told me so.\n"
# 34 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's so kind of her!$"
# 35 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 36 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown::
# 37 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a POKéMON CENTER in every\n"
# 38 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "town ahead.\p"
# 39 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "They charge no money, so don't\n"
# 40 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "be shy about healing POKéMON.$"
# 41 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"

# 42 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons::
# 43 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON CENTERS heal your tired,\n"
# 44 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "hurt, or fainted POKéMON.\p"
# 45 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "They make all POKéMON completely\n"
# 46 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "healthy.$"

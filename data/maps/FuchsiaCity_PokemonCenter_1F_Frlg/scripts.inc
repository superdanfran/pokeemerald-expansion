# 1 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
# 9 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_EventScript_Man::
# 19 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon, MSGBOX_NPC
# 20 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 23 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian, MSGBOX_NPC
# 24 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex, MSGBOX_NPC
# 28 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon::
# 31 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You can't become a good TRAINER\n"
# 32 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "with just one strong POKéMON.\p"
# 33 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But raising many POKéMON evenly\n"
# 34 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "is no easy task, either.$"
# 35 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 36 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian::
# 37 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a narrow trail west of\n"
# 38 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "VIRIDIAN CITY.\p"
# 39 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It goes to the POKéMON LEAGUE HQ.\n"
# 40 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The HQ governs all TRAINERS.$"
# 41 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 42 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex::
# 43 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you're working on a POKéDEX,\n"
# 44 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "visit the SAFARI ZONE.\p"
# 45 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "All sorts of rare POKéMON breed\n"
# 46 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "there.$"

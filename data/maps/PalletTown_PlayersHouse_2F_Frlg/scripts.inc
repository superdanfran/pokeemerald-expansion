# 1 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_Frlg_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
# 4 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_OnWarp
# 5 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 7 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_OnTransition::
# 8 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_EventScript_SetRespawn
# 9 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	end
# 10 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 11 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
# 12 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 13 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	return
# 14 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 15 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_OnWarp::
# 16 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_FirstWarpIn
# 17 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.2byte 0
# 18 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 19 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_FirstWarpIn::
# 20 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 21 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
# 22 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	end
# 23 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 24 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_NES::
# 25 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PlayedWithNES, MSGBOX_SIGN
# 26 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	end
# 27 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 28 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_Sign::
# 29 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
# 30 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	end
# 31 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 32 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_Text_PlayedWithNES::
# 33 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER} played with the NES.\p"
# 34 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "…Okay!\n"
# 35 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's time to go!$"
# 36 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 37 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_Text_PressLRForHelp::
# 38 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's a posted notice…\p"
# 39 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "If you're confused, ask for HELP!\n"
# 40 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Press the L or R Button!$"

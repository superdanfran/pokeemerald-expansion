# 1 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_EventScript_CooltrainerF::
# 6 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	lock
# 7 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_House1_EventScript_CooltrainerFGhostGone
# 9 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_RocketsKilledCubonesMother
# 10 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
# 11 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	end
# 12 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 13 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_EventScript_CooltrainerFGhostGone::
# 14 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_GhostOfPokemonTowerIsGone
# 15 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
# 16 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	end
# 17 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 18 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_EventScript_Cubone::
# 19 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	lock
# 20 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	waitse
# 22 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 23 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_Cubone
# 24 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	waitmoncry
# 25 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	release
# 26 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	end
# 27 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 28 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_Text_Cubone::
# 29 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "CUBONE: Kyarugoo!$"
# 30 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 31 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_Text_RocketsKilledCubonesMother::
# 32 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "Those horrible ROCKETS!\n"
# 33 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "They deserve no mercy!\p"
# 34 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "That poor CUBONE's mother…\p"
# 35 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "It was killed trying to escape from\n"
# 36 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "TEAM ROCKET.$"
# 37 "data/maps/LavenderTown_House1_Frlg/scripts.pory"

# 38 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
LavenderTown_House1_Text_GhostOfPokemonTowerIsGone::
# 39 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "The ghost of POKéMON TOWER is\n"
# 40 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "gone!\p"
# 41 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "Someone must have soothed its\n"
# 42 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "restless spirit!$"

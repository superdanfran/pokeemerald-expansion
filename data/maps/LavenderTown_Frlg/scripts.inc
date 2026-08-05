# 1 "data/maps/LavenderTown_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
# 4 "data/maps/LavenderTown_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/LavenderTown_Frlg/scripts.pory"

# 6 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_OnTransition::
# 7 "data/maps/LavenderTown_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_LAVENDER_TOWN
# 8 "data/maps/LavenderTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 9 "data/maps/LavenderTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_SS_ANNE_RIVAL
# 10 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 11 "data/maps/LavenderTown_Frlg/scripts.pory"

# 12 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_LittleGirl::
# 13 "data/maps/LavenderTown_Frlg/scripts.pory"
	lock
# 14 "data/maps/LavenderTown_Frlg/scripts.pory"
	faceplayer
# 15 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_YESNO
# 16 "data/maps/LavenderTown_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LavenderTown_EventScript_LittleGirlBelieve
# 17 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_JustImaginingWhiteHand
# 18 "data/maps/LavenderTown_Frlg/scripts.pory"
	release
# 19 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 20 "data/maps/LavenderTown_Frlg/scripts.pory"

# 21 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_LittleGirlBelieve::
# 22 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_SoThereAreBelievers
# 23 "data/maps/LavenderTown_Frlg/scripts.pory"
	release
# 24 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 25 "data/maps/LavenderTown_Frlg/scripts.pory"

# 26 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_WorkerM::
# 27 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_TownKnownAsMonGraveSite, MSGBOX_NPC
# 28 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 29 "data/maps/LavenderTown_Frlg/scripts.pory"

# 30 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_Boy::
# 31 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_GhostsAppearedInTower, MSGBOX_NPC
# 32 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 33 "data/maps/LavenderTown_Frlg/scripts.pory"

# 34 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_TownSign::
# 35 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_TownSign, MSGBOX_SIGN
# 36 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 37 "data/maps/LavenderTown_Frlg/scripts.pory"

# 38 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_SilphScopeNotice::
# 39 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_SilphScopeNotice, MSGBOX_SIGN
# 40 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 41 "data/maps/LavenderTown_Frlg/scripts.pory"

# 42 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_VolunteerHouseSign::
# 43 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_VolunteerPokemonHouse, MSGBOX_SIGN
# 44 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 45 "data/maps/LavenderTown_Frlg/scripts.pory"

# 46 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_PokemonTowerSign::
# 47 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_PokemonTowerSign, MSGBOX_SIGN
# 48 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 49 "data/maps/LavenderTown_Frlg/scripts.pory"

# 50 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_DoYouBelieveInGhosts::
# 51 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Do you believe in ghosts?$"
# 52 "data/maps/LavenderTown_Frlg/scripts.pory"

# 53 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_SoThereAreBelievers::
# 54 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Really?\n"
# 55 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "So there are believers…$"
# 56 "data/maps/LavenderTown_Frlg/scripts.pory"

# 57 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_JustImaginingWhiteHand::
# 58 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Hahaha, I guess not.\p"
# 59 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "That white hand on your shoulder…\n"
# 60 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "I'm just imagining it.$"
# 61 "data/maps/LavenderTown_Frlg/scripts.pory"

# 62 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_TownKnownAsMonGraveSite::
# 63 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "This town is known as the grave\n"
# 64 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "site of POKéMON.\p"
# 65 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Memorial services are held in\n"
# 66 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON TOWER.$"
# 67 "data/maps/LavenderTown_Frlg/scripts.pory"

# 68 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_GhostsAppearedInTower::
# 69 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Ghosts appeared in POKéMON TOWER.\p"
# 70 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "I think they're the spirits of\n"
# 71 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON that the ROCKETS killed.$"
# 72 "data/maps/LavenderTown_Frlg/scripts.pory"

# 73 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_TownSign::
# 74 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "LAVENDER TOWN\n"
# 75 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "The Noble Purple Town$"
# 76 "data/maps/LavenderTown_Frlg/scripts.pory"

# 77 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_SilphScopeNotice::
# 78 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "New SILPH SCOPE!\n"
# 79 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Make the Invisible Plain to See!\p"
# 80 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "SILPH CO.$"
# 81 "data/maps/LavenderTown_Frlg/scripts.pory"

# 82 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_VolunteerPokemonHouse::
# 83 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "LAVENDER VOLUNTEER\n"
# 84 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON HOUSE$"
# 85 "data/maps/LavenderTown_Frlg/scripts.pory"

# 86 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_PokemonTowerSign::
# 87 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON TOWER\n"
# 88 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Becalm the Spirits of POKéMON$"

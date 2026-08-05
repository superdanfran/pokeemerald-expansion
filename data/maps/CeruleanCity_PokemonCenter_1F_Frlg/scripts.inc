# 1 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 9 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
# 20 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
# 23 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
# 24 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 28 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 1
# 30 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
# 31 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 32 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Lass::
# 35 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
# 36 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 37 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 38 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons::
# 39 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That BILL!\p"
# 40 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I heard that he'll do whatever it\n"
# 41 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "takes to get rare POKéMON.\p"
# 42 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "He's not above doing all sorts\n"
# 43 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "of things, I've heard.$"
# 44 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac::
# 46 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you heard about BILL?\p"
# 47 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Everyone calls him a POKéMANIAC!\p"
# 48 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I think people are just jealous of\n"
# 49 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL, though.\p"
# 50 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Who wouldn't want to boast about\n"
# 51 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "their POKéMON?$"
# 52 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 53 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons::
# 54 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL has lots of POKéMON!\n"
# 55 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "He collects rare ones, too!$"
# 56 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 57 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs::
# 58 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Why don't you go upstairs and try\n"
# 59 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "trading POKéMON with your friends?\p"
# 60 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You could get a lot more variety\n"
# 61 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "by trading.\p"
# 62 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The POKéMON you get in trades grow\n"
# 63 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "quickly, too.$"

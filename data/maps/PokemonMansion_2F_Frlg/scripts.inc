# 1 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 2 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_Frlg_MapScripts::
# 3 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
# 4 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 6 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_OnLoad::
# 7 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_2F
# 8 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 9 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 10 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 13 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	releaseall
# 18 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 19 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 20 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_EventScript_DiaryJuly5th::
# 21 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
# 22 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 23 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 24 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_EventScript_DiaryJuly10th::
# 25 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
# 26 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 27 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 28 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_EventScript_Arnie::
# 29 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
# 30 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 32 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 33 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_Text_PressSecretSwitch::
# 34 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "A secret switch!\p"
# 35 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Press it?$"
# 36 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 37 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_Text_WhoWouldnt::
# 38 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Who wouldn't?$"
# 39 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 40 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_Text_NotQuiteYet::
# 41 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Not quite yet!$"
# 42 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 43 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_ArnieIntro::
# 44 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "I can't get out!\n"
# 45 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "This old place is one big puzzle.$"
# 46 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 47 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_ArnieDefeat::
# 48 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 49 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "My bag of loot!$"
# 50 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 51 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_ArniePostBattle::
# 52 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "The switches here open and close\n"
# 53 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "alternating sets of doors.$"
# 54 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 55 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle::
# 56 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Diary: July 5\n"
# 57 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Guyana, South America\p"
# 58 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "A new POKéMON was discovered deep\n"
# 59 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "in the jungle.$"
# 60 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 61 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_ChristenedDiscoveredMonMew::
# 62 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Diary: July 10\n"
# 63 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "We christened the newly discovered\l"
# 64 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "POKéMON, MEW.$"

# 1 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 2 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_Frlg_MapScripts::
# 3 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_3F_OnLoad
# 4 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 6 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_OnLoad::
# 7 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_3F
# 8 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 9 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 10 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 13 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	releaseall
# 18 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 19 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 20 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_EventScript_DiaryFeb6th::
# 21 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_MewGaveBirthToMewtwo, MSGBOX_SIGN
# 22 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 23 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 24 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_EventScript_Simon::
# 25 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_SIMON, PokemonMansion_1F_Text_SimonIntro, PokemonMansion_1F_Text_SimonDefeat
# 26 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 28 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 29 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_EventScript_Braydon::
# 30 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BRAYDON, PokemonMansion_1F_Text_BraydonIntro, PokemonMansion_1F_Text_BraydonDefeat
# 31 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_BraydonPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 33 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 34 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_SimonIntro::
# 35 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "This place is, like, huge!$"
# 36 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 37 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_SimonDefeat::
# 38 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Ayah!$"
# 39 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 40 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_SimonPostBattle::
# 41 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "I wonder where my partner went.$"
# 42 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 43 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_BraydonIntro::
# 44 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "My mentor once lived here.$"
# 45 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 46 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_BraydonDefeat::
# 47 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Whew!\n"
# 48 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Overwhelming!$"
# 49 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 50 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_BraydonPostBattle::
# 51 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "So, you're stuck?\n"
# 52 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Try jumping off over there!$"
# 53 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 54 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_MewGaveBirthToMewtwo::
# 55 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Diary: Feb. 6\n"
# 56 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "MEW gave birth.\p"
# 57 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "We named the newborn MEWTWO.$"

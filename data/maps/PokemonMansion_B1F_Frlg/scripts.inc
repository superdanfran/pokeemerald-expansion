# 1 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 2 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Frlg_MapScripts::
# 3 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_B1F_OnLoad
# 4 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 6 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_OnLoad::
# 7 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_B1F
# 8 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 9 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 10 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 13 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	releaseall
# 18 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 19 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 20 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_EventScript_DiarySep1st::
# 21 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful, MSGBOX_SIGN
# 22 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 23 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 24 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_EventScript_Lewis::
# 25 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_LEWIS, PokemonMansion_B1F_Text_LewisIntro, PokemonMansion_B1F_Text_LewisDefeat
# 26 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 28 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 29 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_EventScript_Ivan::
# 30 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_IVAN, PokemonMansion_B1F_Text_IvanIntro, PokemonMansion_B1F_Text_IvanDefeat
# 31 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 33 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 34 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_LewisIntro::
# 35 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Uh-oh…\n"
# 36 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Where am I now?$"
# 37 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 38 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_LewisDefeat::
# 39 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Awooh!$"
# 40 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 41 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_LewisPostBattle::
# 42 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "You can find stuff lying around.\n"
# 43 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "The residents must've left them.$"
# 44 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 45 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_IvanIntro::
# 46 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "This place is ideal for a lab.\n"
# 47 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Look at all this space.$"
# 48 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 49 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_IvanDefeat::
# 50 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "What was that for?$"
# 51 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 52 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_IvanPostBattle::
# 53 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "I like it here.\n"
# 54 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "It's conducive to my studies.$"
# 55 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 56 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful::
# 57 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Diary: Sept. 1\n"
# 58 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "MEWTWO is far too powerful.\p"
# 59 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "We have failed to curb its vicious\n"
# 60 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "tendencies…$"

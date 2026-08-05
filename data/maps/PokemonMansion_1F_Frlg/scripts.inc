# 1 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 2 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Frlg_MapScripts::
# 3 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_1F_OnLoad
# 4 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_1F_OnTransition
# 5 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 7 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_OnLoad::
# 8 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_1F
# 9 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 11 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_OnTransition::
# 12 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_MANSION_1F
# 13 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 15 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_EventScript_Statue::
# 16 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	lockall
# 17 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 18 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 19 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 20 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 21 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	waitse
# 22 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	releaseall
# 23 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 24 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 25 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_EventScript_Ted::
# 26 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TED, PokemonMansion_1F_Text_TedIntro, PokemonMansion_1F_Text_TedDefeat
# 27 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_TedPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 30 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_EventScript_Johnson::
# 31 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOHNSON, PokemonMansion_1F_Text_JohnsonIntro, PokemonMansion_1F_Text_JohnsonDefeat
# 32 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 34 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 35 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_TedIntro::
# 36 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Who are you?\n"
# 37 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "There shouldn't be anyone here.$"
# 38 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 39 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_TedDefeat::
# 40 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Ouch!$"
# 41 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 42 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_TedPostBattle::
# 43 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "A key? I don't know what you're\n"
# 44 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "talking about.$"
# 45 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 46 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_JohnsonIntro::
# 47 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "W-w-waah! You startled me!\n"
# 48 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I thought you were a ghost.$"
# 49 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 50 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_JohnsonDefeat::
# 51 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Tch!\n"
# 52 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I can't get any wins.$"
# 53 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 54 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_JohnsonPostBattle::
# 55 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I was exploring here by myself,\n"
# 56 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "but I feel spooked.\p"
# 57 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I ought to go soon.$"

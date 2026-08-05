# 1 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 5 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_MarowakGhost::
# 6 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	lockall
# 7 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MON
# 8 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_BeGoneIntruders
# 9 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	setwildbattle SPECIES_MAROWAK, 30
# 10 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	special StartMarowakBattle
# 11 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitstate
# 12 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PokemonTower_6F_EventScript_DefeatedMarowakGhost  @ VAR_RESULT set by CB2_EndMarowakBattle
# 13 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonTower_6F_Movement_ForcePlayerUp
# 14 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	releaseall
# 16 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 17 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 18 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_DefeatedMarowakGhost::
# 19 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	message PokemonTower_6F_Text_GhostWasCubonesMother
# 20 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmessage
# 21 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitse
# 22 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
# 23 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitbuttonpress
# 24 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmoncry
# 25 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_MothersSpiritWasCalmed
# 26 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_6F, 1
# 27 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	releaseall
# 28 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 29 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 30 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Movement_ForcePlayerUp::
# 31 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	walk_up
# 32 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	step_end
# 33 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 34 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_Angelica::
# 35 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_ANGELICA, PokemonTower_6F_Text_AngelicaIntro, PokemonTower_6F_Text_AngelicaDefeat
# 36 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 38 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 39 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_Emilia::
# 40 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_EMILIA, PokemonTower_6F_Text_EmiliaIntro, PokemonTower_6F_Text_EmiliaDefeat
# 41 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_EmiliaPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 43 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 44 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_Jennifer::
# 45 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JENNIFER, PokemonTower_6F_Text_JenniferIntro, PokemonTower_6F_Text_JenniferDefeat
# 46 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 48 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 49 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_AngelicaIntro::
# 50 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Give…me…\n"
# 51 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "blood…$"
# 52 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 53 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_AngelicaDefeat::
# 54 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Groan!$"
# 55 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 56 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_AngelicaPostBattle::
# 57 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "I feel anemic and weak…$"
# 58 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 59 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_EmiliaIntro::
# 60 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Urff…\n"
# 61 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Kwaah!$"
# 62 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 63 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_EmiliaDefeat::
# 64 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Something fell out!$"
# 65 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 66 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_EmiliaPostBattle::
# 67 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "My hair didn't fall out!\n"
# 68 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "It was a malevolent spirit!$"
# 69 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 70 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_JenniferIntro::
# 71 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Ke…ke…ke…\n"
# 72 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "ke…ke…ke!$"
# 73 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 74 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_JenniferDefeat::
# 75 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Keee!$"
# 76 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 77 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_JenniferPostBattle::
# 78 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "What's going on here?$"
# 79 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 80 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_BeGoneIntruders::
# 81 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Be gone…\n"
# 82 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Intruders…$"
# 83 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 84 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_GhostWasCubonesMother::
# 85 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "The ghost was the restless spirit\n"
# 86 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "of CUBONE's mother!$"
# 87 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 88 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_MothersSpiritWasCalmed::
# 89 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "The mother's spirit was calmed.\p"
# 90 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "It departed to the afterlife…$"

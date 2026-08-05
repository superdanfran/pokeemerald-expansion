# 1 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 5 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Channeler::
# 6 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_RestHereInPurifiedSpace, MSGBOX_NPC
# 7 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 8 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 9 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_PurifiedZone::
# 10 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	lockall
# 11 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	fadescreen FADE_TO_WHITE
# 12 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	special HealPlayerParty
# 13 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 14 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed
# 15 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	releaseall
# 17 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 18 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 19 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_ExitPurifiedZone::
# 20 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	lockall
# 21 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 22 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	releaseall
# 23 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 24 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 25 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Tammy::
# 26 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TAMMY, PokemonTower_5F_Text_TammyIntro, PokemonTower_5F_Text_TammyDefeat
# 27 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 29 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 30 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Ruth::
# 31 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_RUTH, PokemonTower_5F_Text_RuthIntro, PokemonTower_5F_Text_RuthDefeat
# 32 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_RuthPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 34 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 35 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Karina::
# 36 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_KARINA, PokemonTower_5F_Text_KarinaIntro, PokemonTower_5F_Text_KarinaDefeat
# 37 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_KarinaPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 39 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 40 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Janae::
# 41 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JANAE, PokemonTower_5F_Text_JanaeIntro, PokemonTower_5F_Text_JanaeDefeat
# 42 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_JanaePostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 44 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 45 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_RestHereInPurifiedSpace::
# 46 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Come, child!\n"
# 47 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I have purified this space.\l"
# 48 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "You can rest here.$"
# 49 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 50 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_TammyIntro::
# 51 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Give…me…\n"
# 52 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "your…all…$"
# 53 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 54 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_TammyDefeat::
# 55 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Gasp!$"
# 56 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 57 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_TammyPostBattle::
# 58 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I was under possession.$"
# 59 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 60 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_RuthIntro::
# 61 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "You…shall…\n"
# 62 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "join…us…$"
# 63 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 64 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_RuthDefeat::
# 65 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "What a nightmare!$"
# 66 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 67 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_RuthPostBattle::
# 68 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I was possessed.$"
# 69 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 70 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_KarinaIntro::
# 71 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Zombies!$"
# 72 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 73 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_KarinaDefeat::
# 74 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Ha?$"
# 75 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 76 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_KarinaPostBattle::
# 77 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I regained my senses.$"
# 78 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 79 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_JanaeIntro::
# 80 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Urgah…\n"
# 81 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Urff…$"
# 82 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 83 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_JanaeDefeat::
# 84 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Whoo!$"
# 85 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 86 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_JanaePostBattle::
# 87 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I fell to evil spirits despite my\n"
# 88 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "training in the mountains…$"
# 89 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 90 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed::
# 91 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Entered the purified and protected\n"
# 92 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "zone.\p"
# 93 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "{PLAYER}'s POKéMON were fully\n"
# 94 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "healed.$"

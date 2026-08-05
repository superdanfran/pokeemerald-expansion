# 1 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
# 4 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_OnLoad::
# 7 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_1, EventScript_Close5FDoor1
# 8 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_2, EventScript_Close5FDoor2
# 9 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_3, EventScript_Close5FDoor3
# 10 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 11 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 12 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_WorkerM::
# 13 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	lock
# 14 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	faceplayer
# 15 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_5F_EventScript_WorkerMRocketsGone
# 16 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_RocketsInUproarAboutIntruder
# 17 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	release
# 18 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 19 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 20 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_WorkerMRocketsGone::
# 21 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_YoureOurHeroThankYou
# 22 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	release
# 23 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 24 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 25 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_PokemonReport1::
# 26 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_PorygonFirstVRMon, MSGBOX_SIGN
# 27 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 28 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 29 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_PokemonReport2::
# 30 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Over350TechniquesConfirmed, MSGBOX_SIGN
# 31 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 32 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 33 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_PokemonReport3::
# 34 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_SomeMonsEvolveWhenTraded, MSGBOX_SIGN
# 35 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 36 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 37 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_FloorSign::
# 38 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_FloorSign, MSGBOX_SIGN
# 39 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 40 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 41 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_Beau::
# 42 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BEAU, SilphCo_5F_Text_BeauIntro, SilphCo_5F_Text_BeauDefeat
# 43 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 45 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 46 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_Grunt1::
# 47 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_28, SilphCo_5F_Text_Grunt1Intro, SilphCo_5F_Text_Grunt1Defeat
# 48 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 50 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 51 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_Grunt2::
# 52 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_29, SilphCo_5F_Text_Grunt2Intro, SilphCo_5F_Text_Grunt2Defeat
# 53 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 55 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 56 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_Dalton::
# 57 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_DALTON, SilphCo_5F_Text_DaltonIntro, SilphCo_5F_Text_DaltonDefeat
# 58 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 60 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 61 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_RocketsInUproarAboutIntruder::
# 62 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "TEAM ROCKET is in an uproar over\n"
# 63 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "some intruder.\p"
# 64 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "That's you, right?$"
# 65 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 66 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_YoureOurHeroThankYou::
# 67 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "TEAM ROCKET took off!\n"
# 68 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "You're our hero! Thank you!$"
# 69 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt1Intro::
# 71 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "I heard a kid was wandering\n"
# 72 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "around.$"
# 73 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 74 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt1Defeat::
# 75 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Boom!$"
# 76 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 77 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt1PostBattle::
# 78 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's not smart to pick a fight with\n"
# 79 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "TEAM ROCKET!$"
# 80 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 81 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_BeauIntro::
# 82 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "We study POKé BALL technology on\n"
# 83 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "this floor.$"
# 84 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 85 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_BeauDefeat::
# 86 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Dang!\n"
# 87 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Blast it!$"
# 88 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 89 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_BeauPostBattle::
# 90 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "We worked on the ultimate POKé\n"
# 91 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "BALL which would catch anything.$"
# 92 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 93 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_DaltonIntro::
# 94 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Whaaat?\p"
# 95 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "There shouldn't be any children\n"
# 96 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "here!$"
# 97 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 98 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_DaltonDefeat::
# 99 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Oh, goodness!$"
# 100 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 101 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_DaltonPostBattle::
# 102 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "You're only on 5F.\n"
# 103 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a long way to my BOSS!$"
# 104 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 105 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt2Intro::
# 106 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Show TEAM ROCKET a little respect!$"
# 107 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 108 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt2Defeat::
# 109 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Cough…\n"
# 110 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Cough…$"
# 111 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 112 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt2PostBattle::
# 113 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Which reminds me.\p"
# 114 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "KOFFING evolves into WEEZING!$"
# 115 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 116 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_PorygonFirstVRMon::
# 117 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
# 118 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "POKéMON LAB created PORYGON,\n"
# 119 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "the first virtual-reality POKéMON.$"
# 120 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 121 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Over350TechniquesConfirmed::
# 122 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
# 123 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Over 350 POKéMON techniques have\n"
# 124 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "been confirmed.$"
# 125 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 126 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_SomeMonsEvolveWhenTraded::
# 127 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
# 128 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Some POKéMON have been confirmed\n"
# 129 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "to evolve when they are traded.$"
# 130 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 131 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_FloorSign::
# 132 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 133 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "5F$"
# 134 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 135 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_RocketBossLookingForStrongMons::
# 136 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Those thugs that took over our\n"
# 137 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "building…\p"
# 138 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Their BOSS said he was looking for\n"
# 139 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "strong POKéMON.\p"
# 140 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "I hope our PRESIDENT managed to\n"
# 141 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "avoid trouble…$"

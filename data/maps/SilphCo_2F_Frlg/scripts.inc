# 1 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
# 4 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_OnLoad::
# 7 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_2F_DOOR_1, EventScript_Close2FDoor1
# 8 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_2F_DOOR_2, EventScript_Close2FDoor2
# 9 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 10 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 11 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_ThunderWaveTutor::
# 12 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto EventScript_ThunderWaveTutor
# 13 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 14 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 15 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_FloorSign::
# 16 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
# 17 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 18 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 19 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_Connor::
# 20 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
# 21 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 23 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 24 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_Jerry::
# 25 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
# 26 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 28 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 29 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_Grunt1::
# 30 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
# 31 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 33 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 34 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_EventScript_Grunt2::
# 35 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
# 36 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	end
# 38 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 39 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_ConnorIntro::
# 40 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Help!\n"
# 41 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I'm a SILPH employee.$"
# 42 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 43 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_ConnorDefeat::
# 44 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "How did you know\n"
# 45 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I was a ROCKET?$"
# 46 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 47 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_ConnorPostBattle::
# 48 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I work for both SILPH and TEAM\n"
# 49 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "ROCKET.$"
# 50 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 51 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_JerryIntro::
# 52 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "It's off-limits here!\n"
# 53 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Go home!$"
# 54 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 55 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_JerryDefeat::
# 56 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "You're good.$"
# 57 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 58 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_JerryPostBattle::
# 59 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Can you solve the maze in here?\n"
# 60 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "It's not easy, I tell you!$"
# 61 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt1Intro::
# 63 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "No kids are allowed in here!$"
# 64 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 65 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt1Defeat::
# 66 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Tough!$"
# 67 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 68 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt1PostBattle::
# 69 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Diamond-shaped tiles are teleport\n"
# 70 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "blocks.\p"
# 71 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "They're transporters for this\n"
# 72 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "high-tech building.$"
# 73 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 74 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt2Intro::
# 75 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Hey, kid!\n"
# 76 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "What are you wandering here for?$"
# 77 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 78 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt2Defeat::
# 79 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I goofed!$"
# 80 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 81 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_Grunt2PostBattle::
# 82 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "SILPH CO. will be associated with\n"
# 83 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "TEAM ROCKET!$"
# 84 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 85 "data/maps/SilphCo_2F_Frlg/scripts.pory"
Text_ThunderWaveTeach::
# 86 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Eeek!\n"
# 87 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "No! Stop! Help!\p"
# 88 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Oh, you're not with TEAM ROCKET.\n"
# 89 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I'm sorry, I thought…\p"
# 90 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Will you forgive me if I teach\n"
# 91 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "you the THUNDER WAVE technique?$"
# 92 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 93 "data/maps/SilphCo_2F_Frlg/scripts.pory"
Text_ThunderWaveDeclined::
# 94 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Oh…\n"
# 95 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "But THUNDER WAVE is convenient…$"
# 96 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 97 "data/maps/SilphCo_2F_Frlg/scripts.pory"
Text_ThunderWaveWhichMon::
# 98 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
# 99 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "THUNDER WAVE?$"
# 100 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 101 "data/maps/SilphCo_2F_Frlg/scripts.pory"
Text_ThunderWaveTaught::
# 102 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "THUNDER WAVE causes paralysis in\n"
# 103 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "the target POKéMON.\p"
# 104 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "A paralyzed POKéMON may be unable\n"
# 105 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "to move in battle.\p"
# 106 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "It's an ELECTRIC-type move, so it\n"
# 107 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "won't work on some POKéMON.$"
# 108 "data/maps/SilphCo_2F_Frlg/scripts.pory"

# 109 "data/maps/SilphCo_2F_Frlg/scripts.pory"
SilphCo_2F_Text_FloorSign::
# 110 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 111 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "2F$"

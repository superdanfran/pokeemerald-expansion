# 1 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_9F_OnLoad
# 4 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_OnLoad::
# 7 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_1, EventScript_Close9FDoor1
# 8 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_2, EventScript_Close9FDoor2
# 9 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_3, EventScript_Close9FDoor3
# 10 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_4, EventScript_Close9FDoor4
# 11 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 12 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 13 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_HealWoman::
# 14 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	lock
# 15 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_9F_EventScript_HealWomanRocketsGone
# 17 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_YouShouldTakeQuickNap
# 18 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	closemessage
# 19 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 20 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_DontGiveUp
# 21 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	release
# 22 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 23 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 24 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_HealWomanRocketsGone::
# 25 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_ThankYouSoMuch
# 26 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	release
# 27 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 28 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 29 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_FloorSign::
# 30 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_FloorSign, MSGBOX_SIGN
# 31 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 32 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 33 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_Ed::
# 34 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_ED, SilphCo_9F_Text_EdIntro, SilphCo_9F_Text_EdDefeat
# 35 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 37 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 38 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_Grunt1::
# 39 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_37, SilphCo_9F_Text_Grunt1Intro, SilphCo_9F_Text_Grunt1Defeat
# 40 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 42 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 43 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_EventScript_Grunt2::
# 44 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_38, SilphCo_9F_Text_Grunt2Intro, SilphCo_9F_Text_Grunt2Defeat
# 45 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	end
# 47 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_YouShouldTakeQuickNap::
# 49 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "You look tired.\n"
# 50 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "You should take a quick nap.$"
# 51 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 52 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_DontGiveUp::
# 53 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Don't give up!$"
# 54 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 55 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_ThankYouSoMuch::
# 56 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Thank you so much.$"
# 57 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 58 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt1Intro::
# 59 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Your POKéMON seem to adore you,\n"
# 60 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "kid!$"
# 61 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt1Defeat::
# 63 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Ghaaah!$"
# 64 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 65 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt1PostBattle::
# 66 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "If I had started as a TRAINER at\n"
# 67 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "your age…$"
# 68 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 69 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_EdIntro::
# 70 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Your POKéMON have weak points!\n"
# 71 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "I can nail them!$"
# 72 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 73 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_EdDefeat::
# 74 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "You hammered me!$"
# 75 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 76 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_EdPostBattle::
# 77 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Exploiting weak spots does work.\n"
# 78 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Think about type advantages.$"
# 79 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 80 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt2Intro::
# 81 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
# 82 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "BROTHERS!$"
# 83 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 84 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt2Defeat::
# 85 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Warg!\n"
# 86 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Brothers, I lost!$"
# 87 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 88 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_Grunt2PostBattle::
# 89 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "My brothers will avenge me!$"
# 90 "data/maps/SilphCo_9F_Frlg/scripts.pory"

# 91 "data/maps/SilphCo_9F_Frlg/scripts.pory"
SilphCo_9F_Text_FloorSign::
# 92 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 93 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "9F$"

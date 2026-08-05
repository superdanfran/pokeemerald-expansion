# 1 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_OnLoad
# 4 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_OnLoad::
# 7 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_4F_DOOR_1, EventScript_Close4FDoor1
# 8 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_4F_DOOR_2, EventScript_Close4FDoor2
# 9 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 10 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 11 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_WorkerM::
# 12 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	lock
# 13 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_4F_EventScript_WorkerMRocketsGone
# 15 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
# 16 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	release
# 17 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 18 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 19 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_WorkerMRocketsGone::
# 20 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_TeamRocketIsGone
# 21 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	release
# 22 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 23 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 24 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_FloorSign::
# 25 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
# 26 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 27 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 28 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_Rodney::
# 29 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
# 30 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 32 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 33 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_Grunt1::
# 34 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
# 35 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 37 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 38 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_Grunt2::
# 39 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
# 40 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 42 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 43 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_CantYouSeeImHiding::
# 44 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Sssh!\n"
# 45 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Can't you see I'm hiding?$"
# 46 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 47 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_TeamRocketIsGone::
# 48 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Huh?\n"
# 49 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "TEAM ROCKET is gone?$"
# 50 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 51 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt1Intro::
# 52 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "TEAM ROCKET has taken control\n"
# 53 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "of SILPH CO.!$"
# 54 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 55 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt1Defeat::
# 56 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Arrgh!$"
# 57 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 58 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt1PostBattle::
# 59 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Fwahahaha!\n"
# 60 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "My BOSS has been after this place!$"
# 61 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_RodneyIntro::
# 63 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "My POKéMON is my loyal servant.$"
# 64 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 65 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_RodneyDefeat::
# 66 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Darn!\n"
# 67 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "You weak POKéMON!$"
# 68 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 69 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_RodneyPostBattle::
# 70 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "The doors are electronically\n"
# 71 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "locked.\p"
# 72 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "It takes a CARD KEY to open the\n"
# 73 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "doors here.$"
# 74 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 75 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt2Intro::
# 76 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Intruder spotted!$"
# 77 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 78 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt2Defeat::
# 79 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Who are you?$"
# 80 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 81 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt2PostBattle::
# 82 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "I better tell the BOSS on 11F!$"
# 83 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 84 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_FloorSign::
# 85 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 86 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "4F$"

# 1 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_8F_OnLoad
# 4 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_OnLoad::
# 7 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_8F_DOOR, EventScript_Close8FDoor
# 8 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 9 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 10 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_WorkerM::
# 11 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	lock
# 12 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_8F_EventScript_WorkerMRocketsGone
# 14 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_WonderIfSilphIsFinished
# 15 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	release
# 16 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 17 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 18 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_WorkerMRocketsGone::
# 19 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_ThanksForSavingUs
# 20 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	release
# 21 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 22 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 23 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_FloorSign::
# 24 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_FloorSign, MSGBOX_SIGN
# 25 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 26 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 27 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_Parker::
# 28 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_PARKER, SilphCo_8F_Text_ParkerIntro, SilphCo_8F_Text_ParkerDefeat
# 29 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 31 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 32 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_Grunt1::
# 33 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_32, SilphCo_8F_Text_Grunt1Intro, SilphCo_8F_Text_Grunt1Defeat
# 34 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 36 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 37 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_Grunt2::
# 38 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_36, SilphCo_8F_Text_Grunt2Intro, SilphCo_8F_Text_Grunt2Defeat
# 39 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 41 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 42 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_WonderIfSilphIsFinished::
# 43 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I wonder if SILPH is finished…$"
# 44 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 45 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ThanksForSavingUs::
# 46 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Thanks for saving us!$"
# 47 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt1Intro::
# 49 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "That's as far as you'll go!$"
# 50 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 51 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt1Defeat::
# 52 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Not enough grit!$"
# 53 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 54 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt1PostBattle::
# 55 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "If you don't turn back…\n"
# 56 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I'll call for backup!$"
# 57 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 58 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ParkerIntro::
# 59 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "You're causing us problems!$"
# 60 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 61 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ParkerDefeat::
# 62 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Huh?\n"
# 63 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I lost?$"
# 64 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 65 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ParkerPostBattle::
# 66 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "So, what do you think of SILPH\n"
# 67 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "BUILDING's maze?$"
# 68 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 69 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt2Intro::
# 70 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
# 71 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "BROTHERS!$"
# 72 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 73 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt2Defeat::
# 74 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Whoo!\n"
# 75 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Oh, Brothers!$"
# 76 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 77 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt2PostBattle::
# 78 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I'll leave you up to my brothers.$"
# 79 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 80 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_FloorSign::
# 81 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 82 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "8F$"
# 83 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 84 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ToRocketBossMonsAreTools::
# 85 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "TEAM ROCKET's BOSS is terribly\n"
# 86 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "cruel!\p"
# 87 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "To him, POKéMON are just tools to\n"
# 88 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "be used.\p"
# 89 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "What will happen if that tyrant\n"
# 90 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "takes over our company…$"

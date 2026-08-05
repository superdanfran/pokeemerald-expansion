# 1 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
# 4 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_OnLoad::
# 7 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_3F_DOOR_1, EventScript_Close3FDoor1
# 8 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_3F_DOOR_2, EventScript_Close3FDoor2
# 9 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 10 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 11 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_WorkerM::
# 12 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	lock
# 13 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_3F_EventScript_WorkerMRocketsGone
# 15 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_WhatAmIToDo
# 16 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	release
# 17 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 18 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 19 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_WorkerMRocketsGone::
# 20 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
# 21 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	release
# 22 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 23 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 24 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_FloorSign::
# 25 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
# 26 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 27 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 28 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_Jose::
# 29 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
# 30 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 32 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 33 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_Grunt::
# 34 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
# 35 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 37 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 38 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_WhatAmIToDo::
# 39 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I work for SILPH CO.\n"
# 40 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "What am I to do?$"
# 41 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 42 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_YouAndYourMonsSavedUs::
# 43 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 44 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "You and your POKéMON saved us!$"
# 45 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 46 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_GruntIntro::
# 47 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "Quit messing with us, kid!$"
# 48 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 49 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_GruntDefeat::
# 50 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I give up!$"
# 51 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 52 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_GruntPostBattle::
# 53 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "A hint? You can open doors with\n"
# 54 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "a CARD KEY!$"
# 55 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 56 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_JoseIntro::
# 57 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I support TEAM ROCKET more than\n"
# 58 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I support SILPH CO.!$"
# 59 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 60 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_JoseDefeat::
# 61 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "You really got me!$"
# 62 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 63 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_JosePostBattle::
# 64 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "Humph…\p"
# 65 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "TEAM ROCKET said that if I helped\n"
# 66 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "them, they'd let me study POKéMON.$"
# 67 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 68 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_FloorSign::
# 69 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 70 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "3F$"

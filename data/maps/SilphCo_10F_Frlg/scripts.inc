# 1 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
# 4 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_OnLoad::
# 7 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_10F_DOOR, EventScript_Close10FDoor
# 8 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 9 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 10 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_WorkerF::
# 11 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	lock
# 12 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_10F_EventScript_WorkerFRocketsGone
# 14 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_WaaaImScared
# 15 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	release
# 16 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 17 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 18 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_WorkerFRocketsGone::
# 19 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
# 20 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	release
# 21 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 22 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 23 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_FloorSign::
# 24 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
# 25 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 26 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 27 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_Travis::
# 28 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
# 29 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 31 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 32 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_Grunt::
# 33 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
# 34 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 36 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 37 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_GruntIntro::
# 38 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Welcome to 10F!\n"
# 39 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "So good of you to join me!$"
# 40 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 41 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_GruntDefeat::
# 42 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "I'm stunned!$"
# 43 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 44 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_GruntPostBattle::
# 45 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Nice try, but the boardroom is up\n"
# 46 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "one more floor.$"
# 47 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_TravisIntro::
# 49 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Enough of your silly games!$"
# 50 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 51 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_TravisDefeat::
# 52 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "No continues left!$"
# 53 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 54 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_TravisPostBattle::
# 55 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Are you satisfied with beating me?\n"
# 56 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Then go on home!$"
# 57 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 58 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_WaaaImScared::
# 59 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Waaaaa!\n"
# 60 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "I'm scared!$"
# 61 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_KeepMeCryingASecret::
# 63 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "About me crying…\n"
# 64 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Please keep it a secret.$"
# 65 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 66 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_FloorSign::
# 67 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 68 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "10F$"

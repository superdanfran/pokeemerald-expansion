# 1 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 2 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Frlg_MapScripts::
# 3 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B1F_OnLoad
# 4 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketHideout_B1F_OnTransition
# 5 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 7 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_OnLoad::
# 8 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	call_if_not_defeated TRAINER_TEAM_ROCKET_GRUNT_12 RocketHideout_B1F_EventScript_SetBarrier
# 9 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 10 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 11 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_OnTransition::
# 12 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F
# 13 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 14 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 15 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt1::
# 16 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_8, RocketHideout_B1F_Text_Grunt1Intro, RocketHideout_B1F_Text_Grunt1Defeat
# 17 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 19 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 20 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt2::
# 21 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_9, RocketHideout_B1F_Text_Grunt2Intro, RocketHideout_B1F_Text_Grunt2Defeat
# 22 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 24 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 25 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt3::
# 26 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_10, RocketHideout_B1F_Text_Grunt3Intro, RocketHideout_B1F_Text_Grunt3Defeat
# 27 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 29 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 30 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt4::
# 31 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_11, RocketHideout_B1F_Text_Grunt4Intro, RocketHideout_B1F_Text_Grunt4Defeat
# 32 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 34 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 35 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_Grunt5::
# 36 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_12, RocketHideout_B1F_Text_Grunt5Intro, RocketHideout_B1F_Text_Grunt5Defeat, RocketHideout_B1F_EventScript_DefeatedGrunt5
# 37 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 39 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 40 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_DefeatedGrunt5::
# 41 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	call RocketHideout_B1F_EventScript_RemoveBarrier
# 42 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 43 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 44 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	waitse
# 45 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	release
# 46 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	end
# 47 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 48 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_SetBarrier::
# 49 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 19, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 50 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 19, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 51 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 20, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 52 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 20, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 53 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 54 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 55 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	return
# 56 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 57 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_EventScript_RemoveBarrier::
# 58 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 19, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 59 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 19, METATILE_SilphCo_HideoutFloor, 0
# 60 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 20, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 61 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 20, METATILE_SilphCo_HideoutFloor, 0
# 62 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 63 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor, 0
# 64 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	return
# 65 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 66 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt1Intro::
# 67 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Who are you?\n"
# 68 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "How did you get here?$"
# 69 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 70 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt1Defeat::
# 71 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Oww!\n"
# 72 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Beaten!$"
# 73 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 74 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt1PostBattle::
# 75 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Blast it… You're dissing TEAM\n"
# 76 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "ROCKET, aren't you?$"
# 77 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 78 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt2Intro::
# 79 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "You broke into TEAM ROCKET's\n"
# 80 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "operation? What nerve!$"
# 81 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 82 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt2Defeat::
# 83 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Boom!$"
# 84 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 85 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt2PostBattle::
# 86 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "You're not going to get away with\n"
# 87 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "this, brat!$"
# 88 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 89 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt3Intro::
# 90 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Intruder alert!$"
# 91 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 92 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt3Defeat::
# 93 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "I can't do it!$"
# 94 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 95 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt3PostBattle::
# 96 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "SILPH SCOPE? Humph!\n"
# 97 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "I don't know where it is.$"
# 98 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 99 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt4Intro::
# 100 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Why did you come here?$"
# 101 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 102 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt4Defeat::
# 103 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "This won't do!$"
# 104 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 105 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt4PostBattle::
# 106 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Okay, I'll talk…\n"
# 107 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Take the elevator to see my BOSS.$"
# 108 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 109 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt5Intro::
# 110 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Are you lost, you little mouse?$"
# 111 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 112 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt5Defeat::
# 113 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Why…?$"
# 114 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"

# 115 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
RocketHideout_B1F_Text_Grunt5PostBattle::
# 116 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Uh-oh, that ruckus somehow opened\n"
# 117 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "the door!$"

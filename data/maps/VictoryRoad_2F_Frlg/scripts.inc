# 1 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 2 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Frlg_MapScripts::
# 3 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
# 4 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 6 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_OnLoad::
# 7 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_SetRockBarrier1
# 8 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_SetRockBarrier2
# 9 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 10 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 11 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier1::
# 12 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 13 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
# 14 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	return
# 15 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 16 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier2::
# 17 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 18 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
# 19 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	return
# 20 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 21 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1::
# 22 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	lockall
# 23 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
# 24 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 25 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 26 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 27 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 28 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	waitse
# 29 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER1
# 30 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 31 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
# 32 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 33 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 34 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
# 35 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
# 36 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 37 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 38 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2::
# 39 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	lockall
# 40 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
# 41 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 42 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 43 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 44 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 45 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	waitse
# 46 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER2
# 47 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 48 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
# 49 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 50 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 51 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
# 52 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
# 53 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 54 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 55 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Dawson::
# 56 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 57 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 59 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 60 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Daisuke::
# 61 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 62 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 64 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 65 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Nelson::
# 66 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 67 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 69 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 70 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Gregory::
# 71 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 72 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 74 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 75 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_EventScript_Vincent::
# 76 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 77 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	end
# 79 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 80 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DawsonIntro::
# 81 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "If you can get through here,\n"
# 82 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "you can go meet the ELITE FOUR.$"
# 83 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 84 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DawsonDefeat::
# 85 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "No!\n"
# 86 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Unbelievable!$"
# 87 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 88 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DawsonPostBattle::
# 89 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I can beat you when it comes to\n"
# 90 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "knowledge about POKéMON!$"
# 91 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 92 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DaisukeIntro::
# 93 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "This here is VICTORY ROAD.\n"
# 94 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "It's the final test for TRAINERS!$"
# 95 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 96 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DaisukeDefeat::
# 97 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Atcho!$"
# 98 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 99 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_DaisukePostBattle::
# 100 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "If you get stuck, try moving some\n"
# 101 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "boulders around.$"
# 102 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 103 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_NelsonIntro::
# 104 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Ah, so you wish to challenge the\n"
# 105 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "ELITE FOUR?$"
# 106 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 107 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_NelsonDefeat::
# 108 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "You got me!$"
# 109 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 110 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_NelsonPostBattle::
# 111 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "{RIVAL} also came through here.$"
# 112 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 113 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_VincentIntro::
# 114 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Come on!\n"
# 115 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I'll whip you!$"
# 116 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 117 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_VincentDefeat::
# 118 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I got whipped!$"
# 119 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 120 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_VincentPostBattle::
# 121 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "You earned the right to be on\n"
# 122 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "VICTORY ROAD…$"
# 123 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 124 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_GregoryIntro::
# 125 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Is VICTORY ROAD too tough?$"
# 126 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 127 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_GregoryDefeat::
# 128 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Well done!$"
# 129 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 130 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_GregoryPostBattle::
# 131 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Many TRAINERS give up their\n"
# 132 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "challenge here and go home.$"
# 133 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"

# 134 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
@ Unused, old text for Moltres
# 135 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
VictoryRoad_2F_Text_Gyaoo::
# 136 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "ギヤーオ！$"

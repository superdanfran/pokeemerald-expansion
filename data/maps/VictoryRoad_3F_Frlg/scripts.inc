# 1 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 2 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Frlg_MapScripts::
# 3 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_3F_OnLoad
# 4 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 6 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_OnLoad::
# 7 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_SetRockBarrier
# 8 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 9 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 10 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_SetRockBarrier::
# 11 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_RockBarrier_Top, 1
# 12 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_RockBarrier_Bottom, 1
# 13 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	return
# 14 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 15 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitch::
# 16 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	lockall
# 17 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed
# 18 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_Floor_Ledge_Top, 0
# 19 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_Floor_Ledge_Bottom, 0
# 20 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 21 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	special DrawWholeMapView
# 22 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	waitse
# 23 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER1
# 24 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER2
# 25 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 26 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	releaseall
# 27 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 28 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 29 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed::
# 30 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	releaseall
# 31 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 32 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 33 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_George::
# 34 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GEORGE, VictoryRoad_3F_Text_GeorgeIntro, VictoryRoad_3F_Text_GeorgeDefeat
# 35 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 37 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 38 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Colby::
# 39 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_COLBY, VictoryRoad_3F_Text_ColbyIntro, VictoryRoad_3F_Text_ColbyDefeat
# 40 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_ColbyPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 42 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 43 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Caroline::
# 44 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_CAROLINE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
# 45 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 47 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 48 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Alexa::
# 49 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ALEXA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 50 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 52 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 53 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Ray::
# 54 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_RayIntro, VictoryRoad_3F_Text_RayDefeat, VictoryRoad_3F_Text_RayNotEnoughMons
# 55 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 57 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 58 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_EventScript_Tyra::
# 59 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_TyraIntro, VictoryRoad_3F_Text_TyraDefeat, VictoryRoad_3F_Text_TyraNotEnoughMons
# 60 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	msgbox VictoryRoad_3F_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	end
# 62 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 63 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
Text_DoubleEdgeTeach::
# 64 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "You should be proud of yourself,\n"
# 65 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "having battled your way through\l"
# 66 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "VICTORY ROAD so courageously.\p"
# 67 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "In recognition of your feat,\n"
# 68 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'll teach you DOUBLE-EDGE.\p"
# 69 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Would you like me to teach that\n"
# 70 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "technique?$"
# 71 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 72 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
Text_DoubleEdgeDeclined::
# 73 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'll teach you the technique\n"
# 74 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "anytime.$"
# 75 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 76 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
Text_DoubleEdgeWhichMon::
# 77 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
# 78 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "DOUBLE-EDGE?$"
# 79 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 80 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
Text_DoubleEdgeTaught::
# 81 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Keep that drive going for the\n"
# 82 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "POKéMON LEAGUE!\p"
# 83 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Take a run at them and knock 'em\n"
# 84 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "out!$"
# 85 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 86 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_GeorgeIntro::
# 87 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I heard rumors of a child prodigy.$"
# 88 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 89 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_GeorgeDefeat::
# 90 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "The rumors were true!$"
# 91 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 92 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_GeorgePostBattle::
# 93 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "So, it was you who beat GIOVANNI\n"
# 94 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "of TEAM ROCKET?$"
# 95 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 96 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_AlexaIntro::
# 97 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TRAINERS live to seek stronger\n"
# 98 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "opponents.$"
# 99 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 100 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_AlexaDefeat::
# 101 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Oh!\n"
# 102 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "So strong!$"
# 103 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 104 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_AlexaPostBattle::
# 105 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "By fighting tough battles, you get\n"
# 106 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "stronger.$"
# 107 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 108 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_CarolineIntro::
# 109 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'll show you just how good you\n"
# 110 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "are. Not!$"
# 111 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 112 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_CarolineDefeat::
# 113 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I'm furious!$"
# 114 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 115 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_CarolinePostBattle::
# 116 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "You showed me just how good\n"
# 117 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I was…$"
# 118 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 119 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_ColbyIntro::
# 120 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Only the chosen can pass here!$"
# 121 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 122 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_ColbyDefeat::
# 123 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "I don't believe it!$"
# 124 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 125 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_ColbyPostBattle::
# 126 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "All TRAINERS here are headed to\n"
# 127 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "the POKéMON LEAGUE.\p"
# 128 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Don't let down your guard.$"
# 129 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 130 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_RayIntro::
# 131 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Together, the two of us are\n"
# 132 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "destined for greatness!$"
# 133 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 134 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_RayDefeat::
# 135 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Ludicrous!\n"
# 136 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "This can't be!$"
# 137 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 138 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_RayPostBattle::
# 139 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: You've beaten us.\n"
# 140 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "Greatness remains elusive…$"
# 141 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 142 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_RayNotEnoughMons::
# 143 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "RAY: Together, the two of us are\n"
# 144 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "striving for the pinnacle.\p"
# 145 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "We need you to bring two POKéMON\n"
# 146 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "into battle with us.$"
# 147 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 148 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_TyraIntro::
# 149 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: We're trying to become\n"
# 150 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "champions together.$"
# 151 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 152 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_TyraDefeat::
# 153 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: Oh, but…$"
# 154 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 155 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_TyraPostBattle::
# 156 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: You've taught me that power\n"
# 157 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "can be infinite in shape and form.$"
# 158 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"

# 159 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
VictoryRoad_3F_Text_TyraNotEnoughMons::
# 160 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "TYRA: You can't battle with us if\n"
# 161 "data/maps/VictoryRoad_3F_Frlg/scripts.pory"
	.string "you have only one POKéMON.$"

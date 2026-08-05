# 1 "data/maps/Route16_Frlg/scripts.pory"

# 2 "data/maps/Route16_Frlg/scripts.pory"
Route16_Frlg_MapScripts::
# 3 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route16_OnResume
# 4 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_OnTransition
# 5 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route16_OnWarp
# 6 "data/maps/Route16_Frlg/scripts.pory"
	.byte 0
# 7 "data/maps/Route16_Frlg/scripts.pory"

# 8 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnResume::
# 9 "data/maps/Route16_Frlg/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route16_EventScript_RemoveSnorlax
# 10 "data/maps/Route16_Frlg/scripts.pory"
	end
# 11 "data/maps/Route16_Frlg/scripts.pory"

# 12 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_RemoveSnorlax::
# 13 "data/maps/Route16_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 14 "data/maps/Route16_Frlg/scripts.pory"
	return
# 15 "data/maps/Route16_Frlg/scripts.pory"

# 16 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnTransition::
# 17 "data/maps/Route16_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route16_OnTransitionCyclingRoad
# 18 "data/maps/Route16_Frlg/scripts.pory"
	end
# 19 "data/maps/Route16_Frlg/scripts.pory"

# 20 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnTransitionCyclingRoad::
# 21 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_SYS_ON_CYCLING_ROAD
# 22 "data/maps/Route16_Frlg/scripts.pory"
	return
# 23 "data/maps/Route16_Frlg/scripts.pory"

# 24 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnWarp::
# 25 "data/maps/Route16_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route16_OnWarpCyclingRoad
# 26 "data/maps/Route16_Frlg/scripts.pory"
	.2byte 0
# 27 "data/maps/Route16_Frlg/scripts.pory"

# 28 "data/maps/Route16_Frlg/scripts.pory"
Route16_OnWarpCyclingRoad::
# 29 "data/maps/Route16_Frlg/scripts.pory"
	special ForcePlayerOntoBike
# 30 "data/maps/Route16_Frlg/scripts.pory"
	end
# 31 "data/maps/Route16_Frlg/scripts.pory"

# 32 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_Snorlax::
# 33 "data/maps/Route16_Frlg/scripts.pory"
	lock
# 34 "data/maps/Route16_Frlg/scripts.pory"
	faceplayer
# 35 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route16_EventScript_SnorlaxNoPokeFlute
# 36 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
# 37 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route16_EventScript_DontUsePokeFlute
# 38 "data/maps/Route16_Frlg/scripts.pory"
	call EventScript_AwakenSnorlax
# 39 "data/maps/Route16_Frlg/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 40 "data/maps/Route16_Frlg/scripts.pory"
	waitse
# 41 "data/maps/Route16_Frlg/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 42 "data/maps/Route16_Frlg/scripts.pory"
	delay 40
# 43 "data/maps/Route16_Frlg/scripts.pory"
	waitmoncry
# 44 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_HIDE_ROUTE_16_SNORLAX
# 45 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 46 "data/maps/Route16_Frlg/scripts.pory"
	dowildbattle
# 47 "data/maps/Route16_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 48 "data/maps/Route16_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 49 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route16_EventScript_FoughtSnorlax
# 50 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route16_EventScript_FoughtSnorlax
# 51 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route16_EventScript_FoughtSnorlax
# 52 "data/maps/Route16_Frlg/scripts.pory"
	release
# 53 "data/maps/Route16_Frlg/scripts.pory"
	end
# 54 "data/maps/Route16_Frlg/scripts.pory"

# 55 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_DontUsePokeFlute::
# 56 "data/maps/Route16_Frlg/scripts.pory"
	release
# 57 "data/maps/Route16_Frlg/scripts.pory"
	end
# 58 "data/maps/Route16_Frlg/scripts.pory"

# 59 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_FoughtSnorlax::
# 60 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Text_SnorlaxReturnedToMountains
# 61 "data/maps/Route16_Frlg/scripts.pory"
	release
# 62 "data/maps/Route16_Frlg/scripts.pory"
	end
# 63 "data/maps/Route16_Frlg/scripts.pory"

# 64 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_SnorlaxNoPokeFlute::
# 65 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_MonSprawledOutInSlumber
# 66 "data/maps/Route16_Frlg/scripts.pory"
	release
# 67 "data/maps/Route16_Frlg/scripts.pory"
	end
# 68 "data/maps/Route16_Frlg/scripts.pory"

# 69 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_CyclingRoadSign::
# 70 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_CyclingRoadSign, MSGBOX_SIGN
# 71 "data/maps/Route16_Frlg/scripts.pory"
	end
# 72 "data/maps/Route16_Frlg/scripts.pory"

# 73 "data/maps/Route16_Frlg/scripts.pory"
Route16_EventScript_RouteSign::
# 74 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_RouteSign, MSGBOX_SIGN
# 75 "data/maps/Route16_Frlg/scripts.pory"
	end
# 76 "data/maps/Route16_Frlg/scripts.pory"

# 77 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LaoIntro::
# 78 "data/maps/Route16_Frlg/scripts.pory"
	.string "What do you want?$"
# 79 "data/maps/Route16_Frlg/scripts.pory"

# 80 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LaoDefeat::
# 81 "data/maps/Route16_Frlg/scripts.pory"
	.string "Don't you dare laugh!$"
# 82 "data/maps/Route16_Frlg/scripts.pory"

# 83 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LaoPostBattle::
# 84 "data/maps/Route16_Frlg/scripts.pory"
	.string "We like just hanging here.\n"
# 85 "data/maps/Route16_Frlg/scripts.pory"
	.string "What's it to you?$"
# 86 "data/maps/Route16_Frlg/scripts.pory"

# 87 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_KojiIntro::
# 88 "data/maps/Route16_Frlg/scripts.pory"
	.string "Nice BIKE!\n"
# 89 "data/maps/Route16_Frlg/scripts.pory"
	.string "Hand it over!$"
# 90 "data/maps/Route16_Frlg/scripts.pory"

# 91 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_KojiDefeat::
# 92 "data/maps/Route16_Frlg/scripts.pory"
	.string "Knockout!$"
# 93 "data/maps/Route16_Frlg/scripts.pory"

# 94 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_KojiPostBattle::
# 95 "data/maps/Route16_Frlg/scripts.pory"
	.string "Forget it, who needs your BIKE!$"
# 96 "data/maps/Route16_Frlg/scripts.pory"

# 97 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LukeIntro::
# 98 "data/maps/Route16_Frlg/scripts.pory"
	.string "Come out and play, little mouse!$"
# 99 "data/maps/Route16_Frlg/scripts.pory"

# 100 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LukeDefeat::
# 101 "data/maps/Route16_Frlg/scripts.pory"
	.string "You little rat!$"
# 102 "data/maps/Route16_Frlg/scripts.pory"

# 103 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LukePostBattle::
# 104 "data/maps/Route16_Frlg/scripts.pory"
	.string "I hate losing!\n"
# 105 "data/maps/Route16_Frlg/scripts.pory"
	.string "Get out of my face!$"
# 106 "data/maps/Route16_Frlg/scripts.pory"

# 107 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_HideoIntro::
# 108 "data/maps/Route16_Frlg/scripts.pory"
	.string "Hey, you just bumped me!$"
# 109 "data/maps/Route16_Frlg/scripts.pory"

# 110 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_HideoDefeat::
# 111 "data/maps/Route16_Frlg/scripts.pory"
	.string "Kaboom!$"
# 112 "data/maps/Route16_Frlg/scripts.pory"

# 113 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_HideoPostBattle::
# 114 "data/maps/Route16_Frlg/scripts.pory"
	.string "We'll always be hanging around here\n"
# 115 "data/maps/Route16_Frlg/scripts.pory"
	.string "even if you don't like it.\p"
# 116 "data/maps/Route16_Frlg/scripts.pory"
	.string "You can detour to VERMILION from\n"
# 117 "data/maps/Route16_Frlg/scripts.pory"
	.string "FUCHSIA going along the coast.$"
# 118 "data/maps/Route16_Frlg/scripts.pory"

# 119 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_CamronIntro::
# 120 "data/maps/Route16_Frlg/scripts.pory"
	.string "I'm feeling hungry and mean!\n"
# 121 "data/maps/Route16_Frlg/scripts.pory"
	.string "I need a punching bag!$"
# 122 "data/maps/Route16_Frlg/scripts.pory"

# 123 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_CamronDefeat::
# 124 "data/maps/Route16_Frlg/scripts.pory"
	.string "Bad, bad, bad!$"
# 125 "data/maps/Route16_Frlg/scripts.pory"

# 126 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_CamronPostBattle::
# 127 "data/maps/Route16_Frlg/scripts.pory"
	.string "If I'm going to have POKéMON, they\n"
# 128 "data/maps/Route16_Frlg/scripts.pory"
	.string "may as well be ferocious.\p"
# 129 "data/maps/Route16_Frlg/scripts.pory"
	.string "I'd use them to leave my enemies\n"
# 130 "data/maps/Route16_Frlg/scripts.pory"
	.string "in tatters.$"
# 131 "data/maps/Route16_Frlg/scripts.pory"

# 132 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_RubenIntro::
# 133 "data/maps/Route16_Frlg/scripts.pory"
	.string "Hey, there!\n"
# 134 "data/maps/Route16_Frlg/scripts.pory"
	.string "Let's have ourselves a good time!$"
# 135 "data/maps/Route16_Frlg/scripts.pory"

# 136 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_RubenDefeat::
# 137 "data/maps/Route16_Frlg/scripts.pory"
	.string "Don't make me mad!$"
# 138 "data/maps/Route16_Frlg/scripts.pory"

# 139 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_RubenPostBattle::
# 140 "data/maps/Route16_Frlg/scripts.pory"
	.string "I get my kicks by harassing people\n"
# 141 "data/maps/Route16_Frlg/scripts.pory"
	.string "with my stinking POKéMON.\p"
# 142 "data/maps/Route16_Frlg/scripts.pory"
	.string "They're great for startling people.\n"
# 143 "data/maps/Route16_Frlg/scripts.pory"
	.string "And, they bite, too.$"
# 144 "data/maps/Route16_Frlg/scripts.pory"

# 145 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_MonSprawledOutInSlumber::
# 146 "data/maps/Route16_Frlg/scripts.pory"
	.string "A POKéMON is sprawled out in\n"
# 147 "data/maps/Route16_Frlg/scripts.pory"
	.string "a deep and comfortable slumber.$"
# 148 "data/maps/Route16_Frlg/scripts.pory"

# 149 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_CyclingRoadSign::
# 150 "data/maps/Route16_Frlg/scripts.pory"
	.string "Enjoy the slope!\n"
# 151 "data/maps/Route16_Frlg/scripts.pory"
	.string "CYCLING ROAD$"
# 152 "data/maps/Route16_Frlg/scripts.pory"

# 153 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_RouteSign::
# 154 "data/maps/Route16_Frlg/scripts.pory"
	.string "ROUTE 16\n"
# 155 "data/maps/Route16_Frlg/scripts.pory"
	.string "CELADON CITY - FUCHSIA CITY$"
# 156 "data/maps/Route16_Frlg/scripts.pory"

# 157 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_JedIntro::
# 158 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED: Our love knows no bounds.\n"
# 159 "data/maps/Route16_Frlg/scripts.pory"
	.string "We're in love and we show it!$"
# 160 "data/maps/Route16_Frlg/scripts.pory"

# 161 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_JedDefeat::
# 162 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED: Oh, no!\n"
# 163 "data/maps/Route16_Frlg/scripts.pory"
	.string "My love has seen me as a loser!$"
# 164 "data/maps/Route16_Frlg/scripts.pory"

# 165 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_JedPostBattle::
# 166 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED: Listen, LEA.\n"
# 167 "data/maps/Route16_Frlg/scripts.pory"
	.string "You need to focus less on me.$"
# 168 "data/maps/Route16_Frlg/scripts.pory"

# 169 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_JedNotEnoughMons::
# 170 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED: You have just one POKéMON?\n"
# 171 "data/maps/Route16_Frlg/scripts.pory"
	.string "Is there no love in your heart?$"
# 172 "data/maps/Route16_Frlg/scripts.pory"

# 173 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LeaIntro::
# 174 "data/maps/Route16_Frlg/scripts.pory"
	.string "LEA: Sometimes, the intensity of\n"
# 175 "data/maps/Route16_Frlg/scripts.pory"
	.string "our love scares me.$"
# 176 "data/maps/Route16_Frlg/scripts.pory"

# 177 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LeaDefeat::
# 178 "data/maps/Route16_Frlg/scripts.pory"
	.string "LEA: Ohh! But JED looks cool\n"
# 179 "data/maps/Route16_Frlg/scripts.pory"
	.string "even in a loss!$"
# 180 "data/maps/Route16_Frlg/scripts.pory"

# 181 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LeaPostBattle::
# 182 "data/maps/Route16_Frlg/scripts.pory"
	.string "LEA: Ehehe, I'm sorry.\n"
# 183 "data/maps/Route16_Frlg/scripts.pory"
	.string "JED is so cool.$"
# 184 "data/maps/Route16_Frlg/scripts.pory"

# 185 "data/maps/Route16_Frlg/scripts.pory"
Route16_Text_LeaNotEnoughMons::
# 186 "data/maps/Route16_Frlg/scripts.pory"
	.string "LEA: Oh, you don't have two\n"
# 187 "data/maps/Route16_Frlg/scripts.pory"
	.string "POKéMON with you?\p"
# 188 "data/maps/Route16_Frlg/scripts.pory"
	.string "Doesn't it feel lonely for you or\n"
# 189 "data/maps/Route16_Frlg/scripts.pory"
	.string "your POKéMON?$"

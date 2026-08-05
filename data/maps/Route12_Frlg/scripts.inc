# 1 "data/maps/Route12_Frlg/scripts.pory"

# 2 "data/maps/Route12_Frlg/scripts.pory"
Route12_Frlg_MapScripts::
# 3 "data/maps/Route12_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route12_OnResume
# 4 "data/maps/Route12_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/Route12_Frlg/scripts.pory"

# 6 "data/maps/Route12_Frlg/scripts.pory"
Route12_OnResume::
# 7 "data/maps/Route12_Frlg/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route12_EventScript_TryRemoveSnorlax
# 8 "data/maps/Route12_Frlg/scripts.pory"
	end
# 9 "data/maps/Route12_Frlg/scripts.pory"

# 10 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_TryRemoveSnorlax::
# 11 "data/maps/Route12_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 12 "data/maps/Route12_Frlg/scripts.pory"
	return
# 13 "data/maps/Route12_Frlg/scripts.pory"

# 14 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax::
# 15 "data/maps/Route12_Frlg/scripts.pory"
	lock
# 16 "data/maps/Route12_Frlg/scripts.pory"
	faceplayer
# 17 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route12_EventScript_SnorlaxNoPokeFlute
# 18 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
# 19 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route12_EventScript_DontUsePokeFlute
# 20 "data/maps/Route12_Frlg/scripts.pory"
	call EventScript_AwakenSnorlax
# 21 "data/maps/Route12_Frlg/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 22 "data/maps/Route12_Frlg/scripts.pory"
	waitse
# 23 "data/maps/Route12_Frlg/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 24 "data/maps/Route12_Frlg/scripts.pory"
	delay 40
# 25 "data/maps/Route12_Frlg/scripts.pory"
	waitmoncry
# 26 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_HIDE_ROUTE_12_SNORLAX
# 27 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_WOKE_UP_ROUTE_12_SNORLAX
# 29 "data/maps/Route12_Frlg/scripts.pory"
	dowildbattle
# 30 "data/maps/Route12_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 31 "data/maps/Route12_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route12_EventScript_FoughtSnorlax
# 33 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route12_EventScript_FoughtSnorlax
# 34 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route12_EventScript_FoughtSnorlax
# 35 "data/maps/Route12_Frlg/scripts.pory"
	release
# 36 "data/maps/Route12_Frlg/scripts.pory"
	end
# 37 "data/maps/Route12_Frlg/scripts.pory"

# 38 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_DontUsePokeFlute::
# 39 "data/maps/Route12_Frlg/scripts.pory"
	release
# 40 "data/maps/Route12_Frlg/scripts.pory"
	end
# 41 "data/maps/Route12_Frlg/scripts.pory"

# 42 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_FoughtSnorlax::
# 43 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Text_SnorlaxReturnedToMountains
# 44 "data/maps/Route12_Frlg/scripts.pory"
	release
# 45 "data/maps/Route12_Frlg/scripts.pory"
	end
# 46 "data/maps/Route12_Frlg/scripts.pory"

# 47 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_SnorlaxNoPokeFlute::
# 48 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_MonSprawledOutInSlumber
# 49 "data/maps/Route12_Frlg/scripts.pory"
	release
# 50 "data/maps/Route12_Frlg/scripts.pory"
	end
# 51 "data/maps/Route12_Frlg/scripts.pory"

# 52 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_RouteSign::
# 53 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_RouteSign, MSGBOX_SIGN
# 54 "data/maps/Route12_Frlg/scripts.pory"
	end
# 55 "data/maps/Route12_Frlg/scripts.pory"

# 56 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_FishingSign::
# 57 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_SportfishingArea, MSGBOX_SIGN
# 58 "data/maps/Route12_Frlg/scripts.pory"
	end
# 59 "data/maps/Route12_Frlg/scripts.pory"

# 60 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_MonSprawledOutInSlumber::
# 61 "data/maps/Route12_Frlg/scripts.pory"
	.string "A POKéMON is sprawled out in\n"
# 62 "data/maps/Route12_Frlg/scripts.pory"
	.string "a deep and comfortable slumber.$"
# 63 "data/maps/Route12_Frlg/scripts.pory"

# 64 "data/maps/Route12_Frlg/scripts.pory"
Text_SnorlaxWokeUp::
# 65 "data/maps/Route12_Frlg/scripts.pory"
	.string "SNORLAX woke up!\p"
# 66 "data/maps/Route12_Frlg/scripts.pory"
	.string "It attacked in a grumpy rage!$"
# 67 "data/maps/Route12_Frlg/scripts.pory"

# 68 "data/maps/Route12_Frlg/scripts.pory"
Text_SnorlaxReturnedToMountains::
# 69 "data/maps/Route12_Frlg/scripts.pory"
	.string "SNORLAX calmed down.\n"
# 70 "data/maps/Route12_Frlg/scripts.pory"
	.string "It gave a huge yawn…\l"
# 71 "data/maps/Route12_Frlg/scripts.pory"
	.string "And returned to the mountains.$"
# 72 "data/maps/Route12_Frlg/scripts.pory"

# 73 "data/maps/Route12_Frlg/scripts.pory"
Text_WantToUsePokeFlute::
# 74 "data/maps/Route12_Frlg/scripts.pory"
	.string "Want to use the POKé FLUTE?$"
# 75 "data/maps/Route12_Frlg/scripts.pory"

# 76 "data/maps/Route12_Frlg/scripts.pory"
Text_PlayedPokeFlute::
# 77 "data/maps/Route12_Frlg/scripts.pory"
	.string "{PLAYER} played the POKé FLUTE.$"
# 78 "data/maps/Route12_Frlg/scripts.pory"

# 79 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_NedIntro::
# 80 "data/maps/Route12_Frlg/scripts.pory"
	.string "Yeah!\n"
# 81 "data/maps/Route12_Frlg/scripts.pory"
	.string "I got a bite here!$"
# 82 "data/maps/Route12_Frlg/scripts.pory"

# 83 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_NedDefeat::
# 84 "data/maps/Route12_Frlg/scripts.pory"
	.string "Tch!\n"
# 85 "data/maps/Route12_Frlg/scripts.pory"
	.string "Just a small fry…$"
# 86 "data/maps/Route12_Frlg/scripts.pory"

# 87 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_NedPostBattle::
# 88 "data/maps/Route12_Frlg/scripts.pory"
	.string "Hang on!\n"
# 89 "data/maps/Route12_Frlg/scripts.pory"
	.string "My line's snagged!$"
# 90 "data/maps/Route12_Frlg/scripts.pory"

# 91 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ChipIntro::
# 92 "data/maps/Route12_Frlg/scripts.pory"
	.string "Be patient.\n"
# 93 "data/maps/Route12_Frlg/scripts.pory"
	.string "Fishing is a waiting game.$"
# 94 "data/maps/Route12_Frlg/scripts.pory"

# 95 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ChipDefeat::
# 96 "data/maps/Route12_Frlg/scripts.pory"
	.string "That one got away!$"
# 97 "data/maps/Route12_Frlg/scripts.pory"

# 98 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ChipPostBattle::
# 99 "data/maps/Route12_Frlg/scripts.pory"
	.string "With a better ROD, I could catch\n"
# 100 "data/maps/Route12_Frlg/scripts.pory"
	.string "better POKéMON…$"
# 101 "data/maps/Route12_Frlg/scripts.pory"

# 102 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JustinIntro::
# 103 "data/maps/Route12_Frlg/scripts.pory"
	.string "I'm searching for a MOON STONE.\n"
# 104 "data/maps/Route12_Frlg/scripts.pory"
	.string "Have you found one?$"
# 105 "data/maps/Route12_Frlg/scripts.pory"

# 106 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JustinDefeat::
# 107 "data/maps/Route12_Frlg/scripts.pory"
	.string "Oww!$"
# 108 "data/maps/Route12_Frlg/scripts.pory"

# 109 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JustinPostBattle::
# 110 "data/maps/Route12_Frlg/scripts.pory"
	.string "I could have made my POKéMON\n"
# 111 "data/maps/Route12_Frlg/scripts.pory"
	.string "evolve with a MOON STONE.\p"
# 112 "data/maps/Route12_Frlg/scripts.pory"
	.string "I would have won then, I bet.$"
# 113 "data/maps/Route12_Frlg/scripts.pory"

# 114 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_LucaIntro::
# 115 "data/maps/Route12_Frlg/scripts.pory"
	.string "Electricity is my specialty.\p"
# 116 "data/maps/Route12_Frlg/scripts.pory"
	.string "I don't know a thing about POKéMON\n"
# 117 "data/maps/Route12_Frlg/scripts.pory"
	.string "of the sea, though.$"
# 118 "data/maps/Route12_Frlg/scripts.pory"

# 119 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_LucaDefeat::
# 120 "data/maps/Route12_Frlg/scripts.pory"
	.string "Unplugged!$"
# 121 "data/maps/Route12_Frlg/scripts.pory"

# 122 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_LucaPostBattle::
# 123 "data/maps/Route12_Frlg/scripts.pory"
	.string "Water conducts electricity, so you\n"
# 124 "data/maps/Route12_Frlg/scripts.pory"
	.string "should zap sea POKéMON.$"
# 125 "data/maps/Route12_Frlg/scripts.pory"

# 126 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_HankIntro::
# 127 "data/maps/Route12_Frlg/scripts.pory"
	.string "The FISHING FOOL versus POKéMON\n"
# 128 "data/maps/Route12_Frlg/scripts.pory"
	.string "KID!$"
# 129 "data/maps/Route12_Frlg/scripts.pory"

# 130 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_HankDefeat::
# 131 "data/maps/Route12_Frlg/scripts.pory"
	.string "Touch too much!$"
# 132 "data/maps/Route12_Frlg/scripts.pory"

# 133 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_HankPostBattle::
# 134 "data/maps/Route12_Frlg/scripts.pory"
	.string "I guess you get to be good at\n"
# 135 "data/maps/Route12_Frlg/scripts.pory"
	.string "what you like.\p"
# 136 "data/maps/Route12_Frlg/scripts.pory"
	.string "Well, you beat me at POKéMON,\n"
# 137 "data/maps/Route12_Frlg/scripts.pory"
	.string "but you can't top me at fishing.$"
# 138 "data/maps/Route12_Frlg/scripts.pory"

# 139 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ElliotIntro::
# 140 "data/maps/Route12_Frlg/scripts.pory"
	.string "I love fishing, don't get me wrong.\p"
# 141 "data/maps/Route12_Frlg/scripts.pory"
	.string "But it'd be best if I also had more\n"
# 142 "data/maps/Route12_Frlg/scripts.pory"
	.string "work.$"
# 143 "data/maps/Route12_Frlg/scripts.pory"

# 144 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ElliotDefeat::
# 145 "data/maps/Route12_Frlg/scripts.pory"
	.string "It's not easy…$"
# 146 "data/maps/Route12_Frlg/scripts.pory"

# 147 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ElliotPostBattle::
# 148 "data/maps/Route12_Frlg/scripts.pory"
	.string "It's all right.\n"
# 149 "data/maps/Route12_Frlg/scripts.pory"
	.string "Losing doesn't bug me anymore.$"
# 150 "data/maps/Route12_Frlg/scripts.pory"

# 151 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_AndrewIntro::
# 152 "data/maps/Route12_Frlg/scripts.pory"
	.string "What's catching?\p"
# 153 "data/maps/Route12_Frlg/scripts.pory"
	.string "You never know what you could\n"
# 154 "data/maps/Route12_Frlg/scripts.pory"
	.string "catch!$"
# 155 "data/maps/Route12_Frlg/scripts.pory"

# 156 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_AndrewDefeat::
# 157 "data/maps/Route12_Frlg/scripts.pory"
	.string "Lost it!$"
# 158 "data/maps/Route12_Frlg/scripts.pory"

# 159 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_AndrewPostBattle::
# 160 "data/maps/Route12_Frlg/scripts.pory"
	.string "What, MAGIKARP?\p"
# 161 "data/maps/Route12_Frlg/scripts.pory"
	.string "I catch them all the time, sure.\n"
# 162 "data/maps/Route12_Frlg/scripts.pory"
	.string "But, boy are they wimpy.$"
# 163 "data/maps/Route12_Frlg/scripts.pory"

# 164 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_RouteSign::
# 165 "data/maps/Route12_Frlg/scripts.pory"
	.string "ROUTE 12 \n"
# 166 "data/maps/Route12_Frlg/scripts.pory"
	.string "North to LAVENDER$"
# 167 "data/maps/Route12_Frlg/scripts.pory"

# 168 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_SportfishingArea::
# 169 "data/maps/Route12_Frlg/scripts.pory"
	.string "SPORTFISHING AREA$"
# 170 "data/maps/Route12_Frlg/scripts.pory"

# 171 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JesIntro::
# 172 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: If I win, I'm going to\n"
# 173 "data/maps/Route12_Frlg/scripts.pory"
	.string "propose to GIA.$"
# 174 "data/maps/Route12_Frlg/scripts.pory"

# 175 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JesDefeat::
# 176 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: Oh, please, why couldn't you\n"
# 177 "data/maps/Route12_Frlg/scripts.pory"
	.string "let us win?$"
# 178 "data/maps/Route12_Frlg/scripts.pory"

# 179 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JesPostBattle::
# 180 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: Oh, GIA, forgive me,\n"
# 181 "data/maps/Route12_Frlg/scripts.pory"
	.string "my love!$"
# 182 "data/maps/Route12_Frlg/scripts.pory"

# 183 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JesNotEnoughMons::
# 184 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: GIA and I, we'll be\n"
# 185 "data/maps/Route12_Frlg/scripts.pory"
	.string "together forever.\p"
# 186 "data/maps/Route12_Frlg/scripts.pory"
	.string "We won't battle unless you have\n"
# 187 "data/maps/Route12_Frlg/scripts.pory"
	.string "two POKéMON of your own.$"
# 188 "data/maps/Route12_Frlg/scripts.pory"

# 189 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_GiaIntro::
# 190 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: Hey, JES…\p"
# 191 "data/maps/Route12_Frlg/scripts.pory"
	.string "If we win, I'll marry you!$"
# 192 "data/maps/Route12_Frlg/scripts.pory"

# 193 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_GiaDefeat::
# 194 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: Oh, but why?$"
# 195 "data/maps/Route12_Frlg/scripts.pory"

# 196 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_GiaPostBattle::
# 197 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: JES, you silly!\n"
# 198 "data/maps/Route12_Frlg/scripts.pory"
	.string "You ruined this!$"
# 199 "data/maps/Route12_Frlg/scripts.pory"

# 200 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_GiaNotEnoughMons::
# 201 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: I can't bear to battle\n"
# 202 "data/maps/Route12_Frlg/scripts.pory"
	.string "without my JES!\p"
# 203 "data/maps/Route12_Frlg/scripts.pory"
	.string "Don't you have one more POKéMON?$"

# 1 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Frlg_MapScripts::
# 3 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PatternBush_OnTransition
# 4 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 6 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_OnTransition::
# 7 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
# 8 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 9 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	call_if_ge VAR_TEMP_1, 50, SixIsland_PatternBush_EventScript_SetEscapeRightExit
# 10 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	call_if_le VAR_TEMP_1, 49, SixIsland_PatternBush_EventScript_SetEscapeLeftExit
# 11 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 12 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 13 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_SetEscapeRightExit::
# 14 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 64, 10
# 15 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	return
# 16 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 17 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_SetEscapeLeftExit::
# 18 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 45, 10
# 19 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	return
# 20 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 21 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Bethany::
# 22 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_BETHANY, SixIsland_PatternBush_Text_BethanyIntro, SixIsland_PatternBush_Text_BethanyDefeat
# 23 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 25 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 26 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Allison::
# 27 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_ALLISON, SixIsland_PatternBush_Text_AllisonIntro, SixIsland_PatternBush_Text_AllisonDefeat
# 28 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 30 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 31 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Garret::
# 32 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_GARRET, SixIsland_PatternBush_Text_GarretIntro, SixIsland_PatternBush_Text_GarretDefeat
# 33 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 35 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 36 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Jonah::
# 37 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JONAH, SixIsland_PatternBush_Text_JonahIntro, SixIsland_PatternBush_Text_JonahDefeat
# 38 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 40 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 41 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Vance::
# 42 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_VANCE, SixIsland_PatternBush_Text_VanceIntro, SixIsland_PatternBush_Text_VanceDefeat
# 43 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_VancePostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 45 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 46 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Nash::
# 47 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_NASH, SixIsland_PatternBush_Text_NashIntro, SixIsland_PatternBush_Text_NashDefeat
# 48 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_NashPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 50 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 51 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Cordell::
# 52 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CORDELL, SixIsland_PatternBush_Text_CordellIntro, SixIsland_PatternBush_Text_CordellDefeat
# 53 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_CordellPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 55 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 56 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Dalia::
# 57 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_DALIA, SixIsland_PatternBush_Text_DaliaIntro, SixIsland_PatternBush_Text_DaliaDefeat
# 58 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_DaliaPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 60 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 61 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Joana::
# 62 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_JOANA, SixIsland_PatternBush_Text_JoanaIntro, SixIsland_PatternBush_Text_JoanaDefeat
# 63 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JoanaPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 65 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 66 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Riley::
# 67 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_RILEY, SixIsland_PatternBush_Text_RileyIntro, SixIsland_PatternBush_Text_RileyDefeat
# 68 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 70 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 71 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Marcy::
# 72 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_MARCY, SixIsland_PatternBush_Text_MarcyIntro, SixIsland_PatternBush_Text_MarcyDefeat
# 73 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_MarcyPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 75 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 76 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_EventScript_Layton::
# 77 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LAYTON, SixIsland_PatternBush_Text_LaytonIntro, SixIsland_PatternBush_Text_LaytonDefeat
# 78 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	end
# 80 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 81 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_BethanyIntro::
# 82 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm curious, how do you raise your\n"
# 83 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "POKéMON?$"
# 84 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 85 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_BethanyDefeat::
# 86 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "You raise your POKéMON with a\n"
# 87 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "whole lot of love!$"
# 88 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 89 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_BethanyPostBattle::
# 90 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "In the same way your mother raised\n"
# 91 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "you full of love, you should raise\l"
# 92 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "your POKéMON.$"
# 93 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 94 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_AllisonIntro::
# 95 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm working to preserve the natural\n"
# 96 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "ecology of POKéMON here.$"
# 97 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 98 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_AllisonDefeat::
# 99 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Oh, for someone so young, you are\n"
# 100 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "tremendous!$"
# 101 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 102 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_AllisonPostBattle::
# 103 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm not saying that you shouldn't\n"
# 104 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "catch POKéMON.\p"
# 105 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I just want people to raise their\n"
# 106 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "POKéMON responsibly.$"
# 107 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 108 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_GarretIntro::
# 109 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I caught a BUG POKéMON that lives\n"
# 110 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "only around here!$"
# 111 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 112 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_GarretDefeat::
# 113 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Heheh…\n"
# 114 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Isn't my POKéMON awesome?$"
# 115 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 116 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_GarretPostBattle::
# 117 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "There's a girl near the BUSH who\n"
# 118 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "measures HERACROSS for TRAINERS.$"
# 119 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 120 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JonahIntro::
# 121 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "You know, it just doesn't feel right\n"
# 122 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "if I don't use BUG POKéMON.$"
# 123 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 124 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JonahDefeat::
# 125 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "It's okay, losing is a fun part of\n"
# 126 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "POKéMON's appeal, too.$"
# 127 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 128 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JonahPostBattle::
# 129 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "By the way, “appeal” is a weird\n"
# 130 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "word, if you think about it.\p"
# 131 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Like, is it like an orange peel?\n"
# 132 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Or like a ringing bell?$"
# 133 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 134 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_VanceIntro::
# 135 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Yeah, yeah, yeah!\n"
# 136 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Look at all the BUG POKéMON!$"
# 137 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 138 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_VanceDefeat::
# 139 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I got beat while I was still busy\n"
# 140 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "celebrating!$"
# 141 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 142 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_VancePostBattle::
# 143 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to bring my little brother\n"
# 144 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "here next time.$"
# 145 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 146 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_NashIntro::
# 147 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Look, look! There are funny\n"
# 148 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "patterns on the ground.$"
# 149 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 150 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_NashDefeat::
# 151 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Super awesome!$"
# 152 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 153 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_NashPostBattle::
# 154 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "The funny patterns on the ground…\p"
# 155 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "They look like the patterns on my\n"
# 156 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "grandpa's clothes.$"
# 157 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 158 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_CordellIntro::
# 159 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I bet you think I'm just some guy,\n"
# 160 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "don't you, eh?$"
# 161 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 162 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_CordellDefeat::
# 163 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I bet you think I'm weak,\n"
# 164 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "don't you, eh?$"
# 165 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 166 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_CordellPostBattle::
# 167 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Ayup, you townies come around all\n"
# 168 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "so dandy with a hat that flashy…\p"
# 169 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "How about giving me that?$"
# 170 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 171 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_DaliaIntro::
# 172 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Take a deep breath.\n"
# 173 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Isn't the air delicious?$"
# 174 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 175 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_DaliaDefeat::
# 176 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "If you'd like, I can teach you how\n"
# 177 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "to breathe properly.$"
# 178 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 179 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_DaliaPostBattle::
# 180 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "First, exhale.\n"
# 181 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Blow everything out.\p"
# 182 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "When you can't exhale anymore,\n"
# 183 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "inhale the clean air!\p"
# 184 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Isn't it refreshing?$"
# 185 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 186 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JoanaIntro::
# 187 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I love BUG POKéMON.\n"
# 188 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "That's why I'm here all the time.\p"
# 189 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Am I the only girl like that?$"
# 190 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 191 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JoanaDefeat::
# 192 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I lost, but I'm still laughing.\n"
# 193 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Am I the only girl like that?$"
# 194 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 195 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_JoanaPostBattle::
# 196 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to keep on collecting\n"
# 197 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "BUG POKéMON.\p"
# 198 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Am I the only girl like that?$"
# 199 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 200 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_RileyIntro::
# 201 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "This is a good spot.\n"
# 202 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'll pitch my tent here.$"
# 203 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 204 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_RileyDefeat::
# 205 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Wimped out…$"
# 206 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 207 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_RileyPostBattle::
# 208 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to observe the night sky\n"
# 209 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "here.$"
# 210 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 211 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_MarcyIntro::
# 212 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Oh, yuck!\n"
# 213 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I think a bug stung me!$"
# 214 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 215 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_MarcyDefeat::
# 216 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "It wasn't a bug.\n"
# 217 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I cut my shin on some grass.$"
# 218 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 219 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_MarcyPostBattle::
# 220 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "A little cut like that…\n"
# 221 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "A little spit's enough to cure it!$"
# 222 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 223 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_LaytonIntro::
# 224 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Have you noticed something odd\n"
# 225 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "about these parts?$"
# 226 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 227 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_LaytonDefeat::
# 228 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Have you taken a good look around\n"
# 229 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "your feet?$"
# 230 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"

# 231 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
SixIsland_PatternBush_Text_LaytonPostBattle::
# 232 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "There are places here in PATTERN\n"
# 233 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "BUSH where grass won't grow.\p"
# 234 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "What could be the cause of such\n"
# 235 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "a phenomenon?$"

# 1 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Erika::
# 6 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 8 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
# 9 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 4
# 10 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 11 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	release
# 12 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 13 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 14 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_DefeatedErika::
# 15 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 1
# 16 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
# 17 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_ERIKA
# 18 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE04_GET
# 19 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 4
# 20 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
# 21 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 22 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 23 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GiveTM19::
# 24 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
# 25 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM19
# 26 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_EventScript_NoRoomForTM19
# 27 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
# 28 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM19_FROM_ERIKA
# 29 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainTM19
# 30 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	release
# 31 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 32 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 33 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_NoRoomForTM19::
# 34 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
# 35 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	release
# 36 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 37 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 38 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Kay::
# 39 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
# 40 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 42 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 43 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Lisa::
# 44 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
# 45 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 2
# 46 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 48 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 49 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Tina::
# 50 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
# 51 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 53 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 54 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Bridget::
# 55 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
# 56 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 58 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 59 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Tamia::
# 60 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
# 61 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 3
# 62 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 64 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 65 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Lori::
# 66 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
# 67 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 69 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 70 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Mary::
# 71 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
# 72 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 74 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 75 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GymStatue::
# 76 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	lockall
# 77 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
# 78 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatue
# 79 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	releaseall
# 80 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 81 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 82 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GymStatuePostVictory::
# 83 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
# 84 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	releaseall
# 85 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 86 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 87 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaIntro::
# 88 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Hello…\n"
# 89 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Lovely weather, isn't it?\l"
# 90 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "It's so pleasant…\p"
# 91 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Oh, dear…\n"
# 92 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must have dozed off. Welcome.\p"
# 93 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My name is ERIKA.\n"
# 94 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I am the LEADER of CELADON GYM.\p"
# 95 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I am a student of the art of\n"
# 96 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "flower arranging.\p"
# 97 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My POKéMON are solely of the\n"
# 98 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "GRASS type.\p"
# 99 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Oh, I'm sorry, I had no idea that\n"
# 100 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "you wished to challenge me.\p"
# 101 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Very well, but I shall not lose.{PLAY_BGM MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 102 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 103 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaDefeat::
# 104 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 105 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I concede defeat.\l"
# 106 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You are remarkably strong.\p"
# 107 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must confer on you the\n"
# 108 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "RAINBOWBADGE.$"
# 109 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 110 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaPostBattle::
# 111 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You are cataloging POKéMON?\n"
# 112 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must say I'm impressed.\p"
# 113 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I would never collect POKéMON if\n"
# 114 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "they were unattractive.$"
# 115 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 116 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis::
# 117 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "The RAINBOWBADGE will make\n"
# 118 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 50 obey.\p"
# 119 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "It also allows POKéMON to use\n"
# 120 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "STRENGTH in and out of battle.\p"
# 121 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Please also take this with you.$"
# 122 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 123 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ReceivedTM19FromErika::
# 124 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM19\n"
# 125 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "from ERIKA.$"
# 126 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 127 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ExplainTM19::
# 128 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "TM19 contains GIGA DRAIN.\p"
# 129 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Half the damage it inflicts is\n"
# 130 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "drained to heal your POKéMON.\p"
# 131 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Wouldn't you agree that it's a\n"
# 132 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "wonderful move?$"
# 133 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 134 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ShouldMakeRoomForThis::
# 135 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You should make room for this.$"
# 136 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 137 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayIntro::
# 138 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I should tell you about this GYM.\p"
# 139 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Only real ladies are allowed in\n"
# 140 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "here!$"
# 141 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 142 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayDefeat::
# 143 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You're too rough!$"
# 144 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 145 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayPostBattle::
# 146 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Bleaah!\n"
# 147 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I hope ERIKA wipes you out!$"
# 148 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 149 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetIntro::
# 150 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, welcome.\n"
# 151 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I was getting bored.$"
# 152 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 153 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetDefeat::
# 154 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My makeup!$"
# 155 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 156 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetPostBattle::
# 157 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "GRASS-type POKéMON are tough\n"
# 158 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "against the WATER type.\p"
# 159 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "They also have an edge on ROCK-\n"
# 160 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "and GROUND-type POKéMON.$"
# 161 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 162 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaIntro::
# 163 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Weren't you peeking in here\n"
# 164 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "earlier?$"
# 165 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 166 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaDefeat::
# 167 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You're an eye-opener!$"
# 168 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 169 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaPostBattle::
# 170 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, you were looking at ERIKA…\n"
# 171 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You weren't looking at me…$"
# 172 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 173 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaIntro::
# 174 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Look, look!\n"
# 175 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "See my POKéMON!\p"
# 176 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I like the GRASS type.\n"
# 177 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I like how they're easy to raise.$"
# 178 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 179 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaDefeat::
# 180 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "No!$"
# 181 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 182 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaPostBattle::
# 183 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "We only use GRASS-type POKéMON at\n"
# 184 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "our GYM.\p"
# 185 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Why? We also use them for making\n"
# 186 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "flower arrangements!$"
# 187 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 188 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaIntro::
# 189 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, hey!\p"
# 190 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "We don't like BUG- or FIRE-type\n"
# 191 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "POKéMON in here!$"
# 192 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 193 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaDefeat::
# 194 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 195 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You!$"
# 196 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 197 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaPostBattle::
# 198 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Our LEADER ERIKA might be quiet,\n"
# 199 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "but she's famous around here.$"
# 200 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 201 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriIntro::
# 202 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Pleased to meet you.\n"
# 203 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My hobby is POKéMON training.$"
# 204 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 205 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriDefeat::
# 206 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 207 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Splendid!$"
# 208 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 209 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriPostBattle::
# 210 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I have a blind date coming up.\n"
# 211 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I have to learn to be polite,\l"
# 212 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "especially if I have to battle.$"
# 213 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 214 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryIntro::
# 215 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Welcome to CELADON GYM!\p"
# 216 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You'd better not underestimate\n"
# 217 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "the nice ladies here.$"
# 218 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 219 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryDefeat::
# 220 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 221 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Beaten!$"
# 222 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 223 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryPostBattle::
# 224 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I didn't bring my best POKéMON.\n"
# 225 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Wait until next time!$"
# 226 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 227 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_GymStatue::
# 228 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "CELADON POKéMON GYM\n"
# 229 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "LEADER: ERIKA\p"
# 230 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 231 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 232 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 233 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_GymStatuePlayerWon::
# 234 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "CELADON POKéMON GYM\n"
# 235 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "LEADER: ERIKA\p"
# 236 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 237 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"

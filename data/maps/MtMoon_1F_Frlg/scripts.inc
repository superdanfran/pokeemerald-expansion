# 1 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 2 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Frlg_MapScripts::
# 3 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_OnTransition
# 4 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 6 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_OnTransition::
# 7 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
# 8 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 9 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 10 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_ZubatSign::
# 11 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
# 12 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 13 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 14 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Marcos::
# 15 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
# 16 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 18 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 19 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Josh::
# 20 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
# 21 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 23 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 24 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Miriam::
# 25 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
# 26 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 28 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 29 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Iris::
# 30 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
# 31 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 34 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Jovan::
# 35 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_JOVAN, MtMoon_1F_Text_JovanIntro, MtMoon_1F_Text_JovanDefeat
# 36 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_JovanPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 39 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Kent::
# 40 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
# 41 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 43 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 44 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Robby::
# 45 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
# 46 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 48 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 49 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MarcosIntro::
# 50 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "WHOA!\n"
# 51 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "You shocked me!\l"
# 52 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "…Oh, you're just a kid!$"
# 53 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 54 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MarcosDefeat::
# 55 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Wow!\n"
# 56 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Shocked again!$"
# 57 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 58 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MarcosPostBattle::
# 59 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Kids like you shouldn't be\n"
# 60 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "wandering around here in the dark.$"
# 61 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 62 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JoshIntro::
# 63 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Did you come to explore the cave,\n"
# 64 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "too?$"
# 65 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 66 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JoshDefeat::
# 67 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Losing stinks!\n"
# 68 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "It's so uncool.$"
# 69 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 70 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JoshPostBattle::
# 71 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I came all the way down here to\n"
# 72 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "show off to girls.$"
# 73 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 74 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MiriamIntro::
# 75 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Wow! It's way bigger in here than\n"
# 76 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I thought!$"
# 77 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 78 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MiriamDefeat::
# 79 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Oh!\n"
# 80 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I lost it!$"
# 81 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 82 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MiriamPostBattle::
# 83 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "How do you get out of here?\n"
# 84 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "It's so big, I may get lost.$"
# 85 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 86 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JovanIntro::
# 87 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "What!\n"
# 88 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Don't sneak up on me!$"
# 89 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 90 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JovanDefeat::
# 91 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "My POKéMON won't do!$"
# 92 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 93 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JovanPostBattle::
# 94 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I have to find stronger POKéMON.\n"
# 95 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Where might they be?$"
# 96 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 97 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_IrisIntro::
# 98 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "What?\n"
# 99 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I'm waiting for my friends to find\l"
# 100 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "me here.$"
# 101 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 102 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_IrisDefeat::
# 103 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I lost?$"
# 104 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 105 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_IrisPostBattle::
# 106 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I came because I heard there are\n"
# 107 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "some very rare fossils here.$"
# 108 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 109 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_KentIntro::
# 110 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Suspicious men are in the cave.\n"
# 111 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "What about you?$"
# 112 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 113 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_KentDefeat::
# 114 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "You got me!$"
# 115 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 116 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_KentPostBattle::
# 117 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I saw them!\n"
# 118 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I'm sure they're from TEAM ROCKET!$"
# 119 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 120 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_RobbyIntro::
# 121 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "You need to go through this cave\n"
# 122 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "to get to CERULEAN CITY.$"
# 123 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 124 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_RobbyDefeat::
# 125 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I lost.$"
# 126 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 127 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_RobbyPostBattle::
# 128 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "ZUBAT is tough!\n"
# 129 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "But if you can catch one, you'll\l"
# 130 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "be able to count on it.$"
# 131 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 132 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_ZubatIsABloodsucker::
# 133 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Beware!\n"
# 134 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "ZUBAT is a bloodsucker!$"
# 135 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 136 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_BrockHelpsExcavateFossils::
# 137 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Hi, I'm excavating for fossils here\n"
# 138 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "under MT. MOON.\p"
# 139 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Sometimes, BROCK of PEWTER GYM\n"
# 140 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "lends me a hand.$"

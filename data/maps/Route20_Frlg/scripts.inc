# 1 "data/maps/Route20_Frlg/scripts.pory"

# 2 "data/maps/Route20_Frlg/scripts.pory"
Route20_Frlg_MapScripts::
# 3 "data/maps/Route20_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
# 4 "data/maps/Route20_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/Route20_Frlg/scripts.pory"

# 6 "data/maps/Route20_Frlg/scripts.pory"
Route20_OnTransition::
# 7 "data/maps/Route20_Frlg/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB3F
# 8 "data/maps/Route20_Frlg/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB4F
# 9 "data/maps/Route20_Frlg/scripts.pory"
	end
# 10 "data/maps/Route20_Frlg/scripts.pory"

# 11 "data/maps/Route20_Frlg/scripts.pory"
Route20_EventScript_ResetSeafoamBouldersForB3F::
# 12 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
# 13 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
# 14 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
# 15 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
# 16 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
# 17 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
# 18 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
# 19 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
# 20 "data/maps/Route20_Frlg/scripts.pory"
	return
# 21 "data/maps/Route20_Frlg/scripts.pory"

# 22 "data/maps/Route20_Frlg/scripts.pory"
Route20_EventScript_ResetSeafoamBouldersForB4F::
# 23 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
# 24 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
# 25 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
# 26 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
# 27 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
# 28 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
# 29 "data/maps/Route20_Frlg/scripts.pory"
	return
# 30 "data/maps/Route20_Frlg/scripts.pory"

# 31 "data/maps/Route20_Frlg/scripts.pory"
Route20_EventScript_SeafoamIslandsSign::
# 32 "data/maps/Route20_Frlg/scripts.pory"
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
# 33 "data/maps/Route20_Frlg/scripts.pory"
	end
# 34 "data/maps/Route20_Frlg/scripts.pory"

# 35 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_BarryIntro::
# 36 "data/maps/Route20_Frlg/scripts.pory"
	.string "The water is shallow here.\n"
# 37 "data/maps/Route20_Frlg/scripts.pory"
	.string "There are many people swimming.$"
# 38 "data/maps/Route20_Frlg/scripts.pory"

# 39 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_BarryDefeat::
# 40 "data/maps/Route20_Frlg/scripts.pory"
	.string "Splash!$"
# 41 "data/maps/Route20_Frlg/scripts.pory"

# 42 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_BarryPostBattle::
# 43 "data/maps/Route20_Frlg/scripts.pory"
	.string "I wish I could ride my POKéMON.\n"
# 44 "data/maps/Route20_Frlg/scripts.pory"
	.string "I bet you're not tired.$"
# 45 "data/maps/Route20_Frlg/scripts.pory"

# 46 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_ShirleyIntro::
# 47 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM is a quiet getaway.\n"
# 48 "data/maps/Route20_Frlg/scripts.pory"
	.string "I'm vacationing here.$"
# 49 "data/maps/Route20_Frlg/scripts.pory"

# 50 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_ShirleyDefeat::
# 51 "data/maps/Route20_Frlg/scripts.pory"
	.string "Quit it!$"
# 52 "data/maps/Route20_Frlg/scripts.pory"

# 53 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_ShirleyPostBattle::
# 54 "data/maps/Route20_Frlg/scripts.pory"
	.string "There's a huge cavern underneath\n"
# 55 "data/maps/Route20_Frlg/scripts.pory"
	.string "this island.$"
# 56 "data/maps/Route20_Frlg/scripts.pory"

# 57 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_TiffanyIntro::
# 58 "data/maps/Route20_Frlg/scripts.pory"
	.string "I love floating with the fishes\n"
# 59 "data/maps/Route20_Frlg/scripts.pory"
	.string "here among the waves.$"
# 60 "data/maps/Route20_Frlg/scripts.pory"

# 61 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_TiffanyDefeat::
# 62 "data/maps/Route20_Frlg/scripts.pory"
	.string "Yowch!$"
# 63 "data/maps/Route20_Frlg/scripts.pory"

# 64 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_TiffanyPostBattle::
# 65 "data/maps/Route20_Frlg/scripts.pory"
	.string "Want to float with me?$"
# 66 "data/maps/Route20_Frlg/scripts.pory"

# 67 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_IreneIntro::
# 68 "data/maps/Route20_Frlg/scripts.pory"
	.string "Are you on vacation, too?$"
# 69 "data/maps/Route20_Frlg/scripts.pory"

# 70 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_IreneDefeat::
# 71 "data/maps/Route20_Frlg/scripts.pory"
	.string "No mercy at all!$"
# 72 "data/maps/Route20_Frlg/scripts.pory"

# 73 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_IrenePostBattle::
# 74 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM used to be a single island\n"
# 75 "data/maps/Route20_Frlg/scripts.pory"
	.string "in the distant past.$"
# 76 "data/maps/Route20_Frlg/scripts.pory"

# 77 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DeanIntro::
# 78 "data/maps/Route20_Frlg/scripts.pory"
	.string "Check out my buff physique!$"
# 79 "data/maps/Route20_Frlg/scripts.pory"

# 80 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DeanDefeat::
# 81 "data/maps/Route20_Frlg/scripts.pory"
	.string "Wimpy!$"
# 82 "data/maps/Route20_Frlg/scripts.pory"

# 83 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DeanPostBattle::
# 84 "data/maps/Route20_Frlg/scripts.pory"
	.string "I should've been buffing up my\n"
# 85 "data/maps/Route20_Frlg/scripts.pory"
	.string "POKéMON, not me!$"
# 86 "data/maps/Route20_Frlg/scripts.pory"

# 87 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DarrinIntro::
# 88 "data/maps/Route20_Frlg/scripts.pory"
	.string "Why are you riding a POKéMON?\n"
# 89 "data/maps/Route20_Frlg/scripts.pory"
	.string "Can't you swim?$"
# 90 "data/maps/Route20_Frlg/scripts.pory"

# 91 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DarrinDefeat::
# 92 "data/maps/Route20_Frlg/scripts.pory"
	.string "Ouch!\n"
# 93 "data/maps/Route20_Frlg/scripts.pory"
	.string "Torpedoed!$"
# 94 "data/maps/Route20_Frlg/scripts.pory"

# 95 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DarrinPostBattle::
# 96 "data/maps/Route20_Frlg/scripts.pory"
	.string "Riding a POKéMON sure looks fun!$"
# 97 "data/maps/Route20_Frlg/scripts.pory"

# 98 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_RogerIntro::
# 99 "data/maps/Route20_Frlg/scripts.pory"
	.string "I rode my bird POKéMON here.$"
# 100 "data/maps/Route20_Frlg/scripts.pory"

# 101 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_RogerDefeat::
# 102 "data/maps/Route20_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 103 "data/maps/Route20_Frlg/scripts.pory"
	.string "Now what am I to do?$"
# 104 "data/maps/Route20_Frlg/scripts.pory"

# 105 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_RogerPostBattle::
# 106 "data/maps/Route20_Frlg/scripts.pory"
	.string "My birds are exhausted.\n"
# 107 "data/maps/Route20_Frlg/scripts.pory"
	.string "They can't FLY me back!$"
# 108 "data/maps/Route20_Frlg/scripts.pory"

# 109 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_NoraIntro::
# 110 "data/maps/Route20_Frlg/scripts.pory"
	.string "My boyfriend gave me big pearls.$"
# 111 "data/maps/Route20_Frlg/scripts.pory"

# 112 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_NoraDefeat::
# 113 "data/maps/Route20_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 114 "data/maps/Route20_Frlg/scripts.pory"
	.string "My pearls were in them!$"
# 115 "data/maps/Route20_Frlg/scripts.pory"

# 116 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_NoraPostBattle::
# 117 "data/maps/Route20_Frlg/scripts.pory"
	.string "Will my pearls grow bigger inside\n"
# 118 "data/maps/Route20_Frlg/scripts.pory"
	.string "CLOYSTER?$"
# 119 "data/maps/Route20_Frlg/scripts.pory"

# 120 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MissyIntro::
# 121 "data/maps/Route20_Frlg/scripts.pory"
	.string "I swam here from CINNABAR ISLAND.\n"
# 122 "data/maps/Route20_Frlg/scripts.pory"
	.string "It wasn't easy, I tell you.$"
# 123 "data/maps/Route20_Frlg/scripts.pory"

# 124 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MissyDefeat::
# 125 "data/maps/Route20_Frlg/scripts.pory"
	.string "I'm so disappointed!$"
# 126 "data/maps/Route20_Frlg/scripts.pory"

# 127 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MissyPostBattle::
# 128 "data/maps/Route20_Frlg/scripts.pory"
	.string "POKéMON have taken over an\n"
# 129 "data/maps/Route20_Frlg/scripts.pory"
	.string "abandoned mansion on CINNABAR.\p"
# 130 "data/maps/Route20_Frlg/scripts.pory"
	.string "They call it the POKéMON MANSION\n"
# 131 "data/maps/Route20_Frlg/scripts.pory"
	.string "now.$"
# 132 "data/maps/Route20_Frlg/scripts.pory"

# 133 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MelissaIntro::
# 134 "data/maps/Route20_Frlg/scripts.pory"
	.string "CINNABAR, in the west, has a LAB\n"
# 135 "data/maps/Route20_Frlg/scripts.pory"
	.string "for POKéMON.\p"
# 136 "data/maps/Route20_Frlg/scripts.pory"
	.string "My daddy works there.$"
# 137 "data/maps/Route20_Frlg/scripts.pory"

# 138 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MelissaDefeat::
# 139 "data/maps/Route20_Frlg/scripts.pory"
	.string "Wait!\n"
# 140 "data/maps/Route20_Frlg/scripts.pory"
	.string "You're supposed to wait!$"
# 141 "data/maps/Route20_Frlg/scripts.pory"

# 142 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MelissaPostBattle::
# 143 "data/maps/Route20_Frlg/scripts.pory"
	.string "CINNABAR is a volcanic island.\p"
# 144 "data/maps/Route20_Frlg/scripts.pory"
	.string "I heard it rose out of the sea\n"
# 145 "data/maps/Route20_Frlg/scripts.pory"
	.string "when a volcano erupted.$"
# 146 "data/maps/Route20_Frlg/scripts.pory"

# 147 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_SeafoamIslands::
# 148 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM ISLANDS$"
# 149 "data/maps/Route20_Frlg/scripts.pory"

# 150 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MistyTrainsHere::
# 151 "data/maps/Route20_Frlg/scripts.pory"
	.string "Strong TRAINERS and WATER POKéMON\n"
# 152 "data/maps/Route20_Frlg/scripts.pory"
	.string "are common sights in these parts.\p"
# 153 "data/maps/Route20_Frlg/scripts.pory"
	.string "They say that MISTY of the\n"
# 154 "data/maps/Route20_Frlg/scripts.pory"
	.string "CERULEAN GYM trains here.$"

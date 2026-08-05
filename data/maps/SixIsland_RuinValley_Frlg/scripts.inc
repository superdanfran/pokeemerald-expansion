# 1 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Frlg_MapScripts::
# 3 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
# 4 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 6 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_OnLoad::
# 7 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
# 8 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 9 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 10 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
# 11 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
# 12 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	return
# 13 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 14 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_Scientist::
# 15 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	lock
# 16 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
# 17 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FacePlayer
# 18 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
# 20 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FaceOriginalDirection
# 21 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	release
# 23 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 24 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 25 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor::
# 26 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	lockall
# 27 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
# 28 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
# 29 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
# 30 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
# 31 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Cut
# 32 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
# 33 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 34 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 35 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
# 36 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
# 37 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
# 38 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 39 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 40 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
# 41 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
# 42 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
# 43 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 44 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 45 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_CantFigureOutHowToGetInside::
# 46 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I can't figure out how I'm supposed\n"
# 47 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "to get inside.$"
# 48 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 49 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_IFoundThisPlace::
# 50 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Let me tell you, I found this\n"
# 51 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "place.\p"
# 52 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Don't look so envious, will you?$"
# 53 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 54 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_CheckDoorMoreThoroughly::
# 55 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door doesn't budge at all.\n"
# 56 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Check it more thoroughly?$"
# 57 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 58 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_LeftDoorAlone::
# 59 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "{PLAYER} left the door alone.$"
# 60 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 61 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_SeveralDotsOnTheDoor::
# 62 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "On closer inspection, there are\n"
# 63 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "several dots on the door…$"
# 64 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 65 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_DoorIsOpen::
# 66 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door is open.$"
# 67 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 68 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_StanlyIntro::
# 69 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "There appear to be many secrets\n"
# 70 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "still unsolved in this world.$"
# 71 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 72 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_StanlyDefeat::
# 73 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Hmm…$"
# 74 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 75 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_StanlyPostBattle::
# 76 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I suggest to you that you, too,\n"
# 77 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "give a thought to the secrets and\l"
# 78 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "mysteries of our world once a day.$"
# 79 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 80 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_FosterIntro::
# 81 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I'm curious, what compelled you to\n"
# 82 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "come here?$"
# 83 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 84 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_FosterDefeat::
# 85 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "It's been so long since I battled,\n"
# 86 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "my instincts are off.$"
# 87 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 88 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_FosterPostBattle::
# 89 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "There are several ruins on the\n"
# 90 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "SEVII ISLANDS.\p"
# 91 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The majority of them date back\n"
# 92 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "a long way.$"
# 93 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 94 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_LarryIntro::
# 95 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "It's been said that there are\n"
# 96 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "mysterious stones on this island.\p"
# 97 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I suspect it has something to do\n"
# 98 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "with the ruins here.$"
# 99 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 100 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_LarryDefeat::
# 101 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Oh, interesting.$"
# 102 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 103 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_LarryPostBattle::
# 104 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Those ruins over there…\p"
# 105 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I haven't had any luck in finding\n"
# 106 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "how I can get inside.$"
# 107 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 108 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_DarylIntro::
# 109 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "A battle with you, so high up!$"
# 110 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 111 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_DarylDefeat::
# 112 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Oh, the heartbreak of losing so\n"
# 113 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "easily to you!$"
# 114 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 115 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_DarylPostBattle::
# 116 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Experience the joy of climbing!$"
# 117 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 118 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_HectorIntro::
# 119 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I'm pretty familiar with the land\n"
# 120 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "around these parts.$"
# 121 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 122 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_HectorDefeat::
# 123 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "You don't need to be so pushy.\n"
# 124 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I'll be happy to tell you.$"
# 125 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 126 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_HectorPostBattle::
# 127 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door to the ruins…\n"
# 128 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "It has these strange patterns\l"
# 129 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "engraved on the outside.\p"
# 130 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I don't know what they mean,\n"
# 131 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "though.$"

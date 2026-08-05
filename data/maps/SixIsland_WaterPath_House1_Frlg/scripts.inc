# 1 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Frlg_MapScripts::
# 3 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 5 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty::
# 6 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lock
# 7 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HERACROSS
# 9 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 10 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty
# 11 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 12 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_MayIMeasureHeracross
# 13 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special ChoosePartyMon
# 14 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 15 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_ge VAR_RESULT, PARTY_SIZE, SixIsland_WaterPath_House1_EventScript_DontShowMon
# 16 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special CompareHeracrossSize
# 17 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SixIsland_WaterPath_House1_EventScript_ShownNonHeracross
# 18 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross
# 19 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 20 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 4, SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross
# 21 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 22 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 23 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 24 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty::
# 25 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross
# 26 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 27 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 28 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 29 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_DontShowMon::
# 30 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 31 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 32 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 33 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownNonHeracross::
# 34 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ThisWontDo
# 35 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 36 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 37 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 38 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross::
# 39 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 40 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXSizeYSizeWasBiggest
# 41 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 42 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 43 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 44 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross::
# 45 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 46 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXSizeSameAsBefore
# 47 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 48 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 49 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 50 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownBigHeracross::
# 51 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
# 52 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXSizeDeserveReward
# 53 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	giveitem ITEM_NEST_BALL
# 54 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall
# 55 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne
# 56 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 57 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 58 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 59 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall::
# 60 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_YourBagIsFull
# 61 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 62 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 63 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 64 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_SizeRecord::
# 65 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lockall
# 66 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty
# 67 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort
# 68 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
# 69 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 70 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 71 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty::
# 72 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 73 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXSize
# 74 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
# 75 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 76 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 77 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross::
# 78 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Hera, hera, HERACROSS!\n"
# 79 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Big and shiny, it's the bug boss!\l"
# 80 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Love it, need it, HERACROSS!$"
# 81 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 82 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_MayIMeasureHeracross::
# 83 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeeek!\n"
# 84 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "That's a HERACROSS!\p"
# 85 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Please, please, may I measure how\n"
# 86 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "big it is?$"
# 87 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 88 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXSizeDeserveReward::
# 89 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeek, it's {STR_VAR_2}!\n"
# 90 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "I've never seen anything like this!\l"
# 91 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "You deserve a reward!$"
# 92 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 93 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne::
# 94 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "I want to see a much, much bigger\n"
# 95 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS than that one.\p"
# 96 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, how I adore them, big\n"
# 97 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS!$"
# 98 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 99 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXSizeSameAsBefore::
# 100 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Huh? This {STR_VAR_2} measurement…\n"
# 101 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, boo! It's the same as before.$"
# 102 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 103 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXSizeYSizeWasBiggest::
# 104 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, it's just {STR_VAR_2}.\n"
# 105 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "The HERACROSS before was bigger.\p"
# 106 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It was {STR_VAR_3}, the biggest\n"
# 107 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS you've brought me.$"
# 108 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 109 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ThisWontDo::
# 110 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, no! This won't do!\p"
# 111 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS looks much more macho\n"
# 112 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "and cool, and has a lovely horn!$"
# 113 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 114 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_YourBagIsFull::
# 115 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Your BAG is full.\n"
# 116 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "My reward won't fit.$"
# 117 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 118 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXSize::
# 119 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "The biggest HERACROSS that I have\n"
# 120 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "ever seen measured so far is:\p"
# 121 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "{STR_VAR_3}!$"
# 122 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 123 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort::
# 124 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
# 125 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It has spaces for writing in\n"
# 126 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "records of some kind.$"

# 1 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_BadgeGuy::
# 6 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	lock
# 7 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_BadgesHaveAmazingSecrets
# 9 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 10 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 11 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 12 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge::
# 13 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	message CeruleanCity_House1_Text_DescribeWhichBadge
# 14 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BADGES
# 16 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 17 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 0, CeruleanCity_House1_EventScript_DescribeBoulderBadge
# 19 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 1, CeruleanCity_House1_EventScript_DescribeCascadeBadge
# 20 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 2, CeruleanCity_House1_EventScript_DescribeThunderBadge
# 21 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 3, CeruleanCity_House1_EventScript_DescribeRainbowBadge
# 22 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 4, CeruleanCity_House1_EventScript_DescribeSoulBadge
# 23 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 5, CeruleanCity_House1_EventScript_DescribeMarshBadge
# 24 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 6, CeruleanCity_House1_EventScript_DescribeVolcanoBadge
# 25 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 7, CeruleanCity_House1_EventScript_DescribeEarthBadge
# 26 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 8, CeruleanCity_House1_EventScript_StopDescribingBadges
# 27 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 127, CeruleanCity_House1_EventScript_StopDescribingBadges
# 28 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 29 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 30 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeBoulderBadge::
# 31 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AttackStatFlash
# 32 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 33 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 34 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 35 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeCascadeBadge::
# 36 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv30Cut
# 37 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 38 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 39 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 40 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeThunderBadge::
# 41 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpeedStatFly
# 42 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 43 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 44 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 45 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeRainbowBadge::
# 46 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv50Strength
# 47 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 48 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 49 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 50 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeSoulBadge::
# 51 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DefenseStatSurf
# 52 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 53 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 54 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 55 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeMarshBadge::
# 56 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv70RockSmash
# 57 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 58 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 59 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 60 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeVolcanoBadge::
# 61 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpStatsWaterfall
# 62 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 63 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 64 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 65 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeEarthBadge::
# 66 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AllMonsWillObeyYou
# 67 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 68 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 69 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 70 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_StopDescribingBadges::
# 71 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ComeVisitAnytime
# 72 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	release
# 73 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 74 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 75 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_BadgesHaveAmazingSecrets::
# 76 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Only skilled TRAINERS can collect\n"
# 77 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON BADGES.\p"
# 78 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "I see you have at least one.\p"
# 79 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Those BADGES have amazing secrets,\n"
# 80 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "did you know?$"
# 81 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 82 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_DescribeWhichBadge::
# 83 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Now then…\p"
# 84 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Which of the eight BADGES should\n"
# 85 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "I describe?$"
# 86 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 87 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ComeVisitAnytime::
# 88 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Come visit me anytime you wish.$"
# 89 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 90 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_AttackStatFlash::
# 91 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The ATTACK stat of all your\n"
# 92 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 93 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 94 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "FLASH outside of battle.$"
# 95 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 96 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv30Cut::
# 97 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 30 will obey\n"
# 98 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 99 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 100 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 101 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 102 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 103 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 104 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "CUT outside of battle.$"
# 105 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 106 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_SpeedStatFly::
# 107 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SPEED stat of all your\n"
# 108 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 109 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 110 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "FLY outside of battle.$"
# 111 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 112 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv50Strength::
# 113 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 50 will obey\n"
# 114 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 115 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 116 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 117 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 118 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 119 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 120 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "STRENGTH outside of battle.$"
# 121 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 122 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_DefenseStatSurf::
# 123 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The DEFENSE stat of all your\n"
# 124 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 125 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 126 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "SURF outside of battle.$"
# 127 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 128 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv70RockSmash::
# 129 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 70 will obey\n"
# 130 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 131 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 132 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 133 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 134 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 135 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 136 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "ROCK SMASH outside of battle.$"
# 137 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 138 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_SpStatsWaterfall::
# 139 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SP. ATK and SP. DEF stats of\n"
# 140 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "all your POKéMON rise a little bit.\p"
# 141 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 142 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "WATERFALL outside of battle.$"
# 143 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 144 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_AllMonsWillObeyYou::
# 145 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "All POKéMON will obey you!$"

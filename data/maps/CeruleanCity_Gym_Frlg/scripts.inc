# 1 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Misty::
# 6 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 8 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 9 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 10 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 11 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 12 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 13 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_MistyDefeated::
# 14 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 15 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 16 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE02_GET
# 17 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 18 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 2
# 19 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
# 20 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 21 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 22 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03::
# 23 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 24 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM03
# 25 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_EventScript_NoRoomForTM03
# 26 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 27 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 28 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 29 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 30 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 31 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 32 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 33 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 34 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 35 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 36 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 37 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Diana::
# 38 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 39 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 41 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 42 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Luis::
# 43 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 44 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 45 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 47 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 48 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy::
# 49 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lock
# 50 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	faceplayer
# 51 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuyPostVictory
# 52 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 53 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 54 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 55 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 56 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 57 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 58 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 59 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 60 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 61 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatue::
# 62 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lockall
# 63 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
# 64 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue
# 65 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
# 66 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 67 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 68 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 69 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 70 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
# 71 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 72 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 73 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyIntro::
# 74 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Hi, you're a new face!\p"
# 75 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Only those TRAINERS who have a\n"
# 76 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "policy about POKéMON can turn pro.\p"
# 77 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What is your approach when you\n"
# 78 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "catch and train POKéMON?\p"
# 79 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "My policy is an all-out offensive\n"
# 80 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "with WATER-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 81 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 82 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ExplainTM03::
# 83 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "TM03 teaches WATER PULSE.\p"
# 84 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Use it on an aquatic POKéMON!$"
# 85 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 86 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ExplainCascadeBadge::
# 87 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The CASCADEBADGE makes all\n"
# 88 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 30 obey.\p"
# 89 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 90 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "got in trades.\p"
# 91 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "There's more. You can now use CUT\n"
# 92 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "anytime, even out of battle.\p"
# 93 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can CUT down small trees to\n"
# 94 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "open new pathways.\p"
# 95 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can also have my favorite TM.$"
# 96 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 97 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ReceivedTM03FromMisty::
# 98 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM03\n"
# 99 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "from MISTY.$"
# 100 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 101 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_BetterMakeRoomForThis::
# 102 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You better make room for this!$"
# 103 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 104 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyDefeat::
# 105 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
# 106 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You're too much!\p"
# 107 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "All right!\p"
# 108 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can have the CASCADEBADGE to\n"
# 109 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "show you beat me.$"
# 110 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 111 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaIntro::
# 112 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What? You?\n"
# 113 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "I'm more than good enough for you!\p"
# 114 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY won't have to be bothered.$"
# 115 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 116 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaDefeat::
# 117 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You overwhelmed me!$"
# 118 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 119 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaPostBattle::
# 120 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You have to face other TRAINERS\n"
# 121 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "to see how good you really are.$"
# 122 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 123 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisIntro::
# 124 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Splash!\p"
# 125 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "I'm first up!\n"
# 126 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Let's do it!$"
# 127 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 128 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisDefeat::
# 129 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That can't be!$"
# 130 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 131 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisPostBattle::
# 132 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY is a TRAINER who's going to\n"
# 133 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "keep improving.\p"
# 134 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "She won't lose to someone like you!$"
# 135 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 136 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymGuyAdvice::
# 137 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 138 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 139 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Let me give you some advice!\p"
# 140 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The LEADER, MISTY, is a pro who\n"
# 141 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "uses WATER-type POKéMON.\p"
# 142 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can drain all their water with\n"
# 143 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "GRASS-type POKéMON.\p"
# 144 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Or, you might use ELECTRIC-type\n"
# 145 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "POKéMON and zap them!$"
# 146 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 147 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_WeMakePrettyGoodTeam::
# 148 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You beat MISTY!\n"
# 149 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "See, what'd I tell ya?\p"
# 150 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You and me, kid, we make a pretty\n"
# 151 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "darn-good team!$"
# 152 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 153 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymStatue::
# 154 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
# 155 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "LEADER: MISTY\p"
# 156 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 157 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 158 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 159 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymStatuePlayerWon::
# 160 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
# 161 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "LEADER: MISTY\p"
# 162 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 163 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"

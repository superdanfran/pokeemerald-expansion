# 1 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Brock::
# 6 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 8 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 9 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 10 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 11 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 12 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 13 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_DefeatedBrock::
# 14 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 1
# 15 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BROCK
# 16 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE01_GET
# 17 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 18 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 19 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
# 20 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 1
# 21 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
# 22 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 23 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 24 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39::
# 25 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_TakeThisWithYou
# 26 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM39
# 27 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
# 28 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 29 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM39_FROM_BROCK
# 30 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_ExplainTM39
# 31 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 32 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 33 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 34 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_NoRoomForTM39::
# 35 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 36 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 37 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 38 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 39 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Liam::
# 40 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 41 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 43 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 44 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy::
# 45 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lock
# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	faceplayer
# 47 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
# 48 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 49 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 50 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
# 51 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 52 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 53 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyPostVictory::
# 54 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_YoureChampMaterial
# 55 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 56 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 57 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 58 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 59 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LetsGetHappening
# 60 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 61 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 62 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 63 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 64 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 65 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 66 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 67 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 68 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyAdvice::
# 69 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 70 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 71 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 72 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 73 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatue::
# 74 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lockall
# 75 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
# 76 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatue
# 77 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
# 78 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 79 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 80 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatuePostVictory::
# 81 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 82 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
# 83 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 84 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 85 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockIntro::
# 86 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, you're here. I'm BROCK.\n"
# 87 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'm PEWTER's GYM LEADER.\p"
# 88 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "My rock-hard willpower is evident\n"
# 89 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "even in my POKéMON.\p"
# 90 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "My POKéMON are all rock hard, and\n"
# 91 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "have true-grit determination.\p"
# 92 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "That's right - my POKéMON are all\n"
# 93 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "the ROCK type!\p"
# 94 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fuhaha! You're going to challenge\n"
# 95 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "me knowing that you'll lose?\p"
# 96 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "That's the TRAINER's honor that\n"
# 97 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "compels you to challenge me.\p"
# 98 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fine, then!\n"
# 99 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Show me your best!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 100 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 101 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockDefeat::
# 102 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I took you for granted, and so\n"
# 103 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I lost.\p"
# 104 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "As proof of your victory, I confer\n"
# 105 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "on you this…the official POKéMON\l"
# 106 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE BOULDERBADGE.\p"
# 107 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
# 108 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
# 109 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_MALE}Just having the BOULDERBADGE makes\n"
# 110 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your POKéMON more powerful.\p"
# 111 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It also enables the use of the\n"
# 112 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH outside of battle.\p"
# 113 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Of course, a POKéMON must know the\n"
# 114 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH to use it.$"
# 115 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 116 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TakeThisWithYou::
# 117 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Wait!\n"
# 118 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Take this with you.$"
# 119 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 120 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ReceivedTM39FromBrock::
# 121 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM39\n"
# 122 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK.$"
# 123 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 124 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ExplainTM39::
# 125 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM, Technical Machine, contains a\n"
# 126 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "technique for POKéMON.\p"
# 127 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Using a TM teaches the move it\n"
# 128 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "contains to a POKéMON.\p"
# 129 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM is good for only one use.\p"
# 130 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, when you use one, pick the\n"
# 131 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON carefully.\p"
# 132 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Anyways…\n"
# 133 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "TM39 contains ROCK TOMB.\p"
# 134 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It hurls boulders at the foe and\n"
# 135 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "lowers its SPEED.$"
# 136 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 137 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockPostBattle::
# 138 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "There are all kinds of TRAINERS in\n"
# 139 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "this huge world of ours.\p"
# 140 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You appear to be very gifted as a\n"
# 141 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON TRAINER.\p"
# 142 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So let me make a suggestion.\p"
# 143 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Go to the GYM in CERULEAN and test\n"
# 144 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your abilities.$"
# 145 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 146 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_DontHaveRoomForThis::
# 147 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You don't have room for this.$"
# 148 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 149 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamIntro::
# 150 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Stop right there, kid!\p"
# 151 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're ten thousand light-years \n"
# 152 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from facing BROCK!$"
# 153 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 154 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamDefeat::
# 155 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Darn!\p"
# 156 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Light-years isn't time…\n"
# 157 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It measures distance!$"
# 158 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 159 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamPostBattle::
# 160 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're pretty hot.\n"
# 161 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "…But not as hot as BROCK!$"
# 162 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 163 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetMeTakeYouToTheTop::
# 164 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Hiya!\n"
# 165 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you want to dream big?\p"
# 166 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you dare to dream of becoming\n"
# 167 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "the POKéMON champ?\p"
# 168 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'm no TRAINER, but I can advise\n"
# 169 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "you on how to win.\p"
# 170 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let me take you to the top!$"
# 171 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 172 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetsGetHappening::
# 173 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "All right!\n"
# 174 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 175 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 176 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TryDifferentPartyOrders::
# 177 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "The first POKéMON out in a match is\n"
# 178 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "at the left of the POKéMON LIST.\p"
# 179 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "By changing the order of POKéMON,\n"
# 180 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "you may gain an advantage.\p"
# 181 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Try different orders to suit your\n"
# 182 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "opponent's party.$"
# 183 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 184 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ItsFreeLetsGetHappening::
# 185 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It's a free service!\n"
# 186 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 187 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 188 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_YoureChampMaterial::
# 189 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Just as I thought!\n"
# 190 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're POKéMON champ material!$"
# 191 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 192 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatue::
# 193 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 194 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 195 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 196 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 197 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 198 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatuePlayerWon::
# 199 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 200 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 201 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 202 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"

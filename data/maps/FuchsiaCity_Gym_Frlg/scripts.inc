# 1 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Koga::
# 6 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 8 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_GiveTM06
# 9 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
# 10 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 11 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 12 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 13 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_DefeatedKoga::
# 14 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 1
# 15 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
# 16 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_KOGA
# 17 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE05_GET
# 18 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 5
# 19 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
# 20 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 21 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 22 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GiveTM06::
# 23 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
# 24 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM06
# 25 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_EventScript_NoRoomForTM06
# 26 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
# 27 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM06_FROM_KOGA
# 28 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
# 29 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 30 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 31 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 32 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRoomForTM06::
# 33 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
# 34 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 35 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 36 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 37 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Phil::
# 38 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
# 39 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 41 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 42 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Edgar::
# 43 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
# 44 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 46 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 47 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Kirk::
# 48 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
# 49 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 2
# 50 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 52 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 53 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Shawn::
# 54 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
# 55 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 57 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 58 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Kayden::
# 59 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
# 60 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 62 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 63 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Nate::
# 64 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
# 65 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 67 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 68 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuy::
# 69 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	lock
# 70 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	faceplayer
# 71 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuyPostVictory
# 72 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
# 73 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 74 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 75 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 76 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
# 77 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
# 78 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 79 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 80 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 81 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatue::
# 82 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	lockall
# 83 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
# 84 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatue
# 85 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	releaseall
# 86 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 87 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 88 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
# 89 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
# 90 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	releaseall
# 91 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 92 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 93 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaIntro::
# 94 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "KOGA: Fwahahaha!\p"
# 95 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "A mere child like you dares to\n"
# 96 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "challenge me?\p"
# 97 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "The very idea makes me shiver\n"
# 98 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "with mirth!\p"
# 99 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Very well, I shall show you true\n"
# 100 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "terror as a ninja master.\p"
# 101 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Poison brings steady doom.\n"
# 102 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Sleep renders foes helpless.\p"
# 103 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Despair to the creeping horror of\n"
# 104 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "POISON-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 105 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 106 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaDefeat::
# 107 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Humph!\n"
# 108 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You have proven your worth!\p"
# 109 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Here!\n"
# 110 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Take the SOULBADGE!$"
# 111 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 112 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaPostBattle::
# 113 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "When afflicted by TOXIC, a POKéMON\n"
# 114 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "suffers more and more.\p"
# 115 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It suffers worsening damage as the\n"
# 116 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "battle wears on!\p"
# 117 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It will surely terrorize foes!$"
# 118 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 119 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaExplainSoulBadge::
# 120 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Now that you have the SOULBADGE,\n"
# 121 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "the DEFENSE of your POKéMON rises.\p"
# 122 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It also lets you SURF outside of\n"
# 123 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "battle.\p"
# 124 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Ah!\n"
# 125 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Take this, too!$"
# 126 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 127 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_ReceivedTM06FromKoga::
# 128 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM06\n"
# 129 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "from KOGA.$"
# 130 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 131 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaExplainTM06::
# 132 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Sealed within that TM06 lies\n"
# 133 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "TOXIC!\p"
# 134 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It is a secret technique dating\n"
# 135 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "back some four hundred years.$"
# 136 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 137 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_MakeSpaceForThis::
# 138 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Make space for this, child!$"
# 139 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 140 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KaydenIntro::
# 141 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Strength isn't the key for POKéMON.\n"
# 142 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Do you understand this?\p"
# 143 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "POKéMON is about strategy!\p"
# 144 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I'll show you how strategy can\n"
# 145 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "beat brute strength.$"
# 146 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 147 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KaydenDefeat::
# 148 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "What?\n"
# 149 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Extraordinary!$"
# 150 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 151 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KaydenPostBattle::
# 152 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "So, you mix brawn with brains?\n"
# 153 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Good strategy!\p"
# 154 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "That's remarkable for a child\n"
# 155 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "TRAINER.$"
# 156 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 157 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KirkIntro::
# 158 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I was a magician once upon a time.\p"
# 159 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "But I dreamt of becoming a ninja,\n"
# 160 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "so I joined this GYM.$"
# 161 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 162 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KirkDefeat::
# 163 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I'm done for!$"
# 164 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 165 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KirkPostBattle::
# 166 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Even though I've lost, I will keep\n"
# 167 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "training according to the teachings\l"
# 168 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "of KOGA, my ninja master.$"
# 169 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 170 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_NateIntro::
# 171 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Let's see you beat my special\n"
# 172 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "techniques!$"
# 173 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 174 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_NateDefeat::
# 175 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You had me fooled!$"
# 176 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 177 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_NatePostBattle::
# 178 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I like poison and sleep techniques,\n"
# 179 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "as they linger after battle!$"
# 180 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_PhilIntro::
# 182 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Stop right there!\p"
# 183 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "The famed invisible walls of\n"
# 184 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA GYM have you frustrated?$"
# 185 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 186 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_PhilDefeat::
# 187 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Whoa!\n"
# 188 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You've got it!$"
# 189 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 190 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_PhilPostBattle::
# 191 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You impressed me!\n"
# 192 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Here's a hint!\p"
# 193 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Look very closely for gaps in the\n"
# 194 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "invisible walls!$"
# 195 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 196 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_EdgarIntro::
# 197 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I also study the way of the ninja\n"
# 198 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "with Master KOGA!\p"
# 199 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Ninja have a long history of using\n"
# 200 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "animals!$"
# 201 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 202 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_EdgarDefeat::
# 203 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Awoo!$"
# 204 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 205 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_EdgarPostBattle::
# 206 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I still have much to learn.$"
# 207 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 208 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_ShawnIntro::
# 209 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Master KOGA comes from a long line\n"
# 210 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "of ninjas.\p"
# 211 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "What did you descend from?$"
# 212 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 213 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_ShawnDefeat::
# 214 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You're more skilled than I'd\n"
# 215 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "thought!$"
# 216 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 217 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_ShawnPostBattle::
# 218 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Where there is light, there is\n"
# 219 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "shadow!\p"
# 220 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Light and shadow!\n"
# 221 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Which do you choose?$"
# 222 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 223 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_GymGuyAdvice::
# 224 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 225 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 226 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA GYM is a tricked-up place.\n"
# 227 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It's riddled with invisible walls!\p"
# 228 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "KOGA might appear close, but he's\n"
# 229 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "blocked off.\p"
# 230 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You have to find gaps in the walls\n"
# 231 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "to reach him.$"
# 232 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 233 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_GymGuyPostVictory::
# 234 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It's amazing how ninja can terrify,\n"
# 235 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "even now!$"
# 236 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 237 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_GymStatue::
# 238 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA POKéMON GYM\n"
# 239 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "LEADER: KOGA\p"
# 240 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 241 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 242 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 243 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_GymStatuePlayerWon::
# 244 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA POKéMON GYM\n"
# 245 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "LEADER: KOGA\p"
# 246 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 247 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"

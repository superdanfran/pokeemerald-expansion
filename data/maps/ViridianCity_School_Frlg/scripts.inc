# 1 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 5 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Lass::
# 6 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lock
# 7 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
# 9 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	closemessage
# 10 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 11 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
# 12 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	release
# 13 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 14 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 15 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Woman::
# 16 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lock
# 17 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	faceplayer
# 18 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
# 19 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	closemessage
# 20 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
# 21 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	release
# 23 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 24 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 25 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Notebook::
# 26 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lockall
# 27 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFirstPage
# 28 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 29 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 30 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookSecondPage
# 31 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 32 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 33 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookThirdPage
# 34 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 35 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 36 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFourthPage
# 37 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 40 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
# 41 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	releaseall
# 42 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 43 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 44 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_StopReadingNotebook::
# 45 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	releaseall
# 46 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 47 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 48 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_Blackboard::
# 49 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lockall
# 50 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
# 51 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 52 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 53 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 54 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic::
# 55 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	message ViridianCity_School_Text_ReadWhichTopic
# 56 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmessage
# 57 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	multichoicegrid 7, 1, MULTI_STATUS_INFO, 3, FALSE
# 58 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 0, ViridianCity_School_EventScript_ReadSleep
# 60 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 1, ViridianCity_School_EventScript_ReadPoison
# 61 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 2, ViridianCity_School_EventScript_ReadParalysis
# 62 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 3, ViridianCity_School_EventScript_ReadBurn
# 63 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 4, ViridianCity_School_EventScript_ReadFreeze
# 64 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 5, ViridianCity_School_EventScript_ExitBlackboard
# 65 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 127, ViridianCity_School_EventScript_ExitBlackboard
# 66 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 67 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 68 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadSleep::
# 69 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainSleep
# 70 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 71 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 72 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 73 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadBurn::
# 74 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainBurn
# 75 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 76 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 77 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 78 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadPoison::
# 79 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainPoison
# 80 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 81 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 82 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 83 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadFreeze::
# 84 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainFreeze
# 85 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 86 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 87 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 88 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ReadParalysis::
# 89 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainParalysis
# 90 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 91 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 92 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 93 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_EventScript_ExitBlackboard::
# 94 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	releaseall
# 95 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	end
# 96 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 97 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_TryingToMemorizeNotes::
# 98 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Whew! I'm trying to memorize all my\n"
# 99 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "notes.$"
# 100 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 101 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ReadBlackboardCarefully::
# 102 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Okay!\p"
# 103 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Be sure to read what's on the\n"
# 104 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "blackboard carefully!$"
# 105 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 106 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_NotebookFirstPage::
# 107 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Let's check out the notebook.\p"
# 108 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "First page…\p"
# 109 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKé BALLS are used to catch\n"
# 110 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 111 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Up to six POKéMON can be carried\n"
# 112 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "in your party.\p"
# 113 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "People who raise and battle\n"
# 114 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "with POKéMON are called TRAINERS.$"
# 115 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 116 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_NotebookSecondPage::
# 117 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Second page…\p"
# 118 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A healthy POKéMON may be hard to\n"
# 119 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "catch, so weaken it first.\p"
# 120 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Poison, burn, or cause another\n"
# 121 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "status problem to weaken it.$"
# 122 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 123 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_NotebookThirdPage::
# 124 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Third page…\p"
# 125 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON TRAINERS seek others to\n"
# 126 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "engage in POKéMON battles.\p"
# 127 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "To TRAINERS, the taste of victory\n"
# 128 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "is sweet, indeed.\p"
# 129 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Battles are constantly waged at\n"
# 130 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON GYMS everywhere.$"
# 131 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 132 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_NotebookFourthPage::
# 133 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Fourth page…\p"
# 134 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "The ultimate goal for all POKéMON\n"
# 135 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "TRAINERS is simple.\p"
# 136 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "It is to defeat the top eight\n"
# 137 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON GYM LEADERS.\p"
# 138 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Do so to earn the right to face…\p"
# 139 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "The ELITE FOUR of the POKéMON\n"
# 140 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "LEAGUE!$"
# 141 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 142 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_TurnThePage::
# 143 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Turn the page?$"
# 144 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 145 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_HeyDontLookAtMyNotes::
# 146 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "GIRL: Hey!\n"
# 147 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Don't look at my notes!$"
# 148 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 149 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_BlackboardListsStatusProblems::
# 150 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "The blackboard lists POKéMON\n"
# 151 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "STATUS problems during battles.$"
# 152 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 153 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ReadWhichTopic::
# 154 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Which topic do you want to read?$"
# 155 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 156 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainSleep::
# 157 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A POKéMON can't attack if it's\n"
# 158 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "asleep.\p"
# 159 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "POKéMON will stay asleep even\n"
# 160 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "after battles.\p"
# 161 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use AWAKENING to awaken one\n"
# 162 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "from sleep.$"
# 163 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 164 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainBurn::
# 165 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A burn reduces ATTACK power.\n"
# 166 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "It also causes ongoing HP loss.\p"
# 167 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A burn remains after a battle.\n"
# 168 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use BURN HEAL to cure a burn.$"
# 169 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 170 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainPoison::
# 171 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "When poisoned, a POKéMON's health\n"
# 172 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "steadily drops.\p"
# 173 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Poison lingers after battles.\n"
# 174 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use an ANTIDOTE to cure poison!$"
# 175 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 176 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainFreeze::
# 177 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A frozen POKéMON becomes\n"
# 178 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "helplessly immobile.\p"
# 179 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "It stays frozen even after the\n"
# 180 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "battle ends.\p"
# 181 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use ICE HEAL to thaw out the\n"
# 182 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "suffering POKéMON.$"
# 183 "data/maps/ViridianCity_School_Frlg/scripts.pory"

# 184 "data/maps/ViridianCity_School_Frlg/scripts.pory"
ViridianCity_School_Text_ExplainParalysis::
# 185 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Paralysis reduces SPEED and may\n"
# 186 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "prevent the POKéMON from moving.\p"
# 187 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Paralysis remains after battles.\n"
# 188 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Use PARLYZ HEAL for treatment.$"

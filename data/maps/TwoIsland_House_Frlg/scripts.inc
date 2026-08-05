# 1 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_House_Frlg/scripts.pory"
.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
# 3 "data/maps/TwoIsland_House_Frlg/scripts.pory"
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
# 4 "data/maps/TwoIsland_House_Frlg/scripts.pory"
.equ HAS_TINY_MUSHROOMS, FLAG_TEMP_3
# 5 "data/maps/TwoIsland_House_Frlg/scripts.pory"
.equ HAS_BOTH_MUSHROOMS, FLAG_TEMP_4
# 6 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 7 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Frlg_MapScripts::
# 8 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.byte 0
# 9 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 10 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_MoveManiac::
# 11 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	lock
# 12 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 14 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 15 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 16 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 17 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachMonMoveForMushroom
# 18 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 19 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 20 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 21 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 22 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms::
# 23 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 24 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasBigMushroom
# 25 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 2
# 26 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasTinyMushrooms
# 27 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms
# 28 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_CheckAlsoHasBigMushroom
# 29 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 30 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 31 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 32 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms::
# 33 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_SetHasBothMushrooms
# 34 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
# 35 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 36 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 37 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasBigMushroom::
# 38 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_SetHasBothMushrooms
# 39 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
# 40 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 41 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 42 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_AskTutorMon::
# 43 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_WantMeToTeachMove, MSGBOX_YESNO
# 44 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_House_EventScript_EndTutorMove
# 45 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 46 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 47 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 48 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor::
# 49 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TutorWhichMon
# 50 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special ChooseMonForMoveRelearner
# 51 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, TwoIsland_House_EventScript_EndTutorMove
# 52 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 53 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_CantTutorEgg
# 54 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq VAR_0x8005, 0, TwoIsland_House_EventScript_NoMoveToTutorMon
# 55 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach
# 56 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 57 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 58 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach::
# 59 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachWhichMove
# 60 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special TeachMoveRelearnerMove
# 61 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_eq VAR_0x8004, 0, TwoIsland_House_EventScript_ChooseMonToTutor
# 62 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, TwoIsland_House_EventScript_ChooseMushroom
# 63 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_GiveBigMushroom
# 64 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_GiveTinyMushrooms
# 65 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 66 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 67 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_GiveBigMushroom::
# 68 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 69 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 70 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverOneBigMushroom
# 71 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 72 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 73 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 74 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 75 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_GiveTinyMushrooms::
# 76 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 2
# 77 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 78 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverTwoTinyMushrooms
# 79 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 80 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 81 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 82 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 83 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_ChooseMushroom::
# 84 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	message TwoIsland_House_Text_IllNeedMushroomOrTwo
# 85 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitmessage
# 86 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_MUSHROOMS, TRUE
# 87 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 0, TwoIsland_House_EventScript_GiveTinyMushrooms
# 89 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 1, TwoIsland_House_EventScript_GiveBigMushroom
# 90 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 91 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 92 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_NoMoveToTutorMon::
# 93 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NoMoveICanTeachThatMon
# 94 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 95 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 96 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 97 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_CantTutorEgg::
# 98 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_CantTeachAnEgg
# 99 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 100 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 101 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 102 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_EndTutorMove::
# 103 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove
# 104 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	release
# 105 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	end
# 106 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 107 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasBigMushroom::
# 108 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 109 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 110 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 111 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasTinyMushrooms::
# 112 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
# 113 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 114 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 115 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_EventScript_SetHasBothMushrooms::
# 116 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
# 117 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	return
# 118 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 119 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TeachMonMoveForMushroom::
# 120 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I'm the POKéMON MOVE MANIAC.\p"
# 121 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I know every single move that\n"
# 122 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "POKéMON learn growing up.\p"
# 123 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I'm also a mushroom maniac.\p"
# 124 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Bring me two TINYMUSHROOMS,\n"
# 125 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "or one BIG MUSHROOM.\p"
# 126 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "If you do that for me, I'll teach\n"
# 127 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "a move to one POKéMON.$"
# 128 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 129 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_WantMeToTeachMove::
# 130 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sniff, sniff…\n"
# 131 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Hm! You smell of MUSHROOMS!\p"
# 132 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Do you want me to teach a move\n"
# 133 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "to a POKéMON of yours?$"
# 134 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 135 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TutorWhichMon::
# 136 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 137 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 138 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_TeachWhichMove::
# 139 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which move should I teach?$"
# 140 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 141 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_NoMoveICanTeachThatMon::
# 142 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sorry…\p"
# 143 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "It doesn't appear as if I have a\n"
# 144 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "move I can teach that POKéMON.$"
# 145 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 146 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_IllNeedMushroomOrTwo::
# 147 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Then, I'll need a MUSHROOM or two.\n"
# 148 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "What are you going to give me?$"
# 149 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 150 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_HandedOverTwoTinyMushrooms::
# 151 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over two\n"
# 152 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "TINYMUSHROOMS in exchange.$"
# 153 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 154 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_HandedOverOneBigMushroom::
# 155 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over one\n"
# 156 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "BIG MUSHROOM in exchange.$"
# 157 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 158 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove::
# 159 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "If your POKéMON need to learn a\n"
# 160 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "move, I need a MUSHROOM or two.$"
# 161 "data/maps/TwoIsland_House_Frlg/scripts.pory"

# 162 "data/maps/TwoIsland_House_Frlg/scripts.pory"
TwoIsland_House_Text_CantTeachAnEgg::
# 163 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Hunh? There isn't a single move\n"
# 164 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "that I can teach an EGG.$"

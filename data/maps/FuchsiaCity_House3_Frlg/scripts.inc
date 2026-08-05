# 1 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_MoveDeleter::
# 6 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	lock
# 7 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
# 9 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
# 10 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
# 11 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 12 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 13 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter::
# 14 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMonShouldForgetMove
# 15 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FuchsiaCity_House3_EventScript_CancelForgetMove
# 17 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 18 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_House3_EventScript_CantForgetMoveEgg
# 19 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special GetNumMovesSelectedMonHas
# 20 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House3_EventScript_CantForgetOnlyMove
# 21 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten
# 22 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 24 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 25 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
# 26 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 27 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 28 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ForgetMove
# 29 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
# 30 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 31 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 32 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_ForgetMove::
# 33 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special MoveDeleterForgetMove
# 34 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 35 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	waitfanfare
# 36 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely
# 37 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 38 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 39 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 40 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CantForgetOnlyMove::
# 41 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 42 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonOnlyKnowsOneMove
# 43 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 44 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 45 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 46 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CantForgetMoveEgg::
# 47 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_NoEggShouldKnowMoves
# 48 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 49 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 50 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 51 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_EventScript_CancelForgetMove::
# 52 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves
# 53 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	release
# 54 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	end
# 55 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 56 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WouldYouLikeToForgetMove::
# 57 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Uh…\n"
# 58 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
# 59 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "I can make POKéMON forget their\n"
# 60 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "moves.\p"
# 61 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Would you like me to do that?$"
# 62 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 63 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WhichMonShouldForgetMove::
# 64 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Which POKéMON should forget a\n"
# 65 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "move?$"
# 66 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 67 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten::
# 68 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Which move should be forgotten?$"
# 69 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 70 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonOnlyKnowsOneMove::
# 71 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_1} seems to know only one\n"
# 72 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "move…$"
# 73 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 74 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten::
# 75 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
# 76 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "That move should be forgotten?$"
# 77 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 78 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely::
# 79 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "It worked to perfection!\p"
# 80 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
# 81 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_2} completely.$"
# 82 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 83 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves::
# 84 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Come again if there are other\n"
# 85 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "moves to be forgotten.$"
# 86 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"

# 87 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
FuchsiaCity_House3_Text_NoEggShouldKnowMoves::
# 88 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "What?\n"
# 89 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "No EGG should know any moves.$"

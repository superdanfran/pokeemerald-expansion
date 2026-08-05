# 1 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_NameRater::
# 6 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	lock
# 7 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_WantMeToRateNicknames, MSGBOX_YESNO
# 9 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseMon
# 10 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
# 11 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 12 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 13 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseMon::
# 14 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_CritiqueWhichMonsNickname
# 15 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_lt VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_CheckCanRateMon
# 17 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_DontRateNickname
# 18 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 19 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 20 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_DontRateNickname::
# 21 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_ISeeComeVisitAgain
# 22 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 23 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 24 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 25 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon::
# 26 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 27 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, LavenderTown_House2_EventScript_CantNicknameEgg
# 28 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 29 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special IsMonOTIDNotPlayers
# 30 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
# 31 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 32 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 33 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
# 34 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_GiveItANicerName, MSGBOX_YESNO
# 35 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseNewNickname
# 36 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
# 37 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 38 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 39 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CantNicknameEgg::
# 40 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_ThatIsMerelyAnEgg
# 41 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 42 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 43 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 44 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CantNicknameTradeMon::
# 45 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_TrulyImpeccableName
# 46 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 47 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 48 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 49 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseNewNickname::
# 50 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_WhatShallNewNicknameBe
# 51 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 52 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 53 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 54 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_ChoseNewNickname
# 55 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName
# 56 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 57 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 58 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 59 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChoseNewNickname::
# 60 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsName
# 61 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 62 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 63 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 64 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_WantMeToRateNicknames::
# 65 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Hello, hello!\n"
# 66 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I am the official NAME RATER!\p"
# 67 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Want me to rate the nicknames of\n"
# 68 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "your POKéMON?$"
# 69 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 70 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_CritiqueWhichMonsNickname::
# 71 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Which POKéMON's nickname should\n"
# 72 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I critique?$"
# 73 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 74 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_GiveItANicerName::
# 75 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "{STR_VAR_1}, is it?\n"
# 76 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is a decent nickname!\p"
# 77 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "But, would you like me to give it\n"
# 78 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "a nicer name?\p"
# 79 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How about it?$"
# 80 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 81 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_WhatShallNewNicknameBe::
# 82 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
# 83 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "nickname be?$"
# 84 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 85 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_FromNowOnShallBeKnownAsName::
# 86 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 87 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 88 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "It is a better name than before!\n"
# 89 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How fortunate for you!$"
# 90 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 91 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_ISeeComeVisitAgain::
# 92 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I see.\n"
# 93 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Do come visit again.$"
# 94 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 95 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName::
# 96 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 97 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 98 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "It looks no different from before,\n"
# 99 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "and yet, this is vastly superior!\p"
# 100 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How fortunate for you!$"
# 101 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 102 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_TrulyImpeccableName::
# 103 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "{STR_VAR_1}, is it?\n"
# 104 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is a truly impeccable name!\p"
# 105 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Take good care of {STR_VAR_1}!$"
# 106 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 107 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_ThatIsMerelyAnEgg::
# 108 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Now, now.\n"
# 109 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is merely an EGG!$"

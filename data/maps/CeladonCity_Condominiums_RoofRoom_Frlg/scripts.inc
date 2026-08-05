# 1 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_BlackBelt::
# 6 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow, MSGBOX_NPC
# 7 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 8 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 9 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall::
# 10 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	lock
# 11 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	faceplayer
# 12 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EEVEE
# 13 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	givemon SPECIES_EEVEE, 25
# 14 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty
# 15 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC
# 16 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Common_EventScript_NoMoreRoomForPokemon
# 17 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	release
# 18 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 19 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 20 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty::
# 21 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 22 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 23 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 24 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 25 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitfanfare
# 26 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 27 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 28 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 29 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 30 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 31 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 32 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 33 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 34 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC::
# 35 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 36 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 37 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 38 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 39 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitfanfare
# 40 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 41 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 42 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
# 43 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 44 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
# 45 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 46 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 47 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC::
# 48 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 49 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 50 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 51 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 52 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee::
# 53 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setflag FLAG_GOT_EEVEE
# 54 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	release
# 55 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 56 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 57 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_TMsPamphlet::
# 58 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs, MSGBOX_SIGN
# 59 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 60 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 61 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard::
# 62 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	lockall
# 63 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture
# 64 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 65 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 66 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 67 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
# 68 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
# 70 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
# 71 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
# 72 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 73 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 74 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 75 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 76 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading::
# 77 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 78 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 79 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
# 80 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 81 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
# 82 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
# 83 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
# 84 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 85 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 86 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 87 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 88 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub::
# 89 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub
# 90 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 91 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 92 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 93 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner::
# 94 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner
# 95 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 96 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 97 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 98 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom::
# 99 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom
# 100 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
# 101 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 102 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 103 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard::
# 104 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	releaseall
# 105 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	end
# 106 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 107 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow::
# 108 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "There is nothing that I don't know,\n"
# 109 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "like I wrote on the blackboard.\p"
# 110 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "I know about the world of POKéMON\n"
# 111 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "in your GAME BOY ADVANCE!\p"
# 112 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Get together with your friends and\n"
# 113 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "enjoy trading POKéMON!$"
# 114 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 115 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee::
# 116 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "{PLAYER} obtained an EEVEE!$"
# 117 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 118 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_BoxIsFull::
# 119 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "ポケモンが　いっぱいだ\n"
# 120 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "ボックスを　かえて　きなさい$"
# 121 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 122 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture::
# 123 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "POKéMON Lecture\p"
# 124 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Playing with the Wireless Adapter$"
# 125 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 126 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading::
# 127 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Which heading do you want to read?$"
# 128 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 129 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub::
# 130 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "The POKéMON WIRELESS CLUB is\n"
# 131 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "upstairs at any POKéMON CENTER.\p"
# 132 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Visit one to link up with friend(s)\n"
# 133 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "using your Wireless Adapter.$"
# 134 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 135 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner::
# 136 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "To link only with a friend, go to\n"
# 137 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "the DIRECT CORNER.\p"
# 138 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "It is the right counter at the\n"
# 139 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "POKéMON WIRELESS CLUB.\p"
# 140 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Go into the TRADE CORNER or the\n"
# 141 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "COLOSSEUM with your friend.$"
# 142 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 143 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom::
# 144 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "To link and communicate with\n"
# 145 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "anyone, go to the UNION ROOM.\p"
# 146 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "It is the left counter at the\n"
# 147 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "POKéMON WIRELESS CLUB.\p"
# 148 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Go to the UNION ROOM and enjoy\n"
# 149 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "meeting other TRAINERS.$"
# 150 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"

# 151 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs::
# 152 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "It's a pamphlet on TMs.\p"
# 153 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "… …\p"
# 154 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "There are fifty TMs in all.\p"
# 155 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "There are also seven HMs that\n"
# 156 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "can be used repeatedly.\p"
# 157 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "SILPH CO.$"

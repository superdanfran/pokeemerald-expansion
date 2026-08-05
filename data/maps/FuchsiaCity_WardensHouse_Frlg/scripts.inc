# 1 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden::
# 6 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	lock
# 7 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM04, FuchsiaCity_WardensHouse_EventScript_ExplainStrength
# 9 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_set FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH, FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth
# 10 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_HifFuffHefifoo, MSGBOX_YESNO
# 11 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, YES, FuchsiaCity_WardensHouse_EventScript_WardenYes
# 12 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, NO, FuchsiaCity_WardensHouse_EventScript_WardenNo
# 13 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	release
# 14 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 15 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 16 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth::
# 17 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 18 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 19 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	message FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden
# 20 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	waitmessage
# 21 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	waitfanfare
# 22 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth
# 23 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 24 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	checkplayergender
# 25 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, FuchsiaCity_WardensHouse_EventScript_WardenThanksMale
# 26 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale
# 27 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden, ITEM_HM04
# 28 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_HM04
# 29 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	removeitem ITEM_GOLD_TEETH
# 30 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	release
# 31 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 32 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 33 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_WardenThanksMale::
# 34 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething
# 35 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	return
# 36 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 37 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale::
# 38 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething
# 39 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	return
# 40 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 41 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_WardenYes::
# 42 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo
# 43 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	return
# 44 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 45 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_WardenNo::
# 46 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo
# 47 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	return
# 48 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 49 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_ExplainStrength::
# 50 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ExplainStrength
# 51 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	release
# 52 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 53 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 54 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_DisplaySign1::
# 55 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay, MSGBOX_SIGN
# 56 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 57 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 58 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_DisplaySign2::
# 59 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay, MSGBOX_SIGN
# 60 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 61 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 62 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_HifFuffHefifoo::
# 63 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Hif fuff hefifoo!\p"
# 64 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Ha lof ha feef ee hafahi ho.\n"
# 65 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Heff hee fwee!$"
# 66 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 67 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo::
# 68 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Ah howhee ho hoo!\n"
# 69 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Eef ee hafahi ho!$"
# 70 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 71 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo::
# 72 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Ha?\n"
# 73 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "He ohay heh ha hoo ee haheh!$"
# 74 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 75 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden::
# 76 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "{PLAYER} gave the GOLD TEETH\n"
# 77 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "to the WARDEN.$"
# 78 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 79 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth::
# 80 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "The WARDEN popped in his teeth!$"
# 81 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 82 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething::
# 83 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Thanks, son!\n"
# 84 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "You're a real lifesaver!\p"
# 85 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "No one could understand a word\n"
# 86 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "that I said, not a one!\p"
# 87 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "I was too ashamed to show my face\n"
# 88 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "around the OFFICE, even.\p"
# 89 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Let me give you something for your\n"
# 90 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "trouble.$"
# 91 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 92 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething::
# 93 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Thank you, lassie!\n"
# 94 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "You're a real lifesaver!\p"
# 95 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "No one could understand a word\n"
# 96 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "that I said, not a one!\p"
# 97 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "I was too ashamed to show my face\n"
# 98 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "around the OFFICE, even.\p"
# 99 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Let me give you something for your\n"
# 100 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "trouble.$"
# 101 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 102 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden::
# 103 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "{PLAYER} received HM04\n"
# 104 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "from the WARDEN.$"
# 105 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 106 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_ExplainStrength::
# 107 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Inside HM04 you'll find\n"
# 108 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "STRENGTH.\p"
# 109 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "It lets POKéMON move boulders when\n"
# 110 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "you're outside of battle.\p"
# 111 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Oh yes, did you find the SECRET\n"
# 112 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "HOUSE in the SAFARI ZONE?$"
# 113 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 114 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
@ Unused
# 115 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_YouHaveTooMuchStuff::
# 116 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "なんや　にもつ\n"
# 117 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "いっぱいやんけ！$"
# 118 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 119 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay::
# 120 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "POKéMON photos and fossils are on\n"
# 121 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "display.$"
# 122 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 123 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay::
# 124 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Old POKéMON merchandise is on\n"
# 125 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "display.$"

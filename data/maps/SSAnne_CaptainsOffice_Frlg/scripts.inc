# 1 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Frlg_MapScripts::
# 3 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_Captain::
# 6 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	lock
# 7 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM01, SSAnne_CaptainsOffice_EventScript_AlreadyGotCut
# 8 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick
# 9 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 10 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	message SSAnne_CaptainsOffice_Text_RubbedCaptainsBack
# 11 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmessage
# 12 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 13 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitfanfare
# 14 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 15 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	delay 50
# 16 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 17 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 18 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut
# 19 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	giveitem_msg SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain, ITEM_HM01, 1, MUS_RG_OBTAIN_KEY_ITEM
# 20 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ExplainCut
# 21 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	setflag FLAG_GOT_HM01
# 22 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 1
# 23 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
# 24 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 25 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 26 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
@ Unused
# 27 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_NoRoomForCut::
# 28 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis
# 29 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	closemessage
# 30 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FaceOriginalDirection
# 31 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 32 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
# 33 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 34 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 35 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_AlreadyGotCut::
# 36 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 37 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon
# 39 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	release
# 40 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 41 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 42 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_TrashCan::
# 43 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked, MSGBOX_SIGN
# 44 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 45 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 46 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_EventScript_Book::
# 47 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_HowToConquerSeasickness, MSGBOX_SIGN
# 48 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	end
# 49 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 50 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick::
# 51 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: Ooargh…\n"
# 52 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I feel hideous…\l"
# 53 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Urrp! Seasick…$"
# 54 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 55 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_RubbedCaptainsBack::
# 56 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "{PLAYER} rubbed the CAPTAIN's\n"
# 57 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "back!\p"
# 58 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Rub-rub…\n"
# 59 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Rub-rub…$"
# 60 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 61 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut::
# 62 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: Whew! Thank you!\n"
# 63 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I'm feeling much better now.\p"
# 64 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "You want to see my hidden CUT\n"
# 65 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "technique?\p"
# 66 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I could show you my prized CUT\n"
# 67 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "technique if I weren't so ill…\p"
# 68 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I know! You can have this!\n"
# 69 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "This HIDDEN MACHINE!\p"
# 70 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Teach CUT to your POKéMON, and\n"
# 71 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "you can see it CUT anytime!$"
# 72 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 73 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain::
# 74 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "{PLAYER} obtained HM01\n"
# 75 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "from the CAPTAIN!$"
# 76 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 77 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_ExplainCut::
# 78 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Using CUT, you can chop down\n"
# 79 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "small trees.\p"
# 80 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Why not try it with the trees\n"
# 81 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "around VERMILION CITY?$"
# 82 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 83 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon::
# 84 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "CAPTAIN: …Whew!\p"
# 85 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Now that I'm not sick anymore,\n"
# 86 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "I guess it's time.\p"
# 87 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "The S.S. ANNE will set sail soon!\p"
# 88 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Farewell, until our return to\n"
# 89 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "VERMILION CITY!$"
# 90 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 91 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis::
# 92 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 93 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "You have no room for this!$"
# 94 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 95 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked::
# 96 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Yuck!\n"
# 97 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "Shouldn't have looked!$"
# 98 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"

# 99 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
SSAnne_CaptainsOffice_Text_HowToConquerSeasickness::
# 100 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "How to Conquer Seasickness…\n"
# 101 "data/maps/SSAnne_CaptainsOffice_Frlg/scripts.pory"
	.string "The CAPTAIN's reading this!$"

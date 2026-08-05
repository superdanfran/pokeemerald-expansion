# 1 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 2 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Frlg_MapScripts::
# 3 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 5 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_Attendant::
# 6 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	lock
# 7 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM03, SafariZone_SecretHouse_EventScript_ExplainSurf
# 9 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_CongratsYouveWon
# 10 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	checkitemspace ITEM_HM03
# 11 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SafariZone_SecretHouse_EventScript_NoRoomForHM03
# 12 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	giveitem_msg SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant, ITEM_HM03
# 13 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
# 14 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_HM03
# 15 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	release
# 16 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	end
# 17 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 18 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_NoRoomForHM03::
# 19 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_DontHaveRoomForPrize
# 20 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	release
# 21 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	end
# 22 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 23 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_ExplainSurf::
# 24 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
# 25 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	release
# 26 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	end
# 27 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 28 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Text_CongratsYouveWon::
# 29 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "Ah! Finally!\p"
# 30 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You're the first person to reach\n"
# 31 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "the SECRET HOUSE!\p"
# 32 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "Although I made a campaign\n"
# 33 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "for our grand opening,\p"
# 34 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "I was getting worried that no one\n"
# 35 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "would win our campaign prize.\p"
# 36 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 37 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You have won!$"
# 38 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 39 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant::
# 40 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "{PLAYER} received HM03\n"
# 41 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "from the attendant!$"
# 42 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 43 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Text_ExplainSurf::
# 44 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "HM03 is SURF.\p"
# 45 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "POKéMON will be able to ferry you\n"
# 46 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "across water using it.\p"
# 47 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "And, this HM isn't disposable, so\n"
# 48 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "you can use it over and over.\p"
# 49 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You're super lucky for winning this\n"
# 50 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "fabulous prize!$"
# 51 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 52 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Text_DontHaveRoomForPrize::
# 53 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You don't have room for this\n"
# 54 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "fabulous prize!$"

# 1 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Frlg_MapScripts::
# 3 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_Woman::
# 6 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	lock
# 7 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_TakeAShortRest, MSGBOX_YESNO
# 9 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SSAnne_1F_Room6_EventScript_DeclineHeal
# 10 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	closemessage
# 11 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 12 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed
# 13 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	release
# 14 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	end
# 15 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 16 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_DeclineHeal::
# 17 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	checkplayergender
# 18 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SSAnne_1F_Room6_EventScript_DeclineHealMale
# 19 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMySister
# 20 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	release
# 21 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	end
# 22 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 23 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_DeclineHealMale::
# 24 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother
# 25 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	release
# 26 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	end
# 27 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 28 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Text_TakeAShortRest::
# 29 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "You look tired. Would you like to\n"
# 30 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "take a short rest?$"
# 31 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 32 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed::
# 33 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "I'm glad to see that everyone is\n"
# 34 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "looking refreshed and chipper.$"
# 35 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 36 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother::
# 37 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "Oh, I'm sorry for fussing over you.\n"
# 38 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "You look like my little brother…$"
# 39 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 40 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Text_SorryYouLookLikeMySister::
# 41 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "Oh, I'm sorry for fussing over you.\n"
# 42 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "You look like my little sister…$"

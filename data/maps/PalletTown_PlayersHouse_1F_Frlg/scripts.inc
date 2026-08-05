# 1 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Frlg_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 5 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 6 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 7 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 9 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 10 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 11 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 12 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 13 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FaceOriginalDirection
# 14 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 18 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 19 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 20 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 21 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 22 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 23 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 24 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 25 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 26 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 27 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 28 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 29 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 30 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 31 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
# 32 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 34 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 35 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 36 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 37 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 38 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 39 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 40 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 41 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 42 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 43 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 44 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 45 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 46 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 47 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 48 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 49 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 50 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 51 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 52 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 53 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 54 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 55 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 56 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 57 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
# 58 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: …Right.\n"
# 59 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All boys leave home someday.\l"
# 60 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "It said so on TV.\p"
# 61 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, yes. PROF. OAK, next door, was\n"
# 62 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "looking for you.$"
# 63 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 64 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
# 65 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: …Right.\n"
# 66 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All girls dream of traveling.\l"
# 67 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "It said so on TV.\p"
# 68 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, yes. PROF. OAK, next door, was\n"
# 69 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "looking for you.$"
# 70 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 71 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
# 72 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: {PLAYER}!\n"
# 73 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You should take a quick rest.$"
# 74 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 75 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
# 76 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: Oh, good! You and your\n"
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "POKéMON are looking great.\l"
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Take care now!$"
# 79 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 80 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
# 81 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 82 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Four boys are walking on railroad\l"
# 83 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "tracks.\p"
# 84 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 86 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
# 87 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "A girl with her hair in pigtails is\l"
# 89 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "walking up a brick road.\p"
# 90 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 91 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 92 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
# 93 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oops, wrong side…$"

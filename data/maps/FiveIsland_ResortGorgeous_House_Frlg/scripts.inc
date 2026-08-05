# 1 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
.equ SHOWN_REQUESTED_MON, FLAG_TEMP_2
# 3 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 4 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Frlg_MapScripts::
# 5 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 7 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy::
# 8 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	faceplayer
# 10 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_set SHOWN_REQUESTED_MON, FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest
# 11 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESORT_GORGEOUS_REQUESTED_MON, 0xFFFF, FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong
# 12 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_ne VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE, FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon
# 13 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish
# 14 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 15 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 16 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 17 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_RequestMon::
# 18 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 19 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease
# 20 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	release
# 21 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 22 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 23 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong::
# 24 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting
# 25 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 26 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 27 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 28 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon::
# 29 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESORT_GORGEOUS_REQUESTED_MON
# 30 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 31 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon
# 32 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 33 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 34 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 35 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon::
# 36 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 37 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou
# 38 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	addobject LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 39 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerEnter
# 40 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 42 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady
# 43 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 46 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation
# 47 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 48 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	closemessage
# 50 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth
# 51 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth
# 52 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast
# 53 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest
# 54 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 55 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks
# 56 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	giveitem VAR_RESORT_GORGEOUS_REWARD
# 57 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward
# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setflag SHOWN_REQUESTED_MON
# 59 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 60 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	release
# 61 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 62 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 63 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth::
# 64 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterDown
# 65 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth
# 66 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 67 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 68 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	return
# 70 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 71 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth::
# 72 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth
# 73 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 74 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 75 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 76 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	return
# 77 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 78 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast::
# 79 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterLeft
# 80 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast
# 81 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 82 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 83 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 84 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	return
# 85 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 86 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest::
# 87 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest
# 88 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 89 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	return
# 90 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 91 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward::
# 92 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 93 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull
# 94 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 95 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
# 96 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setflag SHOWN_REQUESTED_MON
# 97 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 98 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	release
# 99 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 100 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 101 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest::
# 102 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck
# 103 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	release
# 104 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 105 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 106 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth::
# 107 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 108 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 109 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 110 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 111 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 112 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 113 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_in_place_faster_right
# 114 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 115 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 116 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth::
# 117 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 119 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_in_place_faster_down
# 120 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 121 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 122 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast::
# 123 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 124 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 125 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 126 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 127 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 128 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 129 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
@ Very odd. If the player is talking to Selphy facing West, then the player has clipped through the table
# 130 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
@ In this case rather than approach the player the Butler walks up, which clips the Butler into a wall
# 131 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest::
# 132 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_up
# 133 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 134 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 135 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerEnter::
# 136 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_in_place_down
# 137 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_end
# 138 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 139 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
@ Addressed as "Sebastian" but speaks only as "Butler"
# 140 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Butler::
# 141 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
# 142 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	end
# 143 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 144 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish::
# 145 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh?\n"
# 146 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Do I know you from somewhere?\p"
# 147 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh, but that doesn't matter.\p"
# 148 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I am exquisitely bored.\n"
# 149 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Please, hear my wish.$"
# 150 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 151 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease::
# 152 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I wish to see a POKéMON.\n"
# 153 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "A darling {STR_VAR_1}.\p"
# 154 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I want to see one right away.\n"
# 155 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Please, make my wish come true.$"
# 156 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 157 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting::
# 158 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh, I'm tired of this.\n"
# 159 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I'm tired of waiting for you.\p"
# 160 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I'll forgive you this time, but\n"
# 161 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "please don't fail me next time.$"
# 162 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 163 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou::
# 164 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh, hello, there.\p"
# 165 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh, my gracious. That must be the\n"
# 166 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "{STR_VAR_1} you caught for me.\p"
# 167 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Giggle…\n"
# 168 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I see a resemblance to you.\p"
# 169 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Thank you so kindly.\p"
# 170 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "… …  … …  … …\n"
# 171 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Is something the matter?\p"
# 172 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "You may leave.\p"
# 173 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "… …  … …  … …\n"
# 174 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh, fine. I understand now.\p"
# 175 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SEBASTIAN!\n"
# 176 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I need you here this instant!$"
# 177 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 178 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady::
# 179 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: Yes, my lady.$"
# 180 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 181 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation::
# 182 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: See to it that this person\n"
# 183 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "is given a token of appreciation.$"
# 184 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 185 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid::
# 186 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: I shall do as you bid,\n"
# 187 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "my lady.$"
# 188 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 189 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks::
# 190 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: I sincerely thank you for\n"
# 191 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "pleasing Lady SELPHY.\p"
# 192 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Please accept this as her thanks…$"
# 193 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 194 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull::
# 195 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: Your BAG appears to be\n"
# 196 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "unfortunately full.$"
# 197 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 198 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing::
# 199 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh…\n"
# 200 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "How disappointing.$"
# 201 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 202 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck::
# 203 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: I wish you the best of\n"
# 204 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "luck.$"
# 205 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"

# 206 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun::
# 207 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: The smile of Lady SELPHY\n"
# 208 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "has the brilliance of the sun.\p"
# 209 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Please, I beg you to bring joy\n"
# 210 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "to Lady SELPHY.$"

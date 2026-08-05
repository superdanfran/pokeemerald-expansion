# 1 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
.set DID_CHANSEY_DANCE, FLAG_TEMP_2
# 3 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 4 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Frlg_MapScripts::
# 5 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 7 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan::
# 8 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	lock
# 9 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto_if_set DID_CHANSEY_DANCE, SevenIsland_SevaultCanyon_House_EventScript_AlreadyDanced
# 10 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 11 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 12 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 13 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	fadedefaultbgm
# 14 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 15 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 16 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 17 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 18 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 19 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_WouldYouLikeToDance, MSGBOX_YESNO
# 20 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_SevaultCanyon_House_EventScript_DeclineDance
# 21 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_DancedChanseyDance
# 22 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	closemessage
# 23 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 24 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	call_if_ne VAR_FACING, DIR_SOUTH, SevenIsland_SevaultCanyon_House_EventScript_PlayerFaceDown
# 25 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 26 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 27 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 28 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 29 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	fadedefaultbgm
# 30 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 31 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 32 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_YoureAllChipperNow
# 33 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	setflag DID_CHANSEY_DANCE
# 34 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	release
# 35 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	end
# 36 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 37 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_PlayerFaceDown::
# 38 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 39 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	return
# 41 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 42 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_AlreadyDanced::
# 43 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 44 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 46 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	release
# 47 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	end
# 48 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 49 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_DeclineDance::
# 50 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 51 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ComeOnDance
# 52 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	release
# 53 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	end
# 54 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 55 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Movement_ChanseyDance::
# 56 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_down
# 57 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 58 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_down
# 59 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 60 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_down
# 61 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 62 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_down
# 63 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 64 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_faster_right
# 65 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 66 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_faster_up
# 67 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 68 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_faster_left
# 69 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 70 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_faster_down
# 71 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 72 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_end
# 73 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 74 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_Chansey::
# 75 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	lock
# 76 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	faceplayer
# 77 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitse
# 78 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 79 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_Chansey
# 80 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmoncry
# 81 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	release
# 82 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	end
# 83 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 84 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn::
# 85 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Dance, dance!\n"
# 86 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "CHANSEY Dance!\p"
# 87 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "You join in, too!\n"
# 88 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Dance, dance!$"
# 89 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 90 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_WouldYouLikeToDance::
# 91 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Would you like to dance?$"
# 92 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 93 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_ComeOnDance::
# 94 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Come on, dance!$"
# 95 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 96 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_DancedChanseyDance::
# 97 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "{PLAYER} danced the CHANSEY Dance!$"
# 98 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 99 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_YoureAllChipperNow::
# 100 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Ahahahaha!\p"
# 101 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "There, you're all chipper now!\n"
# 102 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Lucky!$"
# 103 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 104 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_Chansey::
# 105 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "CHANSEY: Chansi! Chansi!$"

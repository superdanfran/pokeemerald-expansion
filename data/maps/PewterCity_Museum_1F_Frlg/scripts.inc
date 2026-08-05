# 1 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1::
# 6 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lock
# 7 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 9 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 10 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 11 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
# 12 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 13 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 15 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
# 16 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
# 17 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
# 18 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_1F_EventScript_ExplainAmber
# 19 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 20 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 21 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
# 22 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
# 23 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 24 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 26 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 27 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 28 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_ExplainAmber::
# 29 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
# 30 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 31 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 32 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 33 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 34 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 35 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
# 36 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 37 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 38 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 39 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 41 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 42 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 43 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
# 44 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 45 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 46 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 47 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 48 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 49 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 50 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 51 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
# 52 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 53 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 54 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 55 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 56 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
# 57 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 58 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 59 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_EntranceTrigger::
# 60 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 61 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	showmoneybox 0, 0
# 62 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
# 63 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_TryPayForTicket
# 64 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ComeAgain
# 65 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 66 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 67 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 68 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 71 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 72 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket::
# 73 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	checkmoney 50
# 74 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NotEnoughMoney
# 75 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 76 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
# 77 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
# 78 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
# 79 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	playse SE_SHOP
# 80 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removemoney 50
# 81 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	updatemoneybox
# 82 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitse
# 83 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
# 84 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
# 85 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 86 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 87 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 88 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 89 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
# 90 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
# 91 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	return
# 93 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 94 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
# 95 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
# 96 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 97 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	return
# 98 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 99 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
# 100 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
# 101 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 102 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	return
# 103 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 104 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_NotEnoughMoney::
# 105 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
# 106 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 107 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 108 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 109 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 110 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 111 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 112 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 113 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ForcePlayerExit::
# 114 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_down
# 115 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end
# 116 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 117 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterLeft::
# 118 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 119 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 120 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 121 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 122 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end
# 123 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 124 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterMid::
# 125 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 126 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 127 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 128 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end
# 129 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 130 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterRight::
# 131 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 132 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 133 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end
# 134 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 135 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist2::
# 136 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
# 137 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 138 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 139 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldMan::
# 140 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
# 141 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 142 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 143 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmberScientist::
# 144 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lock
# 145 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 146 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber
# 147 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
# 148 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	checkitemspace ITEM_OLD_AMBER
# 149 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NoRoomForOldAmber
# 150 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_AMBER
# 151 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_OLD_AMBER
# 152 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 153 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 154 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 155 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 156 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_NoRoomForOldAmber::
# 157 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
# 158 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 159 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 160 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 161 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber::
# 162 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
# 163 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
# 164 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 165 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 166 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldAmber::
# 167 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
# 168 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 169 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 170 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 171 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 172 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_AERODACTYL
# 173 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8005, 10
# 174 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 175 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special OpenMuseumFossilPic
# 176 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 177 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special CloseMuseumFossilPic
# 178 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 179 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 180 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 181 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 182 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 183 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTOPS
# 184 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8005, 10
# 185 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 186 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special OpenMuseumFossilPic
# 187 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 188 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special CloseMuseumFossilPic
# 189 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 190 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 191 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 192 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Its50YForChildsTicket::
# 193 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Yes, yes.\n"
# 194 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "It's ¥50 for a child's ticket.\p"
# 195 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Would you like to come in?$"
# 196 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 197 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_ComeAgain::
# 198 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Come again!$"
# 199 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 200 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Right50YThankYou::
# 201 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Right, ¥50!\n"
# 202 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Thank you!$"
# 203 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 204 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_DontHaveEnoughMoney::
# 205 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You don't have enough money.$"
# 206 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 207 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_PleaseEnjoyYourself::
# 208 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Please enjoy yourself.$"
# 209 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 210 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs::
# 211 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You can't sneak in the back way!\n"
# 212 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Nice try, kid, but no.\p"
# 213 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Oh, whatever!\n"
# 214 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Do you know what AMBER is?$"
# 215 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 216 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_AmberContainsGeneticMatter::
# 217 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER contains the genetic matter\n"
# 218 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "of ancient POKéMON.\p"
# 219 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "There's a LAB somewhere trying to\n"
# 220 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "resurrect POKéMON from AMBER.$"
# 221 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 222 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_AmberIsFossilizedSap::
# 223 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER is actually sap, that gooey\n"
# 224 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "stuff that oozes from trees.\p"
# 225 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "The ancient sap fossilized over\n"
# 226 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "time to become rock-hard AMBER.$"
# 227 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 228 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
@ Unused
# 229 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_PleaseGoAround::
# 230 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "あちらへ　おまわりください$"
# 231 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 232 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife::
# 233 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I should be grateful for my long\n"
# 234 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "life.\p"
# 235 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Never did I think I would get to\n"
# 236 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "see the bones of a dragon!$"
# 237 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 238 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_WantYouToGetAmberExamined::
# 239 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Ssh! Listen, I need to share a\n"
# 240 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "secret with someone.\p"
# 241 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I think that this chunk of AMBER\n"
# 242 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "contains POKéMON DNA!\p"
# 243 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "It would be a shattering scientific\n"
# 244 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "breakthrough if POKéMON could be\l"
# 245 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "resurrected from it.\p"
# 246 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "But, my colleagues just ignore\n"
# 247 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "what I have to say.\p"
# 248 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "So, I have a favor to ask!\p"
# 249 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I want you to get this examined at\n"
# 250 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "a POKéMON LAB somewhere.$"
# 251 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 252 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan::
# 253 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "{PLAYER} received the OLD AMBER\n"
# 254 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "from the man.$"
# 255 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 256 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_GetOldAmberChecked::
# 257 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Ssh!\n"
# 258 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Get the OLD AMBER checked!$"
# 259 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 260 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_DontHaveSpaceForThis::
# 261 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You don't have space for this.$"
# 262 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 263 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit::
# 264 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "We have two fossils of rare,\n"
# 265 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "prehistoric POKéMON on exhibit.$"
# 266 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 267 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_BeautifulPieceOfAmber::
# 268 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "There is a beautiful piece of\n"
# 269 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER in a clear gold color.$"
# 270 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 271 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_AerodactylFossil::
# 272 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AERODACTYL Fossil\n"
# 273 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "A primitive and rare POKéMON.$"
# 274 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 275 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_KabutopsFossil::
# 276 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "KABUTOPS Fossil\n"
# 277 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "A primitive and rare POKéMON.$"

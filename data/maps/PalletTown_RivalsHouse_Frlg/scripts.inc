# 1 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
.equ RECEIVED_TOWN_MAP, VAR_TEMP_1
# 3 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 4 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Frlg_MapScripts::
# 5 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
# 6 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.byte 0
# 7 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 8 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_OnTransition::
# 9 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
# 10 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
# 11 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 12 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 13 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
# 14 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setobjectxyperm LOCALID_DAISY, 5, 4
# 16 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	return
# 17 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 18 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
# 19 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setvar RECEIVED_TOWN_MAP, TRUE
# 20 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	return
# 21 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 22 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy::
# 23 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	lock
# 24 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 26 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_GroomMon
# 27 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq RECEIVED_TOWN_MAP, TRUE, PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
# 28 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
# 29 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_GiveTownMap
# 30 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_RivalsHouse_EventScript_HeardBattledRival
# 31 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 32 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 33 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
# 34 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 36 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 37 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 38 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_HeardBattledRival::
# 39 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
# 40 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 41 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 42 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 43 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon::
# 44 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_lt VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500, PalletTown_RivalsHouse_EventScript_RateMonFriendship
# 45 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 46 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 47 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 48 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special ChoosePartyMon
# 49 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	lock
# 50 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	faceplayer
# 51 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 52 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 53 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_RivalsHouse_EventScript_CantGroomEgg
# 54 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 55 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 56 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 57 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 58 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitfanfare
# 59 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special DaisyMassageServices
# 60 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 61 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special BufferMonNickname
# 62 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
# 63 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 64 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 65 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 66 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_CantGroomEgg::
# 67 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
# 68 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 69 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 70 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 71 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 72 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
# 73 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 74 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 75 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 76 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship::
# 77 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 78 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 79 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 0, PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
# 81 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 1, PalletTown_RivalsHouse_EventScript_MonFriendshipLower
# 82 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 2, PalletTown_RivalsHouse_EventScript_MonFriendshipLow
# 83 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 3, PalletTown_RivalsHouse_EventScript_MonFriendshipMid
# 84 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 4, PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
# 85 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 5, PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
# 86 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 6, PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
# 87 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 88 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 89 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
# 90 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
# 91 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 92 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 93 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 94 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
# 95 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
# 96 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 97 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 98 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 99 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
# 100 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
# 101 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 102 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 103 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 104 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
# 105 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
# 106 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 107 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 108 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 109 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
# 110 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
# 111 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 112 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 113 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 114 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
# 115 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
# 116 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 117 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 118 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 119 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
# 120 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
# 121 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 122 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 123 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 124 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
# 125 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
# 126 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 127 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 128 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 129 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GiveTownMap::
# 130 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 131 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 132 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	checkitemspace ITEM_TOWN_MAP
# 133 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
# 134 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
# 135 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 136 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	removeobject LOCALID_TOWN_MAP
# 137 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 138 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	delay 15
# 139 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
# 140 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 141 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	delay 12
# 142 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
# 143 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 144 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 145 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 146 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
# 147 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
# 148 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 149 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 150 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 151 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_ExplainTownMap::
# 152 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
# 153 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 154 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 155 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 156 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_TownMap::
# 157 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
# 158 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 159 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 160 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Bookshelf::
# 161 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
# 162 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 163 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 164 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Picture::
# 165 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
# 166 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 167 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 168 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_HiBrothersAtLab::
# 169 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\p"
# 170 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "My brother, {RIVAL}, is out at\n"
# 171 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Grandpa's LAB.$"
# 172 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 173 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_HeardYouBattledRival::
# 174 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: {PLAYER}, I heard you had\n"
# 175 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "a battle against {RIVAL}.\p"
# 176 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "I wish I'd seen that!$"
# 177 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 178 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp::
# 179 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Grandpa asked you to run an\n"
# 180 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "errand?\p"
# 181 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Gee, that's lazy of him.\n"
# 182 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Here, this will help you.$"
# 183 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 184 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy::
# 185 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a TOWN MAP\n"
# 186 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "from DAISY.$"
# 187 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 188 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_DontHaveSpaceForThis::
# 189 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You don't have space for this in\n"
# 190 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "your BAG.$"
# 191 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 192 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ExplainTownMap::
# 193 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You can use the TOWN MAP to find\n"
# 194 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "out where you are, or check the\l"
# 195 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "names of places.$"
# 196 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 197 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_PleaseGiveMonsRest::
# 198 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Just like people, POKéMON\n"
# 199 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "are living things.\p"
# 200 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "When they get tired, please give\n"
# 201 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "them a rest.$"
# 202 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 203 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ItsBigMapOfKanto::
# 204 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's a big map of the KANTO region.\n"
# 205 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Now this would be useful!$"
# 206 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 207 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks::
# 208 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "The shelves are crammed full of\n"
# 209 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "books on POKéMON.$"
# 210 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 211 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_LikeMeToGroomMon::
# 212 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\n"
# 213 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Good timing.\p"
# 214 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "I'm about to have some tea.\n"
# 215 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Would you like to join me?\p"
# 216 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Oh, but look.\n"
# 217 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Your POKéMON are a little dirty.\p"
# 218 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Would you like me to groom one?$"
# 219 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 220 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_DontNeedAnyGrooming::
# 221 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You don't need any grooming done?\n"
# 222 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Okay, we'll just have tea.$"
# 223 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 224 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_GroomWhichOne::
# 225 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Which one should I groom?$"
# 226 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 227 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_LookingNiceInNoTime::
# 228 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Okay, I'll get it looking\n"
# 229 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "nice in no time.$"
# 230 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 231 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ThereYouGoAllDone::
# 232 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
#ifdef BUGFIX @ The localizers missed what should be a textcolor change in the localizations.
# 233 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{COLOR DARK_GRAY}{STR_VAR_1} looks dreamily content…\p"
# 234 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{COLOR RED}DAISY: There you go! All done.\n"
# 235 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
#else @ In the JP games, gender-based text used a different font instead of different colors.
# 236 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{STR_VAR_1} looks dreamily content…\p"
# 237 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{FONT_FEMALE}DAISY: There you go! All done.\n"
# 238 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
#endif
# 239 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "See? Doesn't it look nice?\p"
# 240 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Giggle…\n"
# 241 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's such a cute POKéMON.$"
# 242 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 243 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_CantGroomAnEgg::
# 244 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Oh, sorry. I honestly can't\n"
# 245 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "groom an EGG.$"
# 246 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 247 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_MayISeeFirstMon::
# 248 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Your POKéMON grow to love\n"
# 249 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "you if you raise them with love.\p"
# 250 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "For example, {PLAYER}, may I see\n"
# 251 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "your first POKéMON?$"
# 252 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 253 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_CouldntLoveYouMore::
# 254 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It couldn't possibly love you\n"
# 255 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "any more than it does now.\p"
# 256 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Your POKéMON is happy beyond\n"
# 257 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "words.$"
# 258 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 259 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ItLooksVeryHappy::
# 260 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It looks very happy.\p"
# 261 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "I wish {RIVAL} could see this and\n"
# 262 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "learn something from it.$"
# 263 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 264 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ItsQuiteFriendly::
# 265 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's quite friendly with you.\n"
# 266 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Keep being good to it!$"
# 267 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 268 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ItsWarmingUpToYou::
# 269 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's warming up to you.\n"
# 270 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Trust must be growing between you.$"
# 271 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 272 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet::
# 273 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's not quite familiar with you\n"
# 274 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "yet.\p"
# 275 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "POKéMON are all quite wary when\n"
# 276 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "you first get them.$"
# 277 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 278 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou::
# 279 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{PLAYER}, I don't like the way it\n"
# 280 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "glares at you.\p"
# 281 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Could you try being a little nicer\n"
# 282 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "to it?$"
# 283 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 284 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch::
# 285 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "…Um, it's not easy for me to say\n"
# 286 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "this, but…\p"
# 287 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Is there some reason why your\n"
# 288 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "POKéMON would hate you so much?$"
# 289 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 290 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy::
# 291 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "“The lovely and sweet\n"
# 292 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "CLEFAIRY”$"

# 1 "data/maps/VermilionCity_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
# 4 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionCity_OnFrame
# 5 "data/maps/VermilionCity_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/VermilionCity_Frlg/scripts.pory"

# 7 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_OnFrame::
# 8 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 2, VermilionCity_EventScript_ExitSSAnne
# 9 "data/maps/VermilionCity_Frlg/scripts.pory"
	.2byte 0
# 10 "data/maps/VermilionCity_Frlg/scripts.pory"

# 11 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ExitSSAnne::
# 12 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 13 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, VermilionCity_Movement_ExitSSAnne
# 14 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 3
# 16 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
# 17 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 18 "data/maps/VermilionCity_Frlg/scripts.pory"

# 19 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Movement_ExitSSAnne::
# 20 "data/maps/VermilionCity_Frlg/scripts.pory"
	walk_up
# 21 "data/maps/VermilionCity_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/VermilionCity_Frlg/scripts.pory"
	step_end
# 23 "data/maps/VermilionCity_Frlg/scripts.pory"

# 24 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_OnTransition::
# 25 "data/maps/VermilionCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VERMILION_CITY
# 26 "data/maps/VermilionCity_Frlg/scripts.pory"
	call_if_set FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION, VermilionCity_EventScript_HideOaksAide
# 27 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 28 "data/maps/VermilionCity_Frlg/scripts.pory"

# 29 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HideOaksAide::
# 30 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 31 "data/maps/VermilionCity_Frlg/scripts.pory"
	return
# 32 "data/maps/VermilionCity_Frlg/scripts.pory"

# 33 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_Woman::
# 34 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_GrimerMultipliesInSludge, MSGBOX_NPC
# 35 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 36 "data/maps/VermilionCity_Frlg/scripts.pory"

# 37 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OldMan1::
# 38 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock
# 39 "data/maps/VermilionCity_Frlg/scripts.pory"
	faceplayer
# 40 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_OldMan1SSAnneLeft
# 41 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DidYouSeeSSAnneInHarbor
# 42 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 43 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 44 "data/maps/VermilionCity_Frlg/scripts.pory"

# 45 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OldMan1SSAnneLeft::
# 46 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SSAnneHasDepartedForYear
# 47 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 48 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 49 "data/maps/VermilionCity_Frlg/scripts.pory"

# 50 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_FerrySailor::
# 51 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock
# 52 "data/maps/VermilionCity_Frlg/scripts.pory"
	faceplayer
# 53 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresent
# 54 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_WelcomeToTheSSAnne
# 55 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 56 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 57 "data/maps/VermilionCity_Frlg/scripts.pory"

# 58 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket::
# 59 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, EventScript_SetResultFalse
# 60 "data/maps/VermilionCity_Frlg/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 61 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 62 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultTrue
# 63 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 64 "data/maps/VermilionCity_Frlg/scripts.pory"

# 65 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket::
# 66 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, EventScript_SetResultFalse
# 67 "data/maps/VermilionCity_Frlg/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 68 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 69 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultTrue
# 70 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 71 "data/maps/VermilionCity_Frlg/scripts.pory"

# 72 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent::
# 73 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 74 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 75 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 76 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 77 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 78 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 79 "data/maps/VermilionCity_Frlg/scripts.pory"

# 80 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass::
# 81 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasMysticTicket
# 82 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticTicket
# 83 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 84 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasAuroraTicket
# 85 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 86 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopRainbowPass
# 87 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 88 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
# 89 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 90 "data/maps/VermilionCity_Frlg/scripts.pory"

# 91 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket::
# 92 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 93 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticAndAuroraTickets
# 94 "data/maps/VermilionCity_Frlg/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 95 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 96 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 97 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 17, 6, MULTI_SEVII_NAVEL, FALSE
# 98 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 100 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, EventScript_SailToNavelRock
# 101 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, EventScript_CancelSail
# 102 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 127, EventScript_CancelSail
# 103 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 104 "data/maps/VermilionCity_Frlg/scripts.pory"

# 105 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ShowMysticTicket::
# 106 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 107 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_OhMysticTicketTakeYouToNavelRock
# 108 "data/maps/VermilionCity_Frlg/scripts.pory"
	return
# 109 "data/maps/VermilionCity_Frlg/scripts.pory"

# 110 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket::
# 111 "data/maps/VermilionCity_Frlg/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 112 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 113 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 114 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 13, 6, MULTI_SEVII_BIRTH, FALSE
# 115 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 117 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, EventScript_SailToBirthIsland
# 118 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, EventScript_CancelSail
# 119 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 127, EventScript_CancelSail
# 120 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 121 "data/maps/VermilionCity_Frlg/scripts.pory"

# 122 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ShowAuroraTicket::
# 123 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 124 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland
# 125 "data/maps/VermilionCity_Frlg/scripts.pory"
	return
# 126 "data/maps/VermilionCity_Frlg/scripts.pory"

# 127 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets::
# 128 "data/maps/VermilionCity_Frlg/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 129 "data/maps/VermilionCity_Frlg/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 130 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 131 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 132 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 13, 5, MULTI_SEVII_NAVEL_BIRTH, FALSE
# 133 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 135 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, EventScript_SailToNavelRock
# 136 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, EventScript_SailToBirthIsland
# 137 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 3, EventScript_CancelSail
# 138 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 127, EventScript_CancelSail
# 139 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 140 "data/maps/VermilionCity_Frlg/scripts.pory"

# 141 "data/maps/VermilionCity_Frlg/scripts.pory"
EventScript_SailToNavelRock::
# 142 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Seagallop10Departing
# 143 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 144 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_NAVEL_ROCK
# 145 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetSail
# 146 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 147 "data/maps/VermilionCity_Frlg/scripts.pory"

# 148 "data/maps/VermilionCity_Frlg/scripts.pory"
EventScript_SailToBirthIsland::
# 149 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Seagallop12Departing
# 150 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 151 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_BIRTH_ISLAND
# 152 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetSail
# 153 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 154 "data/maps/VermilionCity_Frlg/scripts.pory"

# 155 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass::
# 156 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopTriPass
# 157 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 158 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 159 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 19, 5, MULTI_SEAGALLOP_123, FALSE
# 160 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 161 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, EventScript_SailToOneIsland2
# 162 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, EventScript_SailToTwoIsland2
# 163 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, EventScript_SailToThreeIsland2
# 164 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 3, EventScript_CancelSail
# 165 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 127, EventScript_CancelSail
# 166 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 167 "data/maps/VermilionCity_Frlg/scripts.pory"

# 168 "data/maps/VermilionCity_Frlg/scripts.pory"
@ Unreachable
# 169 "data/maps/VermilionCity_Frlg/scripts.pory"
Vermilion_EventScript_Unused::
# 170 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 171 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 172 "data/maps/VermilionCity_Frlg/scripts.pory"

# 173 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicketLeft::
# 174 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 175 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 176 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 177 "data/maps/VermilionCity_Frlg/scripts.pory"

# 178 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicketRight::
# 179 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 180 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 181 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 182 "data/maps/VermilionCity_Frlg/scripts.pory"

# 183 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ExitedTicketCheck::
# 184 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 185 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 186 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
# 187 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 188 "data/maps/VermilionCity_Frlg/scripts.pory"

# 189 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicket::
# 190 "data/maps/VermilionCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 191 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_VERMILION_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterLeft
# 192 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 193 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmovement 0
# 194 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresentTrigger
# 195 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DoYouHaveATicket
# 196 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, VermilionCity_EventScript_DontHaveSSTicket
# 197 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_FlashedSSTicket
# 198 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 1
# 199 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
# 200 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 201 "data/maps/VermilionCity_Frlg/scripts.pory"

# 202 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_DontHaveSSTicket::
# 203 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DontHaveNeededSSTicket
# 204 "data/maps/VermilionCity_Frlg/scripts.pory"
	closemessage
# 205 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 206 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 207 "data/maps/VermilionCity_Frlg/scripts.pory"

# 208 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger::
# 209 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 210 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 211 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 212 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 213 "data/maps/VermilionCity_Frlg/scripts.pory"
	closemessage
# 214 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 215 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 216 "data/maps/VermilionCity_Frlg/scripts.pory"

# 217 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_Sailor::
# 218 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SSAnneVisitsOnceAYear, MSGBOX_NPC
# 219 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 220 "data/maps/VermilionCity_Frlg/scripts.pory"

# 221 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OaksAide::
# 222 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock
# 223 "data/maps/VermilionCity_Frlg/scripts.pory"
	faceplayer
# 224 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION
# 225 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Route2AideHasPackageForYou
# 226 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 227 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 228 "data/maps/VermilionCity_Frlg/scripts.pory"

# 229 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OldMan2::
# 230 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_BuildingOnThisLand, MSGBOX_NPC
# 231 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 232 "data/maps/VermilionCity_Frlg/scripts.pory"

# 233 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_Machop::
# 234 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock
# 235 "data/maps/VermilionCity_Frlg/scripts.pory"
	faceplayer
# 236 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitse
# 237 "data/maps/VermilionCity_Frlg/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 238 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Machop
# 239 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmoncry
# 240 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_MachopStompingLandFlat
# 241 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 242 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 243 "data/maps/VermilionCity_Frlg/scripts.pory"

# 244 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CitySign::
# 245 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_CitySign, MSGBOX_SIGN
# 246 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 247 "data/maps/VermilionCity_Frlg/scripts.pory"

# 248 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_SnorlaxNotice::
# 249 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SnorlaxBlockingRoute12, MSGBOX_SIGN
# 250 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 251 "data/maps/VermilionCity_Frlg/scripts.pory"

# 252 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_PokemonFanClubSign::
# 253 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 254 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 255 "data/maps/VermilionCity_Frlg/scripts.pory"

# 256 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_GymSign::
# 257 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 258 "data/maps/VermilionCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 0
# 259 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_GymSign
# 260 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
# 261 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 262 "data/maps/VermilionCity_Frlg/scripts.pory"

# 263 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HarborSign::
# 264 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_VermilionHarbor, MSGBOX_SIGN
# 265 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 266 "data/maps/VermilionCity_Frlg/scripts.pory"

# 267 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_GrimerMultipliesInSludge::
# 268 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We're careful about pollution here.\p"
# 269 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We've heard GRIMER multiplies in\n"
# 270 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "toxic sludge.$"
# 271 "data/maps/VermilionCity_Frlg/scripts.pory"

# 272 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_DidYouSeeSSAnneInHarbor::
# 273 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Did you see the S.S. ANNE moored\n"
# 274 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "in the harbor?$"
# 275 "data/maps/VermilionCity_Frlg/scripts.pory"

# 276 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_SSAnneHasDepartedForYear::
# 277 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "So, the S.S. ANNE has departed?\p"
# 278 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "She'll be back in VERMILION about\n"
# 279 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "this time next year.$"
# 280 "data/maps/VermilionCity_Frlg/scripts.pory"

# 281 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_BuildingOnThisLand::
# 282 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "I'm putting up a building on this\n"
# 283 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "plot of land. I own it all.\p"
# 284 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "My POKéMON is tamping the land\n"
# 285 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "to lay the foundation.$"
# 286 "data/maps/VermilionCity_Frlg/scripts.pory"

# 287 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Machop::
# 288 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "MACHOP: Guoh! Gogogoh!$"
# 289 "data/maps/VermilionCity_Frlg/scripts.pory"

# 290 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_MachopStompingLandFlat::
# 291 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "A MACHOP is stomping the land flat.$"
# 292 "data/maps/VermilionCity_Frlg/scripts.pory"

# 293 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_SSAnneVisitsOnceAYear::
# 294 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The S.S. ANNE is a famous luxury\n"
# 295 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "cruise ship.\p"
# 296 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "It visits VERMILION once a year.$"
# 297 "data/maps/VermilionCity_Frlg/scripts.pory"

# 298 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_CitySign::
# 299 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION CITY\n"
# 300 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The Port of Exquisite Sunsets$"
# 301 "data/maps/VermilionCity_Frlg/scripts.pory"

# 302 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_SnorlaxBlockingRoute12::
# 303 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "NOTICE!\p"
# 304 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "ROUTE 12 may be blocked off by a\n"
# 305 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "sleeping POKéMON.\p"
# 306 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Detour through ROCK TUNNEL to\n"
# 307 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "LAVENDER TOWN.\p"
# 308 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION POLICE$"
# 309 "data/maps/VermilionCity_Frlg/scripts.pory"

# 310 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_PokemonFanClubSign::
# 311 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 312 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "All POKéMON fans welcome!$"
# 313 "data/maps/VermilionCity_Frlg/scripts.pory"

# 314 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_GymSign::
# 315 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION CITY POKéMON GYM\n"
# 316 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\l"
# 317 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The Lightning American!$"
# 318 "data/maps/VermilionCity_Frlg/scripts.pory"

# 319 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_VermilionHarbor::
# 320 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION HARBOR$"
# 321 "data/maps/VermilionCity_Frlg/scripts.pory"

# 322 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_WelcomeToTheSSAnne::
# 323 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Welcome to the S.S. ANNE!$"
# 324 "data/maps/VermilionCity_Frlg/scripts.pory"

# 325 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_DoYouHaveATicket::
# 326 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Welcome to the S.S. ANNE!\p"
# 327 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Excuse me, do you have a ticket?$"
# 328 "data/maps/VermilionCity_Frlg/scripts.pory"

# 329 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_FlashedSSTicket::
# 330 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} flashed the S.S. TICKET!\p"
# 331 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_MALE}Great!\n"
# 332 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Welcome to the S.S. ANNE!$"
# 333 "data/maps/VermilionCity_Frlg/scripts.pory"

# 334 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_DontHaveNeededSSTicket::
# 335 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} doesn't have the needed\n"
# 336 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "S.S. TICKET.\p"
# 337 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_MALE}Sorry!\p"
# 338 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "You need a ticket to get aboard.$"
# 339 "data/maps/VermilionCity_Frlg/scripts.pory"

# 340 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_TheShipSetSail::
# 341 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The ship set sail.$"
# 342 "data/maps/VermilionCity_Frlg/scripts.pory"

# 343 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_BoardSeagallopTriPass::
# 344 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Ah, you have a TRI-PASS.\p"
# 345 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Would you like to board\n"
# 346 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "a SEAGALLOP ferry?$"
# 347 "data/maps/VermilionCity_Frlg/scripts.pory"

# 348 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Seagallop7Departing::
# 349 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order.\p"
# 350 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "SEAGALLOP HI-SPEED 7 will be\n"
# 351 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "departing immediately.$"
# 352 "data/maps/VermilionCity_Frlg/scripts.pory"

# 353 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_BoardSeagallopRainbowPass::
# 354 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Ah, you have a RAINBOW PASS.\p"
# 355 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Would you like to board\n"
# 356 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "a SEAGALLOP ferry?$"
# 357 "data/maps/VermilionCity_Frlg/scripts.pory"

# 358 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_OhMysticTicketTakeYouToNavelRock::
# 359 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh! That's a MYSTICTICKET!\n"
# 360 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Now that is rare.\p"
# 361 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We'll be happy to take you to\n"
# 362 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "NAVEL ROCK anytime.$"
# 363 "data/maps/VermilionCity_Frlg/scripts.pory"

# 364 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland::
# 365 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh! That's an AURORATICKET!\n"
# 366 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Now that is rare.\p"
# 367 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We'll be happy to take you to\n"
# 368 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "BIRTH ISLAND anytime.$"
# 369 "data/maps/VermilionCity_Frlg/scripts.pory"

# 370 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_BoardSeagallopFerry::
# 371 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Would you like to board\n"
# 372 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "a SEAGALLOP ferry?$"
# 373 "data/maps/VermilionCity_Frlg/scripts.pory"

# 374 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Seagallop10Departing::
# 375 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order for you\n"
# 376 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "to board a special ferry.\p"
# 377 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "SEAGALLOP HI-SPEED 10 will be\n"
# 378 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "departing immediately.$"
# 379 "data/maps/VermilionCity_Frlg/scripts.pory"

# 380 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Seagallop12Departing::
# 381 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order for you\n"
# 382 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "to board a special ferry.\p"
# 383 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "SEAGALLOP HI-SPEED 12 will be\n"
# 384 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "departing immediately.$"
# 385 "data/maps/VermilionCity_Frlg/scripts.pory"

# 386 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Route2AideHasPackageForYou::
# 387 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh, hello, {PLAYER}!\n"
# 388 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "How are you doing?\p"
# 389 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "It's me, one of PROF. OAK's AIDES.\p"
# 390 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Did you meet the other AIDE?\p"
# 391 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "He had a package from PROF. OAK\n"
# 392 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "for you, {PLAYER}.\p"
# 393 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "He said he'd look for you around\n"
# 394 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "ROUTE 2, {PLAYER}.\p"
# 395 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "If you're in the ROUTE 2 area,\n"
# 396 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "please look for him.$"

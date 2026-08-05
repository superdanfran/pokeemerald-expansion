# 1 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_OnTransition
# 4 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 6 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_OnTransition::
# 7 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND
# 8 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_EventScript_HideAntiBikers
# 9 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers
# 10 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 11 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 12 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_HideAntiBikers::
# 13 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
# 14 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 15 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 16 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers::
# 17 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER1, MOVEMENT_TYPE_LOOK_AROUND
# 18 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER2, MOVEMENT_TYPE_LOOK_AROUND
# 19 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 20 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 21 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_Biker::
# 22 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 23 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 24 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 25 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 26 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 27 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 28 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker1::
# 29 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 30 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER, ThreeIsland_EventScript_AntiBiker1GotFullRestore
# 31 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_GiveFullRestore
# 32 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 33 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 34 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 35 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 36 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 37 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker1GotFullRestore::
# 38 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 39 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
# 41 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 42 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 43 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 44 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_GiveFullRestore::
# 45 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 46 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 47 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_ThankYouOhYourMonGotHurt
# 48 "data/maps/ThreeIsland_Frlg/scripts.pory"
	checkitemspace ITEM_FULL_RESTORE
# 49 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ThreeIsland_EventScript_NoRoomForFullRestore
# 50 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgreceiveditem ThreeIsland_Text_GivenFullRestore, ITEM_FULL_RESTORE
# 51 "data/maps/ThreeIsland_Frlg/scripts.pory"
	additem ITEM_FULL_RESTORE
# 52 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setflag FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER
# 53 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
# 54 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 55 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 56 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 57 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_NoRoomForFullRestore::
# 58 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_OhYourBagIsFull
# 59 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 60 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 61 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 62 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene::
# 63 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceLeft
# 64 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceLeft
# 65 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 66 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 67 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_GoBackToKanto
# 68 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceRight
# 69 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceRight
# 70 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceBiker
# 71 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_SpeakLeft
# 72 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_BossIsOnHisWay
# 74 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceUp
# 75 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceUp
# 76 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceAntiBiker
# 77 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, ThreeIsland_Movement_SpeakRight
# 78 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 79 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_GetOffIslandNow
# 80 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceRight
# 81 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceRight
# 82 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceBiker
# 83 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_SpeakLeft
# 84 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 85 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WhosGonnaMakeMe
# 86 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 87 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 88 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceUp::
# 89 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 90 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 92 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 93 "data/maps/ThreeIsland_Frlg/scripts.pory"
@ Unused
# 94 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceDown::
# 95 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 96 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 97 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 98 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 99 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceLeft::
# 100 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 101 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 102 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 103 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 104 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceRight::
# 105 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 106 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 107 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 108 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 109 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceBiker::
# 110 "data/maps/ThreeIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 111 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, 9, ThreeIsland_EventScript_PlayerFaceUp
# 112 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceRight
# 113 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 114 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 115 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceAntiBiker::
# 116 "data/maps/ThreeIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 117 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, 9, ThreeIsland_EventScript_PlayerFaceLeft
# 118 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceUp
# 119 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 120 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 121 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker2::
# 122 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 123 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_AntiBiker2BikersGone
# 124 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 125 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 126 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 127 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 128 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 129 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker2BikersGone::
# 130 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, Common_Movement_FacePlayer
# 131 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 132 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_LostelleWentOffTowardsBondBridge
# 133 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 134 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 135 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 136 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerBossIntroTrigger::
# 137 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 138 "data/maps/ThreeIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 139 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 140 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 141 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_AreYouBossGoBackToKanto
# 142 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
# 143 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 144 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_JustGotHerePal
# 145 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 146 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 147 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_FollowersRaisingHavoc
# 148 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
# 149 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_OughtToBeThankingUs
# 151 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 152 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 153 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouCowardsToughInPack
# 154 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 3
# 155 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
# 156 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 157 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 158 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_SpeakLeft::
# 159 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_left
# 160 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 161 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 162 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_SpeakRight::
# 163 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_right
# 164 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 165 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 166 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerLeft::
# 167 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 168 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 169 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 170 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 171 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 172 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMidLeft::
# 173 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 174 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 175 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 176 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 177 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 178 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMid::
# 179 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 180 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 181 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 182 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 183 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 184 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMidRight::
# 185 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 186 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 187 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 188 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 189 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 190 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerRight::
# 191 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 192 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 193 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 194 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 195 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 196 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene::
# 197 "data/maps/ThreeIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 198 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_WalkInPlaceFasterDown
# 199 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 200 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playse SE_PIN
# 201 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_ExclamationMark
# 202 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 203 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_Delay48
# 204 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 205 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerApproach
# 206 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 207 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 208 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WannaMakeSomethingOfYourStaring, MSGBOX_YESNO
# 209 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_EventScript_LeaveBikersAlone
# 210 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker1Intro
# 211 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER1
# 212 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON, ThreeIsland_Text_Biker1Defeat
# 213 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerSpeak
# 214 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 215 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker1PostBattle
# 216 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 217 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerApproach
# 218 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 219 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 220 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker2Intro
# 221 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER2
# 222 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_2, ThreeIsland_Text_Biker2Defeat
# 223 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerSpeak
# 224 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 225 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker2PostBattle
# 226 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 227 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_BikerApproach
# 228 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 229 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 230 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker3Intro
# 231 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER3
# 232 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_3, ThreeIsland_Text_Biker3Defeat
# 233 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterLeft
# 234 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 235 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER4, Common_Movement_WalkInPlaceFasterDown
# 236 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER5, Common_Movement_WalkInPlaceFasterDown
# 237 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 238 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker3PostBattle
# 239 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 240 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay 45
# 241 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PaxtonApproachLeft
# 242 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PaxtonApproachMidLeft
# 243 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PaxtonApproachMid
# 244 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, ThreeIsland_EventScript_PaxtonApproachMidRight
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, ThreeIsland_EventScript_PaxtonApproachRight
# 246 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 247 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonIntro
# 248 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PAXTON
# 249 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CUE_BALL_PAXTON, ThreeIsland_Text_PaxtonDefeat
# 250 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonPostBattle
# 251 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 252 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 253 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_PAXTON
# 254 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER1
# 255 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER2
# 256 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER3
# 257 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER4
# 258 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER5
# 259 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER6
# 260 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 261 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 4
# 262 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
# 263 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 264 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 265 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachLeft::
# 266 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 267 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachLeft
# 268 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 269 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 270 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 271 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMidLeft::
# 272 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 273 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidLeft
# 274 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 275 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 276 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 277 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMid::
# 278 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 279 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMid
# 280 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 281 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 282 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 283 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 284 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMidRight::
# 285 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 286 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 287 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidRight
# 288 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 289 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 290 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 291 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachRight::
# 292 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 293 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 294 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachRight
# 295 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 296 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 297 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 298 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_LeaveBikersAlone::
# 299 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_ThatsSmart
# 300 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 301 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerLeaveBikers
# 302 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 303 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_Biker1ReturnToPack
# 304 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 305 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadedefaultbgm
# 306 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
# 307 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 308 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 309 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PlayerLeaveBikers::
# 310 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 311 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 312 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 313 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_BikerApproach::
# 314 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 315 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 316 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 317 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_Biker1ReturnToPack::
# 318 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_up
# 319 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_left
# 320 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 321 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 322 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_BikerSpeak::
# 323 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_down
# 324 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 325 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 326 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachLeft::
# 327 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 328 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_left
# 329 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_down
# 330 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 331 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 332 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMidLeft::
# 333 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 334 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 335 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 336 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMid::
# 337 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 338 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 339 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 340 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 341 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 342 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PlayerFacePaxton::
# 343 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay_16
# 344 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay_16
# 345 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_left
# 346 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 347 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 348 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMidRight::
# 349 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 350 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 351 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 352 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 353 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 354 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 355 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachRight::
# 356 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 357 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 358 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 359 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 360 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 361 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 362 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 363 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_Woman::
# 364 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WouldntWantToSeeBikersHereAgain, MSGBOX_NPC
# 365 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 366 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 367 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_LittleBoy::
# 368 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame, MSGBOX_NPC
# 369 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 370 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 371 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_Doduo::
# 372 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 373 "data/maps/ThreeIsland_Frlg/scripts.pory"
	faceplayer
# 374 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitse
# 375 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 376 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Doduo
# 377 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmoncry
# 378 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 379 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 380 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 381 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_IslandSign::
# 382 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_IslandSign, MSGBOX_SIGN
# 383 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 384 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 385 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_Biker6::
# 386 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_IslandBelongsToUs, MSGBOX_NPC
# 387 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 388 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 389 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_IslandSign::
# 390 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "THREE ISLAND\n"
# 391 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Kin Island of Family Bonding$"
# 392 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 393 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_IslandBelongsToUs::
# 394 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hyahoo!\p"
# 395 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "From this day on, this island\n"
# 396 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "belongs to us!$"
# 397 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 398 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_GoBackToKanto::
# 399 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We don't need you people bringing\n"
# 400 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "your noise and trouble here!\p"
# 401 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We're asking you to go back to\n"
# 402 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "KANTO!$"
# 403 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 404 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_BossIsOnHisWay::
# 405 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hey, go cry somewhere else.\n"
# 406 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Our boss is on his way.\p"
# 407 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "When he gets here, we'll give you\n"
# 408 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "a k-rad motorbike show you won't\l"
# 409 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "soon forget!$"
# 410 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 411 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_GetOffIslandNow::
# 412 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "W-what!? Not on your life!\n"
# 413 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Get off the island now!$"
# 414 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 415 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_WhosGonnaMakeMe::
# 416 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Who's gonna make me?$"
# 417 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 418 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_AreYouBossGoBackToKanto::
# 419 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Are you the boss?\n"
# 420 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Go back to KANTO right now!$"
# 421 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 422 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_JustGotHerePal::
# 423 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hah?\p"
# 424 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I just got here, pal.\p"
# 425 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What's with the hostile attitude?\n"
# 426 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "It's mighty cold of you!$"
# 427 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 428 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_FollowersRaisingHavoc::
# 429 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Your gang of followers have been\n"
# 430 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "raising havoc on their bikes.\p"
# 431 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Do you have any idea how much\n"
# 432 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "trouble they've caused us on the\l"
# 433 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "island?$"
# 434 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 435 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_OughtToBeThankingUs::
# 436 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "No, man, I don't get it at all.\p"
# 437 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Look at this place.\n"
# 438 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What do you do for entertainment?\p"
# 439 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You ought to be thanking us for\n"
# 440 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "livening up this sleepy village.\p"
# 441 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "But hey, if you insist, you can try\n"
# 442 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "making us leave.$"
# 443 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 444 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_YouCowardsToughInPack::
# 445 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Grr… You cowards…\n"
# 446 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "So tough in a pack…$"
# 447 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 448 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_WannaMakeSomethingOfYourStaring::
# 449 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You, what are you staring at?\n"
# 450 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Don't you know it's not polite?\p"
# 451 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You wanna make something of it\n"
# 452 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "or what?$"
# 453 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 454 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_ThatsSmart::
# 455 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "That's smart.\n"
# 456 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Keep your nose out of this.$"
# 457 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 458 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker1Intro::
# 459 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Heh, I like your guts.\n"
# 460 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You'll be losing money to me, but…$"
# 461 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 462 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker1Defeat::
# 463 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Wha…\n"
# 464 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What is this kid?!$"
# 465 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 466 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker1PostBattle::
# 467 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Aww, man…\n"
# 468 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Don't you dare laugh!$"
# 469 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 470 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker2Intro::
# 471 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Aren't you from KANTO?\n"
# 472 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You should be on our side!$"
# 473 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 474 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker2Defeat::
# 475 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Stop fooling around!$"
# 476 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 477 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker2PostBattle::
# 478 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What's the matter with you,\n"
# 479 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "getting all hot like that?\p"
# 480 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Totally uncool, man!$"
# 481 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 482 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker3Intro::
# 483 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We invited the boss out here,\n"
# 484 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "but you had to mess it up!\p"
# 485 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You embarrassed us, man!$"
# 486 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 487 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker3Defeat::
# 488 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "… … …   … … …$"
# 489 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 490 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker3PostBattle::
# 491 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Boss, I'm telling you, you've gotta\n"
# 492 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "do something about this kid!$"
# 493 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 494 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_PaxtonIntro::
# 495 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I've been watching you, and I'd say\n"
# 496 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "you've done enough.\p"
# 497 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What are you, their friend or\n"
# 498 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "something?\p"
# 499 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Then I guess you'll be battling me\n"
# 500 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "in their place.$"
# 501 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 502 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_PaxtonDefeat::
# 503 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "All right, enough!\n"
# 504 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We'll leave like you wanted!\p"
# 505 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We'll be happy to see the last of\n"
# 506 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "this boring island!$"
# 507 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 508 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_PaxtonPostBattle::
# 509 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Humph! Yeah, go right on hanging\n"
# 510 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "around with these hayseeds!$"
# 511 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 512 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_ThankYouOhYourMonGotHurt::
# 513 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Thank you! Those goons were\n"
# 514 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "nothing but bad trouble.\p"
# 515 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Oh, look, your POKéMON got hurt\n"
# 516 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "on my account.$"
# 517 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 518 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_GivenFullRestore::
# 519 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "{PLAYER} was given\n"
# 520 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "a FULL RESTORE.$"
# 521 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 522 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_OhYourBagIsFull::
# 523 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Oh?\n"
# 524 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Your BAG is full.$"
# 525 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 526 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_YouveGotImpressiveMons::
# 527 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You've got seriously impressive\n"
# 528 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "POKéMON with you.$"
# 529 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 530 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_LostelleWentOffTowardsBondBridge::
# 531 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "It'd be fantastic if someone as\n"
# 532 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "strong as you lived here.\p"
# 533 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I hope you'll at least stay here\n"
# 534 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "a while.\p"
# 535 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "…I beg your pardon?\n"
# 536 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You're looking for LOSTELLE?\p"
# 537 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "LOSTELLE went off towards BOND\n"
# 538 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "BRIDGE a while ago.$"
# 539 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 540 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_WouldntWantToSeeBikersHereAgain::
# 541 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "THREE ISLAND is actually the most\n"
# 542 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "populous of the islands here.\p"
# 543 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Still, it could be less sleepy.\p"
# 544 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "But I wouldn't want to see goons\n"
# 545 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "like those BIKERS here again.$"
# 546 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 547 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame::
# 548 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I'm going to train my DODUO in the\n"
# 549 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "BERRY FOREST.\p"
# 550 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "When it evolves, I'm going to play\n"
# 551 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "a game on TWO ISLAND.$"
# 552 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 553 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Doduo::
# 554 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "DODUO: Gigiih!$"

# 1 "data/maps/FourIsland_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Frlg_MapScripts::
# 3 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
# 4 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_OnFrame
# 5 "data/maps/FourIsland_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FourIsland_Frlg/scripts.pory"

# 7 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_OnTransition::
# 8 "data/maps/FourIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND
# 9 "data/maps/FourIsland_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_ShowRival
# 10 "data/maps/FourIsland_Frlg/scripts.pory"
	call FourIsland_EventScript_TrySetDayCareManPos
# 11 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 12 "data/maps/FourIsland_Frlg/scripts.pory"

# 13 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_ShowRival::
# 14 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FOUR_ISLAND_RIVAL
# 15 "data/maps/FourIsland_Frlg/scripts.pory"
	return
# 16 "data/maps/FourIsland_Frlg/scripts.pory"

# 17 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_TrySetDayCareManPos::
# 18 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, FourIsland_EventScript_EndSetDayCareManPos
# 19 "data/maps/FourIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_FOUR_ISLAND_DAYCARE_MAN, 16, 14
# 20 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_EndSetDayCareManPos::
# 21 "data/maps/FourIsland_Frlg/scripts.pory"
	return
# 22 "data/maps/FourIsland_Frlg/scripts.pory"

# 23 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_OnFrame::
# 24 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_RivalScene
# 25 "data/maps/FourIsland_Frlg/scripts.pory"
	.2byte 0
# 26 "data/maps/FourIsland_Frlg/scripts.pory"

# 27 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_RivalScene::
# 28 "data/maps/FourIsland_Frlg/scripts.pory"
	lockall
# 29 "data/maps/FourIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 30 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 31 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 32 "data/maps/FourIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 33 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 34 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_Delay48
# 36 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 37 "data/maps/FourIsland_Frlg/scripts.pory"
	delay 25
# 38 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalApproach
# 39 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_RivalAlreadyGotEggBeSmellingYa
# 41 "data/maps/FourIsland_Frlg/scripts.pory"
	closemessage
# 42 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_Movement_PlayerWatchRivalExit
# 43 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalExit
# 44 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/FourIsland_Frlg/scripts.pory"
	fadedefaultbgm
# 46 "data/maps/FourIsland_Frlg/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/FourIsland_Frlg/scripts.pory"
	delay 35
# 48 "data/maps/FourIsland_Frlg/scripts.pory"
	removeobject LOCALID_FOUR_ISLAND_RIVAL
# 49 "data/maps/FourIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 50 "data/maps/FourIsland_Frlg/scripts.pory"
	releaseall
# 51 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 52 "data/maps/FourIsland_Frlg/scripts.pory"

# 53 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Movement_RivalApproach::
# 54 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_right
# 55 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_right
# 56 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/FourIsland_Frlg/scripts.pory"
	step_end
# 59 "data/maps/FourIsland_Frlg/scripts.pory"

# 60 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Movement_RivalExit::
# 61 "data/maps/FourIsland_Frlg/scripts.pory"
	delay_16
# 62 "data/maps/FourIsland_Frlg/scripts.pory"
	delay_4
# 63 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/FourIsland_Frlg/scripts.pory"
	step_end
# 65 "data/maps/FourIsland_Frlg/scripts.pory"

# 66 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Movement_PlayerWatchRivalExit::
# 67 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_left
# 68 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 69 "data/maps/FourIsland_Frlg/scripts.pory"
	step_end
# 70 "data/maps/FourIsland_Frlg/scripts.pory"

# 71 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareMan::
# 72 "data/maps/FourIsland_Frlg/scripts.pory"
	lock
# 73 "data/maps/FourIsland_Frlg/scripts.pory"
	faceplayer
# 74 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
# 75 "data/maps/FourIsland_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 76 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_EventScript_DaycareEggWaiting
# 77 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_EventScript_CheckOnOneMon
# 78 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_EventScript_CheckOnTwoMons
# 79 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_ImDaycareManSpeakToMyWife
# 80 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 81 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 82 "data/maps/FourIsland_Frlg/scripts.pory"

# 83 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareEggWaiting::
# 84 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_DoYouWantEgg, MSGBOX_YESNO
# 85 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
# 86 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 87 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
# 88 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_IllKeepIt
# 89 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 90 "data/maps/FourIsland_Frlg/scripts.pory"
	special RejectEggFromDayCare
# 91 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 92 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 93 "data/maps/FourIsland_Frlg/scripts.pory"

# 94 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareAcceptEgg::
# 95 "data/maps/FourIsland_Frlg/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 96 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, PARTY_SIZE, FourIsland_EventScript_DaycareReceivedEgg
# 97 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YouHaveNoRoomForIt
# 98 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 99 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 100 "data/maps/FourIsland_Frlg/scripts.pory"

# 101 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_DaycareReceivedEgg::
# 102 "data/maps/FourIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 103 "data/maps/FourIsland_Frlg/scripts.pory"
	message DayCare_Text_ReceivedEgg
# 104 "data/maps/FourIsland_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 105 "data/maps/FourIsland_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 106 "data/maps/FourIsland_Frlg/scripts.pory"
	waitfanfare
# 107 "data/maps/FourIsland_Frlg/scripts.pory"
	waitbuttonpress
# 108 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeGoodCareOfIt
# 109 "data/maps/FourIsland_Frlg/scripts.pory"
	special GiveEggFromDaycare
# 110 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 111 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 112 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 113 "data/maps/FourIsland_Frlg/scripts.pory"

# 114 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_CheckOnOneMon::
# 115 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
# 116 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonIsDoingFine
# 117 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 118 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 119 "data/maps/FourIsland_Frlg/scripts.pory"

# 120 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_CheckOnTwoMons::
# 121 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
# 122 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonsAreDoingFine
# 123 "data/maps/FourIsland_Frlg/scripts.pory"
	special SetDaycareCompatibilityString
# 124 "data/maps/FourIsland_Frlg/scripts.pory"
	special ShowFieldMessageStringVar4
# 125 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmessage
# 126 "data/maps/FourIsland_Frlg/scripts.pory"
	waitbuttonpress
# 127 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 128 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 129 "data/maps/FourIsland_Frlg/scripts.pory"

# 130 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_OldWoman::
# 131 "data/maps/FourIsland_Frlg/scripts.pory"
	lock
# 132 "data/maps/FourIsland_Frlg/scripts.pory"
	faceplayer
# 133 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FourIsland_EventScript_OldWomanLoreleiLeft
# 134 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasReturned
# 135 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 136 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 137 "data/maps/FourIsland_Frlg/scripts.pory"

# 138 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_OldWomanLoreleiLeft::
# 139 "data/maps/FourIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 5
# 140 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
# 141 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 142 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 143 "data/maps/FourIsland_Frlg/scripts.pory"

# 144 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_LittleGirl::
# 145 "data/maps/FourIsland_Frlg/scripts.pory"
	lock
# 146 "data/maps/FourIsland_Frlg/scripts.pory"
	faceplayer
# 147 "data/maps/FourIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 4
# 148 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
# 149 "data/maps/FourIsland_Frlg/scripts.pory"
	release
# 150 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 151 "data/maps/FourIsland_Frlg/scripts.pory"

# 152 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_FatMan::
# 153 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
# 154 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 155 "data/maps/FourIsland_Frlg/scripts.pory"

# 156 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_IslandSign::
# 157 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
# 158 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 159 "data/maps/FourIsland_Frlg/scripts.pory"

# 160 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_LoreleisHouseSign::
# 161 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
# 162 "data/maps/FourIsland_Frlg/scripts.pory"
	end
# 163 "data/maps/FourIsland_Frlg/scripts.pory"

# 164 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_IslandSign::
# 165 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "FOUR ISLAND\n"
# 166 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "The Warm, Blue, Floe Island$"
# 167 "data/maps/FourIsland_Frlg/scripts.pory"

# 168 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_LoreleiHasReturned::
# 169 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI has returned.\p"
# 170 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Did she find the city life too\n"
# 171 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "stressful, I wonder?$"
# 172 "data/maps/FourIsland_Frlg/scripts.pory"

# 173 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_LoreleiMetLaprasAsChild::
# 174 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI has gone back.\p"
# 175 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "The LAPRAS she has, I imagine it\n"
# 176 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "to be the one she met as a child.\p"
# 177 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "I believe it was in ICEFALL CAVE\n"
# 178 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "that she caught it.\p"
# 179 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Perhaps that POKéMON has been with\n"
# 180 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "her ever since.$"
# 181 "data/maps/FourIsland_Frlg/scripts.pory"

# 182 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_RivalAlreadyGotEggBeSmellingYa::
# 183 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "{RIVAL}: Hey!\n"
# 184 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 185 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "What are you doing here in the\n"
# 186 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "SEVII ISLANDS?\p"
# 187 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "You should quit copying me,\n"
# 188 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "you know?\p"
# 189 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Anyways, I already got my POKéMON\n"
# 190 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "EGG, so I'm done with this island.\p"
# 191 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Heh, I bet you don't even know\n"
# 192 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "about POKéMON EGGS.\p"
# 193 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "You'll never fill your NATIONAL\n"
# 194 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "POKéDEX that way.\p"
# 195 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "By the way, I saw someone we both\n"
# 196 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "know on this island.\p"
# 197 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Why don't you go look around if\n"
# 198 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "it makes you curious?\p"
# 199 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Me, I don't have the time to\n"
# 200 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "waste.\p"
# 201 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Be smelling ya!$"
# 202 "data/maps/FourIsland_Frlg/scripts.pory"

# 203 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_LoreleiHasLotsOfStuffedDolls::
# 204 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Oh, you found me!\n"
# 205 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Please don't tell LORELEI.\p"
# 206 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Did you know that LORELEI has lots\n"
# 207 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "and lots of stuffed dolls?\p"
# 208 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Every time she comes back to\n"
# 209 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "FOUR ISLAND, her collection grows!$"
# 210 "data/maps/FourIsland_Frlg/scripts.pory"

# 211 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_MadeSlushieUsingIcefallCaveIce::
# 212 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Ooh, chilly!\p"
# 213 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "I made a slushie using ice I\n"
# 214 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "shaved inside ICEFALL CAVE.\p"
# 215 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "It's chilly and tasty!$"
# 216 "data/maps/FourIsland_Frlg/scripts.pory"

# 217 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_Text_LoreleisHouse::
# 218 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI'S HOUSE$"

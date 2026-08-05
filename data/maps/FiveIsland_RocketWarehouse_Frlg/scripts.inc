# 1 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
.equ PLAYER_X_POS, VAR_0x8004
# 3 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
.equ PLAYER_Y_POS, VAR_0x8005
# 4 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Frlg_MapScripts::
# 6 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
# 7 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_OnTransition
# 8 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.byte 0
# 9 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 10 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_OnTransition::
# 11 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
# 12 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 13 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 14 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_OnLoad::
# 15 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 16 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 17 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 18 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
# 19 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
# 20 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
# 21 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 22 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 23 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Cage::
# 24 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	lockall
# 25 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_CageUnlocked
# 26 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
# 27 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
# 28 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 29 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 30 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_CageUnlocked::
# 31 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
# 32 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
# 33 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 34 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 35 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Computer::
# 36 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
# 37 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 38 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 39 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
# 40 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	lockall
# 41 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN2, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 44 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
# 45 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 46 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 47 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Gideon::
# 48 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
# 49 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid
# 50 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
# 51 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 52 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 53 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid::
# 54 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 5
# 55 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
# 56 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 57 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 58 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
# 59 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
# 60 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_RECOVERED_SAPPHIRE
# 61 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 62 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
# 63 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 64 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 65 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt2::
# 66 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
# 67 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 69 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 70 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt3::
# 71 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
# 72 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 74 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 75 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin2::
# 76 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
# 77 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 79 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 80 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
# 81 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 82 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2
# 83 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
# 84 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	closemessage
# 85 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 86 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT2
# 87 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT3
# 88 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN2
# 89 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN1
# 90 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
# 91 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 92 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 93 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
# 94 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
# 95 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 96 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 97 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2::
# 98 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 100 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 101 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 102 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt1::
# 103 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
# 104 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 106 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 107 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin1::
# 108 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
# 109 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
# 110 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 111 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 112 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
# 113 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 114 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 115 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, DIR_NORTH, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1
# 116 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
# 117 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	closemessage
# 118 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar
# 119 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch
# 120 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 121 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 122 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	playse SE_PIN
# 123 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 124 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitse
# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 127 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 128 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 129 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown
# 130 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
# 131 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
# 132 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 133 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 134 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1::
# 135 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq PLAYER_X_POS, 27, Common_EventScript_NopReturn
# 136 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 137 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 138 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 139 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 140 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar::
# 141 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar
# 142 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 143 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 144 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 145 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch::
# 146 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch
# 147 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 148 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 149 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 150 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch::
# 151 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterUp
# 152 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 153 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 154 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 155 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft::
# 156 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterLeft
# 157 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 158 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 159 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 160 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown::
# 161 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterDown
# 162 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 163 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 164 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 165 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar::
# 166 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 167 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 168 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_in_place_faster_up
# 169 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	step_end
# 170 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 171 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch::
# 172 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_in_place_faster_up
# 174 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	step_end
# 175 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 176 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen::
# 177 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "There are many POKéMON locked\n"
# 178 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "away in the pen…$"
# 179 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 180 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled::
# 181 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "The pen door is unlocked.\n"
# 182 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "The POKéMON appear to have fled.$"
# 183 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 184 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt2Intro::
# 185 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Did you come here knowing it's\n"
# 186 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "TEAM ROCKET's WAREHOUSE?$"
# 187 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 188 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt2Defeat::
# 189 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What do you think you're doing?!$"
# 190 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 191 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt2PostBattle::
# 192 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "TEAM ROCKET broke up?\n"
# 193 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What planet are you from?$"
# 194 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 195 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt1Intro::
# 196 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh, now your POKéMON look strong.\n"
# 197 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You're willing to sell them?\p"
# 198 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh?\n"
# 199 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You wanted to battle?$"
# 200 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 201 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt1Defeat::
# 202 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh, but…\n"
# 203 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Too much!$"
# 204 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 205 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt1PostBattle::
# 206 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "We can give you a great price.\n"
# 207 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Sell us your POKéMON!$"
# 208 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 209 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt3Intro::
# 210 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I got word about you from the\n"
# 211 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "others.\p"
# 212 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "But there's no way a kid like you'd\n"
# 213 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "know our BOSS GIOVANNI!$"
# 214 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 215 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt3Defeat::
# 216 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Don't…you…dare…laugh…$"
# 217 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 218 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt3PostBattle::
# 219 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Don't mess in the doings of adults,\n"
# 220 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "you jumped-up pip-squeak!$"
# 221 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 222 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin1Intro::
# 223 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I don't know or care if what I'm\n"
# 224 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "doing is right or wrong…\p"
# 225 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I just put my faith in GIOVANNI\n"
# 226 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "and do as I am told.$"
# 227 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 228 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin1Defeat::
# 229 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I…\n"
# 230 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I'm shattered…$"
# 231 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 232 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin1PostBattle::
# 233 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You're doing things according to\n"
# 234 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "your beliefs and morals.\p"
# 235 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I understand now…$"
# 236 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 237 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough::
# 238 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I've made it so you can come back\n"
# 239 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "in through there.\p"
# 240 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Why don't you go get rested and\n"
# 241 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "refreshed for what lies ahead?\p"
# 242 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "The ADMIN after me outranks me\n"
# 243 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "thoroughly as a TRAINER.\p"
# 244 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You'd better steel yourself for one\n"
# 245 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "harsh challenge.$"
# 246 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 247 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin2Intro::
# 248 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "That's quite enough of you \n"
# 249 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "playing the hero, kid.\p"
# 250 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Spreading lies about how TEAM\n"
# 251 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "ROCKET has disbanded…\p"
# 252 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "It's such an obvious attempt to\n"
# 253 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "cause confusion in our ranks.\p"
# 254 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Fortunately, we're not so ignorant\n"
# 255 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "to fall for the lies of a child!\p"
# 256 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "And now, I'll show you how scary\n"
# 257 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "an angry adult can be!$"
# 258 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 259 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin2Defeat::
# 260 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Urgh…\n"
# 261 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You were too strong…\p"
# 262 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "…\n"
# 263 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Th-that's GIOVANNI's BADGE!\p"
# 264 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "So it's true?\n"
# 265 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "TEAM ROCKET really has disbanded?$"
# 266 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 267 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin2PostBattle::
# 268 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "We will abandon this WAREHOUSE…\p"
# 269 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "But don't think this is over.\n"
# 270 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I won't let this be the end.\p"
# 271 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I will find GIOVANNI.\n"
# 272 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "And I will resurrect TEAM ROCKET!\l"
# 273 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I will…\p"
# 274 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Until then, farewell!$"
# 275 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 276 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText::
# 277 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "A report with graphs and text is on\n"
# 278 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "the PC monitor.\p"
# 279 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "“The Influence of Magnetic Waves\n"
# 280 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "on POKéMON Evolution”…\p"
# 281 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "… … … … … …\p"
# 282 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "It's too difficult to understand…$"
# 283 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 284 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GideonIntro::
# 285 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I almost managed to sell the\n"
# 286 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "SAPPHIRE for huge money…\p"
# 287 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Then, you just had to come along\n"
# 288 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "and blow the whole deal apart!\p"
# 289 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Fufu… Fufufufu…\n"
# 290 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "There's no forgiveness for you!$"
# 291 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 292 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GideonDefeat::
# 293 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Gah! Darn!\n"
# 294 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Darn! Darn!$"
# 295 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 296 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GideonPostBattle::
# 297 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "If I can't sell it, it's worthless!\n"
# 298 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Go ahead, take it!$"
# 299 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 300 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe::
# 301 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What do you want now?\n"
# 302 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Go on, get lost, leave me be.$"
# 303 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 304 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair::
# 305 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What, you again?\p"
# 306 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You… You're not GIOVANNI's kid,\n"
# 307 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "are you?\p"
# 308 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "No, that can't be right!\n"
# 309 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "GIOVANNI's kid has red hair.\p"
# 310 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You don't have any reasons for\n"
# 311 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "bugging me. Leave me alone!$"

# 1 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Frlg_MapScripts::
# 3 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 5 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire::
# 6 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	lock
# 7 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 9 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 10 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	message SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire
# 11 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmessage
# 12 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitfanfare
# 13 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setobjectxyperm LOCALID_DOTTED_HOLE_THIEF, 5, 0
# 15 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	addobject LOCALID_DOTTED_HOLE_THIEF
# 16 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_FALL
# 17 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn
# 18 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_M_STRENGTH
# 20 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 21 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 22 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 23 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 24 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 25 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8005, 0
# 26 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 27 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 28 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	special ShakeScreen
# 29 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay 60
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth
# 31 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast
# 33 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest
# 34 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 35 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou
# 36 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 37 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth
# 38 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth
# 39 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast
# 40 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest
# 41 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	removeobject LOCALID_SAPPHIRE
# 42 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 43 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 44 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 45 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 46 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword
# 47 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth
# 49 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth
# 50 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast
# 51 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest
# 52 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_EXIT
# 53 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay 35
# 54 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	removeobject LOCALID_DOTTED_HOLE_THIEF
# 55 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setflag FLAG_LEARNED_YES_NAH_CHANSEY
# 56 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	release
# 57 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	end
# 58 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 59 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
@ Lots of redundant scripts below
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2::
# 61 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 64 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 65 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2::
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 69 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 70 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft::
# 71 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 74 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 75 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown::
# 76 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 77 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 78 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 79 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 80 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth::
# 81 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 82 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 83 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 84 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 85 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth::
# 86 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 87 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 88 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 89 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 90 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast::
# 91 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 92 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 93 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 94 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 95 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest::
# 96 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 97 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 98 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 99 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 100 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth::
# 101 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 102 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 103 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 105 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 106 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 107 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth::
# 108 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 109 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 110 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 111 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 112 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 113 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 114 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast::
# 115 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 116 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 117 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 118 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 119 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 120 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 121 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest::
# 122 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 123 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 124 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 125 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 126 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 127 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 128 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth::
# 129 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 130 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth
# 131 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 132 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 133 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 134 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth::
# 135 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 136 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth
# 137 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 138 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 139 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 140 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast::
# 141 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 142 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 143 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 144 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 145 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 146 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest::
# 147 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 148 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 149 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	return
# 151 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 152 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft::
# 153 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 154 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 155 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_right
# 156 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 157 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 158 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow::
# 159 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 160 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 161 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_up
# 162 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 163 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 164 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft::
# 165 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 166 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 167 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 168 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow::
# 169 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 171 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 172 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth::
# 173 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 174 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 175 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 176 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 177 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_down
# 178 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 179 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 180 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 181 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 182 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth::
# 183 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_down
# 184 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 185 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 186 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 187 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 188 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 189 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 190 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 191 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 192 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest::
# 193 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 194 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 195 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 196 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_right
# 197 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_fast_up
# 198 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 199 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 200 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn::
# 201 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	face_down
# 202 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	disable_anim
# 203 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 204 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 205 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 206 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 207 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 208 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 209 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 210 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 211 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 212 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	restore_anim
# 213 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 214 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 215 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit::
# 216 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay_16
# 217 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_in_place_faster_right
# 218 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_end
# 219 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 220 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_BrailleMessage::
# 221 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	lockall
# 222 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8005, 130
# 223 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_LetTheTwo
# 224 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Glittering
# 225 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Stones
# 226 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_OneInRed
# 227 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_OneInBlue
# 228 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ConnectThe
# 229 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Past
# 230 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_TwoFriends
# 231 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Sharing
# 232 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_PowerOpen
# 233 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_AWindowTo
# 234 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ANewWorld
# 235 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ThatGlows
# 236 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_TheNext
# 237 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_WorldWaits
# 238 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemsgbox Braille_Text_ForYou
# 239 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	releaseall
# 240 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	end
# 241 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 242 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire::
# 243 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "{PLAYER} found a SAPPHIRE!$"
# 244 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 245 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou::
# 246 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "Fufu… Fufufufu…\n"
# 247 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I guessed right.\p"
# 248 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I was right in tailing you!$"
# 249 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"

# 250 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword::
# 251 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I knew that there was a SAPPHIRE\n"
# 252 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "here, so it belongs to me!\p"
# 253 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I'll sell it to TEAM ROCKET for\n"
# 254 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "serious money.\p"
# 255 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "…D-don't glare at me like that!\p"
# 256 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "If you want it back, why don't you\n"
# 257 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "go get it after I sell it?\p"
# 258 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I'll even tell you one of the\n"
# 259 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "passwords to TEAM ROCKET's\l"
# 260 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "WAREHOUSE.\p"
# 261 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "The WAREHOUSE password I know is\n"
# 262 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "“Yes, nah, CHANSEY.”\p"
# 263 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I'm done.\n"
# 264 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "Don't think badly of me!$"

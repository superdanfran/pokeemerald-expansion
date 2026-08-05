# 1 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
.equ NUM_SWITCHES_PRESSED, VAR_TEMP_8
# 3 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 4 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts::
# 5 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_SevaultCanyon_TanobyKey_OnTransition
# 6 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	.byte 0
# 7 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 8 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_OnTransition::
# 9 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
# 10 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call_if_set FLAG_SYS_UNLOCKED_TANOBY_RUINS, SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos
# 11 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 12 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 13 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_3, 0
# 14 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_4, 0
# 15 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_5, 0
# 16 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_6, 0
# 17 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_7, 0
# 18 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar NUM_SWITCHES_PRESSED, 0
# 19 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 20 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 21 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos::
# 22 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER1, 7, 2
# 23 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER2, 4, 4
# 24 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER3, 10, 4
# 25 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER4, 5, 6
# 26 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER5, 9, 6
# 27 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER6, 5, 8
# 28 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER7, 9, 8
# 29 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	return
# 30 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 31 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1::
# 32 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 33 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_1, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 34 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 35 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 100
# 36 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 37 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 38 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 39 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 40 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2::
# 41 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 42 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_2, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 43 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 44 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 100
# 45 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 46 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 47 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 48 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 49 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3::
# 50 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 51 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_3, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 52 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 53 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_3, 100
# 54 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 55 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 56 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 57 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 58 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4::
# 59 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 60 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_4, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 61 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 62 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_4, 100
# 63 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 64 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 65 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 66 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 67 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5::
# 68 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 69 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_5, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 70 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 71 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_5, 100
# 72 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 73 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 74 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 75 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 76 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6::
# 77 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 78 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_6, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 79 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 80 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_6, 100
# 81 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 82 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 83 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 84 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 85 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7::
# 86 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 87 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq VAR_TEMP_7, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 88 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 89 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_7, 100
# 90 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 91 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 92 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 93 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 94 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed::
# 95 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	addvar NUM_SWITCHES_PRESSED, 1
# 96 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	playse SE_TRUCK_MOVE
# 97 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 98 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 1
# 99 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 8
# 100 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 101 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 102 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
# 103 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	return
# 104 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 105 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen::
# 106 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 107 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 2
# 108 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 10
# 109 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 110 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 111 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
# 112 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 113 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 3
# 114 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 115 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 2
# 116 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 117 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
# 118 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	playse SE_LAVARIDGE_FALL_WARP
# 119 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	waitse
# 120 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	return
# 121 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 122 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed::
# 123 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 124 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 125 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 126 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved::
# 127 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen
# 128 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway
# 129 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_TANOBY_RUINS
# 130 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 131 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 132 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 133 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway::
# 134 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	.string "A mysterious rumble echoed\n"
# 135 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	.string "somewhere far away.$"

# 1 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_Frlg_MapScripts::
# 3 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 5 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect::
# 6 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	lockall
# 7 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 8 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call_if_unset FLAG_TEMP_2, EventScript_GetElevatorFloor
# 9 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 10 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 11 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 12 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitmessage
# 13 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_SILPHCO_FLOORS
# 14 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 15 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 16 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 0, SilphCo_Elevator_EventScript_To11F
# 18 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 1, SilphCo_Elevator_EventScript_To10F
# 19 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 2, SilphCo_Elevator_EventScript_To9F
# 20 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 3, SilphCo_Elevator_EventScript_To8F
# 21 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 4, SilphCo_Elevator_EventScript_To7F
# 22 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 5, SilphCo_Elevator_EventScript_To6F
# 23 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 6, SilphCo_Elevator_EventScript_To5F
# 24 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 7, SilphCo_Elevator_EventScript_To4F
# 25 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 8, SilphCo_Elevator_EventScript_To3F
# 26 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 9, SilphCo_Elevator_EventScript_To2F
# 27 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 10, SilphCo_Elevator_EventScript_To1F
# 28 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 11, SilphCo_Elevator_EventScript_ExitFloorSelect
# 29 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 127, SilphCo_Elevator_EventScript_ExitFloorSelect
# 30 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 31 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 32 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To1F::
# 33 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 4
# 34 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_1F, 255, 22, 3
# 35 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 4, SilphCo_Elevator_EventScript_ExitFloorSelect
# 36 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 37 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 4
# 38 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 39 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 40 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 41 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To2F::
# 42 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 5
# 43 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_2F, 255, 22, 3
# 44 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 5, SilphCo_Elevator_EventScript_ExitFloorSelect
# 45 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 46 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 5
# 47 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 48 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 49 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 50 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To3F::
# 51 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 6
# 52 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_3F, 255, 22, 3
# 53 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 6, SilphCo_Elevator_EventScript_ExitFloorSelect
# 54 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 55 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 6
# 56 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 57 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 58 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 59 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To4F::
# 60 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 7
# 61 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_4F, 255, 22, 3
# 62 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 7, SilphCo_Elevator_EventScript_ExitFloorSelect
# 63 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 64 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 7
# 65 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 66 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 67 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 68 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To5F::
# 69 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 8
# 70 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_5F, 255, 22, 3
# 71 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 8, SilphCo_Elevator_EventScript_ExitFloorSelect
# 72 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 73 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 8
# 74 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 75 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 76 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 77 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To6F::
# 78 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 9
# 79 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_6F, 255, 20, 3
# 80 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 9, SilphCo_Elevator_EventScript_ExitFloorSelect
# 81 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 82 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 9
# 83 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 84 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 85 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 86 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To7F::
# 87 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 10
# 88 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_7F, 255, 23, 3
# 89 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 10, SilphCo_Elevator_EventScript_ExitFloorSelect
# 90 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 91 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 10
# 92 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 93 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 94 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 95 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To8F::
# 96 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 11
# 97 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_8F, 255, 22, 3
# 98 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 11, SilphCo_Elevator_EventScript_ExitFloorSelect
# 99 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 100 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 11
# 101 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 102 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 103 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 104 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To9F::
# 105 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 106 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_9F, 255, 24, 3
# 107 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 12, SilphCo_Elevator_EventScript_ExitFloorSelect
# 108 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 109 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 12
# 110 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 111 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 112 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 113 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To10F::
# 114 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 13
# 115 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_10F, 255, 13, 3
# 116 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 13, SilphCo_Elevator_EventScript_ExitFloorSelect
# 117 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 118 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 13
# 119 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 120 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 121 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 122 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To11F::
# 123 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 14
# 124 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_11F, 255, 13, 3
# 125 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 14, SilphCo_Elevator_EventScript_ExitFloorSelect
# 126 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 127 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 14
# 128 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 129 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 130 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 131 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_ExitFloorSelect::
# 132 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 133 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	releaseall
# 134 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 135 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 136 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_MoveElevator::
# 137 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 138 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	closemessage
# 139 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitse
# 140 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 141 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitstate
# 142 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 143 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	return

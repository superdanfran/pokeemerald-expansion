# 1 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
.equ FOUND_FIRST_SWITCH, FLAG_TEMP_1
# 3 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
.equ SWITCH1_ID,         VAR_0x8004
# 4 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
.equ SWITCH2_ID,         VAR_0x8005
# 5 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
.equ TRASH_CAN_ID,       VAR_0x8008
# 6 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 7 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Frlg_MapScripts::
# 8 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
# 9 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
# 10 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.byte 0
# 11 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 12 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnLoad::
# 13 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_SetOneBeamOff
# 14 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
# 15 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 16 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 17 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetOneBeamOff::
# 18 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 19 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 20 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 21 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 22 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 23 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 24 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 25 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 26 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 27 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
# 28 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 29 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 30 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOff::
# 31 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 32 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 33 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
# 34 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 35 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 36 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 37 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 38 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
# 39 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 40 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
# 41 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 42 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 43 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnTransition::
# 44 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_InitTrashCans
# 45 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 46 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 47 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_InitTrashCans::
# 48 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, Common_EventScript_NopReturn
# 49 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 50 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 51 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 52 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 53 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 54 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan1::
# 55 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 56 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 1
# 57 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 58 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 59 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 60 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan2::
# 61 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 62 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 2
# 63 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 64 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 65 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 66 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan3::
# 67 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 68 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 3
# 69 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 70 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 71 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 72 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan4::
# 73 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 74 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 4
# 75 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 76 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 77 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 78 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan5::
# 79 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 80 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 5
# 81 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 82 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 83 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 84 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan6::
# 85 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 86 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 6
# 87 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 88 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 89 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 90 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan7::
# 91 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 92 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 7
# 93 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 94 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 95 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 96 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan8::
# 97 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 98 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 8
# 99 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 100 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 101 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 102 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan9::
# 103 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 104 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 9
# 105 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 106 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 107 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 108 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan10::
# 109 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 110 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 10
# 111 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 112 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 113 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 114 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan11::
# 115 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 116 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 11
# 117 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 118 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 119 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 120 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan12::
# 121 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 122 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 12
# 123 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 124 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 125 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 126 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan13::
# 127 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 128 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 13
# 129 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 130 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 131 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 132 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan14::
# 133 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 134 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 14
# 135 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 136 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 137 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 138 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan15::
# 139 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 140 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 15
# 141 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 142 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 143 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 144 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan::
# 145 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar SWITCH1_ID, VAR_TEMP_0
# 146 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar SWITCH2_ID, VAR_TEMP_1
# 147 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_LocksAlreadyOpen
# 148 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_TrySwitchTwo
# 149 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq SWITCH1_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchOne
# 150 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 151 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 152 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 153 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 154 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchOne::
# 155 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
# 156 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_PIN
# 157 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 158 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 159 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 160 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FOUND_FIRST_SWITCH
# 161 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 162 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 163 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 164 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrySwitchTwo::
# 165 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq SWITCH2_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchTwo
# 166 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
# 167 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FOUND_FIRST_SWITCH
# 168 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 169 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 170 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 171 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOn
# 172 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 173 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 174 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 175 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 176 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchTwo::
# 177 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SecondLockOpened
# 178 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	closemessage
# 179 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 180 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 181 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 182 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 183 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
# 184 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 185 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 186 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 187 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LocksAlreadyOpen::
# 188 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 189 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 190 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 191 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 192 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOn::
# 193 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 194 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 195 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
# 196 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 197 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 198 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 199 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 200 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
# 201 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 202 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
# 203 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 204 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 205 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LtSurge::
# 206 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 207 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 208 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_GiveTM34
# 209 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 210 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 211 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 212 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 213 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 214 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 1
# 215 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_ShowOaksAide
# 216 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 217 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LT_SURGE
# 218 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE03_GET
# 219 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 3
# 220 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
# 221 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 222 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 223 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_ShowOaksAide::
# 224 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 225 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 226 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 227 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GiveTM34::
# 228 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
# 229 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM34
# 230 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_EventScript_NoRoomForTM34
# 231 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 232 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM34_FROM_SURGE
# 233 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainTM34
# 234 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 235 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 236 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 237 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_NoRoomForTM34::
# 238 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
# 239 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 240 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 241 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 242 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Dwayne::
# 243 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Text_DwayneIntro, VermilionCity_Gym_Text_DwayneDefeat
# 244 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 245 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 247 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 248 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Baily::
# 249 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_ENGINEER_BAILY, VermilionCity_Gym_Text_BailyIntro, VermilionCity_Gym_Text_BailyDefeat
# 250 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_BailyPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 252 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 253 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Tucker::
# 254 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_TUCKER, VermilionCity_Gym_Text_TuckerIntro, VermilionCity_Gym_Text_TuckerDefeat, VermilionCity_Gym_EventScript_DefeatedTucker
# 255 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 256 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_TuckerPostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 258 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 259 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedTucker::
# 260 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 2
# 261 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 262 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 263 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 264 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuy::
# 265 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lock
# 266 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	faceplayer
# 267 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuyPostVictory
# 268 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
# 269 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 270 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 271 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 272 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuyPostVictory::
# 273 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
# 274 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 275 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 276 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 277 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymStatue::
# 278 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 279 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatuePostVictory
# 280 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue
# 281 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 282 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 283 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 284 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymStatuePostVictory::
# 285 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
# 286 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 287 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 288 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 289 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeIntro::
# 290 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey, kid! What do you think you're\n"
# 291 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "doing here?\p"
# 292 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You won't live long in combat!\n"
# 293 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Not with your puny power!\p"
# 294 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I tell you, kid, electric POKéMON\n"
# 295 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "saved me during the war!\p"
# 296 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "They zapped my enemies into\n"
# 297 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "paralysis!\p"
# 298 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The same as I'll do to you!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 299 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 300 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgePostBattle::
# 301 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "A little word of advice, kid!\p"
# 302 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Electricity is sure powerful!\p"
# 303 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "But, it's useless against GROUND-\n"
# 304 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "type POKéMON!$"
# 305 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 306 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis::
# 307 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The THUNDERBADGE cranks up your\n"
# 308 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "POKéMON's SPEED!\p"
# 309 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It also lets your POKéMON FLY\n"
# 310 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "lightning-quick anytime, kid!\p"
# 311 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're special, kid!\n"
# 312 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Take this!$"
# 313 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 314 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ReceivedTM34FromLtSurge::
# 315 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM34\n"
# 316 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "from LT. SURGE.$"
# 317 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 318 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ExplainTM34::
# 319 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "TM34 contains SHOCK WAVE!\p"
# 320 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Teach it to an ELECTRIC POKéMON!$"
# 321 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 322 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_MakeRoomInYourBag::
# 323 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo, kid, make room in your BAG!$"
# 324 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 325 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeDefeat::
# 326 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Now that's a shocker!\p"
# 327 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're the real deal, kid!\p"
# 328 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fine, then, take the THUNDERBADGE!$"
# 329 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 330 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerIntro::
# 331 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "When I was in the Army, LT. SURGE\n"
# 332 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "was my strict CO.\p"
# 333 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He was a hard taskmaster.$"
# 334 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 335 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerDefeat::
# 336 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Stop!\n"
# 337 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're very good!$"
# 338 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 339 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerPostBattle::
# 340 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It's not easy opening that door.\p"
# 341 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE was always famous for\n"
# 342 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "his cautious nature in the Army.$"
# 343 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 344 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyIntro::
# 345 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I'm a lightweight, but I'm good\n"
# 346 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "with electricity!\p"
# 347 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "That's why I joined this GYM.$"
# 348 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 349 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyDefeat::
# 350 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fried!$"
# 351 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 352 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyPostBattle::
# 353 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Okay, I'll talk!\p"
# 354 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE said he hid door\n"
# 355 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "switches inside something.$"
# 356 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 357 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwayneIntro::
# 358 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "This is no place for kids!\n"
# 359 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Not even if you're good!$"
# 360 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 361 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwayneDefeat::
# 362 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
# 363 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Surprised me!$"
# 364 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 365 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwaynePostBattle::
# 366 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE installed the traps in\n"
# 367 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "the GYM himself.\p"
# 368 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He set up double locks everywhere.\n"
# 369 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Let me give you a hint.\p"
# 370 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "When you open the first lock, the\n"
# 371 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "second lock is right next to it.$"
# 372 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 373 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymGuyAdvice::
# 374 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 375 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 376 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE has a nickname.\p"
# 377 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "People refer to him as the\n"
# 378 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Lightning American!\p"
# 379 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He's an expert on electric\n"
# 380 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 381 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "BIRD/WATER-type POKéMON match\n"
# 382 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "poorly against the ELECTRIC type.\p"
# 383 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Beware of paralysis, too.\p"
# 384 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE is very cautious.\p"
# 385 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He's locked himself in, so it won't\n"
# 386 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "be easy getting to him.$"
# 387 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 388 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymGuyPostVictory::
# 389 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Whew!\n"
# 390 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "That match was electric!$"
# 391 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 392 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymStatue::
# 393 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
# 394 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\p"
# 395 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 396 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 397 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 398 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymStatuePlayerWon::
# 399 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
# 400 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\p"
# 401 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 402 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
# 403 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 404 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_NopeOnlyTrashHere::
# 405 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
# 406 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "There's only trash here.$"
# 407 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 408 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened::
# 409 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey! There's a switch under the\n"
# 410 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "trash! Turn it on!\p"
# 411 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The first electric lock opened!$"
# 412 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 413 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_SecondLockOpened::
# 414 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The second electric lock opened!\n"
# 415 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The motorized door opened!$"
# 416 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 417 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_OnlyTrashLocksWereReset::
# 418 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
# 419 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "There's only trash here.\p"
# 420 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey!\n"
# 421 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The electric locks were reset!$"

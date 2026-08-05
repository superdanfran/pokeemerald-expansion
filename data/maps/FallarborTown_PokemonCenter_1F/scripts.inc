# 1 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 9 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FALLARBOR_NURSE
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 21 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 25 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
# 26 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette::
# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_FACING
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
# 35 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
# 40 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 42 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 43 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
# 45 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
# 46 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 48 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 49 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
# 51 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 52 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_FALLARBOR_LANETTE
# 53 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
# 54 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 55 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 56 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
# 58 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_right
# 59 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 60 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 61 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 62 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 63 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 64 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 65 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 66 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 67 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 68 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 69 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 70 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 71 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
# 73 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 75 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 76 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 77 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 78 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 79 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 80 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 81 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 82 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 83 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 84 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 85 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTownPokemonCenter_1F_EventScript_StatMaxer::
# 86 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lockall
# 87 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_STAT_MAXER, Common_Movement_FacePlayer
# 88 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, FallarborTown_PokemonCenter_1F_EventScript_AskStatMax
# 90 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
# 91 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 92 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 93 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_PokemonCenter_1F_EventScript_AskStatMax
# 94 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_AskAllStatMax
# 95 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 96 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 97 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_AskStatMax::
# 98 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 99 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 100 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
# 101 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case NO, FallarborTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 103 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCentre_1F_EventScript_ChooseMon
# 104 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 105 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 106 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_AskAllStatMax::
# 107 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
# 108 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case NO, FallarborTown_PokemonCenter_1F_EventScript_AskStatMax
# 110 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap
# 111 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 112 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 113 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
# 114 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 115 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 116 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 117 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 118 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 119 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_PokemonCenter_1F_EventScript_CantMaxEgg
# 120 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_MaximizeAllStats
# 121 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 122 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 123 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_EventScript_ChooseMon::
# 124 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 125 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 126 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 127 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 128 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 129 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_PokemonCenter_1F_EventScript_CantMaxEgg
# 130 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_MaximizeStat
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 132 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 133 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_MaximizeStat::
# 134 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
# 135 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 136 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
# 137 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    case 0, FallarborTown_PokemonCenter_1F_EventScript_MaxHP
# 139 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    case 1, FallarborTown_PokemonCenter_1F_EventScript_MaxAtk
# 140 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    case 2, FallarborTown_PokemonCenter_1F_EventScript_MaxDef
# 141 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    case 3, FallarborTown_PokemonCenter_1F_EventScript_MaxSpAtk
# 142 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    case 4, FallarborTown_PokemonCenter_1F_EventScript_MaxSpDef
# 143 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    case 5, FallarborTown_PokemonCenter_1F_EventScript_MaxSpeed
# 144 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 145 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 146 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 147 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 148 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_MaximizeAllStats::
# 149 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special MaximizeAllIVs
# 150 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 151 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 152 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP
# 153 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 154 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 155 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 156 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_MaxHP::
# 157 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special MaximizeHPIV
# 158 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 159 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 160 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 161 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 162 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 163 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 164 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_MaxAtk::
# 165 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special MaximizeAttackIV
# 166 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 167 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 168 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 169 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 170 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 171 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 172 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_MaxDef::
# 173 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special MaximizeDefenseIV
# 174 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 175 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 176 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 177 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 178 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 179 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 180 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_MaxSpAtk::
# 181 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialAttackIV
# 182 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 183 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 184 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 185 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 186 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 187 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 188 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_MaxSpDef::
# 189 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialDefenseIV
# 190 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 191 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 192 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 193 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 194 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 195 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 196 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_MaxSpeed::
# 197 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpeedIV
# 198 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 199 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 200 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 201 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 202 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 203 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 204 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_UseBottleCap::
# 205 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 206 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 207 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 208 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 209 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 210 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 211 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 212 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_CantMaxEgg::
# 213 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
# 214 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCentre_1F_EventScript_ChooseMon
# 215 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 216 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 217 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
# 218 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
# 219 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	releaseall
# 220 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 221 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 222 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_ImTheStatMaxer::
# 223 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Hello, I can maximize one of your\n"
# 224 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stats.$"
# 225 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 226 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
# 227 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize a\n"
# 228 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stat?$"
# 229 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 230 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
# 231 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize all\n"
# 232 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "your POKéMON's stats?$"
# 233 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 234 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
# 235 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON's stat would you\n"
# 236 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "like to maximize?$"
# 237 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 238 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
# 239 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to\n"
# 240 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "maximize?$"
# 241 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 242 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Thanks:
# 243 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Have a nice day!$"
# 244 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 245 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_Text_MaximizeStat_NoCap:
# 246 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Please come back with a bottle cap!$"
# 247 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 248 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCentre_1F_Text_MaximizeStat_Egg:
# 249 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Please choose a valid POKéMON.$"
# 250 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 251 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
# 252 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, hello.\n"
# 253 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You are?\p"
# 254 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Okay, your name's {PLAYER}{KUN}.\n"
# 255 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I can see that you're a TRAINER.\p"
# 256 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "So that means you use the POKéMON\n"
# 257 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Storage System I developed.\p"
# 258 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "How I arrived at that conclusion is\n"
# 259 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "a simple deductive process.\p"
# 260 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You spoke to me because you wanted\n"
# 261 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "to access something on this PC.\p"
# 262 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, I'm sorry. I'm LANETTE.\p"
# 263 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Honestly, I'm glad to meet you--it's\n"
# 264 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "great you're using the Storage System.\p"
# 265 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "If you could, please visit me at home.\n"
# 266 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "My house is on ROUTE 114.$"
# 267 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 268 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
# 269 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what POKéMON looked like\n"
# 270 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "long, long ago?\p"
# 271 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe the FOSSIL MANIAC at the edge\n"
# 272 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "of town will know.$"
# 273 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 274 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
# 275 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "In the fields of FALLARBOR, we plant\n"
# 276 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "seedlings of hardy trees that thrive\l"
# 277 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "even in volcanic ash.$"

# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special SetMauvilleOldManObjEventGfx
# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MAUVILLE_NURSE
# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCityPokemonCenter_1F_EventScript_StatMaxer::
# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	lockall
# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_MAUVILLE_STAT_MAXER, Common_Movement_FacePlayer
# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, MauvilleCity_PokemonCenter_1F_EventScript_AskStatMax
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_AskStatMax
# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_AskAllStatMax
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_AskStatMax::
# 50 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 51 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 52 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
# 53 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 54 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case NO, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 55 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCentre_1F_EventScript_ChooseMon
# 56 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 57 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_AskAllStatMax::
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case NO, MauvilleCity_PokemonCenter_1F_EventScript_AskStatMax
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 68 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 69 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 70 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 71 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 72 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_MaximizeAllStats
# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 74 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 75 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_EventScript_ChooseMon::
# 76 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 77 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 79 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 80 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 81 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 82 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_MaximizeStat
# 83 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 84 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 85 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MaximizeStat::
# 86 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
# 87 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 88 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
# 89 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    case 0, MauvilleCity_PokemonCenter_1F_EventScript_MaxHP
# 91 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    case 1, MauvilleCity_PokemonCenter_1F_EventScript_MaxAtk
# 92 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    case 2, MauvilleCity_PokemonCenter_1F_EventScript_MaxDef
# 93 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    case 3, MauvilleCity_PokemonCenter_1F_EventScript_MaxSpAtk
# 94 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    case 4, MauvilleCity_PokemonCenter_1F_EventScript_MaxSpDef
# 95 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    case 5, MauvilleCity_PokemonCenter_1F_EventScript_MaxSpeed
# 96 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 97 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 98 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 99 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 100 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
# 101 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAllIVs
# 102 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 103 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 104 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP
# 105 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 106 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 107 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 108 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MaxHP::
# 109 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special MaximizeHPIV
# 110 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 111 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 112 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 113 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 114 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 115 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 116 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MaxAtk::
# 117 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAttackIV
# 118 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 119 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 120 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 121 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 122 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 123 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 124 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MaxDef::
# 125 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special MaximizeDefenseIV
# 126 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 127 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 128 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 129 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 130 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 131 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 132 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MaxSpAtk::
# 133 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialAttackIV
# 134 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 135 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 136 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 137 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 138 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 139 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 140 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MaxSpDef::
# 141 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialDefenseIV
# 142 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 143 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 144 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 145 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 146 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 147 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 148 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MaxSpeed::
# 149 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpeedIV
# 150 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 151 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 152 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 153 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 154 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 155 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 156 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_UseBottleCap::
# 157 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 158 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 159 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 160 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 161 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 162 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 163 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 164 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_CantMaxEgg::
# 165 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
# 166 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCentre_1F_EventScript_ChooseMon
# 167 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 168 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 169 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
# 170 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
# 171 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 172 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 173 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 174 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ImTheStatMaxer::
# 175 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, I can maximize one of your\n"
# 176 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stats.$"
# 177 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 178 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
# 179 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize a\n"
# 180 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stat?$"
# 181 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 182 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
# 183 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize all\n"
# 184 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "your POKéMON's stats?$"
# 185 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 186 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
# 187 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON's stat would you\n"
# 188 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "like to maximize?$"
# 189 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 190 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
# 191 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to\n"
# 192 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "maximize?$"
# 193 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 194 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
# 195 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Have a nice day!$"
# 196 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 197 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
# 198 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Please come back with a bottle cap!$"
# 199 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 200 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
# 201 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Please choose a valid POKéMON.$"
# 202 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 203 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
# 204 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he says weird\n"
# 205 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "things!\p"
# 206 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "He's funny in a weird way.\n"
# 207 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I doubt I'll forget about him!$"
# 208 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 209 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
# 210 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the RECORD CORNER,\n"
# 211 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the data for what's hot in DEWFORD\l"
# 212 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "got updated.\p"
# 213 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Now that bit of data is the same\n"
# 214 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "as my friend's!$"
# 215 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 216 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
# 217 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "A RECORD CORNER opened upstairs in\n"
# 218 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the POKéMON CENTER.\p"
# 219 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know what it's about, but it\n"
# 220 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "sounds fun. I'll go check it out!$"

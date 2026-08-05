# 1 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 9 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FORTREE_NURSE
# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Man::
# 24 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
# 25 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Boy::
# 28 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 29 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCityPokemonCenter_1F_EventScript_StatMaxer::
# 32 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	lockall
# 33 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FORTREE_STAT_MAXER, Common_Movement_FacePlayer
# 34 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, FortreeCity_PokemonCenter_1F_EventScript_AskStatMax
# 36 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 38 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 39 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FortreeCity_PokemonCenter_1F_EventScript_AskStatMax
# 40 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_AskAllStatMax
# 41 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_AskStatMax::
# 44 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 45 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FortreeCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 46 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
# 47 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 48 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case NO, FortreeCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 49 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCentre_1F_EventScript_ChooseMon
# 50 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 51 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_AskAllStatMax::
# 53 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
# 54 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case NO, FortreeCity_PokemonCenter_1F_EventScript_AskStatMax
# 56 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
# 57 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 58 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
# 60 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 61 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 62 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 63 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FortreeCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 64 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 65 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 66 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_MaximizeAllStats
# 67 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 68 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 69 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_EventScript_ChooseMon::
# 70 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 71 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 72 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 73 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FortreeCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 74 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 76 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_MaximizeStat
# 77 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 78 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 79 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_MaximizeStat::
# 80 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
# 81 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 82 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
# 83 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 84 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    case 0, FortreeCity_PokemonCenter_1F_EventScript_MaxHP
# 85 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    case 1, FortreeCity_PokemonCenter_1F_EventScript_MaxAtk
# 86 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    case 2, FortreeCity_PokemonCenter_1F_EventScript_MaxDef
# 87 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    case 3, FortreeCity_PokemonCenter_1F_EventScript_MaxSpAtk
# 88 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    case 4, FortreeCity_PokemonCenter_1F_EventScript_MaxSpDef
# 89 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    case 5, FortreeCity_PokemonCenter_1F_EventScript_MaxSpeed
# 90 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 91 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, FortreeCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 92 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 93 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
# 95 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAllIVs
# 96 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 97 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 98 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP
# 99 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 100 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 101 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 102 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_MaxHP::
# 103 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special MaximizeHPIV
# 104 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 105 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 106 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 107 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 108 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 109 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 110 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_MaxAtk::
# 111 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAttackIV
# 112 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 113 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 114 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 115 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 116 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 117 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 118 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_MaxDef::
# 119 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special MaximizeDefenseIV
# 120 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 121 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 122 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 123 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 124 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 125 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 126 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_MaxSpAtk::
# 127 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialAttackIV
# 128 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 129 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 130 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 131 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 132 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 133 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 134 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_MaxSpDef::
# 135 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialDefenseIV
# 136 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 137 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 138 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 139 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 140 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 141 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 142 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_MaxSpeed::
# 143 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpeedIV
# 144 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 145 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 146 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 147 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 148 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 149 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 150 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_UseBottleCap::
# 151 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 152 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 153 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 154 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 155 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 156 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 157 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 158 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_CantMaxEgg::
# 159 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
# 160 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCentre_1F_EventScript_ChooseMon
# 161 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 162 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 163 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
# 164 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
# 165 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 166 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 167 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 168 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_ImTheStatMaxer::
# 169 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, I can maximize one of your\n"
# 170 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stats.$"
# 171 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 172 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
# 173 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize a\n"
# 174 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stat?$"
# 175 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 176 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
# 177 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize all\n"
# 178 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "your POKéMON's stats?$"
# 179 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 180 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
# 181 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON's stat would you\n"
# 182 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "like to maximize?$"
# 183 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 184 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
# 185 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to\n"
# 186 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "maximize?$"
# 187 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 188 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
# 189 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Have a nice day!$"
# 190 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 191 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
# 192 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Please come back with a bottle cap!$"
# 193 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 194 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
# 195 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Please choose a valid POKéMON.$"
# 196 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 197 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
# 198 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Listen, kid, are you working\n"
# 199 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "on a POKéDEX?\p"
# 200 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm… Go to the SAFARI ZONE.\n"
# 201 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "That's my suggestion.$"
# 202 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 203 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
# 204 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Have you done anything at\n"
# 205 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the RECORD CORNER?\p"
# 206 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's pretty neat. It mixes and matches\n"
# 207 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the records of TRAINERS.\p"
# 208 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know quite how it works,\n"
# 209 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "but it's cool. It's exciting, even!$"
# 210 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 211 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
# 212 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Oh, wow, you have a POKéNAV!\n"
# 213 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "And it's just like mine!\p"
# 214 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Do you know about POKéNAV's\n"
# 215 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "MATCH CALL system?\p"
# 216 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Access it, and you can chat with\n"
# 217 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "registered TRAINERS anytime.\p"
# 218 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It also shows you which TRAINERS\n"
# 219 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "want a rematch with you.\p"
# 220 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's really nifty! Those DEVON guys\n"
# 221 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "sure know what they're doing!$"

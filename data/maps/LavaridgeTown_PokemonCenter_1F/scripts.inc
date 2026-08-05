# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LAVARIDGE_NURSE
# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTownPokemonCenter_1F_EventScript_StatMaxer::
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	lockall
# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_LAVARIDGE_STAT_MAXER, Common_Movement_FacePlayer
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, LavaridgeTown_PokemonCenter_1F_EventScript_AskStatMax
# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_PokemonCenter_1F_EventScript_AskStatMax
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto LavaridgeTown_PokemonCenter_1F_EventScript_AskAllStatMax
# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_AskStatMax::
# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
# 48 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case NO, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 50 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMon
# 51 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 52 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_AskAllStatMax::
# 54 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
# 55 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case NO, LavaridgeTown_PokemonCenter_1F_EventScript_AskStatMax
# 57 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap
# 58 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 59 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
# 61 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 62 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 63 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 64 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 65 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 66 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_PokemonCenter_1F_EventScript_CantMaxEgg
# 67 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto LavaridgeTown_PokemonCenter_1F_EventScript_MaximizeAllStats
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 69 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 70 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMon::
# 71 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 72 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 73 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 74 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 75 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 76 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_PokemonCenter_1F_EventScript_CantMaxEgg
# 77 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto LavaridgeTown_PokemonCenter_1F_EventScript_MaximizeStat
# 78 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 79 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 80 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_MaximizeStat::
# 81 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
# 82 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 83 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
# 84 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    case 0, LavaridgeTown_PokemonCenter_1F_EventScript_MaxHP
# 86 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    case 1, LavaridgeTown_PokemonCenter_1F_EventScript_MaxAtk
# 87 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    case 2, LavaridgeTown_PokemonCenter_1F_EventScript_MaxDef
# 88 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    case 3, LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpAtk
# 89 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    case 4, LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpDef
# 90 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    case 5, LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpeed
# 91 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 92 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 93 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 94 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 95 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_MaximizeAllStats::
# 96 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special MaximizeAllIVs
# 97 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 98 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 99 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP
# 100 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 101 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 102 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 103 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_MaxHP::
# 104 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special MaximizeHPIV
# 105 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 106 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 107 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 108 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 109 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 110 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 111 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_MaxAtk::
# 112 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special MaximizeAttackIV
# 113 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 114 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 115 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 116 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 117 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 118 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 119 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_MaxDef::
# 120 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special MaximizeDefenseIV
# 121 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 122 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 123 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 124 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 125 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 126 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 127 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpAtk::
# 128 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialAttackIV
# 129 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 130 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 131 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 132 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 133 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 134 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 135 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpDef::
# 136 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialDefenseIV
# 137 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 138 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 139 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 140 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 141 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 142 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 143 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpeed::
# 144 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpeedIV
# 145 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 146 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 147 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 148 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 149 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 150 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 151 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_UseBottleCap::
# 152 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 153 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 154 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 155 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 156 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 157 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 158 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 159 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_CantMaxEgg::
# 160 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
# 161 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMon
# 162 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 163 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 164 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
# 165 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
# 166 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	releaseall
# 167 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 168 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 169 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_ImTheStatMaxer::
# 170 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hello, I can maximize one of your\n"
# 171 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stats.$"
# 172 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 173 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
# 174 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize a\n"
# 175 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stat?$"
# 176 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 177 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
# 178 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize all\n"
# 179 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "your POKéMON's stats?$"
# 180 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 181 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
# 182 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON's stat would you\n"
# 183 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "like to maximize?$"
# 184 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 185 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
# 186 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to\n"
# 187 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "maximize?$"
# 188 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 189 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks:
# 190 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Have a nice day!$"
# 191 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 192 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_NoCap:
# 193 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Please come back with a bottle cap!$"
# 194 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 195 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Egg:
# 196 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Please choose a valid POKéMON.$"
# 197 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 198 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
# 199 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I think POKéMON get closer to their\n"
# 200 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "TRAINERS if they spend time together.\p"
# 201 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "The longer the better.\n"
# 202 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's what I think.$"
# 203 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 204 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
# 205 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "It's sort of magical how just sitting\n"
# 206 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "in a hot-spring pool can invigorate.\p"
# 207 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I wish I could let my POKéMON\n"
# 208 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "soak, too.$"
# 209 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 210 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
# 211 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\n"
# 212 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "the hot springs from here.\p"
# 213 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "If POKéMON are getting rest, so too\n"
# 214 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "should their TRAINERS.$"

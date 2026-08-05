# 1 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 9 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_DEWFORD_NURSE
# 14 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_AlolaGifts::
# 21 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	lock
# 22 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 23 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_ALOLA_GIFT, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftGiven
# 24 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_AlolaGifts, MSGBOX_DEFAULT
# 25 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	multichoicedefault 20, 8, MULTI_ALOLA_STARTER, 1, FALSE
# 26 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 0, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftRowlet
# 28 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 1, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftLitten
# 29 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case 2, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftPopplio
# 30 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_PokemonCenter_1F_Text_AlolaGiftsCancel
# 31 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 32 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 33 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftGiven::
# 36 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_AlolaGiftThanks, MSGBOX_DEFAULT
# 37 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 38 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftRowlet::
# 41 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 42 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_ALOLA_GIFT
# 43 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 44 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftLitten::
# 47 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 48 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_ALOLA_GIFT
# 49 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 50 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 51 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftPopplio::
# 53 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 54 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_ALOLA_GIFT
# 55 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 57 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
# 59 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
# 60 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 61 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Man::
# 63 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
# 64 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 65 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTownPokemonCenter_1F_EventScript_StatMaxer::
# 67 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	lockall
# 68 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_DEWFORD_STAT_MAXER, Common_Movement_FacePlayer
# 69 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, DewfordTown_PokemonCenter_1F_EventScript_AskStatMax
# 71 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
# 72 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 73 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 74 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_PokemonCenter_1F_EventScript_AskStatMax
# 75 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DewfordTown_PokemonCenter_1F_EventScript_AskAllStatMax
# 76 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 77 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 78 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_AskStatMax::
# 79 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 80 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 81 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
# 82 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case NO, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 84 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DewfordTown_PokemonCentre_1F_EventScript_ChooseMon
# 85 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 86 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 87 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_AskAllStatMax::
# 88 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
# 89 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case NO, DewfordTown_PokemonCenter_1F_EventScript_AskStatMax
# 91 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DewfordTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap
# 92 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 93 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
# 95 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 96 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 97 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 98 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 99 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 100 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_PokemonCenter_1F_EventScript_CantMaxEgg
# 101 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DewfordTown_PokemonCenter_1F_EventScript_MaximizeAllStats
# 102 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 103 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 104 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_EventScript_ChooseMon::
# 105 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 106 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 107 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 108 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 109 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 110 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_PokemonCenter_1F_EventScript_CantMaxEgg
# 111 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DewfordTown_PokemonCenter_1F_EventScript_MaximizeStat
# 112 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 113 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 114 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_MaximizeStat::
# 115 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
# 116 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 117 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
# 118 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    case 0, DewfordTown_PokemonCenter_1F_EventScript_MaxHP
# 120 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    case 1, DewfordTown_PokemonCenter_1F_EventScript_MaxAtk
# 121 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    case 2, DewfordTown_PokemonCenter_1F_EventScript_MaxDef
# 122 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    case 3, DewfordTown_PokemonCenter_1F_EventScript_MaxSpAtk
# 123 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    case 4, DewfordTown_PokemonCenter_1F_EventScript_MaxSpDef
# 124 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    case 5, DewfordTown_PokemonCenter_1F_EventScript_MaxSpeed
# 125 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 126 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 127 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 128 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 129 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_MaximizeAllStats::
# 130 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special MaximizeAllIVs
# 131 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 132 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 133 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP
# 134 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 135 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 136 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 137 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_MaxHP::
# 138 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special MaximizeHPIV
# 139 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 140 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 141 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 142 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 143 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 144 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 145 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_MaxAtk::
# 146 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special MaximizeAttackIV
# 147 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 148 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 149 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 150 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 151 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 152 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 153 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_MaxDef::
# 154 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special MaximizeDefenseIV
# 155 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 156 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 157 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 158 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 159 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 160 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 161 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_MaxSpAtk::
# 162 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialAttackIV
# 163 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 164 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 165 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 166 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 167 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 168 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 169 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_MaxSpDef::
# 170 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialDefenseIV
# 171 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 172 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 173 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 174 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 175 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 176 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 177 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_MaxSpeed::
# 178 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	special MaximizeSpeedIV
# 179 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 180 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 181 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 182 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 183 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 184 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 185 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_UseBottleCap::
# 186 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 187 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 188 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 189 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 190 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    releaseall
# 191 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 192 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 193 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_CantMaxEgg::
# 194 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
# 195 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DewfordTown_PokemonCentre_1F_EventScript_ChooseMon
# 196 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 197 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 198 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
# 199 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
# 200 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
# 201 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 202 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 203 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_ImTheStatMaxer::
# 204 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Hello, I can maximize one of your\n"
# 205 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stats.$"
# 206 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 207 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
# 208 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize a\n"
# 209 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stat?$"
# 210 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 211 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
# 212 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize all\n"
# 213 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "your POKéMON's stats?$"
# 214 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 215 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
# 216 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON's stat would you\n"
# 217 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "like to maximize?$"
# 218 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 219 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
# 220 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to\n"
# 221 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "maximize?$"
# 222 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 223 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks:
# 224 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Have a nice day!$"
# 225 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 226 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_Text_MaximizeStat_NoCap:
# 227 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Please come back with a bottle cap!$"
# 228 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 229 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Egg:
# 230 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Please choose a valid POKéMON.$"
# 231 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 232 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_StoneCavern:
# 233 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "There's a stone cavern at the edge\n"
# 234 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "of town.\p"
# 235 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I've heard you can find rare stones\n"
# 236 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "there.$"
# 237 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 238 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
# 239 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Even if a POKéMON faints and can't\n"
# 240 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "battle, it can still use a move learned\l"
# 241 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "from a HIDDEN MACHINE (HM).$"
# 242 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 243 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_AlolaGifts:
# 244 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Burp!\p"
# 245 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Sorry. Uh.\p"
# 246 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "You look responsible. I got these\n"
# 247 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "stowaways on my ship. Take one.$"
# 248 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 249 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_AlolaGiftsCancel:
# 250 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Come on, help me out here!$"
# 251 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 252 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_AlolaGiftThanks:
# 253 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "You've done me a big favor.$"

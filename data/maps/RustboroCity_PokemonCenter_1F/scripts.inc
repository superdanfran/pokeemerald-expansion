# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_KalosGifts::
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lock
# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_KALOS_GIFT, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftGiven
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_KalosGifts, MSGBOX_DEFAULT
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	multichoicedefault 20, 8, MULTI_KALOS_STARTER, 1, FALSE
# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 0, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftChespin
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 1, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftFennekin
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case 2, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftFroakie
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonCenter_1F_Text_KalosGiftsCancel
# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_KalosGiftGiven::
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_KalosGiftBonneChance, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_KalosGiftChespin::
# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_KALOS_GIFT
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_KalosGiftFennekin::
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 48 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_KALOS_GIFT
# 49 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 50 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 51 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_KalosGiftFroakie::
# 53 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_KALOS_GIFT
# 55 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 59 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 60 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 63 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 64 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 65 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 68 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 69 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 70 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCityPokemonCenter_1F_EventScript_StatMaxer::
# 71 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lockall
# 72 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_RUSTBORO_STAT_MAXER, Common_Movement_FacePlayer
# 73 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, RustboroCity_PokemonCenter_1F_EventScript_AskStatMax
# 75 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
# 76 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 77 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 78 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_PokemonCenter_1F_EventScript_AskStatMax
# 79 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto RustboroCity_PokemonCenter_1F_EventScript_AskAllStatMax
# 80 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 81 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 82 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_AskStatMax::
# 83 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 84 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 85 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
# 86 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case NO, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 88 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto RustboroCity_PokemonCentre_1F_EventScript_ChooseMon
# 89 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 90 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 91 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_AskAllStatMax::
# 92 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
# 93 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case NO, RustboroCity_PokemonCenter_1F_EventScript_AskStatMax
# 95 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto RustboroCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
# 96 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 97 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 98 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
# 99 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 101 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 102 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 103 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 104 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 105 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto RustboroCity_PokemonCenter_1F_EventScript_MaximizeAllStats
# 106 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 107 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 108 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_EventScript_ChooseMon::
# 109 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 110 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 111 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 112 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 113 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 114 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 115 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto RustboroCity_PokemonCenter_1F_EventScript_MaximizeStat
# 116 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 117 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 118 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_MaximizeStat::
# 119 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
# 120 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 121 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
# 122 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 123 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    case 0, RustboroCity_PokemonCenter_1F_EventScript_MaxHP
# 124 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    case 1, RustboroCity_PokemonCenter_1F_EventScript_MaxAtk
# 125 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    case 2, RustboroCity_PokemonCenter_1F_EventScript_MaxDef
# 126 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    case 3, RustboroCity_PokemonCenter_1F_EventScript_MaxSpAtk
# 127 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    case 4, RustboroCity_PokemonCenter_1F_EventScript_MaxSpDef
# 128 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    case 5, RustboroCity_PokemonCenter_1F_EventScript_MaxSpeed
# 129 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 130 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 131 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 132 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 133 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
# 134 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAllIVs
# 135 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 136 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 137 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP
# 138 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 139 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 140 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 141 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_MaxHP::
# 142 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special MaximizeHPIV
# 143 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 144 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 145 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 146 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 147 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 148 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 149 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_MaxAtk::
# 150 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAttackIV
# 151 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 152 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 153 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 154 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 155 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 156 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 157 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_MaxDef::
# 158 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special MaximizeDefenseIV
# 159 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 160 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 161 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 162 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 163 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 164 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 165 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_MaxSpAtk::
# 166 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialAttackIV
# 167 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 168 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 169 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 170 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 171 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 172 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 173 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_MaxSpDef::
# 174 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialDefenseIV
# 175 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 176 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 177 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 178 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 179 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 180 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 181 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_MaxSpeed::
# 182 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpeedIV
# 183 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 184 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 185 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 186 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 187 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 188 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 189 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_UseBottleCap::
# 190 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 191 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 192 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 193 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 194 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 195 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 196 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 197 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_CantMaxEgg::
# 198 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
# 199 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	goto RustboroCity_PokemonCentre_1F_EventScript_ChooseMon
# 200 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 201 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 202 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
# 203 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
# 204 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 205 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 206 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 207 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_ImTheStatMaxer::
# 208 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, I can maximize one of your\n"
# 209 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stats.$"
# 210 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 211 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
# 212 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize a\n"
# 213 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stat?$"
# 214 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 215 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
# 216 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize all\n"
# 217 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "your POKéMON's stats?$"
# 218 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 219 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
# 220 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON's stat would you\n"
# 221 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "like to maximize?$"
# 222 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 223 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
# 224 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to\n"
# 225 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "maximize?$"
# 226 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 227 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
# 228 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Have a nice day!$"
# 229 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 230 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
# 231 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Please come back with a bottle cap!$"
# 232 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 233 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
# 234 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Please choose a valid POKéMON.$"
# 235 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 236 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 237 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\n"
# 238 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "friend's has a JOLLY nature.\p"
# 239 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's fascinating how POKéMON have\n"
# 240 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "personalities!$"
# 241 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 242 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
# 243 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
# 244 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "female POKéMON.\p"
# 245 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "But no one seems to have any idea how\n"
# 246 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "they're different.\p"
# 247 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I've heard some POKéMON can even\n"
# 248 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "change genders! Aren't POKéMON amazing?$"
# 249 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 250 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 251 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\p"
# 252 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I used it to teach my POKéMON how to\n"
# 253 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "CUT down skinny trees.$"
# 254 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 255 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_KalosGifts:
# 256 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Bonjour! Salut! Allo allo!\p"
# 257 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I just got back from the KALOS region\n"
# 258 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "and I caught these petit cuties!\p"
# 259 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Do you want one?.$"
# 260 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 261 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_KalosGiftsCancel:
# 262 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Ah, that's okay if you need time to choose.$"
# 263 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 264 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_KalosGiftBonneChance:
# 265 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Bonne chance!.$"

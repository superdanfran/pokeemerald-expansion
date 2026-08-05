# 1 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_GalarGifts::
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_GALAR_GIFT, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGiven
# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_GalarGifts, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	multichoicedefault 20, 8, MULTI_GALAR_STARTER, 1, FALSE
# 34 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 0, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGrookey
# 36 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 1, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftScorbunny
# 37 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case 2, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftSobble
# 38 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_PokemonCenter_1F_Text_GalarGiftsCancel
# 39 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 40 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGiven::
# 44 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_GalarGiftCheersLove, MSGBOX_DEFAULT
# 45 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 46 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGrookey::
# 49 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 50 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_GALAR_GIFT
# 51 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 52 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 53 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_GalarGiftScorbunny::
# 55 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 56 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_GALAR_GIFT
# 57 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 58 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 59 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_GalarGiftSobble::
# 61 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 62 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_GALAR_GIFT
# 63 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 64 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 65 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCityPokemonCenter_1F_EventScript_StatMaxer::
# 67 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	lockall
# 68 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SLATEPORT_STAT_MAXER, Common_Movement_FacePlayer
# 69 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, SlateportCity_PokemonCenter_1F_EventScript_AskStatMax
# 71 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
# 72 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 73 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 74 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonCenter_1F_EventScript_AskStatMax
# 75 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto SlateportCity_PokemonCenter_1F_EventScript_AskAllStatMax
# 76 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 77 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 78 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_AskStatMax::
# 79 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 80 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 81 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
# 82 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case NO, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 84 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto SlateportCity_PokemonCentre_1F_EventScript_ChooseMon
# 85 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 86 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 87 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_AskAllStatMax::
# 88 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
# 89 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case NO, SlateportCity_PokemonCenter_1F_EventScript_AskStatMax
# 91 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto SlateportCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
# 92 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 93 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
# 95 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 97 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 98 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 99 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 100 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 101 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto SlateportCity_PokemonCenter_1F_EventScript_MaximizeAllStats
# 102 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 103 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 104 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_EventScript_ChooseMon::
# 105 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 106 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 107 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 108 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 109 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 110 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 111 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto SlateportCity_PokemonCenter_1F_EventScript_MaximizeStat
# 112 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 113 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 114 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_MaximizeStat::
# 115 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
# 116 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 117 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
# 118 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    case 0, SlateportCity_PokemonCenter_1F_EventScript_MaxHP
# 120 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    case 1, SlateportCity_PokemonCenter_1F_EventScript_MaxAtk
# 121 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    case 2, SlateportCity_PokemonCenter_1F_EventScript_MaxDef
# 122 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    case 3, SlateportCity_PokemonCenter_1F_EventScript_MaxSpAtk
# 123 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    case 4, SlateportCity_PokemonCenter_1F_EventScript_MaxSpDef
# 124 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    case 5, SlateportCity_PokemonCenter_1F_EventScript_MaxSpeed
# 125 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 126 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 127 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 128 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 129 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
# 130 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAllIVs
# 131 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 132 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 133 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP
# 134 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 135 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 136 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 137 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_MaxHP::
# 138 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special MaximizeHPIV
# 139 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 140 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 141 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 142 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 143 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 144 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 145 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_MaxAtk::
# 146 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAttackIV
# 147 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 148 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 149 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 150 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 151 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 152 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 153 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_MaxDef::
# 154 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special MaximizeDefenseIV
# 155 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 156 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 157 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 158 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 159 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 160 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 161 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_MaxSpAtk::
# 162 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialAttackIV
# 163 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 164 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 165 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 166 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 167 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 168 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 169 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_MaxSpDef::
# 170 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialDefenseIV
# 171 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 172 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 173 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 174 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 175 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 176 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 177 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_MaxSpeed::
# 178 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpeedIV
# 179 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 180 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 181 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 182 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 183 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 184 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 185 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_UseBottleCap::
# 186 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 187 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 188 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 189 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 190 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 191 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 192 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 193 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_CantMaxEgg::
# 194 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
# 195 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	goto SlateportCity_PokemonCentre_1F_EventScript_ChooseMon
# 196 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 197 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 198 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
# 199 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
# 200 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 201 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 202 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 203 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_ImTheStatMaxer::
# 204 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, I can maximize one of your\n"
# 205 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stats.$"
# 206 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 207 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
# 208 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize a\n"
# 209 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stat?$"
# 210 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 211 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
# 212 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize all\n"
# 213 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "your POKéMON's stats?$"
# 214 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 215 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
# 216 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON's stat would you\n"
# 217 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "like to maximize?$"
# 218 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 219 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
# 220 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to\n"
# 221 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "maximize?$"
# 222 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 223 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
# 224 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Have a nice day!$"
# 225 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 226 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
# 227 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Please come back with a bottle cap!$"
# 228 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 229 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
# 230 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Please choose a valid POKéMON.$"
# 231 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 232 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 233 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
# 234 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'd say it's raising different kinds\n"
# 235 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "of POKéMON in a balanced manner.\p"
# 236 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "It's no good to make just one\n"
# 237 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON strong.\p"
# 238 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If it has a type disadvantage,\n"
# 239 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "it might not stand a chance.$"
# 240 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 241 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 242 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\p"
# 243 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If a traded POKéMON is holding an\n"
# 244 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "item, it makes me twice as happy!$"
# 245 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 246 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_GalarGifts:
# 247 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Hey there love.\p"
# 248 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Would ya mind lookin' after a\n"
# 249 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON for me? Thanks love.$"
# 250 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 251 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_GalarGiftsCancel:
# 252 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "You'd really be doin' me a solid!.$"
# 253 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 254 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_GalarGiftCheersLove:
# 255 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Cheers, love.$"

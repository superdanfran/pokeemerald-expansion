# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCityPokemonCenter_1F_EventScript_StatMaxer::
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lockall
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PETALBURG_STAT_MAXER, Common_Movement_FacePlayer
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgCity_PokemonCenter_1F_EventScript_AskStatMax
# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_PokemonCenter_1F_EventScript_AskStatMax
# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_AskAllStatMax
# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_AskStatMax::
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case NO, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCentre_1F_EventScript_ChooseMon
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_AskAllStatMax::
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case NO, PetalburgCity_PokemonCenter_1F_EventScript_AskStatMax
# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 87 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 88 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 89 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 90 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 91 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_MaximizeAllStats
# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 93 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_EventScript_ChooseMon::
# 95 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
# 96 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 97 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 98 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 99 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 100 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_CantMaxEgg
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_MaximizeStat
# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 103 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 104 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_MaximizeStat::
# 105 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    case 0, PetalburgCity_PokemonCenter_1F_EventScript_MaxHP
# 110 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    case 1, PetalburgCity_PokemonCenter_1F_EventScript_MaxAtk
# 111 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    case 2, PetalburgCity_PokemonCenter_1F_EventScript_MaxDef
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    case 3, PetalburgCity_PokemonCenter_1F_EventScript_MaxSpAtk
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    case 4, PetalburgCity_PokemonCenter_1F_EventScript_MaxSpDef
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    case 5, PetalburgCity_PokemonCenter_1F_EventScript_MaxSpeed
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 116 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 118 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAllIVs
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 123 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 127 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_MaxHP::
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special MaximizeHPIV
# 129 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 131 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 132 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 133 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 135 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_MaxAtk::
# 136 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special MaximizeAttackIV
# 137 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 138 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 139 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 140 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 141 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 143 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_MaxDef::
# 144 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special MaximizeDefenseIV
# 145 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 146 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 148 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 149 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 150 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 151 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_MaxSpAtk::
# 152 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialAttackIV
# 153 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 154 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 155 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 156 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 157 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 158 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 159 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_MaxSpDef::
# 160 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpecialDefenseIV
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 163 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 164 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 165 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 166 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 167 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_MaxSpeed::
# 168 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	special MaximizeSpeedIV
# 169 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 170 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 171 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 172 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 173 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 174 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 175 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_UseBottleCap::
# 176 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 177 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	playse SE_USE_ITEM
# 178 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
# 179 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    removeitem ITEM_BOTTLE_CAP
# 180 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
    releaseall
# 181 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 182 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 183 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_CantMaxEgg::
# 184 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
# 185 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCentre_1F_EventScript_ChooseMon
# 186 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 187 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 188 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
# 189 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
# 190 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
# 191 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 192 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 193 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ImTheStatMaxer::
# 194 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hello, I can maximize one of your\n"
# 195 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stats.$"
# 196 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 197 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
# 198 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize a\n"
# 199 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON's stat?$"
# 200 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 201 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
# 202 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Would you like to maximize all\n"
# 203 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "your POKéMON's stats?$"
# 204 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 205 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
# 206 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON's stat would you\n"
# 207 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "like to maximize?$"
# 208 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 209 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
# 210 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Which stat would you like to\n"
# 211 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "maximize?$"
# 212 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 213 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
# 214 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Have a nice day!$"
# 215 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 216 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
# 217 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Please come back with a bottle cap!$"
# 218 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 219 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
# 220 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Please choose a valid POKéMON.$"
# 221 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 222 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 223 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
# 224 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "System…\p"
# 225 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Whoever made it must be some kind\n"
# 226 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "of a scientific wizard!$"
# 227 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 228 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 229 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my POKéMON ate an\n"
# 230 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "ORAN BERRY, it regained HP!$"
# 231 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 232 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 233 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of POKéMON.\p"
# 234 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All types have their strengths and\n"
# 235 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "weaknesses against other types.\p"
# 236 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the types of POKéMON,\n"
# 237 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "a battle could be easy or hard.$"
# 238 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 239 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 240 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TREECKO\n"
# 241 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a GRASS type.\p"
# 242 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the WATER and\n"
# 243 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "GROUND types.\p"
# 244 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against FIRE-type\n"
# 245 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 246 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 247 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 248 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TORCHIC\n"
# 249 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a FIRE type.\p"
# 250 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the GRASS and\n"
# 251 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "BUG types.\p"
# 252 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against WATER-type\n"
# 253 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 254 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 255 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 256 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your MUDKIP\n"
# 257 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a WATER type.\p"
# 258 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the FIRE type.\p"
# 259 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against GRASS-type\n"
# 260 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "and ELECTRIC-type POKéMON.$"

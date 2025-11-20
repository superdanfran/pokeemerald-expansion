PetalburgCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PetalburgCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PETALBURG_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
	end

PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
	end

PetalburgCity_PokemonCenter_1F_EventScript_Woman::
	lock
	faceplayer
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, IsStarterInParty
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
	return

PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
	return

PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
	return

PetalburgCityPokemonCenter_1F_EventScript_StatMaxer::
	lockall
	applymovement LOCALID_PETALBURG_STAT_MAXER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, PetalburgCity_PokemonCenter_1F_EventScript_AskStatMax
	msgbox PetalburgCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	checkitem ITEM_GOLD_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_PokemonCenter_1F_EventScript_AskStatMax
	goto PetalburgCity_PokemonCenter_1F_EventScript_AskAllStatMax
	end

PetalburgCity_PokemonCenter_1F_EventScript_AskStatMax::
	checkitem ITEM_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	msgbox PetalburgCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	goto PetalburgCity_PokemonCentre_1F_EventScript_ChooseMon
	end

PetalburgCity_PokemonCenter_1F_EventScript_AskAllStatMax::
	msgbox PetalburgCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, PetalburgCity_PokemonCenter_1F_EventScript_AskStatMax
	goto PetalburgCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
	end

PetalburgCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_CantMaxEgg
	goto PetalburgCity_PokemonCenter_1F_EventScript_MaximizeAllStats
	end

PetalburgCity_PokemonCentre_1F_EventScript_ChooseMon::
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_CantMaxEgg
	goto PetalburgCity_PokemonCenter_1F_EventScript_MaximizeStat
	end

PetalburgCity_PokemonCenter_1F_EventScript_MaximizeStat::
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
	waitmessage
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
	switch VAR_RESULT
    case 0, PetalburgCity_PokemonCenter_1F_EventScript_MaxHP
    case 1, PetalburgCity_PokemonCenter_1F_EventScript_MaxAtk
    case 2, PetalburgCity_PokemonCenter_1F_EventScript_MaxDef
    case 3, PetalburgCity_PokemonCenter_1F_EventScript_MaxSpAtk
    case 4, PetalburgCity_PokemonCenter_1F_EventScript_MaxSpDef
    case 5, PetalburgCity_PokemonCenter_1F_EventScript_MaxSpeed
	waitstate
	case MULTI_B_PRESSED, PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	end

PetalburgCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
	special MaximizeAllIVs
	playse SE_USE_ITEM
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_GOLD_BOTTLE_CAP
    releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_MaxHP::
	special MaximizeHPIV
	playse SE_USE_ITEM
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_MaxAtk::
	special MaximizeAttackIV
	playse SE_USE_ITEM
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_MaxDef::
	special MaximizeDefenseIV
	playse SE_USE_ITEM
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_MaxSpAtk::
	special MaximizeSpecialAttackIV
	playse SE_USE_ITEM
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_MaxSpDef::
	special MaximizeSpecialDefenseIV
	playse SE_USE_ITEM
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_MaxSpeed::
	special MaximizeSpeedIV
	playse SE_USE_ITEM
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_UseBottleCap::
	waitstate
	playse SE_USE_ITEM
    msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

PetalburgCity_PokemonCenter_1F_EventScript_CantMaxEgg::
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCentre_1F_EventScript_ChooseMon
	end

PetalburgCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
	msgbox PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
	releaseall
	end

PetalburgCity_PokemonCenter_1F_Text_ImTheStatMaxer::
	.string "Hello, I can maximize one of your\n"
	.string "POKéMON's stats.$"

PetalburgCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
	.string "Would you like to maximize a\n"
	.string "POKéMON's stat?$"

PetalburgCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
	.string "Would you like to maximize all\n"
	.string "your POKéMON's stats?$"

PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
	.string "Which POKéMON's stat would you\n"
	.string "like to maximize?$"

PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
	.string "Which stat would you like to\n"
	.string "maximize?$"

PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
	.string "Have a nice day!$"

PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
	.string "Please come back with a bottle cap!$"

PetalburgCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
	.string "Please choose a valid POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
	.string "That PC-based POKéMON Storage\n"
	.string "System…\p"
	.string "Whoever made it must be some kind\n"
	.string "of a scientific wizard!$"

PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
	.string "When my POKéMON ate an\n"
	.string "ORAN BERRY, it regained HP!$"

PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
	.string "There are many types of POKéMON.\p"
	.string "All types have their strengths and\n"
	.string "weaknesses against other types.\p"
	.string "Depending on the types of POKéMON,\n"
	.string "a battle could be easy or hard.$"

PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
	.string "For example, your TREECKO\n"
	.string "is a GRASS type.\p"
	.string "It's strong against the WATER and\n"
	.string "GROUND types.\p"
	.string "But, it's weak against FIRE-type\n"
	.string "POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
	.string "For example, your TORCHIC\n"
	.string "is a FIRE type.\p"
	.string "It's strong against the GRASS and\n"
	.string "BUG types.\p"
	.string "But, it's weak against WATER-type\n"
	.string "POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
	.string "For example, your MUDKIP\n"
	.string "is a WATER type.\p"
	.string "It's strong against the FIRE type.\p"
	.string "But, it's weak against GRASS-type\n"
	.string "and ELECTRIC-type POKéMON.$"


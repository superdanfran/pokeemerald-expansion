LavaridgeTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LAVARIDGE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

LavaridgeTownPokemonCenter_1F_EventScript_StatMaxer::
	lockall
	applymovement LOCALID_LAVARIDGE_STAT_MAXER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, LavaridgeTown_PokemonCenter_1F_EventScript_AskStatMax
	msgbox LavaridgeTown_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	checkitem ITEM_GOLD_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_PokemonCenter_1F_EventScript_AskStatMax
	goto LavaridgeTown_PokemonCenter_1F_EventScript_AskAllStatMax
	end

LavaridgeTown_PokemonCenter_1F_EventScript_AskStatMax::
	checkitem ITEM_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	msgbox LavaridgeTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	goto LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMon
	end

LavaridgeTown_PokemonCenter_1F_EventScript_AskAllStatMax::
	msgbox LavaridgeTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, LavaridgeTown_PokemonCenter_1F_EventScript_AskStatMax
	goto LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap
	end

LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_PokemonCenter_1F_EventScript_CantMaxEgg
	goto LavaridgeTown_PokemonCenter_1F_EventScript_MaximizeAllStats
	end

LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMon::
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_PokemonCenter_1F_EventScript_CantMaxEgg
	goto LavaridgeTown_PokemonCenter_1F_EventScript_MaximizeStat
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MaximizeStat::
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
	waitmessage
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
	switch VAR_RESULT
    case 0, LavaridgeTown_PokemonCenter_1F_EventScript_MaxHP
    case 1, LavaridgeTown_PokemonCenter_1F_EventScript_MaxAtk
    case 2, LavaridgeTown_PokemonCenter_1F_EventScript_MaxDef
    case 3, LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpAtk
    case 4, LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpDef
    case 5, LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpeed
	waitstate
	case MULTI_B_PRESSED, LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MaximizeAllStats::
	special MaximizeAllIVs
	playse SE_USE_ITEM
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_GOLD_BOTTLE_CAP
    releaseall
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MaxHP::
	special MaximizeHPIV
	playse SE_USE_ITEM
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MaxAtk::
	special MaximizeAttackIV
	playse SE_USE_ITEM
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MaxDef::
	special MaximizeDefenseIV
	playse SE_USE_ITEM
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpAtk::
	special MaximizeSpecialAttackIV
	playse SE_USE_ITEM
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpDef::
	special MaximizeSpecialDefenseIV
	playse SE_USE_ITEM
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MaxSpeed::
	special MaximizeSpeedIV
	playse SE_USE_ITEM
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

LavaridgeTown_PokemonCenter_1F_EventScript_UseBottleCap::
	waitstate
	playse SE_USE_ITEM
    msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

LavaridgeTown_PokemonCenter_1F_EventScript_CantMaxEgg::
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
	goto LavaridgeTown_PokemonCentre_1F_EventScript_ChooseMon
	end

LavaridgeTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
	msgbox LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_PokemonCenter_1F_Text_ImTheStatMaxer::
	.string "Hello, I can maximize one of your\n"
	.string "POKéMON's stats.$"

LavaridgeTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
	.string "Would you like to maximize a\n"
	.string "POKéMON's stat?$"

LavaridgeTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
	.string "Would you like to maximize all\n"
	.string "your POKéMON's stats?$"

LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
	.string "Which POKéMON's stat would you\n"
	.string "like to maximize?$"

LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
	.string "Which stat would you like to\n"
	.string "maximize?$"

LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Thanks:
	.string "Have a nice day!$"

LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_NoCap:
	.string "Please come back with a bottle cap!$"

LavaridgeTown_PokemonCentre_1F_Text_MaximizeStat_Egg:
	.string "Please choose a valid POKéMON.$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
	.string "I think POKéMON get closer to their\n"
	.string "TRAINERS if they spend time together.\p"
	.string "The longer the better.\n"
	.string "That's what I think.$"

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
	.string "It's sort of magical how just sitting\n"
	.string "in a hot-spring pool can invigorate.\p"
	.string "I wish I could let my POKéMON\n"
	.string "soak, too.$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
	.string "Hohoho! Hey, kid, you can reach\n"
	.string "the hot springs from here.\p"
	.string "If POKéMON are getting rest, so too\n"
	.string "should their TRAINERS.$"


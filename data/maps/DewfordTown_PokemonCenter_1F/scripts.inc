DewfordTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

DewfordTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

DewfordTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_DEWFORD_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGifts::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ALOLA_GIFT, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftGiven
	msgbox DewfordTown_PokemonCenter_1F_Text_AlolaGifts, MSGBOX_DEFAULT
	multichoicedefault 20, 8, MULTI_ALOLA_STARTER, 1, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftRowlet
	case 1, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftLitten
	case 2, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftPopplio
	case MULTI_B_PRESSED, DewfordTown_PokemonCenter_1F_Text_AlolaGiftsCancel
	closemessage
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftGiven::
	msgbox DewfordTown_PokemonCenter_1F_Text_AlolaGiftThanks, MSGBOX_DEFAULT
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftRowlet::
	givemon SPECIES_ROWLET, 5
	setflag FLAG_RECEIVED_ALOLA_GIFT
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftLitten::
	givemon SPECIES_LITTEN, 5
	setflag FLAG_RECEIVED_ALOLA_GIFT
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftPopplio::
	givemon SPECIES_POPPLIO, 5
	setflag FLAG_RECEIVED_ALOLA_GIFT
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_EventScript_Man::
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
	end

DewfordTownPokemonCenter_1F_EventScript_StatMaxer::
	lockall
	applymovement LOCALID_DEWFORD_STAT_MAXER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, DewfordTown_PokemonCenter_1F_EventScript_AskStatMax
	msgbox DewfordTown_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	checkitem ITEM_GOLD_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_PokemonCenter_1F_EventScript_AskStatMax
	goto DewfordTown_PokemonCenter_1F_EventScript_AskAllStatMax
	end

DewfordTown_PokemonCenter_1F_EventScript_AskStatMax::
	checkitem ITEM_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	msgbox DewfordTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	goto DewfordTown_PokemonCentre_1F_EventScript_ChooseMon
	end

DewfordTown_PokemonCenter_1F_EventScript_AskAllStatMax::
	msgbox DewfordTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, DewfordTown_PokemonCenter_1F_EventScript_AskStatMax
	goto DewfordTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap
	end

DewfordTown_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_PokemonCenter_1F_EventScript_CantMaxEgg
	goto DewfordTown_PokemonCenter_1F_EventScript_MaximizeAllStats
	end

DewfordTown_PokemonCentre_1F_EventScript_ChooseMon::
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_PokemonCenter_1F_EventScript_CantMaxEgg
	goto DewfordTown_PokemonCenter_1F_EventScript_MaximizeStat
	end

DewfordTown_PokemonCenter_1F_EventScript_MaximizeStat::
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
	waitmessage
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
	switch VAR_RESULT
    case 0, DewfordTown_PokemonCenter_1F_EventScript_MaxHP
    case 1, DewfordTown_PokemonCenter_1F_EventScript_MaxAtk
    case 2, DewfordTown_PokemonCenter_1F_EventScript_MaxDef
    case 3, DewfordTown_PokemonCenter_1F_EventScript_MaxSpAtk
    case 4, DewfordTown_PokemonCenter_1F_EventScript_MaxSpDef
    case 5, DewfordTown_PokemonCenter_1F_EventScript_MaxSpeed
	waitstate
	case MULTI_B_PRESSED, DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	end

DewfordTown_PokemonCenter_1F_EventScript_MaximizeAllStats::
	special MaximizeAllIVs
	playse SE_USE_ITEM
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_GOLD_BOTTLE_CAP
    releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_MaxHP::
	special MaximizeHPIV
	playse SE_USE_ITEM
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_MaxAtk::
	special MaximizeAttackIV
	playse SE_USE_ITEM
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_MaxDef::
	special MaximizeDefenseIV
	playse SE_USE_ITEM
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_MaxSpAtk::
	special MaximizeSpecialAttackIV
	playse SE_USE_ITEM
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_MaxSpDef::
	special MaximizeSpecialDefenseIV
	playse SE_USE_ITEM
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_MaxSpeed::
	special MaximizeSpeedIV
	playse SE_USE_ITEM
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_UseBottleCap::
	waitstate
	playse SE_USE_ITEM
    msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

DewfordTown_PokemonCenter_1F_EventScript_CantMaxEgg::
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
	goto DewfordTown_PokemonCentre_1F_EventScript_ChooseMon
	end

DewfordTown_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
	msgbox DewfordTown_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_PokemonCenter_1F_Text_ImTheStatMaxer::
	.string "Hello, I can maximize one of your\n"
	.string "POKéMON's stats.$"

DewfordTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
	.string "Would you like to maximize a\n"
	.string "POKéMON's stat?$"

DewfordTown_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
	.string "Would you like to maximize all\n"
	.string "your POKéMON's stats?$"

DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
	.string "Which POKéMON's stat would you\n"
	.string "like to maximize?$"

DewfordTown_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
	.string "Which stat would you like to\n"
	.string "maximize?$"

DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Thanks:
	.string "Have a nice day!$"

DewfordTown_PokemonCentre_1F_Text_MaximizeStat_NoCap:
	.string "Please come back with a bottle cap!$"

DewfordTown_PokemonCentre_1F_Text_MaximizeStat_Egg:
	.string "Please choose a valid POKéMON.$"

DewfordTown_PokemonCenter_1F_Text_StoneCavern:
	.string "There's a stone cavern at the edge\n"
	.string "of town.\p"
	.string "I've heard you can find rare stones\n"
	.string "there.$"

DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
	.string "Even if a POKéMON faints and can't\n"
	.string "battle, it can still use a move learned\l"
	.string "from a HIDDEN MACHINE (HM).$"

DewfordTown_PokemonCenter_1F_Text_AlolaGifts:
	.string "Burp!\p"
	.string "Sorry. Uh.\p"
	.string "You look responsible. I got these\n"
	.string "stowaways on my ship. Take one.$"

DewfordTown_PokemonCenter_1F_Text_AlolaGiftsCancel:
	.string "Come on, help me out here!$"

DewfordTown_PokemonCenter_1F_Text_AlolaGiftThanks:
	.string "You've done me a big favor.$"

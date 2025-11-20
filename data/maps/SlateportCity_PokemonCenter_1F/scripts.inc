SlateportCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

SlateportCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_Sailor::
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_Woman::
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGifts::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GALAR_GIFT, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGiven
	msgbox SlateportCity_PokemonCenter_1F_Text_GalarGifts, MSGBOX_DEFAULT
	multichoicedefault 20, 8, MULTI_GALAR_STARTER, 1, FALSE
	switch VAR_RESULT
	case 0, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGrookey
	case 1, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftScorbunny
	case 2, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftSobble
	case MULTI_B_PRESSED, SlateportCity_PokemonCenter_1F_Text_GalarGiftsCancel
	closemessage
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGiven::
	msgbox SlateportCity_PokemonCenter_1F_Text_GalarGiftCheersLove, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGrookey::
	givemon SPECIES_GROOKEY, 5
	setflag FLAG_RECEIVED_GALAR_GIFT
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGiftScorbunny::
	givemon SPECIES_SCORBUNNY, 5
	setflag FLAG_RECEIVED_GALAR_GIFT
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGiftSobble::
	givemon SPECIES_SOBBLE, 5
	setflag FLAG_RECEIVED_GALAR_GIFT
	release
	end

SlateportCityPokemonCenter_1F_EventScript_StatMaxer::
	lockall
	applymovement LOCALID_SLATEPORT_STAT_MAXER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, SlateportCity_PokemonCenter_1F_EventScript_AskStatMax
	msgbox SlateportCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	checkitem ITEM_GOLD_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonCenter_1F_EventScript_AskStatMax
	goto SlateportCity_PokemonCenter_1F_EventScript_AskAllStatMax
	end

SlateportCity_PokemonCenter_1F_EventScript_AskStatMax::
	checkitem ITEM_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	msgbox SlateportCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	goto SlateportCity_PokemonCentre_1F_EventScript_ChooseMon
	end

SlateportCity_PokemonCenter_1F_EventScript_AskAllStatMax::
	msgbox SlateportCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, SlateportCity_PokemonCenter_1F_EventScript_AskStatMax
	goto SlateportCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
	end

SlateportCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonCenter_1F_EventScript_CantMaxEgg
	goto SlateportCity_PokemonCenter_1F_EventScript_MaximizeAllStats
	end

SlateportCity_PokemonCentre_1F_EventScript_ChooseMon::
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonCenter_1F_EventScript_CantMaxEgg
	goto SlateportCity_PokemonCenter_1F_EventScript_MaximizeStat
	end

SlateportCity_PokemonCenter_1F_EventScript_MaximizeStat::
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
	waitmessage
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
	switch VAR_RESULT
    case 0, SlateportCity_PokemonCenter_1F_EventScript_MaxHP
    case 1, SlateportCity_PokemonCenter_1F_EventScript_MaxAtk
    case 2, SlateportCity_PokemonCenter_1F_EventScript_MaxDef
    case 3, SlateportCity_PokemonCenter_1F_EventScript_MaxSpAtk
    case 4, SlateportCity_PokemonCenter_1F_EventScript_MaxSpDef
    case 5, SlateportCity_PokemonCenter_1F_EventScript_MaxSpeed
	waitstate
	case MULTI_B_PRESSED, SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	end

SlateportCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
	special MaximizeAllIVs
	playse SE_USE_ITEM
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_GOLD_BOTTLE_CAP
    releaseall
	end

SlateportCity_PokemonCenter_1F_EventScript_MaxHP::
	special MaximizeHPIV
	playse SE_USE_ITEM
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

SlateportCity_PokemonCenter_1F_EventScript_MaxAtk::
	special MaximizeAttackIV
	playse SE_USE_ITEM
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

SlateportCity_PokemonCenter_1F_EventScript_MaxDef::
	special MaximizeDefenseIV
	playse SE_USE_ITEM
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

SlateportCity_PokemonCenter_1F_EventScript_MaxSpAtk::
	special MaximizeSpecialAttackIV
	playse SE_USE_ITEM
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

SlateportCity_PokemonCenter_1F_EventScript_MaxSpDef::
	special MaximizeSpecialDefenseIV
	playse SE_USE_ITEM
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

SlateportCity_PokemonCenter_1F_EventScript_MaxSpeed::
	special MaximizeSpeedIV
	playse SE_USE_ITEM
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

SlateportCity_PokemonCenter_1F_EventScript_UseBottleCap::
	waitstate
	playse SE_USE_ITEM
    msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

SlateportCity_PokemonCenter_1F_EventScript_CantMaxEgg::
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
	goto SlateportCity_PokemonCentre_1F_EventScript_ChooseMon
	end

SlateportCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
	msgbox SlateportCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_PokemonCenter_1F_Text_ImTheStatMaxer::
	.string "Hello, I can maximize one of your\n"
	.string "POKéMON's stats.$"

SlateportCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
	.string "Would you like to maximize a\n"
	.string "POKéMON's stat?$"

SlateportCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
	.string "Would you like to maximize all\n"
	.string "your POKéMON's stats?$"

SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
	.string "Which POKéMON's stat would you\n"
	.string "like to maximize?$"

SlateportCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
	.string "Which stat would you like to\n"
	.string "maximize?$"

SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
	.string "Have a nice day!$"

SlateportCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
	.string "Please come back with a bottle cap!$"

SlateportCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
	.string "Please choose a valid POKéMON.$"

SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
	.string "Want a tip for battling?\p"
	.string "I'd say it's raising different kinds\n"
	.string "of POKéMON in a balanced manner.\p"
	.string "It's no good to make just one\n"
	.string "POKéMON strong.\p"
	.string "If it has a type disadvantage,\n"
	.string "it might not stand a chance.$"

SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
	.string "I trade POKéMON with my friends.\p"
	.string "If a traded POKéMON is holding an\n"
	.string "item, it makes me twice as happy!$"

SlateportCity_PokemonCenter_1F_Text_GalarGifts:
	.string "Hey there love.\p"
	.string "Would ya mind lookin' after a\n"
	.string "POKéMON for me? Thanks love.$"

SlateportCity_PokemonCenter_1F_Text_GalarGiftsCancel:
	.string "You'd really be doin' me a solid!.$"

SlateportCity_PokemonCenter_1F_Text_GalarGiftCheersLove:
	.string "Cheers, love.$"

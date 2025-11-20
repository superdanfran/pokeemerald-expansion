RustboroCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

RustboroCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

RustboroCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_KalosGifts::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_KALOS_GIFT, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftGiven
	msgbox RustboroCity_PokemonCenter_1F_Text_KalosGifts, MSGBOX_DEFAULT
	multichoicedefault 20, 8, MULTI_KALOS_STARTER, 1, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftChespin
	case 1, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftFennekin
	case 2, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftFroakie
	case MULTI_B_PRESSED, RustboroCity_PokemonCenter_1F_Text_KalosGiftsCancel
	closemessage
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_KalosGiftGiven::
	msgbox RustboroCity_PokemonCenter_1F_Text_KalosGiftBonneChance, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_KalosGiftChespin::
	givemon SPECIES_CHESPIN, 5
	setflag FLAG_RECEIVED_KALOS_GIFT
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_KalosGiftFennekin::
	givemon SPECIES_FENNEKIN, 5
	setflag FLAG_RECEIVED_KALOS_GIFT
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_KalosGiftFroakie::
	givemon SPECIES_FROAKIE, 5
	setflag FLAG_RECEIVED_KALOS_GIFT
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_Man::
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Boy::
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Girl::
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	end

RustboroCityPokemonCenter_1F_EventScript_StatMaxer::
	lockall
	applymovement LOCALID_RUSTBORO_STAT_MAXER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, RustboroCity_PokemonCenter_1F_EventScript_AskStatMax
	msgbox RustboroCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	checkitem ITEM_GOLD_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_PokemonCenter_1F_EventScript_AskStatMax
	goto RustboroCity_PokemonCenter_1F_EventScript_AskAllStatMax
	end

RustboroCity_PokemonCenter_1F_EventScript_AskStatMax::
	checkitem ITEM_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	msgbox RustboroCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	goto RustboroCity_PokemonCentre_1F_EventScript_ChooseMon
	end

RustboroCity_PokemonCenter_1F_EventScript_AskAllStatMax::
	msgbox RustboroCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, RustboroCity_PokemonCenter_1F_EventScript_AskStatMax
	goto RustboroCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
	end

RustboroCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_PokemonCenter_1F_EventScript_CantMaxEgg
	goto RustboroCity_PokemonCenter_1F_EventScript_MaximizeAllStats
	end

RustboroCity_PokemonCentre_1F_EventScript_ChooseMon::
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_PokemonCenter_1F_EventScript_CantMaxEgg
	goto RustboroCity_PokemonCenter_1F_EventScript_MaximizeStat
	end

RustboroCity_PokemonCenter_1F_EventScript_MaximizeStat::
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
	waitmessage
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
	switch VAR_RESULT
    case 0, RustboroCity_PokemonCenter_1F_EventScript_MaxHP
    case 1, RustboroCity_PokemonCenter_1F_EventScript_MaxAtk
    case 2, RustboroCity_PokemonCenter_1F_EventScript_MaxDef
    case 3, RustboroCity_PokemonCenter_1F_EventScript_MaxSpAtk
    case 4, RustboroCity_PokemonCenter_1F_EventScript_MaxSpDef
    case 5, RustboroCity_PokemonCenter_1F_EventScript_MaxSpeed
	waitstate
	case MULTI_B_PRESSED, RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	end

RustboroCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
	special MaximizeAllIVs
	playse SE_USE_ITEM
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_GOLD_BOTTLE_CAP
    releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_MaxHP::
	special MaximizeHPIV
	playse SE_USE_ITEM
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_MaxAtk::
	special MaximizeAttackIV
	playse SE_USE_ITEM
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_MaxDef::
	special MaximizeDefenseIV
	playse SE_USE_ITEM
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_MaxSpAtk::
	special MaximizeSpecialAttackIV
	playse SE_USE_ITEM
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_MaxSpDef::
	special MaximizeSpecialDefenseIV
	playse SE_USE_ITEM
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_MaxSpeed::
	special MaximizeSpeedIV
	playse SE_USE_ITEM
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_UseBottleCap::
	waitstate
	playse SE_USE_ITEM
    msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

RustboroCity_PokemonCenter_1F_EventScript_CantMaxEgg::
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
	goto RustboroCity_PokemonCentre_1F_EventScript_ChooseMon
	end

RustboroCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
	msgbox RustboroCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_PokemonCenter_1F_Text_ImTheStatMaxer::
	.string "Hello, I can maximize one of your\n"
	.string "POKéMON's stats.$"

RustboroCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
	.string "Would you like to maximize a\n"
	.string "POKéMON's stat?$"

RustboroCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
	.string "Would you like to maximize all\n"
	.string "your POKéMON's stats?$"

RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
	.string "Which POKéMON's stat would you\n"
	.string "like to maximize?$"

RustboroCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
	.string "Which stat would you like to\n"
	.string "maximize?$"

RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
	.string "Have a nice day!$"

RustboroCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
	.string "Please come back with a bottle cap!$"

RustboroCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
	.string "Please choose a valid POKéMON.$"

RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
	.string "My POKéMON has a NAIVE nature, and my\n"
	.string "friend's has a JOLLY nature.\p"
	.string "It's fascinating how POKéMON have\n"
	.string "personalities!$"

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
	.string "Just like people, there are male and\n"
	.string "female POKéMON.\p"
	.string "But no one seems to have any idea how\n"
	.string "they're different.\p"
	.string "I've heard some POKéMON can even\n"
	.string "change genders! Aren't POKéMON amazing?$"

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
	.string "The man next door gave me an HM!\p"
	.string "I used it to teach my POKéMON how to\n"
	.string "CUT down skinny trees.$"

RustboroCity_PokemonCenter_1F_Text_KalosGifts:
	.string "Bonjour! Salut! Allo allo!\p"
	.string "I just got back from the KALOS region\n"
	.string "and I caught these petit cuties!\p"
	.string "Do you want one?.$"

RustboroCity_PokemonCenter_1F_Text_KalosGiftsCancel:
	.string "Ah, that's okay if you need time to choose.$"

RustboroCity_PokemonCenter_1F_Text_KalosGiftBonneChance:
	.string "Bonne chance!.$"

MauvilleCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MauvilleCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
	call Common_EventScript_UpdateBrineyLocation
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
	special SetMauvilleOldManObjEventGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_MAUVILLE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
	end

MauvilleCityPokemonCenter_1F_EventScript_StatMaxer::
	lockall
	applymovement LOCALID_MAUVILLE_STAT_MAXER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, MauvilleCity_PokemonCenter_1F_EventScript_AskStatMax
	msgbox MauvilleCity_PokemonCenter_1F_Text_ImTheStatMaxer, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	checkitem ITEM_GOLD_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_AskStatMax
	goto MauvilleCity_PokemonCenter_1F_EventScript_AskAllStatMax
	end

MauvilleCity_PokemonCenter_1F_EventScript_AskStatMax::
	checkitem ITEM_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	msgbox MauvilleCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	goto MauvilleCity_PokemonCentre_1F_EventScript_ChooseMon
	end

MauvilleCity_PokemonCenter_1F_EventScript_AskAllStatMax::
	msgbox MauvilleCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MauvilleCity_PokemonCenter_1F_EventScript_AskStatMax
	goto MauvilleCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap
	end

MauvilleCity_PokemonCentre_1F_EventScript_ChooseMonGoldCap::
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_CantMaxEgg
	goto MauvilleCity_PokemonCenter_1F_EventScript_MaximizeAllStats
	end

MauvilleCity_PokemonCentre_1F_EventScript_ChooseMon::
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_CantMaxEgg
	goto MauvilleCity_PokemonCenter_1F_EventScript_MaximizeStat
	end

MauvilleCity_PokemonCenter_1F_EventScript_MaximizeStat::
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText, MSGBOX_DEFAULT
	waitmessage
    multichoicedefault 25, 1, MULTI_STAT_TO_MAX, 1, FALSE
	switch VAR_RESULT
    case 0, MauvilleCity_PokemonCenter_1F_EventScript_MaxHP
    case 1, MauvilleCity_PokemonCenter_1F_EventScript_MaxAtk
    case 2, MauvilleCity_PokemonCenter_1F_EventScript_MaxDef
    case 3, MauvilleCity_PokemonCenter_1F_EventScript_MaxSpAtk
    case 4, MauvilleCity_PokemonCenter_1F_EventScript_MaxSpDef
    case 5, MauvilleCity_PokemonCenter_1F_EventScript_MaxSpeed
	waitstate
	case MULTI_B_PRESSED, MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap
	end

MauvilleCity_PokemonCenter_1F_EventScript_MaximizeAllStats::
	special MaximizeAllIVs
	playse SE_USE_ITEM
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_GOLD_BOTTLE_CAP
    releaseall
	end

MauvilleCity_PokemonCenter_1F_EventScript_MaxHP::
	special MaximizeHPIV
	playse SE_USE_ITEM
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

MauvilleCity_PokemonCenter_1F_EventScript_MaxAtk::
	special MaximizeAttackIV
	playse SE_USE_ITEM
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

MauvilleCity_PokemonCenter_1F_EventScript_MaxDef::
	special MaximizeDefenseIV
	playse SE_USE_ITEM
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

MauvilleCity_PokemonCenter_1F_EventScript_MaxSpAtk::
	special MaximizeSpecialAttackIV
	playse SE_USE_ITEM
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

MauvilleCity_PokemonCenter_1F_EventScript_MaxSpDef::
	special MaximizeSpecialDefenseIV
	playse SE_USE_ITEM
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

MauvilleCity_PokemonCenter_1F_EventScript_MaxSpeed::
	special MaximizeSpeedIV
	playse SE_USE_ITEM
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

MauvilleCity_PokemonCenter_1F_EventScript_UseBottleCap::
	waitstate
	playse SE_USE_ITEM
    msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks, MSGBOX_NPC
    removeitem ITEM_BOTTLE_CAP
    releaseall
	end

MauvilleCity_PokemonCenter_1F_EventScript_CantMaxEgg::
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Egg, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCentre_1F_EventScript_ChooseMon
	end

MauvilleCity_PokemonCentre_1F_EventScript_ComeBackWithBottleCap::
	msgbox MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_NoCap, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_PokemonCenter_1F_Text_ImTheStatMaxer::
	.string "Hello, I can maximize one of your\n"
	.string "POKéMON's stats.$"

MauvilleCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeStat::
	.string "Would you like to maximize a\n"
	.string "POKéMON's stat?$"

MauvilleCity_PokemonCentre_1F_Text_WouldYouLikeToMaximizeAllStats::
	.string "Would you like to maximize all\n"
	.string "your POKéMON's stats?$"

MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichMonText:
	.string "Which POKéMON's stat would you\n"
	.string "like to maximize?$"

MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_WhichStatText:
	.string "Which stat would you like to\n"
	.string "maximize?$"

MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Thanks:
	.string "Have a nice day!$"

MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_NoCap:
	.string "Please come back with a bottle cap!$"

MauvilleCity_PokemonCentre_1F_Text_MaximizeStat_Egg:
	.string "Please choose a valid POKéMON.$"

MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
	.string "That man over there, he says weird\n"
	.string "things!\p"
	.string "He's funny in a weird way.\n"
	.string "I doubt I'll forget about him!$"

MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
	.string "When I accessed the RECORD CORNER,\n"
	.string "the data for what's hot in DEWFORD\l"
	.string "got updated.\p"
	.string "Now that bit of data is the same\n"
	.string "as my friend's!$"

MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
	.string "A RECORD CORNER opened upstairs in\n"
	.string "the POKéMON CENTER.\p"
	.string "I don't know what it's about, but it\n"
	.string "sounds fun. I'll go check it out!$"


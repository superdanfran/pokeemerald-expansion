# 1 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
# 4 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition::
# 8 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
# 9 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 10 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
# 11 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 12 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 13 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
# 14 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Common_EventScript_NopReturn
# 15 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_DOOR_GUARD, 4, 2
# 16 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 17 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 19 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 20 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 22 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
# 23 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 24 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
# 28 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
# 29 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
# 30 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 31 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
# 34 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 35 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 36 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 37 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 38 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 39 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
# 40 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 41 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 42 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 43 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 44 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 46 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 47 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 48 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 49 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 50 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 52 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.align 2
# 53 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items::
# 54 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 55 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 56 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 57 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 58 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 59 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 60 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 61 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 62 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 63 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 64 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 65 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 66 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 67 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 68 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 69 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 70 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 71 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 72 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice::
# 73 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Yo!\n"
# 74 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 75 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "At the POKéMON LEAGUE, you will\n"
# 76 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "face the ELITE FOUR all in a row.\p"
# 77 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you lose, you have to start all\n"
# 78 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "over again!\p"
# 79 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "This is it!\n"
# 80 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Go for it!$"
# 81 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 82 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck::
# 83 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "From here on, you face the\n"
# 84 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "ELITE FOUR one by one.\p"
# 85 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you win, a door opens to the\n"
# 86 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "next TRAINER. Good luck!$"
# 87 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 88 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing::
# 89 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I am so sorry, but you've wasted\n"
# 90 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "your time coming here.\p"
# 91 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "LORELEI of the ELITE FOUR is\n"
# 92 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "absent, you see.\p"
# 93 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "As a result, the POKéMON LEAGUE is\n"
# 94 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "closed for the time being.$"
# 95 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 96 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_AgathaWhuppedUs::
# 97 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "AGATHA's GHOST-type POKéMON are\n"
# 98 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "horrifically terrifying in toughness.\p"
# 99 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I took my FIGHTING-type POKéMON\n"
# 100 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "and raised them to the max.\p"
# 101 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I went at AGATHA feeling pretty\n"
# 102 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "confident, but she whupped us.\p"
# 103 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That old lady's also got a really\n"
# 104 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "short fuse, too.\p"
# 105 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It doesn't take anything to get\n"
# 106 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "that scary lady hollering.$"
# 107 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 108 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_LancesCousinGymLeaderFarAway::
# 109 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Maybe becoming an ELITE FOUR\n"
# 110 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "member is in the blood.\p"
# 111 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "From what I've heard, LANCE has\n"
# 112 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "a cousin who's a GYM LEADER\l"
# 113 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "somewhere far away.$"

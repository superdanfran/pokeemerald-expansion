# 1 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_VERMILION_CITY
# 9 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_Man::
# 19 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking, MSGBOX_NPC
# 20 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_Hiker::
# 23 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild, MSGBOX_NPC
# 24 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes, MSGBOX_NPC
# 28 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman::
# 31 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 32 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 33 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_VS_SEEKER, VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker
# 34 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain
# 35 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_VS_SEEKER
# 36 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem ITEM_VS_SEEKER
# 37 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 38 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches
# 39 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 40 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 41 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 42 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker::
# 43 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker
# 44 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 45 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 46 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 47 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild::
# 48 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Even if they are the same level,\n"
# 49 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON can have very different\l"
# 50 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "stats and abilities.\p"
# 51 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "A POKéMON raised by a TRAINER is\n"
# 52 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "stronger than one in the wild.$"
# 53 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 54 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking::
# 55 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "My POKéMON was poisoned!\n"
# 56 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It fainted while we were walking!$"
# 57 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 58 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes::
# 59 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It is true that a higher-level\n"
# 60 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON will be more powerful…\p"
# 61 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But, all POKéMON will have weak\n"
# 62 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "points against specific types.\p"
# 63 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, there appears to be no\n"
# 64 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "universally strong POKéMON.$"
# 65 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 66 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain::
# 67 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The urge to battle with someone\n"
# 68 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "you've tangled with before…\p"
# 69 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you ever had that urge?\n"
# 70 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm sure you have.\p"
# 71 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I wanted to battle certain people\n"
# 72 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "again over and over, too.\p"
# 73 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, I've been giving these away.\n"
# 74 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Please, take one!$"
# 75 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 76 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches::
# 77 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Use that device and you'll find\n"
# 78 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TRAINERS looking for a rematch.\p"
# 79 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You have to charge its battery to\n"
# 80 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "use it, though.$"
# 81 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 82 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker::
# 83 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How do you use the VS SEEKER?\n"
# 84 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's nothing to it.\p"
# 85 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Use it like beep-beep-beep, and\n"
# 86 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TRAINERS around you will notice.\p"
# 87 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If any TRAINER wants a rematch,\n"
# 88 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "it will let you know immediately.\p"
# 89 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Charge its battery and use it\n"
# 90 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "while you're on a road.$"

# 1 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_Port_OnTransition
# 4 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 6 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_OnTransition::
# 7 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	clearflag FLAG_SYS_PC_STORAGE_DISABLED
# 8 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	setflag FLAG_SEVII_DETOUR_FINISHED
# 9 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 10 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 11 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Woman::
# 12 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	lock
# 13 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, ThreeIsland_Port_EventScript_WomanLostelleFound
# 15 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_Port_EventScript_WomanBikersGone
# 16 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_IllCallThePolice
# 17 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
# 18 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 19 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 20 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_WomanLostelleFound::
# 21 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_EverythingTurnedOutForBest
# 22 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
# 23 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 24 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 25 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_WomanBikersGone::
# 26 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_ThankGoodnessBikersGone
# 27 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
# 28 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 29 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 30 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Biker1::
# 31 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_WereKantoRiderFederation, MSGBOX_NPC
# 32 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 33 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 34 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Biker2::
# 35 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	lock
# 36 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_ForkOverMoney
# 37 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
# 38 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 39 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 40 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_WereKantoRiderFederation::
# 41 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "We're the KANTO RIDER FEDERATION!\n"
# 42 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Vroom! Vavavavooom! Vroom!\p"
# 43 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "My bike's wimpy, so I have to\n"
# 44 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "make exhaust noises myself!$"
# 45 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 46 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_ForkOverMoney::
# 47 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Hey, hey, lady!\n"
# 48 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Fork over some spending money!$"
# 49 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 50 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_IllCallThePolice::
# 51 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Aiyeeh!\p"
# 52 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Wh-who are you?!\n"
# 53 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "I… I'll call the police!$"
# 54 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 55 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_ThankGoodnessBikersGone::
# 56 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Those BIKERS…\n"
# 57 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Are they gone?\p"
# 58 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Oh, thank goodness!\n"
# 59 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "They certainly had me terrified!$"
# 60 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 61 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_EverythingTurnedOutForBest::
# 62 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Those BIKERS ran off, and\n"
# 63 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "LOSTELLE was found safe.\p"
# 64 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Everything turned out for the best!$"

# 1 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BerryForest_OnTransition
# 4 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 6 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_OnTransition::
# 7 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
# 8 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setescapewarp MAP_THREE_ISLAND_BOND_BRIDGE, 12, 6
# 9 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	end
# 10 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 11 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_Lostelle::
# 12 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	lock
# 13 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HelpScaryPokemon
# 15 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	playse SE_PIN
# 16 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_ExclamationMark
# 17 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 18 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, ThreeIsland_BerryForest_Movement_LostelleLookAround
# 19 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 20 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HereItComesAgain
# 21 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitse
# 22 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
# 23 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmoncry
# 24 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setwildbattle SPECIES_HYPNO, 30
# 25 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	dowildbattle
# 26 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_FacePlayer
# 27 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 28 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_ThankYouHaveThis
# 29 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 30 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, ThreeIsland_BerryForest_EventScript_NoRoomForBerry
# 31 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 32 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_LetsGoHome
# 33 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	closemessage
# 34 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setflag FLAG_RESCUED_LOSTELLE
# 35 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setflag FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
# 36 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
# 37 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 38 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	warp MAP_TWO_ISLAND_JOYFUL_GAME_CORNER, 6, 6
# 39 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitstate
# 40 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	release
# 41 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	end
# 42 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 43 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoRoomForBerry::
# 44 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BerryPouchIsFull
# 45 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	return
# 46 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 47 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Movement_LostelleLookAround::
# 48 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	walk_in_place_faster_left
# 49 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	delay_16
# 50 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	walk_in_place_faster_right
# 51 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	delay_8
# 52 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	walk_in_place_faster_left
# 53 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	step_end
# 54 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 55 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_WelcomeSign::
# 56 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
# 57 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	end
# 58 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 59 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_BewareSign::
# 60 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
# 61 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	end
# 62 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 63 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_HelpScaryPokemon::
# 64 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "LOSTELLE: Whimper… Sniff…\n"
# 65 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Oh! Please, help!\p"
# 66 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "A scary POKéMON appeared there\n"
# 67 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "a little while ago.\p"
# 68 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "It kept scaring.\n"
# 69 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "It made LOSTELLE scared.\p"
# 70 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "I'm too scared to move!\n"
# 71 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "But I want to go home…$"
# 72 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 73 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_HereItComesAgain::
# 74 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Oh! Here it comes again!\n"
# 75 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "No! Go away! It's scaring me!\p"
# 76 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Waaaaaaah!\n"
# 77 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "I want my daddy!$"
# 78 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 79 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_ThankYouHaveThis::
# 80 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Ohh! That was so scary!\n"
# 81 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Thank you!\p"
# 82 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "LOSTELLE came to pick some\n"
# 83 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "BERRIES.\p"
# 84 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "You can have this!$"
# 85 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 86 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_LetsGoHome::
# 87 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "What's your name?\p"
# 88 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "LOSTELLE's scared, so can I go\n"
# 89 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "with you to my daddy's house?\p"
# 90 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Okay!\n"
# 91 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Let's go home!$"
# 92 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 93 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_BerryPouchIsFull::
# 94 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Your BERRY POUCH is full.\n"
# 95 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "I guess you don't want this.$"
# 96 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 97 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_WelcomeToBerryForest::
# 98 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Welcome to the BERRY FOREST\p"
# 99 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Be friendly and share BERRIES with\n"
# 100 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "others and POKéMON.$"
# 101 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 102 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons::
# 103 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Beware of wild, BERRY-loving\n"
# 104 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "POKéMON!$"

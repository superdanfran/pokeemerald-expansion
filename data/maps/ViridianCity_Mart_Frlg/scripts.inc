# 1 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ViridianCity_Mart_OnLoad
# 4 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_Mart_OnFrame
# 5 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 7 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_OnLoad::
# 8 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, ViridianCity_Mart_EventScript_HideQuestionnaire
# 9 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 10 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 11 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_HideQuestionnaire::
# 12 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setmetatile 1, 3, METATILE_Mart_CounterMid_Top, 1
# 13 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setmetatile 1, 4, METATILE_Mart_CounterMid_Bottom, 1
# 14 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 15 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 16 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_OnFrame::
# 17 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 0, ViridianCity_Mart_EventScript_ParcelScene
# 18 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte 0
# 19 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 20 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_ParcelScene::
# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	lockall
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 23 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, Common_Movement_WalkInPlaceFasterDown
# 24 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_YouCameFromPallet
# 26 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	closemessage
# 27 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, ViridianCity_Mart_Movement_FacePlayer
# 28 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Mart_Movement_ApproachCounter
# 29 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_TakeThisToProfOak
# 31 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
# 32 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	giveitem_msg ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk, ITEM_OAKS_PARCEL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 33 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 34 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	releaseall
# 35 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 36 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 37 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Movement_ApproachCounter::
# 38 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 39 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 42 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_in_place_faster_left
# 43 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	step_end
# 44 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 45 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Movement_FacePlayer::
# 46 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 47 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 48 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 49 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 50 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_in_place_faster_right
# 51 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	step_end
# 52 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 53 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_Clerk::
# 54 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	lock
# 55 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	faceplayer
# 56 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, ViridianCity_Mart_EventScript_SayHiToOak
# 57 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 58 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmessage
# 59 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	pokemart ViridianCity_Mart_Items
# 60 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 61 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	release
# 62 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 63 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 64 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.align 2
# 65 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Items::
# 66 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 67 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POTION
# 68 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 69 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 70 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 71 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	release
# 72 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 73 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 74 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_SayHiToOak::
# 75 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_SayHiToOakForMe
# 76 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	release
# 77 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 78 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 79 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_Woman::
# 80 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes, MSGBOX_NPC
# 81 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 82 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 83 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_Youngster::
# 84 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_GotToBuySomePotions, MSGBOX_NPC
# 85 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 86 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 87 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_YouCameFromPallet::
# 88 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "Hey!\n"
# 89 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "You came from PALLET TOWN?$"
# 90 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 91 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_TakeThisToProfOak::
# 92 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "You know PROF. OAK, right?\p"
# 93 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "His order came in.\n"
# 94 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "Can I get you to take it to him?$"
# 95 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 96 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk::
# 97 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "{PLAYER} received OAK'S PARCEL\n"
# 98 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "from the POKéMON MART clerk.$"
# 99 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 100 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_SayHiToOakForMe::
# 101 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "Okay, thanks! Please say hi to\n"
# 102 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "PROF. OAK for me, too.$"
# 103 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 104 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes::
# 105 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "This shop does good business in\n"
# 106 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "ANTIDOTES, I've heard.$"
# 107 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 108 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_GotToBuySomePotions::
# 109 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "I've got to buy some POTIONS.\p"
# 110 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "You never know when your POKéMON\n"
# 111 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "will need quick healing.$"

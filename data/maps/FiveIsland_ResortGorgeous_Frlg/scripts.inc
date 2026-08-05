# 1 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
# 4 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_OnFrame
# 5 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 7 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_OnWarp::
# 8 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
# 9 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.2byte 0
# 10 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 11 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth::
# 12 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 13 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	end
# 14 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 15 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_OnFrame::
# 16 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
# 17 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.2byte 0
# 18 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 19 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene::
# 20 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	lockall
# 21 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 22 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
# 23 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	closemessage
# 24 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 25 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitmovement 0
# 26 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	opendoor 39, 8
# 27 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitdooranim
# 28 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
# 29 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	closedoor 39, 8
# 31 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitdooranim
# 32 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	removeobject LOCALID_RESORT_GORGEOUS_SELPHY
# 33 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
# 34 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
# 35 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	releaseall
# 36 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	end
# 37 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 38 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Movement_SelphyEnterHome::
# 39 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	set_invisible
# 41 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	step_end
# 42 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 43 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign::
# 44 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
# 45 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	end
# 46 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 47 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyIntro::
# 48 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "With these hands, I will create\n"
# 49 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "my victory!$"
# 50 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 51 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyDefeat::
# 52 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "The shame of this…\n"
# 53 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm red-faced…$"
# 54 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 55 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyPostBattle::
# 56 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Uh-oh, my paint tubes have\n"
# 57 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "scattered everywhere!$"
# 58 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 59 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaIntro::
# 60 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Excuse me!\n"
# 61 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm trying to paint.\l"
# 62 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Please keep out of my sight!$"
# 63 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 64 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaDefeat::
# 65 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "This loss…\n"
# 66 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I feel like I'm whiting out…$"
# 67 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 68 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaPostBattle::
# 69 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "GILLIAN?\n"
# 70 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Please tilt your head slightly…\l"
# 71 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "There! That's the look I want!$"
# 72 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 73 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaIntro::
# 74 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Hmm…\n"
# 75 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "The angle, it is not quite there…$"
# 76 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 77 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaDefeat::
# 78 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh…\n"
# 79 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "My feelings, they are blue…$"
# 80 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 81 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaPostBattle::
# 82 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "The sky and the sea…\n"
# 83 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "They are so fickle.\p"
# 84 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Their changing expressions make\n"
# 85 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "them difficult to capture.$"
# 86 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 87 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiIntro::
# 88 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I am visiting my friend's retreat,\n"
# 89 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "if you must know.$"
# 90 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 91 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiDefeat::
# 92 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh, my, so strong.$"
# 93 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 94 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiPostBattle::
# 95 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I find it pleasurable to leisurely\n"
# 96 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "battle in the gentle sea breeze.$"
# 97 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 98 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianIntro::
# 99 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm thinking of having a pool\n"
# 100 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "made specially for POKéMON.$"
# 101 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 102 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianDefeat::
# 103 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh, my goodness gracious!$"
# 104 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 105 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianPostBattle::
# 106 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "A pool would be nice, but I must\n"
# 107 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "say, a sun-room may be sublime.$"
# 108 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 109 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinIntro::
# 110 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm a good runner.\n"
# 111 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm really fast!$"
# 112 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 113 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinDefeat::
# 114 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oops!\n"
# 115 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I rushed things!$"
# 116 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 117 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinPostBattle::
# 118 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "When I run with the wind, it feels\n"
# 119 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "like I could fly!$"
# 120 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 121 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyIntro::
# 122 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I say, this marine life here at\n"
# 123 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "this resort agrees with me.$"
# 124 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 125 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyDefeat::
# 126 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "That's a shocker!\n"
# 127 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "You must be joking.$"
# 128 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 129 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyPostBattle::
# 130 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Getting so serious over this…\n"
# 131 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "How nonsensical.$"
# 132 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 133 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow::
# 134 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "SELPHY: Thank you.\p"
# 135 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "You may go now.$"
# 136 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 137 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_SelphysHouse::
# 138 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "SELPHY'S HOUSE$"

# 1 "data/maps/OneIsland_Frlg/scripts.pory"

# 2 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Frlg_MapScripts::
# 3 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
# 4 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_OnFrame
# 5 "data/maps/OneIsland_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/OneIsland_Frlg/scripts.pory"

# 7 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_OnTransition::
# 8 "data/maps/OneIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ONE_ISLAND
# 9 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 10 "data/maps/OneIsland_Frlg/scripts.pory"

# 11 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_OnFrame::
# 12 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2, OneIsland_EventScript_EnterOneIslandFirstTime
# 13 "data/maps/OneIsland_Frlg/scripts.pory"
	.2byte 0
# 14 "data/maps/OneIsland_Frlg/scripts.pory"

# 15 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_EnterOneIslandFirstTime::
# 16 "data/maps/OneIsland_Frlg/scripts.pory"
	lockall
# 17 "data/maps/OneIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerExitHarbor
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 20 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_BillLetsGoSeeCelio
# 21 "data/maps/OneIsland_Frlg/scripts.pory"
	closemessage
# 22 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillWalkToPokeCenter
# 23 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerWalkToPokeCenter
# 24 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/OneIsland_Frlg/scripts.pory"
	opendoor 14, 5
# 26 "data/maps/OneIsland_Frlg/scripts.pory"
	waitdooranim
# 27 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillEnterPokeCenter
# 28 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerEnterPokeCenter
# 29 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/OneIsland_Frlg/scripts.pory"
	closedoor 14, 5
# 31 "data/maps/OneIsland_Frlg/scripts.pory"
	waitdooranim
# 32 "data/maps/OneIsland_Frlg/scripts.pory"
	removeobject LOCALID_ONE_ISLAND_BILL
# 33 "data/maps/OneIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 3
# 34 "data/maps/OneIsland_Frlg/scripts.pory"
	warp MAP_ONE_ISLAND_POKEMON_CENTER_1F, 9, 9
# 35 "data/maps/OneIsland_Frlg/scripts.pory"
	waitstate
# 36 "data/maps/OneIsland_Frlg/scripts.pory"
	releaseall
# 37 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 38 "data/maps/OneIsland_Frlg/scripts.pory"

# 39 "data/maps/OneIsland_Frlg/scripts.pory"
	.macro walk_to_pokecenter
# 40 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 42 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 43 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 44 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_right
# 45 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_right
# 46 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 48 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 49 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 51 "data/maps/OneIsland_Frlg/scripts.pory"
	.endm
# 52 "data/maps/OneIsland_Frlg/scripts.pory"

# 53 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_PlayerWalkToPokeCenter::
# 54 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 55 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_to_pokecenter
# 56 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 57 "data/maps/OneIsland_Frlg/scripts.pory"

# 58 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_PlayerEnterPokeCenter::
# 59 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 60 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 61 "data/maps/OneIsland_Frlg/scripts.pory"
	set_invisible
# 62 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 63 "data/maps/OneIsland_Frlg/scripts.pory"

# 64 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_PlayerExitHarbor::
# 65 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 66 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 67 "data/maps/OneIsland_Frlg/scripts.pory"

# 68 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_BillWalkToPokeCenter::
# 69 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_to_pokecenter
# 70 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 71 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 72 "data/maps/OneIsland_Frlg/scripts.pory"

# 73 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_BillEnterPokeCenter::
# 74 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 75 "data/maps/OneIsland_Frlg/scripts.pory"
	set_invisible
# 76 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 77 "data/maps/OneIsland_Frlg/scripts.pory"

# 78 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldMan::
# 79 "data/maps/OneIsland_Frlg/scripts.pory"
	lock
# 80 "data/maps/OneIsland_Frlg/scripts.pory"
	faceplayer
# 81 "data/maps/OneIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_EventScript_OldManLinkHoenn
# 82 "data/maps/OneIsland_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_EventScript_OldManLinkKanto
# 83 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_LuckyToHaveCelioHere
# 84 "data/maps/OneIsland_Frlg/scripts.pory"
	release
# 85 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 86 "data/maps/OneIsland_Frlg/scripts.pory"

# 87 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldManLinkKanto::
# 88 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithKanto
# 89 "data/maps/OneIsland_Frlg/scripts.pory"
	release
# 90 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 91 "data/maps/OneIsland_Frlg/scripts.pory"

# 92 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldManLinkHoenn::
# 93 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithHoenn
# 94 "data/maps/OneIsland_Frlg/scripts.pory"
	release
# 95 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 96 "data/maps/OneIsland_Frlg/scripts.pory"

# 97 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_BaldingMan::
# 98 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_IsntWarmClimateHereGreat, MSGBOX_NPC
# 99 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 100 "data/maps/OneIsland_Frlg/scripts.pory"

# 101 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_IslandSign::
# 102 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
# 103 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 104 "data/maps/OneIsland_Frlg/scripts.pory"

# 105 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_PokemonNetCenterSign::
# 106 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_PokemonNetCenterSign, MSGBOX_SIGN
# 107 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 108 "data/maps/OneIsland_Frlg/scripts.pory"

# 109 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_BillLetsGoSeeCelio::
# 110 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "BILL: Here we are!\n"
# 111 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "This is ONE ISLAND.\p"
# 112 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "There are several islands around\n"
# 113 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "here, and this is one of them.\p"
# 114 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My friend CELIO sent the boat to\n"
# 115 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "fetch me here.\p"
# 116 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "He's in charge of the island's PC\n"
# 117 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "network by his lonesome.\p"
# 118 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "…Why am I telling you this now?\n"
# 119 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Let's just go see CELIO!$"
# 120 "data/maps/OneIsland_Frlg/scripts.pory"

# 121 "data/maps/OneIsland_Frlg/scripts.pory"
Text_WhereDoYouWantToSail::
# 122 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Ahoy, there!\n"
# 123 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Where do you want to sail?$"
# 124 "data/maps/OneIsland_Frlg/scripts.pory"

# 125 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_LuckyToHaveCelioHere::
# 126 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Here we are on an island smack in\n"
# 127 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "the middle of nowhere.\p"
# 128 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "We're lucky to have an upstanding\n"
# 129 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "young man like CELIO here.\p"
# 130 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My granddaughter was in a tizzy\n"
# 131 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "over CELIO's friend.\p"
# 132 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Something about a famous\n"
# 133 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "POKéMANIAC?\p"
# 134 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "I'm not sure what that means, but\n"
# 135 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "CELIO is quite the man!$"
# 136 "data/maps/OneIsland_Frlg/scripts.pory"

# 137 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_HavePCLinkageWithKanto::
# 138 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My granddaughter was in a tizzy\n"
# 139 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "over a new breakthrough.\p"
# 140 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "She said we now have PC linkage\n"
# 141 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "with people in KANTO.\p"
# 142 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "I'm not sure what that means, but\n"
# 143 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "CELIO is quite the man!$"
# 144 "data/maps/OneIsland_Frlg/scripts.pory"

# 145 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_HavePCLinkageWithHoenn::
# 146 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My granddaughter was in a tizzy\n"
# 147 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "over a new breakthrough.\p"
# 148 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "She said we finally have PC linkage\n"
# 149 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "with people in HOENN.\p"
# 150 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "I'm not sure what that means, but\n"
# 151 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "CELIO is quite the man.\p"
# 152 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "He would make a fine husband for\n"
# 153 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "my granddaughter!$"
# 154 "data/maps/OneIsland_Frlg/scripts.pory"

# 155 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_IslandSign::
# 156 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "ONE ISLAND\n"
# 157 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Friends Gather at Knot Island$"
# 158 "data/maps/OneIsland_Frlg/scripts.pory"

# 159 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_PokemonNetCenterSign::
# 160 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Expanding the POKéMON World!\n"
# 161 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "POKéMON NET CENTER$"
# 162 "data/maps/OneIsland_Frlg/scripts.pory"

# 163 "data/maps/OneIsland_Frlg/scripts.pory"
@ Unused
# 164 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_ReturnToCinnabar::
# 165 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "グレンタウンに　もどりますか？$"
# 166 "data/maps/OneIsland_Frlg/scripts.pory"

# 167 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_IsntWarmClimateHereGreat::
# 168 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Hi, sight-seeing, are you?\n"
# 169 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Isn't the warm climate here great?$"

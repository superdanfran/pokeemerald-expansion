# 1 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonLab_Entrance_OnTransition
# 4 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 6 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_OnTransition::
# 7 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1, CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil
# 8 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 9 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 10 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil::
# 11 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2
# 12 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	return
# 13 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 14 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist::
# 15 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively, MSGBOX_NPC
# 16 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 17 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 18 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto::
# 19 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji, MSGBOX_SIGN
# 20 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 21 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 22 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign::
# 23 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign, MSGBOX_SIGN
# 24 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 25 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 26 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign::
# 27 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign, MSGBOX_SIGN
# 28 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 29 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 30 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign::
# 31 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign, MSGBOX_SIGN
# 32 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 33 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 34 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_PhotoOfBlaineAndFuji::
# 35 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "It's a photo of BLAINE and\n"
# 36 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "MR. FUJI.\p"
# 37 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "They're standing shoulder to\n"
# 38 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "shoulder with big grins.$"
# 39 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 40 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively::
# 41 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "We study POKéMON extensively\n"
# 42 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "every day.\p"
# 43 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "People often bring us rare POKéMON\n"
# 44 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "for examination.$"
# 45 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 46 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji::
# 47 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "A photo of the LAB's founder…\n"
# 48 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "DR. FUJI?!$"
# 49 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 50 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign::
# 51 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
# 52 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "Meeting Room$"
# 53 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 54 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign::
# 55 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
# 56 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "R & D Room$"
# 57 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 58 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign::
# 59 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
# 60 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "Testing Room$"

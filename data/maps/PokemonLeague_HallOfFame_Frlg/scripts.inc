# 1 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_OnFrame
# 4 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_OnWarp
# 5 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 7 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_OnWarp::
# 8 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth
# 9 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.2byte 0
# 10 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 11 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth::
# 12 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 13 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	end
# 14 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 15 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_OnFrame::
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_EnterRoom
# 17 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.2byte 0
# 18 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 19 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_EventScript_EnterRoom::
# 20 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	lockall
# 21 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 22 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_Movement_EnterRoom
# 23 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 24 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterLeft
# 25 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 26 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 18
# 28 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations
# 29 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	closemessage
# 30 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 31 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 20
# 34 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD_FRLG
# 35 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD_FRLG
# 36 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 40
# 37 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 39 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 40 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 41 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	special EnterHallOfFame
# 42 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitstate
# 43 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	releaseall
# 44 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	end
# 45 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 46 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_Movement_EnterRoom::
# 47 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 48 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 49 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 51 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 52 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 53 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 54 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 55 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	step_end
# 56 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 57 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_Text_OakCongratulations::
# 58 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "OAK: Er-hem!\n"
# 59 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "Congratulations, {PLAYER}!\p"
# 60 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "This floor is the POKéMON HALL OF\n"
# 61 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "FAME.\p"
# 62 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "POKéMON LEAGUE CHAMPIONS are\n"
# 63 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "honored for their exploits here.\p"
# 64 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "Their POKéMON are also recorded in\n"
# 65 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "the HALL OF FAME.\p"
# 66 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 67 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "You have worked hard to become\n"
# 68 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "the new LEAGUE CHAMPION.\p"
# 69 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "Congratulations, {PLAYER}, you and\n"
# 70 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "your POKéMON are HALL OF FAMERS!$"

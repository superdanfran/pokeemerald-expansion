# 1 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 2 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Frlg_MapScripts::
# 3 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_Exterior_OnTransition
# 4 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_Exterior_OnFrame
# 5 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 7 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_OnTransition::
# 8 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 9 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_PlayCreditsMusic
# 10 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	end
# 11 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 12 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_PlayCreditsMusic::
# 13 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	playbgm MUS_CREDITS, 0
# 14 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	return
# 15 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 16 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_OnFrame::
# 17 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_Credits
# 18 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	.2byte 0
# 19 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 20 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 21 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
@ After beating the champion, you are warped to the main
# 22 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
@ entrance of Indigo Plateau. This script starts running
# 23 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
@ immediately after your walking animation.
# 24 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
@ The script is timed to the music.
# 25 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits::
# 26 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	lockall
# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 105
# 28 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 29 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	@ Rival exits building. Spawn a dummy object to lock the camera.
# 30 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	opendoor 11, 6
# 31 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 32 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special SpawnCameraObject
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	addobject LOCALID_CREDITS_RIVAL
# 34 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalExitBuilding
# 35 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay
# 36 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 37 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	closedoor 11, 6
# 38 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 39 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 40 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	@ Rival runs off
# 41 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave
# 42 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalLeave
# 43 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 100
# 45 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	@ Oak exits building
# 47 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	opendoor 11, 6
# 48 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 49 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	addobject LOCALID_CREDITS_PROF_OAK
# 50 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakExitBuilding
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 52 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	closedoor 11, 6
# 53 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 54 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 160
# 55 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 56 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	@ Oak looks at player, then walks off
# 57 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave
# 58 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakLeave
# 59 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 100
# 61 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 62 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	@ Player begin to leave
# 63 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerBeginLeave
# 64 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 155
# 66 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerFaceLeague
# 67 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 90
# 69 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 70 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	@ Player runs off
# 71 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerTurnAround
# 72 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerLeave
# 74 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 75 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	@ Reset the map state and roll the credits
# 77 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special RemoveCameraObject
# 78 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 0
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_CREDITS_RIVAL
# 80 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_CREDITS_PROF_OAK
# 81 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special CB2_StartCreditsSequence
# 82 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitstate
# 83 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	releaseall
# 84 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	end
# 85 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 86 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerLeave::
# 87 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 88 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 89 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 90 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 91 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 92 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 93 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 94 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 95 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
@ Unused
# 96 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerExitBuilding::
# 97 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 98 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 99 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 100 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 101 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave::
# 102 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 103 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_4
# 104 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_down
# 105 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 106 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 107 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave::
# 108 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_8
# 109 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_right
# 110 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 111 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 112 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 113 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 114 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 115 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 116 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 117 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 118 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 119 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 120 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 121 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_down
# 122 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 123 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 124 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerBeginLeave::
# 125 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_right
# 126 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 127 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 130 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 131 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 132 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 133 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerTurnAround::
# 134 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_down
# 135 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 136 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 137 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay::
# 138 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	face_right
# 139 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	lock_facing_direction
# 140 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_left
# 141 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	unlock_facing_direction
# 142 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 143 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 144 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerFaceLeague::
# 145 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_up
# 146 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 147 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 148 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalLeave::
# 149 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 150 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 151 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 152 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 153 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 154 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 155 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 156 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 157 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 158 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalExitBuilding::
# 159 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 160 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 161 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 162 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_OakLeave::
# 163 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_left
# 164 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 165 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 166 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 167 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 168 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 169 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 170 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 171 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 172 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 173 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 174 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_down
# 175 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 176 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 177 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 178 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 179 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 180 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 181 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 182 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 183 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 184 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 185 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_OakExitBuilding::
# 186 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 187 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end

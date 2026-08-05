# 1 "data/maps/PewterCity_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
# 4 "data/maps/PewterCity_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/PewterCity_Frlg/scripts.pory"

# 6 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_OnTransition::
# 7 "data/maps/PewterCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 8 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
# 9 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 10 "data/maps/PewterCity_Frlg/scripts.pory"

# 11 "data/maps/PewterCity_Frlg/scripts.pory"
@ Impossible to speak to this NPC from a facing dir != DIR_EAST normally, so they arent checked
# 12 "data/maps/PewterCity_Frlg/scripts.pory"
@ Additionally, no movement script exists for facing DIR_SOUTH, which would necessitate walking out of bounds
# 13 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuide::
# 14 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 15 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 19 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_WalkToGymEast
# 20 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 21 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 22 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 23 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 24 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 25 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 27 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 28 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 29 "data/maps/PewterCity_Frlg/scripts.pory"

# 30 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymEast::
# 31 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 32 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 33 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 35 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 36 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 37 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 38 "data/maps/PewterCity_Frlg/scripts.pory"

# 39 "data/maps/PewterCity_Frlg/scripts.pory"
@ Unused
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymWest::
# 41 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideWest
# 42 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadWest
# 43 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymWest
# 45 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymWest
# 46 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 47 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 48 "data/maps/PewterCity_Frlg/scripts.pory"

# 49 "data/maps/PewterCity_Frlg/scripts.pory"
@ Unused
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymNorth::
# 51 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideNorth
# 52 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadNorth
# 53 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 54 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymNorth
# 55 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymNorth
# 56 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 58 "data/maps/PewterCity_Frlg/scripts.pory"

# 59 "data/maps/PewterCity_Frlg/scripts.pory"
.macro walk_to_gym
# 60 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 66 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 67 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 68 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 69 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 70 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 71 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 77 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 78 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 79 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 80 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 81 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 82 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 83 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 84 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 85 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 86 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 87 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 89 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 90 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 91 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 92 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 93 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 94 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 95 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 96 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 97 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 98 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 99 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 100 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 101 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 102 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 103 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 104 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 105 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 106 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 107 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 108 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 109 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 110 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 111 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 112 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 113 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 114 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 115 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 117 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 118 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 119 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 120 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 121 "data/maps/PewterCity_Frlg/scripts.pory"
.endm
# 122 "data/maps/PewterCity_Frlg/scripts.pory"

# 123 "data/maps/PewterCity_Frlg/scripts.pory"
.macro walk_to_gym_alt
# 124 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 125 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 127 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 128 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 129 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 130 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 131 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 132 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 133 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 134 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 135 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 136 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 137 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 138 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 139 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 140 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 141 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 142 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 143 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 144 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 146 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 147 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 148 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 149 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 150 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 151 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 152 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 153 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 154 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 156 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 162 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 163 "data/maps/PewterCity_Frlg/scripts.pory"
.endm
# 164 "data/maps/PewterCity_Frlg/scripts.pory"

# 165 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast::
# 166 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 167 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 168 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_down
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 171 "data/maps/PewterCity_Frlg/scripts.pory"

# 172 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast::
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 174 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 175 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 176 "data/maps/PewterCity_Frlg/scripts.pory"

# 177 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest::
# 178 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 179 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 180 "data/maps/PewterCity_Frlg/scripts.pory"

# 181 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest::
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 186 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 187 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 188 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 189 "data/maps/PewterCity_Frlg/scripts.pory"

# 190 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth::
# 191 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 192 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 193 "data/maps/PewterCity_Frlg/scripts.pory"

# 194 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth::
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 198 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 199 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 200 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 201 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 202 "data/maps/PewterCity_Frlg/scripts.pory"

# 203 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast::
# 204 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_up
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 209 "data/maps/PewterCity_Frlg/scripts.pory"

# 210 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast::
# 211 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 212 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 213 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 214 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 215 "data/maps/PewterCity_Frlg/scripts.pory"

# 216 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest::
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 219 "data/maps/PewterCity_Frlg/scripts.pory"

# 220 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest::
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 222 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 223 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 224 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 225 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 226 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 227 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 229 "data/maps/PewterCity_Frlg/scripts.pory"

# 230 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth::
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 233 "data/maps/PewterCity_Frlg/scripts.pory"

# 234 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth::
# 235 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 236 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 237 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 238 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 239 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 240 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 241 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 242 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 243 "data/maps/PewterCity_Frlg/scripts.pory"

# 244 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GymGuideExit::
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 248 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 249 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 250 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 251 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 252 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 253 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 254 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 255 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 256 "data/maps/PewterCity_Frlg/scripts.pory"

# 257 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerTop::
# 258 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 259 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 260 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 261 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 262 "data/maps/PewterCity_Frlg/scripts.pory"

# 263 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerMid::
# 264 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 265 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 266 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 267 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 268 "data/maps/PewterCity_Frlg/scripts.pory"

# 269 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerBottom::
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 272 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 274 "data/maps/PewterCity_Frlg/scripts.pory"

# 275 "data/maps/PewterCity_Frlg/scripts.pory"
@ This trigger is inaccessible and its corresponding movement script isnt linked
# 276 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerRight::
# 277 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 278 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 279 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 280 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 281 "data/maps/PewterCity_Frlg/scripts.pory"

# 282 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger::
# 283 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 284 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 285 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 287 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_WalkToGymTop
# 288 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_WalkToGymMid
# 289 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_WalkToGymBottom
# 290 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 291 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 292 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 293 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 294 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 295 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 296 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 297 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 298 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 299 "data/maps/PewterCity_Frlg/scripts.pory"

# 300 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymTop::
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 302 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 303 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 304 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 305 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 306 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 307 "data/maps/PewterCity_Frlg/scripts.pory"

# 308 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymMid::
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 313 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 314 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 315 "data/maps/PewterCity_Frlg/scripts.pory"

# 316 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymBottom::
# 317 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 318 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 319 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 323 "data/maps/PewterCity_Frlg/scripts.pory"

# 324 "data/maps/PewterCity_Frlg/scripts.pory"
@ Unused
# 325 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymRight::
# 326 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideApproachPlayerRight
# 327 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 328 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 329 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 330 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 331 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 332 "data/maps/PewterCity_Frlg/scripts.pory"

# 333 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop::
# 334 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 335 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 336 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 337 "data/maps/PewterCity_Frlg/scripts.pory"

# 338 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid::
# 339 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 340 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 341 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 342 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 343 "data/maps/PewterCity_Frlg/scripts.pory"

# 344 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom::
# 345 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 346 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 347 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 348 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 349 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 350 "data/maps/PewterCity_Frlg/scripts.pory"

# 351 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight::
# 352 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 353 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 354 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 355 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 356 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 357 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 358 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 359 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 360 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 361 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 362 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 363 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 364 "data/maps/PewterCity_Frlg/scripts.pory"

# 365 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop::
# 366 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 367 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 368 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_right
# 369 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 370 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 371 "data/maps/PewterCity_Frlg/scripts.pory"

# 372 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid::
# 373 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 374 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 375 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 376 "data/maps/PewterCity_Frlg/scripts.pory"

# 377 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom::
# 378 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 379 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 380 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 381 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 382 "data/maps/PewterCity_Frlg/scripts.pory"

# 383 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight::
# 384 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 385 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 386 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 387 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 388 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 389 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 390 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 391 "data/maps/PewterCity_Frlg/scripts.pory"

# 392 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop::
# 393 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 394 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 395 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 396 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 397 "data/maps/PewterCity_Frlg/scripts.pory"

# 398 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid::
# 399 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 400 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 401 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 402 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 403 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 404 "data/maps/PewterCity_Frlg/scripts.pory"

# 405 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom::
# 406 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 407 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 408 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 409 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 410 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 411 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 412 "data/maps/PewterCity_Frlg/scripts.pory"

# 413 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight::
# 414 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 415 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 416 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 417 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 418 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 419 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 420 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 421 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 422 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 423 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 424 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 425 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 426 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 427 "data/maps/PewterCity_Frlg/scripts.pory"

# 428 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_Lass::
# 429 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
# 430 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 431 "data/maps/PewterCity_Frlg/scripts.pory"

# 432 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide::
# 433 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 434 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 435 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 436 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_CheckedOutMuseum
# 437 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 438 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 439 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 440 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 441 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PewterCity_EventScript_LeadToMuseumNorth
# 442 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PewterCity_EventScript_LeadToMuseumSouth
# 443 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PewterCity_EventScript_LeadToMuseumWest
# 444 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_LeadToMuseumEast
# 445 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 446 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 447 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 449 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 451 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 452 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 453 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 454 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 455 "data/maps/PewterCity_Frlg/scripts.pory"

# 456 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumNorth::
# 457 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 458 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 459 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 460 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 461 "data/maps/PewterCity_Frlg/scripts.pory"

# 462 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumSouth::
# 463 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 464 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 465 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 466 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 467 "data/maps/PewterCity_Frlg/scripts.pory"

# 468 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumWest::
# 469 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 470 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 471 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 472 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 473 "data/maps/PewterCity_Frlg/scripts.pory"

# 474 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumEast::
# 475 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 476 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 477 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 478 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 479 "data/maps/PewterCity_Frlg/scripts.pory"

# 480 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_CheckedOutMuseum::
# 481 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 482 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 483 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 484 "data/maps/PewterCity_Frlg/scripts.pory"

# 485 "data/maps/PewterCity_Frlg/scripts.pory"
.macro walk_to_museum
# 486 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 487 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 488 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 489 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 490 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 491 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 492 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 493 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 494 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 495 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 496 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 497 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 498 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 499 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 500 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 501 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 502 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 503 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 504 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 505 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 506 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 507 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 508 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 509 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 510 "data/maps/PewterCity_Frlg/scripts.pory"
.endm
# 511 "data/maps/PewterCity_Frlg/scripts.pory"

# 512 "data/maps/PewterCity_Frlg/scripts.pory"
.macro walk_to_museum_south
# 513 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 514 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 515 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 516 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 517 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 518 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 519 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 520 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 521 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 522 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 523 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 524 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 525 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 526 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 527 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 528 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 529 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 530 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 531 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 532 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 533 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 534 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 535 "data/maps/PewterCity_Frlg/scripts.pory"
.endm
# 536 "data/maps/PewterCity_Frlg/scripts.pory"

# 537 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth::
# 538 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 539 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 540 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 541 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 542 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 543 "data/maps/PewterCity_Frlg/scripts.pory"

# 544 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth::
# 545 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 546 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 547 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 548 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 549 "data/maps/PewterCity_Frlg/scripts.pory"

# 550 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth::
# 551 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 552 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 553 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 554 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum_south
# 555 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 556 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 557 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 558 "data/maps/PewterCity_Frlg/scripts.pory"

# 559 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth::
# 560 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 561 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 562 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum_south
# 563 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 564 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 565 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 566 "data/maps/PewterCity_Frlg/scripts.pory"

# 567 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest::
# 568 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 569 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 570 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 571 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 572 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 573 "data/maps/PewterCity_Frlg/scripts.pory"

# 574 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest::
# 575 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 576 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 577 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 578 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 579 "data/maps/PewterCity_Frlg/scripts.pory"

# 580 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast::
# 581 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 582 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 583 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 584 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 585 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 586 "data/maps/PewterCity_Frlg/scripts.pory"

# 587 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast::
# 588 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 589 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 590 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 591 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 592 "data/maps/PewterCity_Frlg/scripts.pory"

# 593 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_MuseumGuideExit::
# 594 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 595 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 596 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 597 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 598 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 599 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 600 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 601 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 602 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 603 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 604 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 605 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 606 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 607 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 608 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 609 "data/maps/PewterCity_Frlg/scripts.pory"

# 610 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_FatMan::
# 611 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 612 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 613 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 2
# 614 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 615 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 616 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 617 "data/maps/PewterCity_Frlg/scripts.pory"

# 618 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_BugCatcher::
# 619 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 620 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 621 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 622 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_KnowWhatTheyreDoing
# 623 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 624 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 625 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 626 "data/maps/PewterCity_Frlg/scripts.pory"

# 627 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_KnowWhatTheyreDoing::
# 628 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 629 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 630 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 631 "data/maps/PewterCity_Frlg/scripts.pory"

# 632 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_TrainerTips::
# 633 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
# 634 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 635 "data/maps/PewterCity_Frlg/scripts.pory"

# 636 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_PoliceNotice::
# 637 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
# 638 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 639 "data/maps/PewterCity_Frlg/scripts.pory"

# 640 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumSign::
# 641 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
# 642 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 643 "data/maps/PewterCity_Frlg/scripts.pory"

# 644 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymSign::
# 645 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 646 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 0
# 647 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 648 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 649 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 650 "data/maps/PewterCity_Frlg/scripts.pory"

# 651 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_CitySign::
# 652 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
# 653 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 654 "data/maps/PewterCity_Frlg/scripts.pory"

# 655 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_RunningShoesAide::
# 656 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 657 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 658 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 659 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 660 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 661 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 662 "data/maps/PewterCity_Frlg/scripts.pory"

# 663 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerTop::
# 664 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 665 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 666 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 667 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 668 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 669 "data/maps/PewterCity_Frlg/scripts.pory"

# 670 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerMid::
# 671 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 672 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 673 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 674 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 675 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 676 "data/maps/PewterCity_Frlg/scripts.pory"

# 677 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 678 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 679 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 680 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 681 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 682 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 683 "data/maps/PewterCity_Frlg/scripts.pory"

# 684 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes::
# 685 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 686 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideNoticePlayer
# 687 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideNoticePlayer
# 688 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideNoticePlayer
# 689 "data/maps/PewterCity_Frlg/scripts.pory"
	waitse
# 690 "data/maps/PewterCity_Frlg/scripts.pory"
	playse SE_PIN
# 691 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_ExclamationMark
# 692 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 693 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_Delay48
# 694 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 695 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 696 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideApproachPlayer0
# 697 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideApproachPlayer1
# 698 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideApproachPlayer2
# 699 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideApproachPlayer3
# 700 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 701 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 702 "data/maps/PewterCity_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 703 "data/maps/PewterCity_Frlg/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 704 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmessage
# 705 "data/maps/PewterCity_Frlg/scripts.pory"
	waitfanfare
# 706 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 707 "data/maps/PewterCity_Frlg/scripts.pory"
	special DisableMsgBoxWalkaway
# 708 "data/maps/PewterCity_Frlg/scripts.pory"
	signmsg
# 709 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 710 "data/maps/PewterCity_Frlg/scripts.pory"
	normalmsg
# 711 "data/maps/PewterCity_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 712 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 713 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 714 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideExit0
# 715 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideExit1
# 716 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideExit2
# 717 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideExit3
# 718 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 30
# 719 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 720 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 721 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 722 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_AIDE
# 723 "data/maps/PewterCity_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 724 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
# 725 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 726 "data/maps/PewterCity_Frlg/scripts.pory"

# 727 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideNoticePlayer::
# 728 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_WalkInPlaceFasterDown
# 729 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 730 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 731 "data/maps/PewterCity_Frlg/scripts.pory"

# 732 "data/maps/PewterCity_Frlg/scripts.pory"
@ Aide already at player
# 733 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideApproachPlayer0::
# 734 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 735 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 20
# 736 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 737 "data/maps/PewterCity_Frlg/scripts.pory"

# 738 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideApproachPlayer1::
# 739 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 740 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 741 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 742 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 743 "data/maps/PewterCity_Frlg/scripts.pory"

# 744 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideApproachPlayer2::
# 745 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 746 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerMid
# 747 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 748 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 749 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 750 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 751 "data/maps/PewterCity_Frlg/scripts.pory"

# 752 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideApproachPlayer3::
# 753 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 754 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerBottom
# 755 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 756 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 757 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 758 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 759 "data/maps/PewterCity_Frlg/scripts.pory"

# 760 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideExit0::
# 761 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit0
# 762 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 763 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 764 "data/maps/PewterCity_Frlg/scripts.pory"

# 765 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideExit1::
# 766 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit1
# 767 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 768 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 769 "data/maps/PewterCity_Frlg/scripts.pory"

# 770 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideExit2::
# 771 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit2
# 772 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 773 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 774 "data/maps/PewterCity_Frlg/scripts.pory"

# 775 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideExit3::
# 776 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit3
# 777 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 778 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 779 "data/maps/PewterCity_Frlg/scripts.pory"

# 780 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid::
# 781 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 782 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 783 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 784 "data/maps/PewterCity_Frlg/scripts.pory"

# 785 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom::
# 786 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 787 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 788 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 789 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 790 "data/maps/PewterCity_Frlg/scripts.pory"

# 791 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit0::
# 792 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 793 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 794 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 795 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 796 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 797 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 798 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 799 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 800 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 801 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 802 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 803 "data/maps/PewterCity_Frlg/scripts.pory"

# 804 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit1::
# 805 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 806 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 807 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 808 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 809 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 810 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 811 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 812 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 813 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 814 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 815 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 816 "data/maps/PewterCity_Frlg/scripts.pory"

# 817 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit2::
# 818 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 819 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 820 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 821 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 822 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 823 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 824 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 825 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 826 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 827 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 828 "data/maps/PewterCity_Frlg/scripts.pory"

# 829 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit3::
# 830 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 831 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 832 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 833 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 834 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 835 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 836 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 837 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 838 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 839 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 840 "data/maps/PewterCity_Frlg/scripts.pory"

# 841 "data/maps/PewterCity_Frlg/scripts.pory"
@ Unused
# 842 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_WalkInPlaceLeft::
# 843 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_left
# 844 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 845 "data/maps/PewterCity_Frlg/scripts.pory"

# 846 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterTeach::
# 847 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Yawn!\n"
# 848 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I must have dozed off in the sun.\p"
# 849 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I had this weird dream about\n"
# 850 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "a DROWZEE eating my dream.\p"
# 851 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "And…\n"
# 852 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I learned how to eat dreams…\p"
# 853 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Oogh, this is too spooky!\p"
# 854 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Let me teach it to a POKéMON so\n"
# 855 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I can forget about it!$"
# 856 "data/maps/PewterCity_Frlg/scripts.pory"

# 857 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterDeclined::
# 858 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…Snore…$"
# 859 "data/maps/PewterCity_Frlg/scripts.pory"

# 860 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterWhichMon::
# 861 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn\n"
# 862 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "DREAM EATER?$"
# 863 "data/maps/PewterCity_Frlg/scripts.pory"

# 864 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterTaught::
# 865 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…ZZZ…\n"
# 866 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I…can't eat…anymore…$"
# 867 "data/maps/PewterCity_Frlg/scripts.pory"

# 868 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ClefairyCameFromMoon::
# 869 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "CLEFAIRY came from the moon.\n"
# 870 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "That's what the rumor is.\p"
# 871 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "They appeared after MOON STONES\n"
# 872 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "fell on MT. MOON.$"
# 873 "data/maps/PewterCity_Frlg/scripts.pory"

# 874 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_BrockOnlySeriousTrainerHere::
# 875 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There aren't many serious POKéMON\n"
# 876 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "TRAINERS here.\p"
# 877 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "They're all like BUG CATCHERS,\n"
# 878 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "you know, just hobbyists.\p"
# 879 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "But PEWTER GYM's BROCK isn't like\n"
# 880 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "that, not one bit.$"
# 881 "data/maps/PewterCity_Frlg/scripts.pory"

# 882 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_DidYouCheckOutMuseum::
# 883 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Did you check out the MUSEUM?$"
# 884 "data/maps/PewterCity_Frlg/scripts.pory"

# 885 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_WerentThoseFossilsAmazing::
# 886 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Weren't those fossils from MT. MOON\n"
# 887 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "amazing?$"
# 888 "data/maps/PewterCity_Frlg/scripts.pory"

# 889 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ReallyYouHaveToGo::
# 890 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Really?\n"
# 891 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You absolutely have to go!$"
# 892 "data/maps/PewterCity_Frlg/scripts.pory"

# 893 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ThisIsTheMuseum::
# 894 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "This is it, the MUSEUM.\p"
# 895 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You have to pay to get in, but it's\n"
# 896 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "worth it. See you around!$"
# 897 "data/maps/PewterCity_Frlg/scripts.pory"

# 898 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_DoYouKnowWhatImDoing::
# 899 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Psssst!\n"
# 900 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Do you know what I'm doing?$"
# 901 "data/maps/PewterCity_Frlg/scripts.pory"

# 902 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ThatsRightItsHardWork::
# 903 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "That's right!\n"
# 904 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "It's hard work!$"
# 905 "data/maps/PewterCity_Frlg/scripts.pory"

# 906 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_SprayingRepelToKeepWildMonsOut::
# 907 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm spraying REPEL to keep wild\n"
# 908 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "POKéMON out of my garden!$"
# 909 "data/maps/PewterCity_Frlg/scripts.pory"

# 910 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_BrocksLookingForChallengersFollowMe::
# 911 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You're a TRAINER, right?\p"
# 912 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "BROCK's looking for new\n"
# 913 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "challengers. Follow me!$"
# 914 "data/maps/PewterCity_Frlg/scripts.pory"

# 915 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_GoTakeOnBrock::
# 916 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "If you have the right stuff,\n"
# 917 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "go take on BROCK!$"
# 918 "data/maps/PewterCity_Frlg/scripts.pory"

# 919 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_TrainerTipsEarningEXP::
# 920 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 921 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "All POKéMON that appear in battle,\n"
# 922 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "however briefly, earn EXP Points.$"
# 923 "data/maps/PewterCity_Frlg/scripts.pory"

# 924 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_CallPoliceIfInfoOnThieves::
# 925 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "NOTICE!\p"
# 926 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Thieves have been stealing POKéMON\n"
# 927 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "fossils from MT. MOON.\p"
# 928 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Please call the PEWTER POLICE if\n"
# 929 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "you have any information.$"
# 930 "data/maps/PewterCity_Frlg/scripts.pory"

# 931 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_MuseumOfScience::
# 932 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER MUSEUM OF SCIENCE$"
# 933 "data/maps/PewterCity_Frlg/scripts.pory"

# 934 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_GymSign::
# 935 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY POKéMON GYM\n"
# 936 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "LEADER: BROCK\l"
# 937 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "The Rock-Solid POKéMON TRAINER!$"
# 938 "data/maps/PewterCity_Frlg/scripts.pory"

# 939 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_CitySign::
# 940 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY\n"
# 941 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "A Stone Gray City$"
# 942 "data/maps/PewterCity_Frlg/scripts.pory"

# 943 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_OhPlayer::
# 944 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!$"
# 945 "data/maps/PewterCity_Frlg/scripts.pory"

# 946 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_AskedToDeliverThis::
# 947 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm glad I caught up to you.\n"
# 948 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm PROF. OAK's AIDE.\p"
# 949 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I've been asked to deliver this,\n"
# 950 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "so here you go.$"
# 951 "data/maps/PewterCity_Frlg/scripts.pory"

# 952 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ReceivedRunningShoesFromAide::
# 953 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{PLAYER} received the\n"
# 954 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "RUNNING SHOES from the AIDE.$"
# 955 "data/maps/PewterCity_Frlg/scripts.pory"

# 956 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_SwitchedShoesWithRunningShoes::
# 957 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 958 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "RUNNING SHOES.$"
# 959 "data/maps/PewterCity_Frlg/scripts.pory"

# 960 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ExplainRunningShoes::
# 961 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Press the B Button to run.\n"
# 962 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "But only where there's room to run!$"
# 963 "data/maps/PewterCity_Frlg/scripts.pory"

# 964 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_MustBeGoingBackToLab::
# 965 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Well, I must be going back to\n"
# 966 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "the LAB.\p"
# 967 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Bye-bye!$"
# 968 "data/maps/PewterCity_Frlg/scripts.pory"

# 969 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_RunningShoesLetterFromMom::
# 970 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There's a letter attached…\p"
# 971 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Dear {PLAYER},\p"
# 972 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Here is a pair of RUNNING SHOES\n"
# 973 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "for my beloved challenger.\p"
# 974 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Remember, I'll always cheer for\n"
# 975 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "you! Don't ever give up!\p"
# 976 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "From Mom$"

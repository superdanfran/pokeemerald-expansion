# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 3 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 4 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 5 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 6 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 7 "data/maps/Route111/scripts.pory"
	.byte 0
# 8 "data/maps/Route111/scripts.pory"

# 9 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 10 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 11 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 12 "data/maps/Route111/scripts.pory"
	end
# 13 "data/maps/Route111/scripts.pory"

# 14 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 15 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 16 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 17 "data/maps/Route111/scripts.pory"
	return
# 18 "data/maps/Route111/scripts.pory"

# 19 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 20 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 21 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 22 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 23 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 25 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 26 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 27 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 28 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 29 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 39 "data/maps/Route111/scripts.pory"
	return
# 40 "data/maps/Route111/scripts.pory"

# 41 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 42 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 43 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 44 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 45 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 46 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 47 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 48 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 49 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 50 "data/maps/Route111/scripts.pory"
	end
# 51 "data/maps/Route111/scripts.pory"

# 52 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 53 "data/maps/Route111/scripts.pory"
	checkplayergender
# 54 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 55 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 56 "data/maps/Route111/scripts.pory"
	return
# 57 "data/maps/Route111/scripts.pory"

# 58 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 59 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 60 "data/maps/Route111/scripts.pory"
	return
# 61 "data/maps/Route111/scripts.pory"

# 62 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 63 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 64 "data/maps/Route111/scripts.pory"
	return
# 65 "data/maps/Route111/scripts.pory"

# 66 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 67 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 68 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 69 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 70 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 71 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 72 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 73 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 74 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 75 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 76 "data/maps/Route111/scripts.pory"
	return
# 77 "data/maps/Route111/scripts.pory"

# 78 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 79 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 80 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 81 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 82 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 83 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 84 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 85 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 86 "data/maps/Route111/scripts.pory"
	end
# 87 "data/maps/Route111/scripts.pory"

# 88 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 89 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 90 "data/maps/Route111/scripts.pory"
	return
# 91 "data/maps/Route111/scripts.pory"

# 92 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 93 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 94 "data/maps/Route111/scripts.pory"
	return
# 95 "data/maps/Route111/scripts.pory"

# 96 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 97 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 98 "data/maps/Route111/scripts.pory"
	.2byte 0
# 99 "data/maps/Route111/scripts.pory"

# 100 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 101 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 102 "data/maps/Route111/scripts.pory"
	end
# 103 "data/maps/Route111/scripts.pory"

# 104 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 105 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 106 "data/maps/Route111/scripts.pory"
	.2byte 0
# 107 "data/maps/Route111/scripts.pory"

# 108 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 109 "data/maps/Route111/scripts.pory"
	lockall
# 110 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 111 "data/maps/Route111/scripts.pory"
	delay 24
# 112 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 113 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 114 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 115 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 116 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 117 "data/maps/Route111/scripts.pory"
	delay 16
# 118 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 119 "data/maps/Route111/scripts.pory"
	delay 16
# 120 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 121 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 122 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 123 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 124 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 125 "data/maps/Route111/scripts.pory"
	releaseall
# 126 "data/maps/Route111/scripts.pory"
	end
# 127 "data/maps/Route111/scripts.pory"

# 128 "data/maps/Route111/scripts.pory"
@ Unused
# 129 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 130 "data/maps/Route111/scripts.pory"
	lock_anim
# 131 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 132 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 133 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 134 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 136 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 137 "data/maps/Route111/scripts.pory"
	step_end
# 138 "data/maps/Route111/scripts.pory"

# 139 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 140 "data/maps/Route111/scripts.pory"
	lock
# 141 "data/maps/Route111/scripts.pory"
	faceplayer
# 142 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 143 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 144 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 145 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 146 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 147 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 148 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 149 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 150 "data/maps/Route111/scripts.pory"
	release
# 151 "data/maps/Route111/scripts.pory"
	end
# 152 "data/maps/Route111/scripts.pory"

# 153 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 154 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 155 "data/maps/Route111/scripts.pory"
	release
# 156 "data/maps/Route111/scripts.pory"
	end
# 157 "data/maps/Route111/scripts.pory"

# 158 "data/maps/Route111/scripts.pory"
@ Unused
# 159 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 160 "data/maps/Route111/scripts.pory"
	lockall
# 161 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 162 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 163 "data/maps/Route111/scripts.pory"
	end
# 164 "data/maps/Route111/scripts.pory"

# 165 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 166 "data/maps/Route111/scripts.pory"
	lockall
# 167 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 168 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 169 "data/maps/Route111/scripts.pory"
	end
# 170 "data/maps/Route111/scripts.pory"

# 171 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 172 "data/maps/Route111/scripts.pory"
	lockall
# 173 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 174 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 175 "data/maps/Route111/scripts.pory"
	end
# 176 "data/maps/Route111/scripts.pory"

# 177 "data/maps/Route111/scripts.pory"
@ Unused
# 178 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 179 "data/maps/Route111/scripts.pory"
	lockall
# 180 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 181 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 182 "data/maps/Route111/scripts.pory"
	end
# 183 "data/maps/Route111/scripts.pory"

# 184 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 185 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 186 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 187 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 188 "data/maps/Route111/scripts.pory"
	releaseall
# 189 "data/maps/Route111/scripts.pory"
	end
# 190 "data/maps/Route111/scripts.pory"

# 191 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 192 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 193 "data/maps/Route111/scripts.pory"
	closemessage
# 194 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 195 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 196 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 197 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 198 "data/maps/Route111/scripts.pory"
	releaseall
# 199 "data/maps/Route111/scripts.pory"
	end
# 200 "data/maps/Route111/scripts.pory"

# 201 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 202 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushUpFromRoute
# 203 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route111/scripts.pory"
	return
# 205 "data/maps/Route111/scripts.pory"

# 206 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 207 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushDownFromRoute
# 208 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route111/scripts.pory"
	return
# 210 "data/maps/Route111/scripts.pory"

# 211 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 212 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushLeftFromRoute
# 213 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route111/scripts.pory"
	return
# 215 "data/maps/Route111/scripts.pory"

# 216 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 217 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushRightFromRoute
# 218 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 219 "data/maps/Route111/scripts.pory"
	return
# 220 "data/maps/Route111/scripts.pory"

# 221 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 222 "data/maps/Route111/scripts.pory"
	walk_up
# 223 "data/maps/Route111/scripts.pory"
	step_end
# 224 "data/maps/Route111/scripts.pory"

# 225 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 226 "data/maps/Route111/scripts.pory"
	walk_down
# 227 "data/maps/Route111/scripts.pory"
	step_end
# 228 "data/maps/Route111/scripts.pory"

# 229 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 230 "data/maps/Route111/scripts.pory"
	walk_left
# 231 "data/maps/Route111/scripts.pory"
	step_end
# 232 "data/maps/Route111/scripts.pory"

# 233 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 234 "data/maps/Route111/scripts.pory"
	walk_right
# 235 "data/maps/Route111/scripts.pory"
	step_end
# 236 "data/maps/Route111/scripts.pory"

# 237 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 238 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 239 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 240 "data/maps/Route111/scripts.pory"
	doweather
# 241 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 242 "data/maps/Route111/scripts.pory"
	end
# 243 "data/maps/Route111/scripts.pory"

# 244 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 245 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 246 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 247 "data/maps/Route111/scripts.pory"
	doweather
# 248 "data/maps/Route111/scripts.pory"
	end
# 249 "data/maps/Route111/scripts.pory"

# 250 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 251 "data/maps/Route111/scripts.pory"
	lock
# 252 "data/maps/Route111/scripts.pory"
	faceplayer
# 253 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 254 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 255 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 256 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 257 "data/maps/Route111/scripts.pory"
	release
# 258 "data/maps/Route111/scripts.pory"
	end
# 259 "data/maps/Route111/scripts.pory"

# 260 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 261 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 262 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 263 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 264 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 266 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 267 "data/maps/Route111/scripts.pory"
	closemessage
# 268 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_Movement_WinstrateEnterHouse
# 269 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 271 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 272 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 273 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 274 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 275 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 276 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateExitHouse
# 277 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 279 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 280 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 281 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 282 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 284 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 285 "data/maps/Route111/scripts.pory"
	closemessage
# 286 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 287 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 289 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 290 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 291 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 293 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 294 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateExitHouse
# 295 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 296 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 297 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 298 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 299 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkInPlaceFasterUp
# 300 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 301 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 302 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 303 "data/maps/Route111/scripts.pory"
	closemessage
# 304 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateEnterHouse
# 305 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 306 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 307 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 308 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 309 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 311 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 312 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateExitHouse
# 313 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 315 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 316 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 317 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 318 "data/maps/Route111/scripts.pory"
	closemessage
# 319 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkInPlaceFasterUp
# 320 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 322 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateEnterHouse
# 323 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 324 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 325 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 326 "data/maps/Route111/scripts.pory"
	release
# 327 "data/maps/Route111/scripts.pory"
	end
# 328 "data/maps/Route111/scripts.pory"

# 329 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 330 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 331 "data/maps/Route111/scripts.pory"
	waitdooranim
# 332 "data/maps/Route111/scripts.pory"
	return
# 333 "data/maps/Route111/scripts.pory"

# 334 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 335 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 336 "data/maps/Route111/scripts.pory"
	waitdooranim
# 337 "data/maps/Route111/scripts.pory"
	return
# 338 "data/maps/Route111/scripts.pory"

# 339 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 340 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 341 "data/maps/Route111/scripts.pory"
	walk_up
# 342 "data/maps/Route111/scripts.pory"
	step_end
# 343 "data/maps/Route111/scripts.pory"

# 344 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 345 "data/maps/Route111/scripts.pory"
	walk_down
# 346 "data/maps/Route111/scripts.pory"
	step_end
# 347 "data/maps/Route111/scripts.pory"

# 348 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 349 "data/maps/Route111/scripts.pory"
	delay_16
# 350 "data/maps/Route111/scripts.pory"
	delay_16
# 351 "data/maps/Route111/scripts.pory"
	delay_16
# 352 "data/maps/Route111/scripts.pory"
	step_end
# 353 "data/maps/Route111/scripts.pory"

# 354 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 355 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 356 "data/maps/Route111/scripts.pory"
	end
# 357 "data/maps/Route111/scripts.pory"

# 358 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 359 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 360 "data/maps/Route111/scripts.pory"
	end
# 361 "data/maps/Route111/scripts.pory"

# 362 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 363 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 364 "data/maps/Route111/scripts.pory"
	end
# 365 "data/maps/Route111/scripts.pory"

# 366 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 367 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 368 "data/maps/Route111/scripts.pory"
	end
# 369 "data/maps/Route111/scripts.pory"

# 370 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 371 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 372 "data/maps/Route111/scripts.pory"
	end
# 373 "data/maps/Route111/scripts.pory"

# 374 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 375 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 376 "data/maps/Route111/scripts.pory"
	end
# 377 "data/maps/Route111/scripts.pory"

# 378 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 379 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 380 "data/maps/Route111/scripts.pory"
	end
# 381 "data/maps/Route111/scripts.pory"

# 382 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 383 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 384 "data/maps/Route111/scripts.pory"
	end
# 385 "data/maps/Route111/scripts.pory"

# 386 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 387 "data/maps/Route111/scripts.pory"
	lock
# 388 "data/maps/Route111/scripts.pory"
	faceplayer
# 389 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 390 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 391 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 392 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 393 "data/maps/Route111/scripts.pory"
	release
# 394 "data/maps/Route111/scripts.pory"
	end
# 395 "data/maps/Route111/scripts.pory"

# 396 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 397 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 398 "data/maps/Route111/scripts.pory"
	release
# 399 "data/maps/Route111/scripts.pory"
	end
# 400 "data/maps/Route111/scripts.pory"

# 401 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 402 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 403 "data/maps/Route111/scripts.pory"
	release
# 404 "data/maps/Route111/scripts.pory"
	end
# 405 "data/maps/Route111/scripts.pory"

# 406 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 407 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 408 "data/maps/Route111/scripts.pory"
	release
# 409 "data/maps/Route111/scripts.pory"
	end
# 410 "data/maps/Route111/scripts.pory"

# 411 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 412 "data/maps/Route111/scripts.pory"
	lockall
# 413 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 414 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 415 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 416 "data/maps/Route111/scripts.pory"
	closemessage
# 417 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 418 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 419 "data/maps/Route111/scripts.pory"
	releaseall
# 420 "data/maps/Route111/scripts.pory"
	end
# 421 "data/maps/Route111/scripts.pory"

# 422 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 423 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 424 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/Route111/scripts.pory"
	end
# 426 "data/maps/Route111/scripts.pory"

# 427 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 428 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 429 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/Route111/scripts.pory"
	end
# 431 "data/maps/Route111/scripts.pory"

# 432 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 433 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 434 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 435 "data/maps/Route111/scripts.pory"
	end
# 436 "data/maps/Route111/scripts.pory"

# 437 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 438 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 439 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 440 "data/maps/Route111/scripts.pory"
	end
# 441 "data/maps/Route111/scripts.pory"

# 442 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 443 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 444 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 445 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 446 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 447 "data/maps/Route111/scripts.pory"
	release
# 448 "data/maps/Route111/scripts.pory"
	end
# 449 "data/maps/Route111/scripts.pory"

# 450 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 451 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 452 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 454 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 455 "data/maps/Route111/scripts.pory"
	release
# 456 "data/maps/Route111/scripts.pory"
	end
# 457 "data/maps/Route111/scripts.pory"

# 458 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 459 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 460 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 461 "data/maps/Route111/scripts.pory"
	end
# 462 "data/maps/Route111/scripts.pory"

# 463 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 464 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 465 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/Route111/scripts.pory"
	end
# 467 "data/maps/Route111/scripts.pory"

# 468 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 469 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 470 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 471 "data/maps/Route111/scripts.pory"
	end
# 472 "data/maps/Route111/scripts.pory"

# 473 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 474 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 475 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 476 "data/maps/Route111/scripts.pory"
	end
# 477 "data/maps/Route111/scripts.pory"

# 478 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 479 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 480 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 481 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 482 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 483 "data/maps/Route111/scripts.pory"
	release
# 484 "data/maps/Route111/scripts.pory"
	end
# 485 "data/maps/Route111/scripts.pory"

# 486 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 487 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 488 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 489 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 490 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 491 "data/maps/Route111/scripts.pory"
	release
# 492 "data/maps/Route111/scripts.pory"
	end
# 493 "data/maps/Route111/scripts.pory"

# 494 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 495 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 496 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 497 "data/maps/Route111/scripts.pory"
	end
# 498 "data/maps/Route111/scripts.pory"

# 499 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 500 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 501 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 502 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 503 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 504 "data/maps/Route111/scripts.pory"
	release
# 505 "data/maps/Route111/scripts.pory"
	end
# 506 "data/maps/Route111/scripts.pory"

# 507 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 508 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 509 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 510 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 511 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 512 "data/maps/Route111/scripts.pory"
	release
# 513 "data/maps/Route111/scripts.pory"
	end
# 514 "data/maps/Route111/scripts.pory"

# 515 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 516 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 517 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 518 "data/maps/Route111/scripts.pory"
	end
# 519 "data/maps/Route111/scripts.pory"

# 520 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 521 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 522 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 523 "data/maps/Route111/scripts.pory"
	end
# 524 "data/maps/Route111/scripts.pory"

# 525 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 526 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 527 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 528 "data/maps/Route111/scripts.pory"
	end
# 529 "data/maps/Route111/scripts.pory"

# 530 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 531 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 532 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 533 "data/maps/Route111/scripts.pory"
	end
# 534 "data/maps/Route111/scripts.pory"

# 535 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 536 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 537 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/Route111/scripts.pory"
	end
# 539 "data/maps/Route111/scripts.pory"

# 540 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 541 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 542 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/Route111/scripts.pory"
	end
# 544 "data/maps/Route111/scripts.pory"

# 545 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 546 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 547 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Route111/scripts.pory"
	end
# 549 "data/maps/Route111/scripts.pory"

# 550 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 551 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 552 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route111/scripts.pory"
	end
# 554 "data/maps/Route111/scripts.pory"

# 555 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 556 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 557 "data/maps/Route111/scripts.pory"
	end
# 558 "data/maps/Route111/scripts.pory"

# 559 "data/maps/Route111/scripts.pory"
Route111_EventScript_Sidney::
# 560 "data/maps/Route111/scripts.pory"
	lock
# 561 "data/maps/Route111/scripts.pory"
	faceplayer
# 562 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SidneyChallenge
# 563 "data/maps/Route111/scripts.pory"
	release
# 564 "data/maps/Route111/scripts.pory"
	end
# 565 "data/maps/Route111/scripts.pory"

# 566 "data/maps/Route111/scripts.pory"
Route111_EventScript_SidneyChallenge::
# 567 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_SidneyYo, MSGBOX_DEFAULT
# 568 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SidneyBattle
# 569 "data/maps/Route111/scripts.pory"
	release
# 570 "data/maps/Route111/scripts.pory"
	end
# 571 "data/maps/Route111/scripts.pory"

# 572 "data/maps/Route111/scripts.pory"
Route111_EventScript_SidneyBattle::
# 573 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, Route111_Text_SidneyDefeated
# 574 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SidneyDefeated
# 575 "data/maps/Route111/scripts.pory"
	end
# 576 "data/maps/Route111/scripts.pory"

# 577 "data/maps/Route111/scripts.pory"
Route111_EventScript_SidneyDefeated::
# 578 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_SidneyGift, MSGBOX_DEFAULT
# 579 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_SidneyTeraGift
# 580 "data/maps/Route111/scripts.pory"
	delay 30
# 581 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_SidneyGoodLuck, MSGBOX_DEFAULT
# 582 "data/maps/Route111/scripts.pory"
	delay 30
# 583 "data/maps/Route111/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 584 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_SIDNEY
# 585 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_HOUNDOOM
# 586 "data/maps/Route111/scripts.pory"
	setflag FLAG_ROUTE_111_SIDNEY_MET
# 587 "data/maps/Route111/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 588 "data/maps/Route111/scripts.pory"
	release
# 589 "data/maps/Route111/scripts.pory"
	end
# 590 "data/maps/Route111/scripts.pory"

# 591 "data/maps/Route111/scripts.pory"
Route111_EventScript_SidneyTeraGift::
# 592 "data/maps/Route111/scripts.pory"
	giveitem ITEM_DARK_TERA_SHARD
# 593 "data/maps/Route111/scripts.pory"
	waitfanfare
# 594 "data/maps/Route111/scripts.pory"
	return
# 595 "data/maps/Route111/scripts.pory"
	end
# 596 "data/maps/Route111/scripts.pory"

# 597 "data/maps/Route111/scripts.pory"
Route111_EventScript_Houndoom::
# 598 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_Boof, MSGBOX_SIGN
# 599 "data/maps/Route111/scripts.pory"
	end
# 600 "data/maps/Route111/scripts.pory"

# 601 "data/maps/Route111/scripts.pory"
Route111_Text_SidneyYo:
# 602 "data/maps/Route111/scripts.pory"
	.string "Yo. Let me guess, you're a hot shot.\p"
# 603 "data/maps/Route111/scripts.pory"
	.string "Yeah, well. I used to eat hot shots\n"
# 604 "data/maps/Route111/scripts.pory"
	.string "for breakfast in the Elite Four.\p"
# 605 "data/maps/Route111/scripts.pory"
	.string "Yeah, I know. I ain't there anymore,\n"
# 606 "data/maps/Route111/scripts.pory"
	.string "I got crushed defending my spot from\p"
# 607 "data/maps/Route111/scripts.pory"
	.string "another hot shot. You'll meet them,\n"
# 608 "data/maps/Route111/scripts.pory"
	.string "I'm sure.\p"
# 609 "data/maps/Route111/scripts.pory"
	.string "What am I doing here? Eh, well I gotta\n"
# 610 "data/maps/Route111/scripts.pory"
	.string "get my spot back! I'm trainin'!\p"
# 611 "data/maps/Route111/scripts.pory"
	.string "Anyways, I got here and I found a real\n"
# 612 "data/maps/Route111/scripts.pory"
	.string "weird Pokémon hangin' out. Wanna see?$"
# 613 "data/maps/Route111/scripts.pory"

# 614 "data/maps/Route111/scripts.pory"
Route111_Text_SidneyGift:
# 615 "data/maps/Route111/scripts.pory"
	.string "Well, I'm a loser again.\n"
# 616 "data/maps/Route111/scripts.pory"
	.string "Anyways, the new Chairwoman gave\p"
# 617 "data/maps/Route111/scripts.pory"
	.string "me these to hand out. Use this\n"
# 618 "data/maps/Route111/scripts.pory"
	.string "well, yeah?.$"
# 619 "data/maps/Route111/scripts.pory"

# 620 "data/maps/Route111/scripts.pory"
Route111_Text_SidneyGoodLuck:
# 621 "data/maps/Route111/scripts.pory"
	.string "And hey, good luck when you get to\n"
# 622 "data/maps/Route111/scripts.pory"
	.string "the all new Elite Four. There's been/p"
# 623 "data/maps/Route111/scripts.pory"
	.string "some BIG changes.$"
# 624 "data/maps/Route111/scripts.pory"

# 625 "data/maps/Route111/scripts.pory"
Route111_Text_SidneyDefeated:
# 626 "data/maps/Route111/scripts.pory"
	.string "Ah heck. Another loss. Hah!$"
# 627 "data/maps/Route111/scripts.pory"
	end
# 628 "data/maps/Route111/scripts.pory"

# 629 "data/maps/Route111/scripts.pory"
Route111_Text_Boof:
# 630 "data/maps/Route111/scripts.pory"
	.string "BOOF!$"
# 631 "data/maps/Route111/scripts.pory"

# 632 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 633 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 634 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 635 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 636 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 637 "data/maps/Route111/scripts.pory"

# 638 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 639 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 640 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 641 "data/maps/Route111/scripts.pory"

# 642 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 643 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 644 "data/maps/Route111/scripts.pory"

# 645 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 646 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 647 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 648 "data/maps/Route111/scripts.pory"

# 649 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 650 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 651 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 652 "data/maps/Route111/scripts.pory"

# 653 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 654 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 655 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 656 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 657 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 658 "data/maps/Route111/scripts.pory"

# 659 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 660 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 661 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 662 "data/maps/Route111/scripts.pory"

# 663 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 664 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 665 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 666 "data/maps/Route111/scripts.pory"

# 667 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 668 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 669 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 670 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 671 "data/maps/Route111/scripts.pory"

# 672 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 673 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 674 "data/maps/Route111/scripts.pory"

# 675 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 676 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 677 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 678 "data/maps/Route111/scripts.pory"

# 679 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 680 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 681 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 682 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 683 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 684 "data/maps/Route111/scripts.pory"

# 685 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 686 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 687 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 688 "data/maps/Route111/scripts.pory"

# 689 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 690 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 691 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 692 "data/maps/Route111/scripts.pory"

# 693 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 694 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 695 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 696 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 697 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 698 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 699 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 700 "data/maps/Route111/scripts.pory"

# 701 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 702 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 703 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 704 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 705 "data/maps/Route111/scripts.pory"

# 706 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 707 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 708 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 709 "data/maps/Route111/scripts.pory"

# 710 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 711 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 712 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 713 "data/maps/Route111/scripts.pory"

# 714 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 715 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 716 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 717 "data/maps/Route111/scripts.pory"

# 718 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 719 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 720 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 721 "data/maps/Route111/scripts.pory"

# 722 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 723 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 724 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 725 "data/maps/Route111/scripts.pory"

# 726 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 727 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 728 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 729 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 730 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 731 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 732 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 733 "data/maps/Route111/scripts.pory"

# 734 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 735 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 736 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 737 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 738 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 739 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 740 "data/maps/Route111/scripts.pory"

# 741 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 742 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 743 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 744 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 745 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 746 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 747 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 748 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 749 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 750 "data/maps/Route111/scripts.pory"

# 751 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 752 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 753 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 754 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 755 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 756 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 757 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 758 "data/maps/Route111/scripts.pory"

# 759 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 760 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 761 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 762 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 763 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 764 "data/maps/Route111/scripts.pory"

# 765 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 766 "data/maps/Route111/scripts.pory"
	.string "The FOSSILS disappeared into\n"
# 767 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 768 "data/maps/Route111/scripts.pory"

# 769 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 770 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 771 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 772 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 773 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 774 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 775 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 776 "data/maps/Route111/scripts.pory"

# 777 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 778 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 779 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 780 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 3 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 4 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 5 "data/maps/Route103/scripts.pory"
	.byte 0
# 6 "data/maps/Route103/scripts.pory"

# 7 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 8 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 9 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 10 "data/maps/Route103/scripts.pory"
	end
# 11 "data/maps/Route103/scripts.pory"

# 12 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 13 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 14 "data/maps/Route103/scripts.pory"
	end
# 15 "data/maps/Route103/scripts.pory"

# 16 "data/maps/Route103/scripts.pory"
Route103_EventScript_SuperRodFisherman::
# 17 "data/maps/Route103/scripts.pory"
	lock
# 18 "data/maps/Route103/scripts.pory"
	faceplayer
# 19 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, Route103_EventScript_ReceivedSuperRod
# 20 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_YouWantSuperRod, MSGBOX_YESNO
# 21 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route103_EventScript_DeclineSuperRod
# 22 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_SuperRodIsSuper, MSGBOX_DEFAULT
# 23 "data/maps/Route103/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 24 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 25 "data/maps/Route103/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 26 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
# 27 "data/maps/Route103/scripts.pory"
	release
# 28 "data/maps/Route103/scripts.pory"
	end
# 29 "data/maps/Route103/scripts.pory"

# 30 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 31 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 32 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 33 "data/maps/Route103/scripts.pory"
	return
# 34 "data/maps/Route103/scripts.pory"

# 35 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 36 "data/maps/Route103/scripts.pory"
	lockall
# 37 "data/maps/Route103/scripts.pory"
	checkplayergender
# 38 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 39 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 40 "data/maps/Route103/scripts.pory"
	end
# 41 "data/maps/Route103/scripts.pory"

# 42 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 43 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 44 "data/maps/Route103/scripts.pory"
	closemessage
# 45 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 46 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 47 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 49 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 51 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 53 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 54 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 55 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 56 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 57 "data/maps/Route103/scripts.pory"
	end
# 58 "data/maps/Route103/scripts.pory"

# 59 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 60 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 61 "data/maps/Route103/scripts.pory"
	closemessage
# 62 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 63 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 64 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 66 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 68 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 70 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 71 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 72 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 73 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 74 "data/maps/Route103/scripts.pory"
	end
# 75 "data/maps/Route103/scripts.pory"

# 76 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 77 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 78 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 79 "data/maps/Route103/scripts.pory"
	end
# 80 "data/maps/Route103/scripts.pory"

# 81 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 82 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 83 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 84 "data/maps/Route103/scripts.pory"
	end
# 85 "data/maps/Route103/scripts.pory"

# 86 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 87 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 88 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 89 "data/maps/Route103/scripts.pory"
	end
# 90 "data/maps/Route103/scripts.pory"

# 91 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 92 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 93 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 94 "data/maps/Route103/scripts.pory"
	end
# 95 "data/maps/Route103/scripts.pory"

# 96 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 97 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 98 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 99 "data/maps/Route103/scripts.pory"
	end
# 100 "data/maps/Route103/scripts.pory"

# 101 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 102 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 103 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 104 "data/maps/Route103/scripts.pory"
	end
# 105 "data/maps/Route103/scripts.pory"

# 106 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 107 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 108 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 109 "data/maps/Route103/scripts.pory"
	end
# 110 "data/maps/Route103/scripts.pory"

# 111 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 112 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 113 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 114 "data/maps/Route103/scripts.pory"
	end
# 115 "data/maps/Route103/scripts.pory"

# 116 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 117 "data/maps/Route103/scripts.pory"
	closemessage
# 118 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 119 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 120 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 121 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 122 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 123 "data/maps/Route103/scripts.pory"
	end
# 124 "data/maps/Route103/scripts.pory"

# 125 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 126 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 127 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 128 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 130 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 131 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 133 "data/maps/Route103/scripts.pory"
	end
# 134 "data/maps/Route103/scripts.pory"

# 135 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 136 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 137 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 138 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 140 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 141 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 143 "data/maps/Route103/scripts.pory"
	end
# 144 "data/maps/Route103/scripts.pory"

# 145 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 146 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 147 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 149 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 150 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 152 "data/maps/Route103/scripts.pory"
	end
# 153 "data/maps/Route103/scripts.pory"

# 154 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 155 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 156 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 157 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 158 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 159 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 160 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 161 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 162 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 163 "data/maps/Route103/scripts.pory"
	releaseall
# 164 "data/maps/Route103/scripts.pory"
	end
# 165 "data/maps/Route103/scripts.pory"

# 166 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 167 "data/maps/Route103/scripts.pory"
	walk_left
# 168 "data/maps/Route103/scripts.pory"
	walk_down
# 169 "data/maps/Route103/scripts.pory"
	step_end
# 170 "data/maps/Route103/scripts.pory"

# 171 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 172 "data/maps/Route103/scripts.pory"
	jump_2_down
# 173 "data/maps/Route103/scripts.pory"
	delay_16
# 174 "data/maps/Route103/scripts.pory"
	walk_down
# 175 "data/maps/Route103/scripts.pory"
	walk_down
# 176 "data/maps/Route103/scripts.pory"
	walk_down
# 177 "data/maps/Route103/scripts.pory"
	walk_down
# 178 "data/maps/Route103/scripts.pory"
	step_end
# 179 "data/maps/Route103/scripts.pory"

# 180 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 181 "data/maps/Route103/scripts.pory"
	delay_16
# 182 "data/maps/Route103/scripts.pory"
	delay_4
# 183 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 184 "data/maps/Route103/scripts.pory"
	delay_16
# 185 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 186 "data/maps/Route103/scripts.pory"
	step_end
# 187 "data/maps/Route103/scripts.pory"

# 188 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 189 "data/maps/Route103/scripts.pory"
	walk_down
# 190 "data/maps/Route103/scripts.pory"
	step_end
# 191 "data/maps/Route103/scripts.pory"

# 192 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 193 "data/maps/Route103/scripts.pory"
	jump_2_down
# 194 "data/maps/Route103/scripts.pory"
	delay_16
# 195 "data/maps/Route103/scripts.pory"
	walk_down
# 196 "data/maps/Route103/scripts.pory"
	walk_down
# 197 "data/maps/Route103/scripts.pory"
	walk_down
# 198 "data/maps/Route103/scripts.pory"
	step_end
# 199 "data/maps/Route103/scripts.pory"

# 200 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 201 "data/maps/Route103/scripts.pory"
	delay_16
# 202 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 203 "data/maps/Route103/scripts.pory"
	step_end
# 204 "data/maps/Route103/scripts.pory"

# 205 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 206 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 207 "data/maps/Route103/scripts.pory"
	end
# 208 "data/maps/Route103/scripts.pory"

# 209 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 210 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 211 "data/maps/Route103/scripts.pory"
	end
# 212 "data/maps/Route103/scripts.pory"

# 213 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 214 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 215 "data/maps/Route103/scripts.pory"
	end
# 216 "data/maps/Route103/scripts.pory"

# 217 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 218 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 219 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route103/scripts.pory"
	end
# 221 "data/maps/Route103/scripts.pory"

# 222 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 223 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 224 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 225 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 226 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route103/scripts.pory"
	end
# 228 "data/maps/Route103/scripts.pory"

# 229 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 230 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 231 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 232 "data/maps/Route103/scripts.pory"
	release
# 233 "data/maps/Route103/scripts.pory"
	end
# 234 "data/maps/Route103/scripts.pory"

# 235 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 236 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 237 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route103/scripts.pory"
	end
# 239 "data/maps/Route103/scripts.pory"

# 240 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 241 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 242 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 243 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 244 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/Route103/scripts.pory"
	end
# 246 "data/maps/Route103/scripts.pory"

# 247 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 248 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 249 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 250 "data/maps/Route103/scripts.pory"
	release
# 251 "data/maps/Route103/scripts.pory"
	end
# 252 "data/maps/Route103/scripts.pory"

# 253 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 254 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 255 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route103/scripts.pory"
	end
# 257 "data/maps/Route103/scripts.pory"

# 258 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 259 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 260 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Route103/scripts.pory"
	end
# 262 "data/maps/Route103/scripts.pory"

# 263 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 264 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 265 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 266 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 267 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 268 "data/maps/Route103/scripts.pory"
	release
# 269 "data/maps/Route103/scripts.pory"
	end
# 270 "data/maps/Route103/scripts.pory"

# 271 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 272 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 273 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 274 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 275 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 276 "data/maps/Route103/scripts.pory"
	release
# 277 "data/maps/Route103/scripts.pory"
	end
# 278 "data/maps/Route103/scripts.pory"

# 279 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 280 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 281 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route103/scripts.pory"
	end
# 283 "data/maps/Route103/scripts.pory"

# 284 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 285 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 286 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route103/scripts.pory"
	end
# 288 "data/maps/Route103/scripts.pory"

# 289 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 290 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 291 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route103/scripts.pory"
	end
# 293 "data/maps/Route103/scripts.pory"

# 294 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 295 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 296 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route103/scripts.pory"
	end
# 298 "data/maps/Route103/scripts.pory"

# 299 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 300 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 301 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 302 "data/maps/Route103/scripts.pory"
	end
# 303 "data/maps/Route103/scripts.pory"

# 304 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 305 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 306 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 307 "data/maps/Route103/scripts.pory"

# 308 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 309 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 310 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 311 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 312 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 313 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 314 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 315 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 316 "data/maps/Route103/scripts.pory"

# 317 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 318 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 319 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 320 "data/maps/Route103/scripts.pory"

# 321 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 322 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 323 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 324 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 325 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 326 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 327 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 328 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 329 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 330 "data/maps/Route103/scripts.pory"

# 331 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 332 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 333 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 334 "data/maps/Route103/scripts.pory"

# 335 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 336 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 337 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 338 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 339 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 340 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 341 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 342 "data/maps/Route103/scripts.pory"

# 343 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 344 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 345 "data/maps/Route103/scripts.pory"

# 346 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 347 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 348 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 349 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 350 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 351 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 352 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 353 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 354 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 355 "data/maps/Route103/scripts.pory"

# 356 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 357 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 358 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 359 "data/maps/Route103/scripts.pory"

# 360 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 361 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 362 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 363 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 364 "data/maps/Route103/scripts.pory"

# 365 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 366 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 367 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
# 368 "data/maps/Route103/scripts.pory"

# 369 "data/maps/Route103/scripts.pory"

# 370 "data/maps/Route103/scripts.pory"
	Route103_EventScript_ReceivedSuperRod::
# 371 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
# 372 "data/maps/Route103/scripts.pory"
	release
# 373 "data/maps/Route103/scripts.pory"
	end
# 374 "data/maps/Route103/scripts.pory"

# 375 "data/maps/Route103/scripts.pory"
Route103_EventScript_DeclineSuperRod::
# 376 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 377 "data/maps/Route103/scripts.pory"
	release
# 378 "data/maps/Route103/scripts.pory"
	end
# 379 "data/maps/Route103/scripts.pory"

# 380 "data/maps/Route103/scripts.pory"
Route103_Text_YouWantSuperRod:
# 381 "data/maps/Route103/scripts.pory"
	.string "Hey there, TRAINER!\n"
# 382 "data/maps/Route103/scripts.pory"
	.string "A SUPER ROD really is super!\p"
# 383 "data/maps/Route103/scripts.pory"
	.string "Say all you want, but this baby can\n"
# 384 "data/maps/Route103/scripts.pory"
	.string "catch POKéMON off the seafloor!\p"
# 385 "data/maps/Route103/scripts.pory"
	.string "What do you think?\n"
# 386 "data/maps/Route103/scripts.pory"
	.string "You want it, don't you?$"
# 387 "data/maps/Route103/scripts.pory"

# 388 "data/maps/Route103/scripts.pory"
Route103_Text_SuperRodIsSuper:
# 389 "data/maps/Route103/scripts.pory"
	.string "You bet, you bet!\n"
# 390 "data/maps/Route103/scripts.pory"
	.string "After all, a SUPER ROD is really super!$"
# 391 "data/maps/Route103/scripts.pory"

# 392 "data/maps/Route103/scripts.pory"
Route103_Text_TryDroppingRodInWater:
# 393 "data/maps/Route103/scripts.pory"
	.string "If there's any water, try dropping in\n"
# 394 "data/maps/Route103/scripts.pory"
	.string "your ROD and see what bites!$"
# 395 "data/maps/Route103/scripts.pory"

# 396 "data/maps/Route103/scripts.pory"
Route103_Text_DontYouLikeToFish:
# 397 "data/maps/Route103/scripts.pory"
	.string "Hunh?\n"
# 398 "data/maps/Route103/scripts.pory"
	.string "Don't you like to fish?$"
# 399 "data/maps/Route103/scripts.pory"

# 400 "data/maps/Route103/scripts.pory"
Route103_Text_GoAfterSeafloorPokemon:
# 401 "data/maps/Route103/scripts.pory"
	.string "Go after the slippery water-type\n"
# 402 "data/maps/Route103/scripts.pory"
	.string "POKéMON with your SUPER ROD.$"

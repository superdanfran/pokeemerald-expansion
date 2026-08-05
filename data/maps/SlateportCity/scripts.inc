# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 3 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 4 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 5 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity/scripts.pory"

# 7 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 8 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 9 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 10 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 11 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 12 "data/maps/SlateportCity/scripts.pory"
	end
# 13 "data/maps/SlateportCity/scripts.pory"

# 14 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 15 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 16 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 17 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 18 "data/maps/SlateportCity/scripts.pory"
	return
# 19 "data/maps/SlateportCity/scripts.pory"

# 20 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 21 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 22 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 23 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 24 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 25 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 26 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 27 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 28 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 29 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 30 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 31 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 35 "data/maps/SlateportCity/scripts.pory"
	return
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 39 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 40 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 41 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 42 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 43 "data/maps/SlateportCity/scripts.pory"
	return
# 44 "data/maps/SlateportCity/scripts.pory"

# 45 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 48 "data/maps/SlateportCity/scripts.pory"
	return
# 49 "data/maps/SlateportCity/scripts.pory"

# 50 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 51 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 52 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 53 "data/maps/SlateportCity/scripts.pory"

# 54 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 55 "data/maps/SlateportCity/scripts.pory"
	lockall
# 56 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 57 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 58 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 59 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 62 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 65 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 66 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 67 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 69 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 70 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 71 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 72 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 73 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 74 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 75 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 76 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 77 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 78 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 79 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 80 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 82 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 83 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 84 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 85 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 86 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 87 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 88 "data/maps/SlateportCity/scripts.pory"
	end
# 89 "data/maps/SlateportCity/scripts.pory"

# 90 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 91 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 92 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 93 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 94 "data/maps/SlateportCity/scripts.pory"
	step_end
# 95 "data/maps/SlateportCity/scripts.pory"

# 96 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 97 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 98 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 99 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 100 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 101 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 102 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 103 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 104 "data/maps/SlateportCity/scripts.pory"
	step_end
# 105 "data/maps/SlateportCity/scripts.pory"

# 106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 107 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 108 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 109 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 110 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 111 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 112 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 113 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 114 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 115 "data/maps/SlateportCity/scripts.pory"
	step_end
# 116 "data/maps/SlateportCity/scripts.pory"

# 117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 118 "data/maps/SlateportCity/scripts.pory"
	lock
# 119 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 120 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 121 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 122 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 123 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 124 "data/maps/SlateportCity/scripts.pory"
	release
# 125 "data/maps/SlateportCity/scripts.pory"
	end
# 126 "data/maps/SlateportCity/scripts.pory"

# 127 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 129 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 130 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 131 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 132 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 133 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 134 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 135 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 136 "data/maps/SlateportCity/scripts.pory"

# 137 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryBeast::
# 138 "data/maps/SlateportCity/scripts.pory"
	lock
# 139 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 140 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_BerryBeast
# 141 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 142 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, SlateportCity_EventScript_BerryBeast_Basic
# 143 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, SlateportCity_EventScript_BerryBeast_Expanded
# 144 "data/maps/SlateportCity/scripts.pory"
	end
# 145 "data/maps/SlateportCity/scripts.pory"

# 146 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryBeast_Basic::
# 147 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_BerryBeast
# 148 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 149 "data/maps/SlateportCity/scripts.pory"
	release
# 150 "data/maps/SlateportCity/scripts.pory"
	end
# 151 "data/maps/SlateportCity/scripts.pory"

# 152 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 153 "data/maps/SlateportCity/scripts.pory"

# 154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryBeast_Expanded::
# 155 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_BerryBeastExpanded
# 156 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 157 "data/maps/SlateportCity/scripts.pory"
	release
# 158 "data/maps/SlateportCity/scripts.pory"
	end
# 159 "data/maps/SlateportCity/scripts.pory"

# 160 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 161 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_BerryBeast:
# 162 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 163 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 164 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 165 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 166 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 167 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 168 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 169 "data/maps/SlateportCity/scripts.pory"

# 170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_BerryBeastExpanded:
# 171 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 172 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 173 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 174 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 175 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 176 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 177 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 178 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 179 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 180 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 181 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 182 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 183 "data/maps/SlateportCity/scripts.pory"

# 184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 185 "data/maps/SlateportCity/scripts.pory"
	lock
# 186 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 187 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 188 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 189 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 190 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 191 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 192 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 193 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 194 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 196 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 197 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 198 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 199 "data/maps/SlateportCity/scripts.pory"
	release
# 200 "data/maps/SlateportCity/scripts.pory"
	end
# 201 "data/maps/SlateportCity/scripts.pory"

# 202 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 203 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 204 "data/maps/SlateportCity/scripts.pory"
	release
# 205 "data/maps/SlateportCity/scripts.pory"
	end
# 206 "data/maps/SlateportCity/scripts.pory"

# 207 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 208 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 209 "data/maps/SlateportCity/scripts.pory"
	release
# 210 "data/maps/SlateportCity/scripts.pory"
	end
# 211 "data/maps/SlateportCity/scripts.pory"

# 212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 213 "data/maps/SlateportCity/scripts.pory"
	lock
# 214 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 215 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 216 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 217 "data/maps/SlateportCity/scripts.pory"
	release
# 218 "data/maps/SlateportCity/scripts.pory"
	end
# 219 "data/maps/SlateportCity/scripts.pory"

# 220 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 221 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 222 "data/maps/SlateportCity/scripts.pory"
	release
# 223 "data/maps/SlateportCity/scripts.pory"
	end
# 224 "data/maps/SlateportCity/scripts.pory"

# 225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 226 "data/maps/SlateportCity/scripts.pory"
	lock
# 227 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 228 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 229 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity/scripts.pory"
	release
# 231 "data/maps/SlateportCity/scripts.pory"
	end
# 232 "data/maps/SlateportCity/scripts.pory"

# 233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 234 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 235 "data/maps/SlateportCity/scripts.pory"
	release
# 236 "data/maps/SlateportCity/scripts.pory"
	end
# 237 "data/maps/SlateportCity/scripts.pory"

# 238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 239 "data/maps/SlateportCity/scripts.pory"
	lock
# 240 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 241 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 242 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 243 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 244 "data/maps/SlateportCity/scripts.pory"
	release
# 245 "data/maps/SlateportCity/scripts.pory"
	end
# 246 "data/maps/SlateportCity/scripts.pory"

# 247 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 248 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 249 "data/maps/SlateportCity/scripts.pory"
	release
# 250 "data/maps/SlateportCity/scripts.pory"
	end
# 251 "data/maps/SlateportCity/scripts.pory"

# 252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 253 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 254 "data/maps/SlateportCity/scripts.pory"
	release
# 255 "data/maps/SlateportCity/scripts.pory"
	end
# 256 "data/maps/SlateportCity/scripts.pory"

# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 258 "data/maps/SlateportCity/scripts.pory"
	lock
# 259 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 260 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 261 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 262 "data/maps/SlateportCity/scripts.pory"
	release
# 263 "data/maps/SlateportCity/scripts.pory"
	end
# 264 "data/maps/SlateportCity/scripts.pory"

# 265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 266 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 267 "data/maps/SlateportCity/scripts.pory"
	release
# 268 "data/maps/SlateportCity/scripts.pory"
	end
# 269 "data/maps/SlateportCity/scripts.pory"

# 270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 271 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 272 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 273 "data/maps/SlateportCity/scripts.pory"
	end
# 274 "data/maps/SlateportCity/scripts.pory"

# 275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 276 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 277 "data/maps/SlateportCity/scripts.pory"
	end
# 278 "data/maps/SlateportCity/scripts.pory"

# 279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 280 "data/maps/SlateportCity/scripts.pory"
	lock
# 281 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 282 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 283 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 284 "data/maps/SlateportCity/scripts.pory"
	release
# 285 "data/maps/SlateportCity/scripts.pory"
	end
# 286 "data/maps/SlateportCity/scripts.pory"

# 287 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 288 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 289 "data/maps/SlateportCity/scripts.pory"
	release
# 290 "data/maps/SlateportCity/scripts.pory"
	end
# 291 "data/maps/SlateportCity/scripts.pory"

# 292 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 293 "data/maps/SlateportCity/scripts.pory"
	lock
# 294 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 295 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 296 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 297 "data/maps/SlateportCity/scripts.pory"
	release
# 298 "data/maps/SlateportCity/scripts.pory"
	end
# 299 "data/maps/SlateportCity/scripts.pory"

# 300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 301 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 302 "data/maps/SlateportCity/scripts.pory"
	release
# 303 "data/maps/SlateportCity/scripts.pory"
	end
# 304 "data/maps/SlateportCity/scripts.pory"

# 305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 306 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 307 "data/maps/SlateportCity/scripts.pory"
	end
# 308 "data/maps/SlateportCity/scripts.pory"

# 309 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 310 "data/maps/SlateportCity/scripts.pory"
	lockall
# 311 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 312 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 313 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 314 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 315 "data/maps/SlateportCity/scripts.pory"
	end
# 316 "data/maps/SlateportCity/scripts.pory"

# 317 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 318 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 319 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 320 "data/maps/SlateportCity/scripts.pory"
	end
# 321 "data/maps/SlateportCity/scripts.pory"

# 322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 323 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 324 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 325 "data/maps/SlateportCity/scripts.pory"
	end
# 326 "data/maps/SlateportCity/scripts.pory"

# 327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 328 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 332 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 333 "data/maps/SlateportCity/scripts.pory"
	end
# 334 "data/maps/SlateportCity/scripts.pory"

# 335 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 336 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 337 "data/maps/SlateportCity/scripts.pory"
	end
# 338 "data/maps/SlateportCity/scripts.pory"

# 339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 340 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 344 "data/maps/SlateportCity/scripts.pory"
	lockall
# 345 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 346 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 347 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 348 "data/maps/SlateportCity/scripts.pory"
	end
# 349 "data/maps/SlateportCity/scripts.pory"

# 350 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 351 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 352 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 353 "data/maps/SlateportCity/scripts.pory"
	end
# 354 "data/maps/SlateportCity/scripts.pory"

# 355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 356 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 357 "data/maps/SlateportCity/scripts.pory"
	end
# 358 "data/maps/SlateportCity/scripts.pory"

# 359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 360 "data/maps/SlateportCity/scripts.pory"
	lock
# 361 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 362 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 363 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 364 "data/maps/SlateportCity/scripts.pory"
	release
# 365 "data/maps/SlateportCity/scripts.pory"
	end
# 366 "data/maps/SlateportCity/scripts.pory"

# 367 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 369 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 370 "data/maps/SlateportCity/scripts.pory"
	release
# 371 "data/maps/SlateportCity/scripts.pory"
	end
# 372 "data/maps/SlateportCity/scripts.pory"

# 373 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 374 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 375 "data/maps/SlateportCity/scripts.pory"
	end
# 376 "data/maps/SlateportCity/scripts.pory"

# 377 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 378 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 379 "data/maps/SlateportCity/scripts.pory"
	end
# 380 "data/maps/SlateportCity/scripts.pory"

# 381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 382 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 383 "data/maps/SlateportCity/scripts.pory"
	end
# 384 "data/maps/SlateportCity/scripts.pory"

# 385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 386 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 387 "data/maps/SlateportCity/scripts.pory"
	end
# 388 "data/maps/SlateportCity/scripts.pory"

# 389 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 390 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 391 "data/maps/SlateportCity/scripts.pory"
	end
# 392 "data/maps/SlateportCity/scripts.pory"

# 393 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 394 "data/maps/SlateportCity/scripts.pory"
	lock
# 395 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 396 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 397 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 398 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 399 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 400 "data/maps/SlateportCity/scripts.pory"
	release
# 401 "data/maps/SlateportCity/scripts.pory"
	end
# 402 "data/maps/SlateportCity/scripts.pory"

# 403 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 404 "data/maps/SlateportCity/scripts.pory"
	lock
# 405 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 406 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 407 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 408 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 409 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 410 "data/maps/SlateportCity/scripts.pory"
	release
# 411 "data/maps/SlateportCity/scripts.pory"
	end
# 412 "data/maps/SlateportCity/scripts.pory"

# 413 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 414 "data/maps/SlateportCity/scripts.pory"
	lock
# 415 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 416 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 417 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 418 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 419 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 420 "data/maps/SlateportCity/scripts.pory"
	release
# 421 "data/maps/SlateportCity/scripts.pory"
	end
# 422 "data/maps/SlateportCity/scripts.pory"

# 423 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 424 "data/maps/SlateportCity/scripts.pory"
	lock
# 425 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 426 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 427 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 428 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 429 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 430 "data/maps/SlateportCity/scripts.pory"
	release
# 431 "data/maps/SlateportCity/scripts.pory"
	end
# 432 "data/maps/SlateportCity/scripts.pory"

# 433 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 434 "data/maps/SlateportCity/scripts.pory"
	lock
# 435 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 436 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 437 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 438 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 439 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 440 "data/maps/SlateportCity/scripts.pory"
	release
# 441 "data/maps/SlateportCity/scripts.pory"
	end
# 442 "data/maps/SlateportCity/scripts.pory"

# 443 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 444 "data/maps/SlateportCity/scripts.pory"
	lock
# 445 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 446 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 447 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 448 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 449 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 450 "data/maps/SlateportCity/scripts.pory"
	release
# 451 "data/maps/SlateportCity/scripts.pory"
	end
# 452 "data/maps/SlateportCity/scripts.pory"

# 453 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 454 "data/maps/SlateportCity/scripts.pory"
	lock
# 455 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 456 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 457 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 458 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 459 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 460 "data/maps/SlateportCity/scripts.pory"
	release
# 461 "data/maps/SlateportCity/scripts.pory"
	end
# 462 "data/maps/SlateportCity/scripts.pory"

# 463 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 464 "data/maps/SlateportCity/scripts.pory"
	lock
# 465 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 466 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 467 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 468 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 469 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 470 "data/maps/SlateportCity/scripts.pory"
	release
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 474 "data/maps/SlateportCity/scripts.pory"
	lock
# 475 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 476 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 477 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 478 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 479 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 480 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 481 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 482 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 483 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 484 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 485 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 486 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 487 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 488 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 489 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 490 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 491 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 492 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 493 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 494 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 495 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 496 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 497 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 498 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 499 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 500 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 501 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 502 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 503 "data/maps/SlateportCity/scripts.pory"
	release
# 504 "data/maps/SlateportCity/scripts.pory"
	end
# 505 "data/maps/SlateportCity/scripts.pory"

# 506 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 507 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 508 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 509 "data/maps/SlateportCity/scripts.pory"
	step_end
# 510 "data/maps/SlateportCity/scripts.pory"

# 511 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 512 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 513 "data/maps/SlateportCity/scripts.pory"
	end
# 514 "data/maps/SlateportCity/scripts.pory"

# 515 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 516 "data/maps/SlateportCity/scripts.pory"
	lock
# 517 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 518 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 519 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 520 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 521 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 522 "data/maps/SlateportCity/scripts.pory"
	release
# 523 "data/maps/SlateportCity/scripts.pory"
	end
# 524 "data/maps/SlateportCity/scripts.pory"

# 525 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 526 "data/maps/SlateportCity/scripts.pory"
	lock
# 527 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 528 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 529 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 530 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 531 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 532 "data/maps/SlateportCity/scripts.pory"
	release
# 533 "data/maps/SlateportCity/scripts.pory"
	end
# 534 "data/maps/SlateportCity/scripts.pory"

# 535 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 536 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 537 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 538 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 539 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 540 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 541 "data/maps/SlateportCity/scripts.pory"

# 542 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 543 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 544 "data/maps/SlateportCity/scripts.pory"
	release
# 545 "data/maps/SlateportCity/scripts.pory"
	end
# 546 "data/maps/SlateportCity/scripts.pory"

# 547 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 548 "data/maps/SlateportCity/scripts.pory"
	lock
# 549 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 550 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 551 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 552 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 553 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 554 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 555 "data/maps/SlateportCity/scripts.pory"
	release
# 556 "data/maps/SlateportCity/scripts.pory"
	end
# 557 "data/maps/SlateportCity/scripts.pory"

# 558 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 559 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 560 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 561 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 562 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 563 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 564 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 565 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 566 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 567 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 568 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 569 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 570 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 571 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 572 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 573 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 574 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 575 "data/maps/SlateportCity/scripts.pory"

# 576 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 577 "data/maps/SlateportCity/scripts.pory"
	lock
# 578 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 579 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 580 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 581 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 582 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 583 "data/maps/SlateportCity/scripts.pory"
	release
# 584 "data/maps/SlateportCity/scripts.pory"
	end
# 585 "data/maps/SlateportCity/scripts.pory"

# 586 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 587 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 588 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 589 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 590 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 591 "data/maps/SlateportCity/scripts.pory"

# 592 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 593 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 594 "data/maps/SlateportCity/scripts.pory"
	lockall
# 595 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 596 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 597 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 598 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 599 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 600 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 601 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 602 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 604 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 605 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 607 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 608 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 610 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 611 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 612 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 613 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 615 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 616 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 617 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 618 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 620 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 621 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 622 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 624 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 625 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 626 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 627 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 628 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 630 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 632 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 634 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 635 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 636 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 637 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 638 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 640 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 641 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 642 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 643 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 644 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 645 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 646 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 647 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 648 "data/maps/SlateportCity/scripts.pory"
	end
# 649 "data/maps/SlateportCity/scripts.pory"

# 650 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 651 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 652 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 653 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 654 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 655 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 656 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 658 "data/maps/SlateportCity/scripts.pory"
	step_end
# 659 "data/maps/SlateportCity/scripts.pory"

# 660 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 661 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 662 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 663 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 664 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 665 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 666 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 667 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 668 "data/maps/SlateportCity/scripts.pory"
	step_end
# 669 "data/maps/SlateportCity/scripts.pory"

# 670 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 671 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 679 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 680 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 681 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 682 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 683 "data/maps/SlateportCity/scripts.pory"
	step_end
# 684 "data/maps/SlateportCity/scripts.pory"

# 685 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 686 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 688 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 689 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 690 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 691 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 693 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 695 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 696 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 697 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 698 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 699 "data/maps/SlateportCity/scripts.pory"
	step_end
# 700 "data/maps/SlateportCity/scripts.pory"

# 701 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 702 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 704 "data/maps/SlateportCity/scripts.pory"
	step_end
# 705 "data/maps/SlateportCity/scripts.pory"

# 706 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 707 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 708 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 709 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 710 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 711 "data/maps/SlateportCity/scripts.pory"
	step_end
# 712 "data/maps/SlateportCity/scripts.pory"

# 713 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 714 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 715 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 716 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 717 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 718 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 719 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 720 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 721 "data/maps/SlateportCity/scripts.pory"
	step_end
# 722 "data/maps/SlateportCity/scripts.pory"

# 723 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 724 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 725 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 726 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 727 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 728 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 729 "data/maps/SlateportCity/scripts.pory"
	step_end
# 730 "data/maps/SlateportCity/scripts.pory"

# 731 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 732 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 733 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 734 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 735 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 736 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 737 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 738 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 739 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 740 "data/maps/SlateportCity/scripts.pory"
	step_end
# 741 "data/maps/SlateportCity/scripts.pory"

# 742 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 743 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 744 "data/maps/SlateportCity/scripts.pory"
	end
# 745 "data/maps/SlateportCity/scripts.pory"

# 746 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 747 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 748 "data/maps/SlateportCity/scripts.pory"
	end
# 749 "data/maps/SlateportCity/scripts.pory"

# 750 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 751 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 752 "data/maps/SlateportCity/scripts.pory"
	end
# 753 "data/maps/SlateportCity/scripts.pory"

# 754 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 755 "data/maps/SlateportCity/scripts.pory"
	lock
# 756 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 757 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 758 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 759 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 760 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 761 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 762 "data/maps/SlateportCity/scripts.pory"
	release
# 763 "data/maps/SlateportCity/scripts.pory"
	end
# 764 "data/maps/SlateportCity/scripts.pory"

# 765 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 766 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 767 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 768 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 769 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 770 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 771 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 772 "data/maps/SlateportCity/scripts.pory"
	end
# 773 "data/maps/SlateportCity/scripts.pory"

# 774 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 775 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 776 "data/maps/SlateportCity/scripts.pory"
	release
# 777 "data/maps/SlateportCity/scripts.pory"
	end
# 778 "data/maps/SlateportCity/scripts.pory"

# 779 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 780 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 781 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 782 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 783 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 784 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 785 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 786 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 787 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 788 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 789 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 790 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 791 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 792 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 793 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 794 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 795 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 796 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 797 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 798 "data/maps/SlateportCity/scripts.pory"
	end
# 799 "data/maps/SlateportCity/scripts.pory"

# 800 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 801 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 803 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 804 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 805 "data/maps/SlateportCity/scripts.pory"
	end
# 806 "data/maps/SlateportCity/scripts.pory"

# 807 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 808 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 810 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 811 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 812 "data/maps/SlateportCity/scripts.pory"
	end
# 813 "data/maps/SlateportCity/scripts.pory"

# 814 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 815 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 817 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 818 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 819 "data/maps/SlateportCity/scripts.pory"
	end
# 820 "data/maps/SlateportCity/scripts.pory"

# 821 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 822 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 824 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 825 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 826 "data/maps/SlateportCity/scripts.pory"
	end
# 827 "data/maps/SlateportCity/scripts.pory"

# 828 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 829 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 830 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 831 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 832 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 833 "data/maps/SlateportCity/scripts.pory"
	end
# 834 "data/maps/SlateportCity/scripts.pory"

# 835 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 836 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 837 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 838 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 839 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 840 "data/maps/SlateportCity/scripts.pory"
	end
# 841 "data/maps/SlateportCity/scripts.pory"

# 842 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 843 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 844 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 845 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 846 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 847 "data/maps/SlateportCity/scripts.pory"
	end
# 848 "data/maps/SlateportCity/scripts.pory"

# 849 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 850 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 851 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 852 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 853 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 854 "data/maps/SlateportCity/scripts.pory"
	end
# 855 "data/maps/SlateportCity/scripts.pory"

# 856 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 857 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 858 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 859 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 860 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 861 "data/maps/SlateportCity/scripts.pory"
	end
# 862 "data/maps/SlateportCity/scripts.pory"

# 863 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 864 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 865 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 866 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 867 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 868 "data/maps/SlateportCity/scripts.pory"
	end
# 869 "data/maps/SlateportCity/scripts.pory"

# 870 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 871 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 872 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 873 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 874 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 875 "data/maps/SlateportCity/scripts.pory"
	end
# 876 "data/maps/SlateportCity/scripts.pory"

# 877 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 878 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 879 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 880 "data/maps/SlateportCity/scripts.pory"
	release
# 881 "data/maps/SlateportCity/scripts.pory"
	end
# 882 "data/maps/SlateportCity/scripts.pory"

# 883 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 884 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 885 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 886 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 887 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 888 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 889 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 890 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 891 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 892 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 893 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 894 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 895 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 896 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 897 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 898 "data/maps/SlateportCity/scripts.pory"
	release
# 899 "data/maps/SlateportCity/scripts.pory"
	end
# 900 "data/maps/SlateportCity/scripts.pory"

# 901 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 902 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 903 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 904 "data/maps/SlateportCity/scripts.pory"
	release
# 905 "data/maps/SlateportCity/scripts.pory"
	end
# 906 "data/maps/SlateportCity/scripts.pory"

# 907 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 908 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 909 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 910 "data/maps/SlateportCity/scripts.pory"
	end
# 911 "data/maps/SlateportCity/scripts.pory"

# 912 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 913 "data/maps/SlateportCity/scripts.pory"
	lockall
# 914 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 915 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 916 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 917 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 918 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 919 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 920 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 921 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 922 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 923 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 924 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 925 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 926 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 927 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 928 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 929 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 930 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 931 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 932 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 933 "data/maps/SlateportCity/scripts.pory"
	end
# 934 "data/maps/SlateportCity/scripts.pory"

# 935 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 936 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 937 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 938 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 939 "data/maps/SlateportCity/scripts.pory"
	step_end
# 940 "data/maps/SlateportCity/scripts.pory"

# 941 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 942 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 943 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 944 "data/maps/SlateportCity/scripts.pory"
	step_end
# 945 "data/maps/SlateportCity/scripts.pory"

# 946 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 947 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 948 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 949 "data/maps/SlateportCity/scripts.pory"
	step_end
# 950 "data/maps/SlateportCity/scripts.pory"

# 951 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 952 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 953 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 954 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 955 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 956 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 957 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 958 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 959 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 960 "data/maps/SlateportCity/scripts.pory"
	step_end
# 961 "data/maps/SlateportCity/scripts.pory"

# 962 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 963 "data/maps/SlateportCity/scripts.pory"
	lockall
# 964 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 965 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 966 "data/maps/SlateportCity/scripts.pory"
	end
# 967 "data/maps/SlateportCity/scripts.pory"

# 968 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 971 "data/maps/SlateportCity/scripts.pory"

# 972 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BerryBeast:
# 973 "data/maps/SlateportCity/scripts.pory"
	.string "My name's the BERRY BEAST!\n"
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "Check out my sweet goods!$"
# 975 "data/maps/SlateportCity/scripts.pory"

# 976 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 979 "data/maps/SlateportCity/scripts.pory"

# 980 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 984 "data/maps/SlateportCity/scripts.pory"

# 985 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 991 "data/maps/SlateportCity/scripts.pory"

# 992 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 996 "data/maps/SlateportCity/scripts.pory"

# 997 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1000 "data/maps/SlateportCity/scripts.pory"

# 1001 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1003 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1006 "data/maps/SlateportCity/scripts.pory"

# 1007 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1013 "data/maps/SlateportCity/scripts.pory"

# 1014 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1020 "data/maps/SlateportCity/scripts.pory"

# 1021 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1025 "data/maps/SlateportCity/scripts.pory"

# 1026 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1028 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1032 "data/maps/SlateportCity/scripts.pory"

# 1033 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1038 "data/maps/SlateportCity/scripts.pory"

# 1039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1045 "data/maps/SlateportCity/scripts.pory"

# 1046 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1055 "data/maps/SlateportCity/scripts.pory"

# 1056 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1061 "data/maps/SlateportCity/scripts.pory"

# 1062 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1065 "data/maps/SlateportCity/scripts.pory"

# 1066 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1070 "data/maps/SlateportCity/scripts.pory"

# 1071 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1075 "data/maps/SlateportCity/scripts.pory"

# 1076 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1080 "data/maps/SlateportCity/scripts.pory"

# 1081 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1084 "data/maps/SlateportCity/scripts.pory"

# 1085 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1088 "data/maps/SlateportCity/scripts.pory"

# 1089 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1093 "data/maps/SlateportCity/scripts.pory"

# 1094 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1097 "data/maps/SlateportCity/scripts.pory"

# 1098 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1101 "data/maps/SlateportCity/scripts.pory"

# 1102 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1105 "data/maps/SlateportCity/scripts.pory"

# 1106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1118 "data/maps/SlateportCity/scripts.pory"

# 1119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1124 "data/maps/SlateportCity/scripts.pory"

# 1125 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1129 "data/maps/SlateportCity/scripts.pory"

# 1130 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1135 "data/maps/SlateportCity/scripts.pory"

# 1136 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1139 "data/maps/SlateportCity/scripts.pory"

# 1140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1144 "data/maps/SlateportCity/scripts.pory"

# 1145 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1150 "data/maps/SlateportCity/scripts.pory"

# 1151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1158 "data/maps/SlateportCity/scripts.pory"

# 1159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1164 "data/maps/SlateportCity/scripts.pory"

# 1165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1176 "data/maps/SlateportCity/scripts.pory"

# 1177 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1181 "data/maps/SlateportCity/scripts.pory"

# 1182 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1185 "data/maps/SlateportCity/scripts.pory"

# 1186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1193 "data/maps/SlateportCity/scripts.pory"

# 1194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1197 "data/maps/SlateportCity/scripts.pory"

# 1198 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1201 "data/maps/SlateportCity/scripts.pory"

# 1202 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1208 "data/maps/SlateportCity/scripts.pory"

# 1209 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1213 "data/maps/SlateportCity/scripts.pory"

# 1214 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1223 "data/maps/SlateportCity/scripts.pory"

# 1224 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1234 "data/maps/SlateportCity/scripts.pory"

# 1235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1240 "data/maps/SlateportCity/scripts.pory"

# 1241 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1245 "data/maps/SlateportCity/scripts.pory"

# 1246 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1253 "data/maps/SlateportCity/scripts.pory"

# 1254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1258 "data/maps/SlateportCity/scripts.pory"

# 1259 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1264 "data/maps/SlateportCity/scripts.pory"

# 1265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1270 "data/maps/SlateportCity/scripts.pory"

# 1271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1274 "data/maps/SlateportCity/scripts.pory"

# 1275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1279 "data/maps/SlateportCity/scripts.pory"

# 1280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1284 "data/maps/SlateportCity/scripts.pory"

# 1285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1288 "data/maps/SlateportCity/scripts.pory"

# 1289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1300 "data/maps/SlateportCity/scripts.pory"

# 1301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1304 "data/maps/SlateportCity/scripts.pory"

# 1305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1319 "data/maps/SlateportCity/scripts.pory"

# 1320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1330 "data/maps/SlateportCity/scripts.pory"

# 1331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1334 "data/maps/SlateportCity/scripts.pory"

# 1335 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1338 "data/maps/SlateportCity/scripts.pory"

# 1339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1342 "data/maps/SlateportCity/scripts.pory"

# 1343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1346 "data/maps/SlateportCity/scripts.pory"

# 1347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1352 "data/maps/SlateportCity/scripts.pory"

# 1353 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1356 "data/maps/SlateportCity/scripts.pory"

# 1357 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1362 "data/maps/SlateportCity/scripts.pory"

# 1363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1371 "data/maps/SlateportCity/scripts.pory"

# 1372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1375 "data/maps/SlateportCity/scripts.pory"

# 1376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1382 "data/maps/SlateportCity/scripts.pory"

# 1383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1386 "data/maps/SlateportCity/scripts.pory"

# 1387 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1394 "data/maps/SlateportCity/scripts.pory"

# 1395 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1399 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1400 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

# 1 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
# 4 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_OnLoad::
# 7 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_11F_DOOR, EventScript_Close11FDoor
# 8 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 9 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 10 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President::
# 11 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lock
# 12 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_AlreadyGotMasterBall
# 14 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	checkplayergender
# 15 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SilphCo_11F_EventScript_PresidentThanksMale
# 16 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SilphCo_11F_EventScript_PresidentThanksFemale
# 17 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 18 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SilphCo_11F_EventScript_NoRoomForMasterBall
# 19 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 20 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 21 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 22 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
# 23 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 24 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 25 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksMale::
# 26 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
# 27 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	return
# 28 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 29 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksFemale::
# 30 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
# 31 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	return
# 32 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 33 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_NoRoomForMasterBall::
# 34 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 35 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
# 36 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 37 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 38 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 39 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 40 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
# 41 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 42 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 43 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_Secretary::
# 44 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
# 45 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 46 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 47 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 48 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lockall
# 49 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 50 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 51 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 52 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 53 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerRight::
# 54 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lockall
# 55 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 56 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 57 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 58 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 59 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni::
# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 62 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay 25
# 64 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 65 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	closemessage
# 66 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_11F_EventScript_GiovanniApproachLeft
# 67 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_11F_EventScript_GiovanniApproachRight
# 68 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_GIOVANNI
# 69 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 70 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 71 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	closemessage
# 72 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_GIOVANNI
# 74 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT1
# 75 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT2
# 76 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 77 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 78 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 79 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 80 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	releaseall
# 81 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 82 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 83 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachLeft::
# 84 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 85 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 86 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 87 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	return
# 88 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 89 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachRight::
# 90 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 91 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	return
# 93 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 94 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft::
# 95 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 96 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 97 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 98 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 99 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_in_place_faster_left
# 100 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end
# 101 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 102 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight::
# 103 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 104 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 105 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 106 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end
# 107 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 108 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni::
# 109 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 110 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 111 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 112 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_8
# 113 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_4
# 114 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 115 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end
# 116 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 117 "data/maps/SilphCo_11F_Frlg/scripts.pory"
@ Unused
# 118 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_Monitor::
# 119 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
# 120 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 121 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 122 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_FloorSign::
# 123 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
# 124 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 125 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 126 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_Grunt1::
# 127 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 128 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 130 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 131 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_Grunt2::
# 132 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 133 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 135 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 136 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ThanksForSavingMeDearBoy::
# 137 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: Oh, dear boy!\n"
# 138 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Thank you for saving SILPH.\p"
# 139 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I will never forget you saved us in\n"
# 140 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "our moment of peril.\p"
# 141 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I have to thank you in some way.\p"
# 142 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Because I am rich, I can give you\n"
# 143 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "anything.\p"
# 144 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Here, maybe this will do.$"
# 145 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 146 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ThanksForSavingMeDearGirl::
# 147 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: Oh, dear girl!\n"
# 148 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Thank you for saving SILPH.\p"
# 149 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I will never forget you saved us in\n"
# 150 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "our moment of peril.\p"
# 151 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I have to thank you in some way.\p"
# 152 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Because I am rich, I can give you\n"
# 153 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "anything.\p"
# 154 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Here, maybe this will do.$"
# 155 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 156 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ObtainedMasterBallFromPresident::
# 157 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "{PLAYER} obtained a MASTER BALL\n"
# 158 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "from the PRESIDENT!$"
# 159 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 160 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ThatsOurSecretPrototype::
# 161 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: You can't buy that\n"
# 162 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "anywhere.\p"
# 163 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "It's our secret prototype MASTER\n"
# 164 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "BALL.\p"
# 165 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "It will catch any POKéMON without\n"
# 166 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "fail!\p"
# 167 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "You should be quiet about using it,\n"
# 168 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "though.$"
# 169 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 170 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_YouHaveNoRoomForThis::
# 171 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "You have no room for this.$"
# 172 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 173 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ThanksForRescuingUs::
# 174 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "SECRETARY: Thank you for rescuing\n"
# 175 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "all of us.\p"
# 176 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "We, from the PRESIDENT down,\n"
# 177 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "are indebted to you.$"
# 178 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 179 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_GiovanniIntro::
# 180 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
# 181 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "So we meet again!\p"
# 182 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "The PRESIDENT and I are discussing\n"
# 183 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "a vital business proposition.\p"
# 184 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Keep your nose out of grown-up\n"
# 185 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "matters…\p"
# 186 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Or, experience a world of pain!$"
# 187 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 188 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_GiovanniDefeat::
# 189 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Arrgh!!\n"
# 190 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I lost again!?$"
# 191 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 192 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_GiovanniPostBattle::
# 193 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Blast it all!\n"
# 194 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "You ruined our plans for SILPH!\p"
# 195 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "But, TEAM ROCKET will never fall!\p"
# 196 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "{PLAYER}! Never forget that all\n"
# 197 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "POKéMON exist for TEAM ROCKET!\p"
# 198 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I must go, but I shall return!$"
# 199 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 200 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt2Intro::
# 201 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Stop right there!\n"
# 202 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Don't you move!$"
# 203 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 204 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt2Defeat::
# 205 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Don't…\n"
# 206 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Please!$"
# 207 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 208 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt2PostBattle::
# 209 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "So, you want to see my BOSS?$"
# 210 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 211 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt1Intro::
# 212 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Halt! Do you have an appointment\n"
# 213 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "with my BOSS?$"
# 214 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 215 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt1Defeat::
# 216 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Gaah!\n"
# 217 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Demolished!$"
# 218 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 219 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt1PostBattle::
# 220 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Watch your step…\n"
# 221 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "My BOSS likes his POKéMON tough!$"
# 222 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 223 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_MonitorHasMonsOnIt::
# 224 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "The monitor has POKéMON on it!$"
# 225 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 226 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_FloorSign::
# 227 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 228 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "11F$"

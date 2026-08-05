# 1 "data/maps/Route24_Frlg/scripts.pory"

# 2 "data/maps/Route24_Frlg/scripts.pory"
Route24_Frlg_MapScripts::
# 3 "data/maps/Route24_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route24_Frlg/scripts.pory"

# 5 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_Rocket::
# 6 "data/maps/Route24_Frlg/scripts.pory"
	lock
# 7 "data/maps/Route24_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ROUTE24, 1, Route24_EventScript_RocketPostBattle
# 9 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
# 10 "data/maps/Route24_Frlg/scripts.pory"
	checkitemspace ITEM_NUGGET
# 11 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNugget
# 12 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_BattleRocket
# 13 "data/maps/Route24_Frlg/scripts.pory"
	release
# 14 "data/maps/Route24_Frlg/scripts.pory"
	end
# 15 "data/maps/Route24_Frlg/scripts.pory"

# 16 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_NoRoomForNugget::
# 17 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 18 "data/maps/Route24_Frlg/scripts.pory"
	release
# 19 "data/maps/Route24_Frlg/scripts.pory"
	end
# 20 "data/maps/Route24_Frlg/scripts.pory"

# 21 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketPostBattle::
# 22 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 23 "data/maps/Route24_Frlg/scripts.pory"
	release
# 24 "data/maps/Route24_Frlg/scripts.pory"
	end
# 25 "data/maps/Route24_Frlg/scripts.pory"

# 26 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTriggerLeft::
# 27 "data/maps/Route24_Frlg/scripts.pory"
	lockall
# 28 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 29 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger
# 30 "data/maps/Route24_Frlg/scripts.pory"
	end
# 31 "data/maps/Route24_Frlg/scripts.pory"

# 32 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTriggerRight::
# 33 "data/maps/Route24_Frlg/scripts.pory"
	lockall
# 34 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger
# 36 "data/maps/Route24_Frlg/scripts.pory"
	end
# 37 "data/maps/Route24_Frlg/scripts.pory"

# 38 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger::
# 39 "data/maps/Route24_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 40 "data/maps/Route24_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketApproachPlayer
# 41 "data/maps/Route24_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route24_EventScript_RocketMotionToPlayer
# 42 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 43 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
# 45 "data/maps/Route24_Frlg/scripts.pory"
	checkitemspace ITEM_NUGGET
# 46 "data/maps/Route24_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNuggetTrigger
# 47 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_BattleRocket
# 48 "data/maps/Route24_Frlg/scripts.pory"
	releaseall
# 49 "data/maps/Route24_Frlg/scripts.pory"
	end
# 50 "data/maps/Route24_Frlg/scripts.pory"

# 51 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_BattleRocket::
# 52 "data/maps/Route24_Frlg/scripts.pory"
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
# 53 "data/maps/Route24_Frlg/scripts.pory"
	message Route24_Text_JoinTeamRocket
# 54 "data/maps/Route24_Frlg/scripts.pory"
	waitmessage
# 55 "data/maps/Route24_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 56 "data/maps/Route24_Frlg/scripts.pory"
	waitbuttonpress
# 57 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE24_ROCKET
# 58 "data/maps/Route24_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
# 59 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 60 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE24, 1
# 61 "data/maps/Route24_Frlg/scripts.pory"
	return
# 62 "data/maps/Route24_Frlg/scripts.pory"

# 63 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketApproachPlayer::
# 64 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketApproachPlayer
# 65 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route24_Frlg/scripts.pory"
	return
# 67 "data/maps/Route24_Frlg/scripts.pory"

# 68 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketMotionToPlayer::
# 69 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Common_Movement_WalkInPlaceFasterLeft
# 70 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route24_Frlg/scripts.pory"
	return
# 72 "data/maps/Route24_Frlg/scripts.pory"

# 73 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_NoRoomForNuggetTrigger::
# 74 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 75 "data/maps/Route24_Frlg/scripts.pory"
	closemessage
# 76 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route24_Movement_WalkDown
# 77 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route24_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketWalkBackToPos
# 79 "data/maps/Route24_Frlg/scripts.pory"
	release
# 80 "data/maps/Route24_Frlg/scripts.pory"
	end
# 81 "data/maps/Route24_Frlg/scripts.pory"

# 82 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketWalkBackToPos::
# 83 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketWalkBackToPos
# 84 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route24_Frlg/scripts.pory"
	return
# 86 "data/maps/Route24_Frlg/scripts.pory"

# 87 "data/maps/Route24_Frlg/scripts.pory"
Route24_Movement_RocketApproachPlayer::
# 88 "data/maps/Route24_Frlg/scripts.pory"
	walk_left
# 89 "data/maps/Route24_Frlg/scripts.pory"
	step_end
# 90 "data/maps/Route24_Frlg/scripts.pory"

# 91 "data/maps/Route24_Frlg/scripts.pory"
Route24_Movement_RocketWalkBackToPos::
# 92 "data/maps/Route24_Frlg/scripts.pory"
	walk_right
# 93 "data/maps/Route24_Frlg/scripts.pory"
	walk_in_place_faster_left
# 94 "data/maps/Route24_Frlg/scripts.pory"
	step_end
# 95 "data/maps/Route24_Frlg/scripts.pory"

# 96 "data/maps/Route24_Frlg/scripts.pory"
Route24_Movement_WalkDown::
# 97 "data/maps/Route24_Frlg/scripts.pory"
	walk_down
# 98 "data/maps/Route24_Frlg/scripts.pory"
	step_end
# 99 "data/maps/Route24_Frlg/scripts.pory"

# 100 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_JustEarnedFabulousPrize::
# 101 "data/maps/Route24_Frlg/scripts.pory"
	.string "Congratulations! You beat our\n"
# 102 "data/maps/Route24_Frlg/scripts.pory"
	.string "five contest TRAINERS!\p"
# 103 "data/maps/Route24_Frlg/scripts.pory"
	.string "You just earned a fabulous prize!$"
# 104 "data/maps/Route24_Frlg/scripts.pory"

# 105 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ReceivedNuggetFromMysteryTrainer::
# 106 "data/maps/Route24_Frlg/scripts.pory"
	.string "{PLAYER} received a NUGGET\n"
# 107 "data/maps/Route24_Frlg/scripts.pory"
	.string "from the mystery TRAINER!$"
# 108 "data/maps/Route24_Frlg/scripts.pory"

# 109 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_YouDontHaveAnyRoom::
# 110 "data/maps/Route24_Frlg/scripts.pory"
	.string "You don't have any room!$"
# 111 "data/maps/Route24_Frlg/scripts.pory"

# 112 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_JoinTeamRocket::
# 113 "data/maps/Route24_Frlg/scripts.pory"
	.string "By the way, how would you like to\n"
# 114 "data/maps/Route24_Frlg/scripts.pory"
	.string "join TEAM ROCKET?\p"
# 115 "data/maps/Route24_Frlg/scripts.pory"
	.string "We're a group of professional\n"
# 116 "data/maps/Route24_Frlg/scripts.pory"
	.string "criminals specializing in POKéMON!\p"
# 117 "data/maps/Route24_Frlg/scripts.pory"
	.string "Want to join?\p"
# 118 "data/maps/Route24_Frlg/scripts.pory"
	.string "Are you sure?\p"
# 119 "data/maps/Route24_Frlg/scripts.pory"
	.string "Come on, join us!\p"
# 120 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'm telling you to join!\p"
# 121 "data/maps/Route24_Frlg/scripts.pory"
	.string "…Okay, you need convincing!\p"
# 122 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'll make you an offer you can't\n"
# 123 "data/maps/Route24_Frlg/scripts.pory"
	.string "refuse!$"
# 124 "data/maps/Route24_Frlg/scripts.pory"

# 125 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_RocketDefeat::
# 126 "data/maps/Route24_Frlg/scripts.pory"
	.string "Arrgh!\n"
# 127 "data/maps/Route24_Frlg/scripts.pory"
	.string "You are good!$"
# 128 "data/maps/Route24_Frlg/scripts.pory"

# 129 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_YoudBecomeTopRocketLeader::
# 130 "data/maps/Route24_Frlg/scripts.pory"
	.string "With your ability, you'd become\n"
# 131 "data/maps/Route24_Frlg/scripts.pory"
	.string "a top leader in TEAM ROCKET.\p"
# 132 "data/maps/Route24_Frlg/scripts.pory"
	.string "Come on, think of the opportunity!\n"
# 133 "data/maps/Route24_Frlg/scripts.pory"
	.string "Don't let this chance go to waste.$"
# 134 "data/maps/Route24_Frlg/scripts.pory"

# 135 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ShaneIntro::
# 136 "data/maps/Route24_Frlg/scripts.pory"
	.string "I saw your feat from the grass!$"
# 137 "data/maps/Route24_Frlg/scripts.pory"

# 138 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ShaneDefeat::
# 139 "data/maps/Route24_Frlg/scripts.pory"
	.string "I thought not!$"
# 140 "data/maps/Route24_Frlg/scripts.pory"

# 141 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ShanePostBattle::
# 142 "data/maps/Route24_Frlg/scripts.pory"
	.string "I hid because the people on the\n"
# 143 "data/maps/Route24_Frlg/scripts.pory"
	.string "bridge frightened me.$"
# 144 "data/maps/Route24_Frlg/scripts.pory"

# 145 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_EthanIntro::
# 146 "data/maps/Route24_Frlg/scripts.pory"
	.string "Okay! I'm No. 5!\n"
# 147 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'll stomp you!$"
# 148 "data/maps/Route24_Frlg/scripts.pory"

# 149 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_EthanDefeat::
# 150 "data/maps/Route24_Frlg/scripts.pory"
	.string "Whoa!\n"
# 151 "data/maps/Route24_Frlg/scripts.pory"
	.string "Too much!$"
# 152 "data/maps/Route24_Frlg/scripts.pory"

# 153 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_EthanPostBattle::
# 154 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"
# 155 "data/maps/Route24_Frlg/scripts.pory"

# 156 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ReliIntro::
# 157 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'm No. 4!\n"
# 158 "data/maps/Route24_Frlg/scripts.pory"
	.string "Getting tired?$"
# 159 "data/maps/Route24_Frlg/scripts.pory"

# 160 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ReliDefeat::
# 161 "data/maps/Route24_Frlg/scripts.pory"
	.string "I lost, too!$"
# 162 "data/maps/Route24_Frlg/scripts.pory"

# 163 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_ReliPostBattle::
# 164 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best, so I've no regrets!$"
# 165 "data/maps/Route24_Frlg/scripts.pory"

# 166 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_TimmyIntro::
# 167 "data/maps/Route24_Frlg/scripts.pory"
	.string "Here's No. 3!\n"
# 168 "data/maps/Route24_Frlg/scripts.pory"
	.string "I won't be easy!$"
# 169 "data/maps/Route24_Frlg/scripts.pory"

# 170 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_TimmyDefeat::
# 171 "data/maps/Route24_Frlg/scripts.pory"
	.string "Ow!\n"
# 172 "data/maps/Route24_Frlg/scripts.pory"
	.string "Stomped flat!$"
# 173 "data/maps/Route24_Frlg/scripts.pory"

# 174 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_TimmyPostBattle::
# 175 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"
# 176 "data/maps/Route24_Frlg/scripts.pory"

# 177 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_AliIntro::
# 178 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'm second!\n"
# 179 "data/maps/Route24_Frlg/scripts.pory"
	.string "Now it's serious!$"
# 180 "data/maps/Route24_Frlg/scripts.pory"

# 181 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_AliDefeat::
# 182 "data/maps/Route24_Frlg/scripts.pory"
	.string "How could I lose?$"
# 183 "data/maps/Route24_Frlg/scripts.pory"

# 184 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_AliPostBattle::
# 185 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"
# 186 "data/maps/Route24_Frlg/scripts.pory"

# 187 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_CaleIntro::
# 188 "data/maps/Route24_Frlg/scripts.pory"
	.string "People call this the NUGGET\n"
# 189 "data/maps/Route24_Frlg/scripts.pory"
	.string "BRIDGE!\p"
# 190 "data/maps/Route24_Frlg/scripts.pory"
	.string "Beat us five TRAINERS and win\n"
# 191 "data/maps/Route24_Frlg/scripts.pory"
	.string "a fabulous prize!\p"
# 192 "data/maps/Route24_Frlg/scripts.pory"
	.string "Think you got what it takes?$"
# 193 "data/maps/Route24_Frlg/scripts.pory"

# 194 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_CaleDefeat::
# 195 "data/maps/Route24_Frlg/scripts.pory"
	.string "Whoo!\n"
# 196 "data/maps/Route24_Frlg/scripts.pory"
	.string "Good stuff!$"
# 197 "data/maps/Route24_Frlg/scripts.pory"

# 198 "data/maps/Route24_Frlg/scripts.pory"
Route24_Text_CalePostBattle::
# 199 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"

# 1 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 2 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_Frlg_MapScripts::
# 3 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 5 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_EventScript_Grunt1::
# 6 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_14, RocketHideout_B3F_Text_Grunt1Intro, RocketHideout_B3F_Text_Grunt1Defeat
# 7 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	msgbox RocketHideout_B3F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	end
# 9 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 10 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_EventScript_Grunt2::
# 11 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_15, RocketHideout_B3F_Text_Grunt2Intro, RocketHideout_B3F_Text_Grunt2Defeat
# 12 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	msgbox RocketHideout_B3F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	end
# 14 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 15 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_Text_Grunt1Intro::
# 16 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "Stop meddling in TEAM ROCKET's\n"
# 17 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "affairs or else!$"
# 18 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 19 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_Text_Grunt1Defeat::
# 20 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "Oof!\n"
# 21 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "Taken down!$"
# 22 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 23 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_Text_Grunt1PostBattle::
# 24 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "SILPH SCOPE?\n"
# 25 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "Oh, that machine the BOSS stole.\p"
# 26 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "It's here somewhere.$"
# 27 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 28 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_Text_Grunt2Intro::
# 29 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "We got word from upstairs that you\n"
# 30 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "were coming!$"
# 31 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 32 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_Text_Grunt2Defeat::
# 33 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "What?\n"
# 34 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "I lost? No!$"
# 35 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"

# 36 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
RocketHideout_B3F_Text_Grunt2PostBattle::
# 37 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "Go ahead and go!\p"
# 38 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "But you can't run the elevator\n"
# 39 "data/maps/RocketHideout_B3F_Frlg/scripts.pory"
	.string "without the LIFT KEY.$"

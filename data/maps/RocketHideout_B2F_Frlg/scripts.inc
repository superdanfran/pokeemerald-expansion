# 1 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"

# 2 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
RocketHideout_B2F_Frlg_MapScripts::
# 3 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"

# 5 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
RocketHideout_B2F_EventScript_Grunt::
# 6 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_13, RocketHideout_B2F_Text_GruntIntro, RocketHideout_B2F_Text_GruntDefeat
# 7 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	msgbox RocketHideout_B2F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	end
# 9 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"

# 10 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
RocketHideout_B2F_Text_GruntIntro::
# 11 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "BOSS said you can see ghosts with\n"
# 12 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "the SILPH SCOPE.$"
# 13 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"

# 14 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
RocketHideout_B2F_Text_GruntDefeat::
# 15 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "I surrender!$"
# 16 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"

# 17 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
RocketHideout_B2F_Text_GruntPostBattle::
# 18 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "The TEAM ROCKET HQ has four\n"
# 19 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "underground floors.\p"
# 20 "data/maps/RocketHideout_B2F_Frlg/scripts.pory"
	.string "Think you can reach the BOSS?$"

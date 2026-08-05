# 1 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TrainerTower_OnTransition
# 4 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 6 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_OnTransition::
# 7 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
# 8 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	end
# 9 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 10 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_EventScript_TrainerTowerSign::
# 11 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerSign, MSGBOX_SIGN
# 12 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	end
# 13 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 14 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign::
# 15 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerAhead, MSGBOX_SIGN
# 16 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	end
# 17 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 18 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_DarioIntro::
# 19 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "I sensed your approach.$"
# 20 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 21 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_DarioDefeat::
# 22 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Give up…$"
# 23 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 24 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_DarioPostBattle::
# 25 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "In your future, I sense that you\n"
# 26 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "will meet many others.\p"
# 27 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "I think you will be linked to each\n"
# 28 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "other by a strange power.$"
# 29 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 30 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_RodetteIntro::
# 31 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Somewhere on this island, peculiar\n"
# 32 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "POKéMON are sleeping.$"
# 33 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 34 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_RodetteDefeat::
# 35 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "What an amazing TRAINER!$"
# 36 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 37 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_RodettePostBattle::
# 38 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Somewhere on this island, peculiar\n"
# 39 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "POKéMON are sleeping.\p"
# 40 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Could it be that they're waiting\n"
# 41 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "for you?$"
# 42 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 43 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_TrainerTowerSign::
# 44 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "TRAINER TOWER ENTRANCE\n"
# 45 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Rise to the Challenge, TRAINERS!$"
# 46 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"

# 47 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
SevenIsland_TrainerTower_Text_TrainerTowerAhead::
# 48 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "TRAINER TOWER AHEAD$"

# 1 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_Frlg_MapScripts::
# 3 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_EventScript_Woman::
# 6 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room2_Text_CruisingAroundWorld, MSGBOX_NPC
# 7 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	end
# 8 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 9 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_EventScript_Ann::
# 10 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_ANN, SSAnne_1F_Room2_Text_AnnIntro, SSAnne_1F_Room2_Text_AnnDefeat
# 11 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room2_Text_AnnPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	end
# 13 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 14 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_EventScript_Tyler::
# 15 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_TYLER, SSAnne_1F_Room2_Text_TylerIntro, SSAnne_1F_Room2_Text_TylerDefeat
# 16 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room2_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	end
# 18 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 19 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_Text_TylerIntro::
# 20 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "I love POKéMON!\n"
# 21 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "Do you?$"
# 22 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 23 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_Text_TylerDefeat::
# 24 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "Wow! \n"
# 25 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "You're great!$"
# 26 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 27 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_Text_TylerPostBattle::
# 28 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "Listen, listen!\n"
# 29 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "Let me be your friend, okay?\p"
# 30 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "Then we can trade POKéMON and\n"
# 31 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "do stuff.$"
# 32 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 33 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_Text_AnnIntro::
# 34 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "I collected these POKéMON\n"
# 35 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "from all around the world!$"
# 36 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 37 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_Text_AnnDefeat::
# 38 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 39 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "I went around the world for these!$"
# 40 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 41 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_Text_AnnPostBattle::
# 42 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "You hurt my poor POKéMON!\p"
# 43 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "I demand that you heal them at a\n"
# 44 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "POKéMON CENTER!$"
# 45 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"

# 46 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
SSAnne_1F_Room2_Text_CruisingAroundWorld::
# 47 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "We are cruising around the world,\n"
# 48 "data/maps/SSAnne_1F_Room2_Frlg/scripts.pory"
	.string "my children and I.$"

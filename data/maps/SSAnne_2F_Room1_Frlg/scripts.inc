# 1 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
SSAnne_2F_Room1_Frlg_MapScripts::
# 3 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
SSAnne_2F_Room1_EventScript_Gentleman::
# 6 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	lock
# 7 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	message SSAnne_2F_Room1_Text_SleepingMonLookedLikeThis
# 9 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_SNORLAX
# 11 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	special SetSeenMon
# 12 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	showmonpic SPECIES_SNORLAX, 10, 3
# 13 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	waitbuttonpress
# 14 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	hidemonpic
# 15 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	release
# 16 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	end
# 17 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"

# 18 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
SSAnne_2F_Room1_Text_SleepingMonLookedLikeThis::
# 19 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "I've journeyed far and wide, but in\n"
# 20 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "all my travels I've never seen\l"
# 21 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "any POKéMON sleep like this one!\p"
# 22 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "It was something like this!$"
